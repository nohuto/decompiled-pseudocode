/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x14025BF60
 * Callers:
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400423CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(
        DXGADAPTER *a1,
        int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12510;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12516;
  }
  v10 = *((_QWORD *)a1 + 395);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12521;
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
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, *(_QWORD *)(v10 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
    v12 = *(_QWORD *)(v11 + 120);
    v13 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v12, a2);
    if ( v13 )
    {
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v13 + 80) = a3;
      if ( a4 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v13 + 84) = a4;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12555;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
      v4 = -1071774971;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12535;
  }
  return result;
}
