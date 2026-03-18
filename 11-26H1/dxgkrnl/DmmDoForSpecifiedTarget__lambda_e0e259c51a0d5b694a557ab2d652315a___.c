/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___ @ 0x14018EBB0
 * Callers:
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x14018EB90 (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a_(DXGADAPTER *a1, int a2, _BYTE *a3)
{
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8631;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8637;
  }
  v8 = *((_QWORD *)a1 + 395);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8642;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, *(_QWORD *)(v8 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, a2);
    if ( TargetById )
    {
      v12 = *((_DWORD *)TargetById + 20);
      if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 || (v15 = v14 - 1) == 0 || v15 == 11 )
        *((_DWORD *)TargetById + 102) = *a3 != 0;
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8676;
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      v3 = -1071774971;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 8656;
  }
  return result;
}
