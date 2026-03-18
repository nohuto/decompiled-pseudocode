/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1403872C8
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x140387150 (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x14006D714 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x1403875B0 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x140422E30 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  struct DISPLAY_SOURCE *OwnedDisplaySource; // rax
  __int64 v10; // r11
  struct DISPLAY_SOURCE *v11; // r14
  __int64 v12; // rcx
  char *v13; // rbx
  char *i; // r8
  __int64 v15; // rax
  char *v16; // r9
  __int64 result; // rax
  char **v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct tagRECT v24; // xmm0
  _QWORD *v25; // rax
  char *v26; // rax
  char **v27; // rcx
  __int64 left; // [rsp+20h] [rbp-38h]
  __int64 top; // [rsp+28h] [rbp-30h]
  __int64 HighPart; // [rsp+28h] [rbp-30h]
  __int64 v31; // [rsp+28h] [rbp-30h]
  __int64 right; // [rsp+30h] [rbp-28h]
  __int64 LowPart; // [rsp+30h] [rbp-28h]
  __int64 v34; // [rsp+30h] [rbp-28h]
  __int64 bottom; // [rsp+38h] [rbp-20h]

  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a3, a4);
  v11 = OwnedDisplaySource;
  if ( !OwnedDisplaySource )
  {
    v19 = v10;
    WdLogSingleEntry5(2LL, v10, a3->HighPart, a3->LowPart, this, -1073741811LL);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 4103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x (returning 0x%I64x).",
      v19,
      HighPart,
      LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v12 = *((_QWORD *)OwnedDisplaySource + 6);
  if ( v12 )
  {
    v20 = v10;
    if ( IsEqualRect((const struct tagRECT *)(v12 + 24), a2) )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
      v23[3] = v20;
      v23[4] = a3->HighPart;
      v23[5] = a3->LowPart;
      v23[7] = -1071774953LL;
      v23[6] = this;
      result = 3223192343LL;
      WdLogGlobalForLineNumber = 4123;
      return result;
    }
    WdLogSingleEntry5(2LL, v20, a3->HighPart, a3->LowPart, this, -1073741811LL);
    v34 = a3->LowPart;
    v31 = a3->HighPart;
    WdLogGlobalForLineNumber = 4134;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is owned by other session view in session 0x%I64x, returning 0x%I64x.",
      v20,
      v31,
      v34,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v13 = (char *)this + 18600;
  for ( i = (char *)*((_QWORD *)this + 2325); i != v13; i = *v18 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
    {
      if ( v16 )
        goto LABEL_19;
      break;
    }
  }
  v15 = operator new(0x48uLL, 0x4B677844u, 256LL);
  v16 = (char *)v15;
  if ( !v15 )
  {
    WdLogSingleEntry5(6LL, a2->left, a2->top, a2->right, a2->bottom, this);
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    WdLogGlobalForLineNumber = 4158;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate session view for rect (%d, %d, %d, %d) in session 0x%I64x.",
      left,
      top,
      right,
      bottom,
      (__int64)this);
    return 3221225495LL;
  }
  *(_QWORD *)v15 = this;
  v24 = *a2;
  *(_DWORD *)(v15 + 40) = 0;
  *(struct tagRECT *)(v15 + 24) = v24;
  v25 = (_QWORD *)(v15 + 48);
  v25[1] = v25;
  *v25 = v25;
  *((_QWORD *)v16 + 8) = 0LL;
  v26 = v16 + 8;
  v27 = (char **)*((_QWORD *)this + 2326);
  if ( *v27 != v13 )
    __fastfail(3u);
  *(_QWORD *)v26 = v13;
  *((_QWORD *)v16 + 2) = v27;
  *v27 = v26;
  *((_QWORD *)this + 2326) = v26;
LABEL_19:
  *((struct _LUID *)v16 + 8) = *a6;
  SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v16, v11, a5);
  return 0LL;
}
