/*
 * XREFs of ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14006287C
 * Callers:
 *     _lambda_764f9ce4d2491a111d9246978db4db1b_::_lambda_invoker_cdecl_ @ 0x140078060 (_lambda_764f9ce4d2491a111d9246978db4db1b_--_lambda_invoker_cdecl_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( *(_BYTE *)(4024LL * i + *((_QWORD *)this + 16) + 765) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6344;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v4,
            v3,
            v5,
            0LL,
            2,
            -1,
            (__int64)L"!m_pDisplaySource[VidPnSourceId].m_PendingReleaseVidPnOwner",
            6344LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
}
