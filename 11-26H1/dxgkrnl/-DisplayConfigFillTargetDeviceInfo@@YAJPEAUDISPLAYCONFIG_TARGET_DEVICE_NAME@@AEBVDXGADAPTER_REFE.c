/*
 * XREFs of ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403B26F4
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1402CC758 (-MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall DisplayConfigFillTargetDeviceInfo(
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a1,
        const struct DXGADAPTER_REFERENCE *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v6; // r15d
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  const struct DMMVIDEOPRESENTTARGET *v9; // rsi
  _QWORD *v10; // r8
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rcx
  _QWORD *v12; // rax
  struct HDXGMONITOR__ *v13; // rcx
  _QWORD *v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 && *(_DWORD *)a1 == 2 && *((_DWORD *)a1 + 1) == 420 )
  {
    *(_QWORD *)((char *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 5) = 0;
    memset((char *)a1 + 164, 0, 0x100uLL);
    memset((char *)a1 + 36, 0, 0x80uLL);
    *((_DWORD *)a1 + 6) = -1;
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 3160LL) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
    v6 = *((_DWORD *)a1 + 4);
    v7 = *(_QWORD **)(v5 + 120);
    if ( v6 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1039;
    }
    v8 = v7 + 3;
    v9 = 0LL;
    v10 = (_QWORD *)v7[3];
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v10 - 1);
    if ( v10 != v7 + 3 )
      v9 = (const struct DMMVIDEOPRESENTTARGET *)(v10 - 1);
    while ( v9 )
    {
      if ( *((_DWORD *)v9 + 6) == v6 )
      {
        if ( v10 == v8 )
        {
          NextTarget = 0LL;
        }
        else if ( NextTarget == v9 )
        {
LABEL_15:
          *((_DWORD *)a1 + 6) = *((_DWORD *)v9 + 20);
          v13 = (struct HDXGMONITOR__ *)*((_QWORD *)v9 + 14);
          if ( v13 )
            v4 = MonitorFillMonitorDeviceInfo(v13, a1);
          else
            *((_DWORD *)a1 + 5) |= 2u;
          if ( v7 )
            ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
          return v4;
        }
        do
        {
          if ( *((_DWORD *)NextTarget + 20) == *((_DWORD *)v9 + 20) )
            ++*((_DWORD *)a1 + 8);
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
        }
        while ( NextTarget != v9 );
        goto LABEL_15;
      }
      v12 = (_QWORD *)*((_QWORD *)v9 + 1);
      v9 = (const struct DMMVIDEOPRESENTTARGET *)(v12 - 1);
      if ( v12 == v8 )
        v9 = 0LL;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(NextTarget, v8);
    v15[3] = *((unsigned int *)a1 + 4);
    v15[4] = a1;
    v15[5] = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 4784;
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4751;
  }
  return 3221225485LL;
}
