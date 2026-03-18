/*
 * XREFs of IrqTraceAffinityPolicy @ 0x1400D265C
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1400C50A8 (IrqPolicyGetDevicePolicy.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14004B7C8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     IrqpAllocateInstancePath @ 0x1400A8298 (IrqpAllocateInstancePath.c)
 */

void __fastcall IrqTraceAffinityPolicy(PDEVICE_OBJECT Pdo, unsigned __int16 a2, __int16 a3, __int64 a4)
{
  int v6; // esi
  ULONG_PTR v8; // r9
  ULONG v9; // edi
  wchar_t *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  ULONG v15; // [rsp+38h] [rbp-71h] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp-39h]
  __int64 v20; // [rsp+78h] [rbp-31h]
  wchar_t *v21; // [rsp+80h] [rbp-29h]
  _DWORD v22[2]; // [rsp+88h] [rbp-21h] BYREF
  int *v23; // [rsp+90h] [rbp-19h]
  __int64 v24; // [rsp+98h] [rbp-11h]
  __int16 *v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]
  __int64 *v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  ULONG *v29; // [rsp+C0h] [rbp+17h]
  __int64 v30; // [rsp+C8h] [rbp+1Fh]

  v6 = a2;
  v16 = 0LL;
  if ( dword_14008DEC0 && tlgKeywordOn((__int64)&dword_14008DEC0, 0x400000000000LL) )
  {
    if ( (_WORD)v6 == 4 )
      v9 = RtlNumberOfSetBitsUlongPtr(v8);
    else
      v9 = 0;
    P = 0LL;
    IrqpAllocateInstancePath(Pdo, (__int64)&v16);
    v10 = (wchar_t *)P;
    if ( (unsigned int)dword_14008DEC0 > 5 && tlgKeywordOn((__int64)&dword_14008DEC0, 0x400000000000LL) )
    {
      v20 = 2LL;
      v19 = v22;
      v22[0] = (unsigned __int16)v16;
      v23 = &v14;
      v25 = &v13;
      v27 = &v16;
      v29 = &v15;
      v28 = 8LL;
      v21 = v10;
      v22[1] = 0;
      v14 = v6;
      v24 = 4LL;
      v13 = a3;
      v26 = 2LL;
      v16 = a4;
      v15 = v9;
      v30 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_14008DEC0,
        (unsigned __int8 *)dword_14007D494,
        v11,
        v12,
        8u,
        &v18);
    }
    if ( v10 != &word_140076668 )
      ExFreePoolWithTag(v10, 0);
  }
}
