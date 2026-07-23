/*
 * XREFs of AstLogDeviceCreated @ 0x14091C31C
 * Callers:
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AstIsRecording @ 0x14091C530 (AstIsRecording.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AstLogDeviceCreated(__int64 a1, int a2, int a3)
{
  int v6; // ecx
  int NameStringMode; // eax
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  const WCHAR *v10; // rdx
  unsigned int v11; // [rsp+38h] [rbp-89h] BYREF
  int v12; // [rsp+3Ch] [rbp-85h] BYREF
  int v13; // [rsp+40h] [rbp-81h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+58h] [rbp-69h] BYREF
  __int64 v16; // [rsp+60h] [rbp-61h]
  __int64 v17; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-29h]
  __int64 v20; // [rsp+A0h] [rbp-21h]
  _DWORD *v21; // [rsp+A8h] [rbp-19h]
  __int64 v22; // [rsp+B0h] [rbp-11h]
  wchar_t *Buffer; // [rsp+B8h] [rbp-9h]
  _DWORD v24[2]; // [rsp+C0h] [rbp-1h] BYREF
  int *v25; // [rsp+C8h] [rbp+7h]
  __int64 v26; // [rsp+D0h] [rbp+Fh]
  int *v27; // [rsp+D8h] [rbp+17h]
  __int64 v28; // [rsp+E0h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+E8h] [rbp+27h]
  __int64 v30; // [rsp+F0h] [rbp+2Fh]

  DestinationString = 0LL;
  v11 = 0;
  HIDWORD(v16) = 0;
  if ( !(unsigned __int8)AstIsRecording() )
    return;
  NameStringMode = ObQueryNameStringMode(v6, 0, 0, (unsigned int)&v11, 0);
  if ( v11 <= 0x10 || NameStringMode != -1073741820 )
    return;
  v16 = 0LL;
  v15 = 1LL;
  v8 = ExAllocatePool3(256LL, v11, 1849975617LL, &v15, 1);
  v9 = (UNICODE_STRING *)v8;
  if ( v8 )
  {
    if ( (int)ObQueryNameStringMode(a1, v8, v11, (unsigned int)&v11, 0) >= 0 )
    {
      DestinationString = *v9;
      goto LABEL_8;
    }
    v10 = L"Query failed";
  }
  else
  {
    v10 = L"Storage allocation failed";
  }
  RtlInitUnicodeString(&DestinationString, v10);
LABEL_8:
  if ( (unsigned int)dword_140E06E00 > 5
    && (qword_140E06E10 & 0x200000000000LL) != 0
    && (qword_140E06E18 & 0x200000000000LL) == qword_140E06E18 )
  {
    v22 = 2LL;
    v20 = 8LL;
    v17 = 0x80000000LL;
    v30 = 8LL;
    v19 = &v17;
    v24[1] = 0;
    v21 = v24;
    Buffer = DestinationString.Buffer;
    v24[0] = DestinationString.Length;
    v25 = &v12;
    v27 = &v13;
    p_DestinationString = &DestinationString;
    v12 = a2;
    v26 = 4LL;
    v13 = a3;
    v28 = 4LL;
    *(_QWORD *)&DestinationString.Length = a1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06E00, (unsigned __int8 *)byte_1400483AD, 0LL, 0LL, 8u, &v18);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
