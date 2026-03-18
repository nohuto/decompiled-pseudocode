/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025FE30
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025E760 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x14005F700 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1400968CC (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14025FA98 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260374 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  struct DMMVIDEOPRESENTTARGET *v13; // rax
  struct DXGADAPTER *v14; // rax
  struct DXGADAPTER *v15; // rax
  struct DXGADAPTER *v16; // rax
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  struct DXGADAPTER *v21; // rax
  DMMVIDEOPRESENTTARGET *v22; // rax
  DMMVIDEOPRESENTTARGET *v23; // rax
  DMMVIDEOPRESENTTARGET *v24; // rdi
  int v25; // eax
  __int64 v26; // r14
  int v27; // eax
  struct DMMVIDEOPRESENTTARGET **v28; // rdx
  struct DMMVIDEOPRESENTTARGET *v29; // rax
  struct DXGADAPTER *v30; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, (unsigned int)v8, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1478;
    return 3221225485LL;
  }
  v13 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v6);
  if ( a5 )
  {
    if ( !v13 )
    {
      *(_DWORD *)a6 = 1;
      v14 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v14, -1073741811LL, 2LL);
      WdLogGlobalForLineNumber = 1493;
      return 3221225485LL;
    }
    if ( !*((_QWORD *)v13 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v15 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v15, -1073741811LL, 3LL);
      WdLogGlobalForLineNumber = 1504;
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v13) )
    {
      *(_DWORD *)a6 = 6;
      v16 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v16, -1073741811LL, 4LL);
      WdLogGlobalForLineNumber = 1514;
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v18 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v8, v18, -1073741811LL, 4LL);
      WdLogGlobalForLineNumber = 1524;
      return 3221225485LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 72));
    v19 = *(_QWORD **)(v17 + 488);
    v20 = (_QWORD *)((char *)TargetById + 496);
    if ( *v19 == v17 + 480 )
    {
      *v20 = v17 + 480;
      *((_QWORD *)TargetById + 63) = v19;
      *v19 = v20;
      *(_QWORD *)(v17 + 488) = v20;
      *((_QWORD *)TargetById + 66) = v17;
      return 0LL;
    }
    goto LABEL_25;
  }
  if ( v13 )
  {
    *(_DWORD *)a6 = 3;
    v21 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v6, v21, -1073741811LL, 5LL);
    WdLogGlobalForLineNumber = 1539;
    return 3221225485LL;
  }
  v22 = (DMMVIDEOPRESENTTARGET *)operator new(0x270uLL, 0x4E506456u, 256LL);
  if ( v22 )
  {
    v23 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v22,
            (struct DMMVIDEOPRESENTTARGETSET *const)this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
    v24 = v23;
    if ( v23 )
    {
      v25 = DMMVIDEOPRESENTTARGET::Initialize(v23);
      LODWORD(v26) = v25;
      if ( v25 >= 0 )
      {
        v27 = DMMVIDEOPRESENTTARGETSET::AddTarget((DMMVIDEOPRESENTTARGETSET *)this, v24);
        v26 = v27;
        if ( v27 >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
          v28 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
          v29 = (DMMVIDEOPRESENTTARGET *)((char *)v24 + 456);
          if ( *v28 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
          {
            *(_QWORD *)v29 = (char *)TargetById + 440;
            *((_QWORD *)v24 + 58) = v28;
            *v28 = v29;
            *((_QWORD *)TargetById + 56) = v29;
            *((_QWORD *)v24 + 59) = TargetById;
            *((_DWORD *)v24 + 30) = *((_DWORD *)TargetById + 30);
            ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
            return 0LL;
          }
LABEL_25:
          __fastfail(3u);
        }
        *(_DWORD *)a6 = -2147483646;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
        WdLogSingleEntry3(2LL, v6, this, v26);
        WdLogGlobalForLineNumber = 1583;
      }
      else
      {
        *(_DWORD *)a6 = -2147483647;
        WdLogSingleEntry2(2LL, v6, v25);
        WdLogGlobalForLineNumber = 1568;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
      }
      return (unsigned int)v26;
    }
  }
  *(_DWORD *)a6 = 0x80000000;
  v30 = VIDPN_MGR::GetContainingAdapter(this[11]);
  WdLogSingleEntry2(6LL, v6, v30);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 1556;
  return result;
}
