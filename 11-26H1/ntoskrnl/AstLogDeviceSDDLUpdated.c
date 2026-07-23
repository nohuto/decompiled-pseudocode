/*
 * XREFs of AstLogDeviceSDDLUpdated @ 0x140AA717C
 * Callers:
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1404A9950 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AstIsRecording @ 0x14091C530 (AstIsRecording.c)
 *     ObQuerySecurityObject @ 0x140AA74AC (ObQuerySecurityObject.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AstLogDeviceSDDLUpdated(__int64 a1)
{
  int v2; // ecx
  PVOID v3; // rdi
  void *Pool3; // rbx
  const WCHAR *v5; // rdx
  __int64 v6; // [rsp+38h] [rbp-49h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+68h] [rbp-19h] BYREF
  PVOID *p_P; // [rsp+88h] [rbp+7h]
  __int64 v12; // [rsp+90h] [rbp+Fh]
  __int64 *v13; // [rsp+98h] [rbp+17h]
  __int64 v14; // [rsp+A0h] [rbp+1Fh]
  _DWORD *v15; // [rsp+A8h] [rbp+27h]
  __int64 v16; // [rsp+B0h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+B8h] [rbp+37h]
  _DWORD v18[2]; // [rsp+C0h] [rbp+3Fh] BYREF

  LODWORD(v6) = 0;
  DestinationString = 0LL;
  if ( AstIsRecording() )
  {
    v3 = 0LL;
    P = 0LL;
    Pool3 = 0LL;
    if ( (unsigned int)ObQuerySecurityObject(v2, -1, 0, 0, (__int64)&v6) == -1073741789 )
    {
      v9[1] = 0LL;
      v9[0] = 1LL;
      Pool3 = (void *)ExAllocatePool3(256LL, (unsigned int)v6, 1933861697LL, v9, 1);
      if ( Pool3 )
      {
        if ( (int)ObQuerySecurityObject(a1, -1, (_DWORD)Pool3, v6, (__int64)&v6) < 0 )
        {
          v5 = L"Query failed";
        }
        else
        {
          SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)Pool3, 1LL, 0xFFFFFFFFLL, &P, 0LL);
          v3 = P;
          v5 = (const WCHAR *)P;
        }
      }
      else
      {
        v5 = L"Storage allocation failed";
      }
    }
    else
    {
      v5 = L"Length query failed";
    }
    RtlInitUnicodeString(&DestinationString, v5);
    if ( (unsigned int)dword_140E06E00 > 5
      && (qword_140E06E10 & 0x200000000000LL) != 0
      && (qword_140E06E18 & 0x200000000000LL) == qword_140E06E18 )
    {
      v12 = 8LL;
      P = (PVOID)0x80000000LL;
      v6 = a1;
      p_P = &P;
      v14 = 8LL;
      v13 = &v6;
      v16 = 2LL;
      v15 = v18;
      Buffer = DestinationString.Buffer;
      v18[0] = DestinationString.Length;
      v18[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06E00,
        (unsigned __int8 *)byte_1400482D1,
        0LL,
        0LL,
        6u,
        &v10);
    }
    if ( Pool3 )
      ExFreePoolWithTag(Pool3, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
