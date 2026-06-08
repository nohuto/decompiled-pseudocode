/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x140035978
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_SSii @ 0x14000C9F0 (WPP_RECORDER_SF_SSii.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ValidateCpcSymmetry @ 0x1400351D0 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1400356CC (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x140035790 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x140035E68 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x140035FAC (ValidateTssSymmetry.c)
 *     GetPerfDomain @ 0x1400463E0 (GetPerfDomain.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r15
  __int64 *v10; // r12
  __int64 v11; // rcx
  _DWORD *v12; // r13
  const wchar_t **v13; // r14
  _DWORD *v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  const wchar_t *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rbx
  int v26; // [rsp+20h] [rbp-60h]
  _OWORD v27[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *v28; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0;
  v29 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v27, 0, sizeof(v27));
  v3(WdfDriverGlobals, qword_1400191A8, 0LL);
  if ( (unsigned int)GetPerfDomain(a1, v27, &v28) != 1 )
  {
    v4 = 0LL;
    ResetEnumerationContext((__int64 *)v27);
    v5 = EnumerateNextDevice((__int64 *)v27, &v29);
    v8 = 0x10FF300000LL;
    while ( !v5 )
    {
      v9 = v29;
      if ( v29 != a1 )
      {
        v10 = (__int64 *)(a1 + 280);
        v11 = *(_QWORD *)(a1 + 280);
        v12 = (_DWORD *)(a1 + 280);
        if ( (v8 & v11) == (v8 & *(_QWORD *)(v29 + 280)) )
        {
          v13 = (const wchar_t **)(a1 + 64);
        }
        else
        {
          v13 = (const wchar_t **)(a1 + 64);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_SSii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v8 & v11,
              v6,
              v7,
              v26,
              *v13,
              *(const wchar_t **)(v29 + 64));
            v8 = 0x10FF300000LL;
          }
          v11 = *v10;
          v12 = (_DWORD *)(a1 + 280);
          v4 |= v8 & (*(_QWORD *)(v9 + 280) ^ *v10);
        }
        v14 = v12;
        if ( (v11 & 0x70000000) != 0 )
        {
          v13 = (const wchar_t **)(a1 + 64);
          v15 = ValidatePctPtcSymmetry(
                  *(const wchar_t **)(a1 + 64),
                  a1 + 424,
                  *(const wchar_t **)(v9 + 64),
                  a1 + 424,
                  "_PCT");
          v28 = v12;
          v16 = v4 | 0x70000000;
          if ( v15 >= 0 )
            v16 = v4;
          v4 = v16;
          if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
          {
            v17 = *(_QWORD *)(v9 + 456);
            v18 = *(_QWORD *)(v9 + 64);
            v19 = *(_QWORD *)(a1 + 456);
            v20 = *v13;
            v28 = v12;
            if ( (int)ValidatePssSymmetry((_DWORD)v20, v19, v18, v17, (__int64)"XPSS") < 0 )
            {
              v4 |= 0x40000000uLL;
              v28 = (_DWORD *)(a1 + 280);
              v13 = (const wchar_t **)(a1 + 64);
            }
          }
          if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_QWORD *)(a1 + 64),
                      *(_QWORD *)(a1 + 448),
                      *(_QWORD *)(v9 + 64),
                      *(_QWORD *)(v9 + 448),
                      (__int64)"_PSS") < 0 )
          {
            v14 = v28;
            v4 |= 0x30000000uLL;
          }
        }
        if ( (*v14 & 0x3300000) != 0 )
        {
          v13 = (const wchar_t **)(a1 + 64);
          v21 = ValidatePctPtcSymmetry(
                  *(const wchar_t **)(a1 + 64),
                  a1 + 480,
                  *(const wchar_t **)(v9 + 64),
                  a1 + 480,
                  "_PTC");
          v22 = v4 | 0x3300000;
          if ( v21 >= 0 )
            v22 = v4;
          v4 = v22;
          if ( (int)ValidateTssSymmetry(*v13, *(_QWORD *)(a1 + 504), *(_QWORD *)(v9 + 64), *(_QWORD *)(v9 + 504)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*v14 & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(*v13, *(_QWORD *)(a1 + 592), *(const wchar_t **)(v9 + 64), *(_QWORD *)(v9 + 592)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)v14 & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *v13,
                    *(_QWORD *)(a1 + 1184),
                    *(const wchar_t **)(v9 + 64),
                    *(_QWORD *)(v9 + 1184)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
      v5 = EnumerateNextDevice((__int64 *)v27, &v29);
    }
    ResetEnumerationContext((__int64 *)v27);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v29) )
    {
      v24 = ~v4;
      do
        *(_QWORD *)(v29 + 280) &= v24;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v29) );
    }
    v2 = (v23 & *(_QWORD *)(a1 + 280)) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  return v2;
}
