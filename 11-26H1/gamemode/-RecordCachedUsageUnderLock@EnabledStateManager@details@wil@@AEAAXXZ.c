/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000BB24
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180008060 (-_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z @ 0x180008200 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CA@PEAX@Z.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180008E80 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800107C0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x18000DB68 (-WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  int *v2; // rbx
  int *v3; // rdi
  __int64 v4; // r9
  int v5; // r10d
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  char *v8; // r8
  signed __int64 v9; // r8
  void (__fastcall *v10)(_QWORD, __int64, _QWORD, _QWORD); // rax
  _DWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF
  char v12; // [rsp+38h] [rbp-50h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = (int *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)((char *)v3 - (char *)v2) >= 0x10 )
  {
    while ( v2 != v3 )
    {
      v4 = *((_QWORD *)v2 + 1);
      v5 = *v2;
      _m_prefetchw((const void *)v4);
      v6 = _InterlockedAnd((volatile signed __int32 *)v4, 0xFFC0401E);
      v7 = (v6 >> 1) & 0xF;
      if ( v7 )
      {
        _m_prefetchw((const void *)(v4 + 4));
        v7 &= ~_InterlockedOr((volatile signed __int32 *)(v4 + 4), v7);
      }
      v8 = (char *)v11;
      if ( (v7 & 1) != 0 )
      {
        v11[0] = v5;
        v11[1] = 65538;
        v8 = &v12;
      }
      if ( (v7 & 2) != 0 )
      {
        *(_DWORD *)v8 = v5;
        *((_DWORD *)v8 + 1) = 65542;
        v8 += 8;
      }
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)v8 = v5;
        *((_DWORD *)v8 + 1) = 65539;
        v8 += 8;
      }
      if ( v7 >= 8 )
      {
        *(_DWORD *)v8 = v5;
        *((_DWORD *)v8 + 1) = 65543;
        v8 += 8;
      }
      if ( ((v6 >> 5) & 0x1FF) != 0 )
      {
        *(_DWORD *)v8 = v5;
        *((_WORD *)v8 + 2) = 4 * ((v6 >> 14) & 1);
        *((_WORD *)v8 + 3) = (v6 >> 5) & 0x1FF;
        v8 += 8;
      }
      if ( ((v6 >> 15) & 0x7F) != 0 )
      {
        *(_DWORD *)v8 = v5;
        *((_WORD *)v8 + 2) = 4 * ((v6 >> 22) & 1) + 1;
        *((_WORD *)v8 + 3) = (v6 >> 15) & 0x7F;
        v8 += 8;
      }
      v9 = (v8 - (char *)v11) >> 3;
      if ( v9 > 0 )
        wil::details::WilApi_RecordFeatureUsageReports(
          (wil::details *)v11,
          (struct __WIL_RTL_FEATURE_USAGE_DATA *)v9,
          v9);
      v2 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v10 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v10 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v10(0LL, 254LL, 0LL, 0LL);
    }
  }
}
