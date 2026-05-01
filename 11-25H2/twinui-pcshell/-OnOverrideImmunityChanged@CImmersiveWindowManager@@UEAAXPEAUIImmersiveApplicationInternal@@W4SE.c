/*
 * XREFs of ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1802EFFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801378F0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     WPP_SF_d @ 0x180228808 (WPP_SF_d.c)
 *     WPP_SF_ @ 0x18022DA04 (WPP_SF_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::OnOverrideImmunityChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  void (__fastcall *v9)(__int64, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v10; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 400LL))(a2);
  if ( (_BYTE)result )
  {
    if ( a4 == 1 )
    {
      v8 = 2;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0xAu,
          &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids);
      }
    }
    else
    {
      v10 = 0LL;
      v9 = *(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      v9(a2, &v10);
      v8 = (unsigned __int8)CReportWindowVisibilityChange::IsReportingEnabled(
                              (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                              (struct IUnknown *)v10,
                              0LL)
         + 1;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0xBu,
          &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids,
          v8);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 264LL))(a2, v8, a3, a4, 1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 272LL))(a2, a3, a4);
  }
  return result;
}
