/*
 * XREFs of ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403F6560
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DisplayConfigGetTargetBaseType(
        struct DISPLAYCONFIG_TARGET_BASE_TYPE *a1,
        const struct DXGADAPTER_REFERENCE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 6 || *((_DWORD *)a1 + 1) != 24 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4699;
    return 3221225485LL;
  }
  *((_DWORD *)a1 + 5) = -1;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 3160LL) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v5 = *(_QWORD *)(v4 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v5, *((_DWORD *)a1 + 4));
  if ( !TargetById )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = *((unsigned int *)a1 + 4);
    v10[4] = a1;
    v10[5] = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 4726;
    if ( v5 )
      ReferenceCounted::Release((ReferenceCounted *)(v5 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
    return 3221225485LL;
  }
  *((_DWORD *)a1 + 5) = *((_DWORD *)TargetById + 21);
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return 0LL;
}
