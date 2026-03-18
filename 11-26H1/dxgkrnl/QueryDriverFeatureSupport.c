/*
 * XREFs of QueryDriverFeatureSupport @ 0x140289F24
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall QueryDriverFeatureSupport(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+58h] [rbp-30h]

  v2 = *(_WORD *)(a1 + 874);
  if ( v2 == 2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 920))(*(_QWORD *)(a1 + 880));
    v6 = result;
  }
  else
  {
    if ( v2 != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 881;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDatabase->DriverInterface.Version == DXGKDDI_FEATURE_INTERFACE_VERSION_1",
        881LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = *(_QWORD *)(a1 + 880);
    v11 = 0LL;
    v12 = 0;
    LODWORD(v11) = *(_DWORD *)a2;
    LOBYTE(v12) = *(_BYTE *)(a2 + 4) & 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(a1 + 904))(v7, &v11);
    v9 = BYTE1(v12);
    v6 = v8;
    *(_DWORD *)(a2 + 8) = HIDWORD(v11);
    result = ((*(_DWORD *)(a2 + 12) ^ (*(_DWORD *)(a2 + 12) ^ v9) & 1) & 0xFFFFFFFD ^ (2 * (BYTE2(v12) & 1))) & 0xFFFFFFFB;
    *(_DWORD *)(a2 + 12) = result;
  }
  if ( v6 < 0 )
  {
    *(_DWORD *)(a2 + 12) &= ~1u;
    v10 = *(_DWORD *)(a2 + 12) & 0xFFFFFFFD;
    *(_DWORD *)(a2 + 8) = 0;
    result = v10 & 0xFFFFFFFB;
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
