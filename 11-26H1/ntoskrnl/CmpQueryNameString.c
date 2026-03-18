/*
 * XREFs of CmpQueryNameString @ 0x140A77968
 * Callers:
 *     CmpAddRemoveRMLogContainer @ 0x14085DF34 (CmpAddRemoveRMLogContainer.c)
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpTraceHiveRestoreStart @ 0x140986F88 (CmpTraceHiveRestoreStart.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140A77868 (CmpTraceHiveMountBaseFileMounted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  struct _OBJECT_TYPE *v3; // r8
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
  v3 = **(struct _OBJECT_TYPE ***)&CmpCallbackListLock.ApcStateFill[40];
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, v3, 0, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    for ( i = 272; ; i = v14 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v8 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      v9 = ObQueryNameStringMode((char *)Object, Pool2, i, &v14, 0);
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
