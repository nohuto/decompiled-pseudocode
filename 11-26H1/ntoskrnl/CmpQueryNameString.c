/*
 * XREFs of CmpQueryNameString @ 0x140A80688
 * Callers:
 *     CmpAddRemoveRMLogContainer @ 0x140864224 (CmpAddRemoveRMLogContainer.c)
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpTraceHiveRestoreStart @ 0x140948C88 (CmpTraceHiveRestoreStart.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140A80588 (CmpTraceHiveMountBaseFileMounted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  struct _OBJECT_TYPE *Flink; // r8
  NTSTATUS result; // eax
  int v5; // ebx
  unsigned int i; // esi
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  NTSTATUS appended; // eax
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // rcx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  Flink = (struct _OBJECT_TYPE *)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, Flink, 0, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    for ( i = 272; ; i = v14 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v8 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      v9 = ObQueryNameStringMode((__int64)Object, Pool2, i, &v14, 0);
      v5 = v9;
      if ( v9 >= 0 )
      {
        a2->Length = 0;
        a2->MaximumLength = v8->Length;
        v10 = ExAllocatePool2(0x100uLL);
        a2->Buffer = (wchar_t *)v10;
        if ( v10 )
        {
          appended = RtlAppendUnicodeStringToString(a2, v8);
          Length = a2->Length;
          v5 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)Length >> 1) - 1] )
                break;
              Length -= 2;
              a2->Length = Length;
            }
            while ( Length );
          }
        }
        else
        {
          v5 = -1073741801;
        }
LABEL_10:
        ExFreePoolWithTag(v8, 0);
        break;
      }
      if ( v14 <= i || v9 != -2147483643 )
        goto LABEL_10;
      ExFreePoolWithTag(v8, 0);
    }
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
