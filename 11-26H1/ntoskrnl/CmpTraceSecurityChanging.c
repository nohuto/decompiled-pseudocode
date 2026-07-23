/*
 * XREFs of CmpTraceSecurityChanging @ 0x1408C61DC
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1404B1A48 (RtlLengthSecurityDescriptorStrict.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlFindUnicodeSubstring @ 0x1408C6050 (RtlFindUnicodeSubstring.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  PUNICODE_STRING v9; // rdi
  unsigned int v10; // ebx
  unsigned int v12; // ebx
  unsigned __int16 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v15; // r11
  int Length; // ecx
  PUNICODE_STRING FullString[2]; // [rsp+30h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  wchar_t *Buffer; // [rsp+70h] [rbp-71h]
  _DWORD v22[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  __int64 v25; // [rsp+90h] [rbp-51h]
  _DWORD v26[2]; // [rsp+98h] [rbp-49h] BYREF
  PUNICODE_STRING *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  _DWORD *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  __int64 v31; // [rsp+C0h] [rbp-21h]
  _DWORD v32[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  __int64 v35; // [rsp+E0h] [rbp-1h]
  _DWORD v36[2]; // [rsp+E8h] [rbp+7h] BYREF

  FullString[0] = 0LL;
  v8 = CmpConstructNameWithStatus(a1, FullString);
  v9 = FullString[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( RtlFindUnicodeSubstring(
           FullString[0],
           (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.OtherTransferCount,
           1u) )
    {
      RtlLengthSecurityDescriptorStrict();
      v12 = RtlLengthSecurityDescriptorStrict();
      RtlLengthSecurityDescriptorStrict();
      if ( v12 > 0xFFFF )
        LOWORD(v12) = -1;
      if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 2LL) )
      {
        Length = v9->Length;
        Buffer = v9->Buffer;
        v23 = v26;
        v26[0] = v15;
        v27 = FullString;
        v29 = v32;
        v32[0] = (unsigned __int16)v12;
        v33 = v36;
        v36[0] = v13;
        v19 = v22;
        v20 = v14;
        v22[0] = Length;
        v24 = v14;
        v30 = v14;
        v34 = v14;
        v22[1] = 0;
        v25 = a2;
        v26[1] = 0;
        LODWORD(FullString[0]) = a3;
        v28 = 4LL;
        v31 = a4;
        v32[1] = 0;
        v35 = a5;
        v36[1] = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09EE8,
          (unsigned __int8 *)byte_140057681,
          0LL,
          0LL,
          0xBu,
          &v18);
      }
    }
    v10 = 0;
  }
  if ( v9 )
    CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  return v10;
}
