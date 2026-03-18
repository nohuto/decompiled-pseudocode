/*
 * XREFs of SysEntrySMgrNotifySessionChange @ 0x140180540
 * Callers:
 *     DrvNotifySessionStateChange @ 0x1401804C0 (DrvNotifySessionStateChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysEntrySMgrNotifySessionChange(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(_QWORD); // rax

  v1 = a1;
  v2 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                    + 24LL
                                                    * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                        + 88LL);
  if ( v2 )
    return v2(v1);
  else
    return 3221225659LL;
}
