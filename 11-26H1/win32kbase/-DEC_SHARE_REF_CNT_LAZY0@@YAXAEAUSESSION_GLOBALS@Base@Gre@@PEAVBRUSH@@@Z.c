/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1401C3B1C (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v3; // rsi
  int v4; // edi
  _DWORD *v5; // rax
  unsigned int *v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  __int16 v8; // [rsp+34h] [rbp-14h]
  struct Gre::Base::SESSION_GLOBALS *v9; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v3 = *a2;
    if ( (unsigned __int16)HmgDecrementShareReferenceCount((__int64)a1, (unsigned int *)a2) == 1 )
    {
      v4 = 0;
      v6 = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = a1;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v6, v3, 0x10u);
      if ( v7 )
      {
        v5 = *(_DWORD **)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 1) + 96LL))(
                            *((_QWORD *)v9 + 1),
                            *v6)
                        + 48);
        if ( v5 )
          v4 = *v5 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      }
      if ( v4 )
        bDeleteBrush((HBRUSH)v3);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
    }
  }
}
