/*
 * XREFs of CmpNameFromAttributes @ 0x14093E968
 * Callers:
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryObject @ 0x1407281C0 (ZwQueryObject.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpNameFromAttributes(void *Src, char a2, UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  __int16 UShortFromUser; // r15
  __int64 v8; // r8
  __int64 v9; // rdx
  NTSTATUS Object; // ebx
  unsigned __int16 v11; // r14
  wchar_t *Pool2; // rax
  unsigned int v14; // edx
  wchar_t *v15; // rax
  unsigned __int16 Length; // r15
  _WORD *v17; // r13
  unsigned __int16 v18; // r15
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-2D8h] BYREF
  wchar_t *v20; // [rsp+40h] [rbp-2C8h]
  void *Srca[2]; // [rsp+48h] [rbp-2C0h] BYREF
  __int16 v22; // [rsp+58h] [rbp-2B0h]
  ULONG ReturnLength[5]; // [rsp+5Ch] [rbp-2ACh] BYREF
  UNICODE_STRING *v24; // [rsp+70h] [rbp-298h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-290h] BYREF
  __int128 v26; // [rsp+88h] [rbp-280h]
  __int64 v27; // [rsp+98h] [rbp-270h]
  int v28; // [rsp+A0h] [rbp-268h]
  UNICODE_STRING Source; // [rsp+A8h] [rbp-260h] BYREF
  __m128i ObjectInformation[32]; // [rsp+C0h] [rbp-248h] BYREF

  v24 = a3;
  *(_OWORD *)Handle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  *(_OWORD *)Srca = 0LL;
  DestinationString = 0LL;
  ReturnLength[0] = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  a3->Buffer = 0LL;
  UShortFromUser = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      goto LABEL_3;
    RtlCopyFromUser(Handle, Src, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(Handle, Src, 0x30uLL);
  }
  LOBYTE(v8) = a2;
  Object = CmpCaptureUnicodeString(Srca, v26, v8);
  ReturnLength[4] = Object;
  if ( Object < 0 )
    goto LABEL_24;
  v11 = (unsigned __int16)Srca[0];
  if ( a2 && LOWORD(Srca[0]) && ((__int64)Srca[1] & 1) != 0 )
LABEL_3:
    ExRaiseDatatypeMisalignment();
  if ( Srca[1] && LOWORD(Srca[0]) >= 2u )
  {
    if ( a2 )
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)Srca[1]);
    else
      UShortFromUser = *(_WORD *)Srca[1];
    v22 = UShortFromUser;
  }
  if ( !Handle[1] )
  {
    if ( v11 )
    {
      DestinationString.Length = v11;
      DestinationString.MaximumLength = v11;
      Pool2 = (wchar_t *)ExAllocatePool2(0x101uLL);
      v6 = Pool2;
      v20 = Pool2;
      if ( Pool2 )
      {
        DestinationString.Buffer = Pool2;
        if ( a2 )
          RtlCopyFromUser(Pool2, Srca[1], v11);
        else
          RtlCopyVolatileMemory(Pool2, Srca[1], v11);
        *a3 = DestinationString;
        v6 = 0LL;
        Object = 0;
        goto LABEL_24;
      }
      goto LABEL_27;
    }
    goto LABEL_31;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 )
  {
    Object = -1073741816;
    goto LABEL_24;
  }
  if ( Srca[1] && v11 >= 2u && UShortFromUser == 92 )
    goto LABEL_31;
  LOBYTE(v9) = a2;
  Object = IoConvertFileHandleToKernelHandle(Handle[1], v9, 32LL);
  if ( Object >= 0 )
  {
    Object = ZwQueryObject(Handle[1], ObjectNameInformation, ObjectInformation, 0x200u, ReturnLength);
    ZwClose(Handle[1]);
    if ( Object >= 0 )
    {
      Source = (UNICODE_STRING)ObjectInformation[0];
      DestinationString.Length = 0;
      v14 = (unsigned __int16)_mm_cvtsi128_si32(ObjectInformation[0]) + 4 + v11;
      if ( v14 <= 0xFFFF )
      {
        DestinationString.MaximumLength = v14;
        v15 = (wchar_t *)ExAllocatePool2(0x101uLL);
        v6 = v15;
        v20 = v15;
        if ( !v15 )
        {
LABEL_27:
          Object = -1073741670;
          goto LABEL_24;
        }
        DestinationString.Buffer = v15;
        Object = RtlAppendUnicodeStringToString(&DestinationString, &Source);
        Length = DestinationString.Length;
        if ( DestinationString.Length && *(wchar_t *)((char *)v6 + DestinationString.Length - 2) != 92 )
        {
          *(wchar_t *)((char *)v6 + DestinationString.Length) = 92;
          Length += 2;
          DestinationString.Length = Length;
        }
        if ( v11 )
        {
          v17 = (wchar_t *)((char *)v6 + Length);
          if ( a2 )
            RtlCopyFromUser(v17, Srca[1], v11);
          else
            RtlCopyVolatileMemory(v17, Srca[1], v11);
          v18 = v11 + Length;
          DestinationString.Length = v18;
          if ( *v17 == 92 )
          {
LABEL_31:
            Object = -1073741765;
            goto LABEL_24;
          }
          *(wchar_t *)((char *)v6 + v18) = 0;
        }
        *v24 = DestinationString;
        return (unsigned int)Object;
      }
      Object = -1073741767;
    }
  }
LABEL_24:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)Object;
}
