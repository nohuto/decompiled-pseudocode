/*
 * XREFs of SysEntrySMgrNotifySessionChange @ 0x14006DB30
 * Callers:
 *     DrvNotifySessionStateChange @ 0x14006DAB0 (DrvNotifySessionStateChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysEntrySMgrNotifySessionChange(unsigned int a1)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                    + 24LL
                                                    * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                        + 88LL);
  if ( v2 )
    return v2(a1);
  else
    return 3221225659LL;
}
