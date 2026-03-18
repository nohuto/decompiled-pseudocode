/*
 * XREFs of ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x140422E30
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1403872C8 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_VIEW::AddDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, char a3)
{
  SESSION_VIEW *v3; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdx

  v3 = (SESSION_VIEW *)*((_QWORD *)a2 + 6);
  if ( !v3 )
  {
    *((_QWORD *)a2 + 6) = this;
    v6 = (_QWORD *)((char *)a2 + 56);
    ++*((_DWORD *)this + 10);
    v9 = (_QWORD *)((char *)this + 48);
    if ( !a3 )
    {
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 == v9 )
      {
        *v6 = v9;
        v6[1] = v11;
        *v11 = v6;
        v9[1] = v6;
        return 0LL;
      }
      goto LABEL_14;
    }
LABEL_9:
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) == v9 )
    {
      *v6 = v10;
      v6[1] = v9;
      *(_QWORD *)(v10 + 8) = v6;
      *v9 = v6;
      return 0LL;
    }
LABEL_14:
    __fastfail(3u);
  }
  if ( v3 != this )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 1999;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified display source 0x%I64x is owned by other session view, returning 0x%I64x.",
      (__int64)a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v6 = (_QWORD *)((char *)a2 + 56);
    v7 = *((_QWORD *)a2 + 7);
    if ( *(struct DISPLAY_SOURCE **)(v7 + 8) != (struct DISPLAY_SOURCE *)((char *)a2 + 56) )
      goto LABEL_14;
    v8 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( (_QWORD *)*v8 != v6 )
      goto LABEL_14;
    *v8 = v7;
    v9 = (_QWORD *)((char *)this + 48);
    *(_QWORD *)(v7 + 8) = v8;
    goto LABEL_9;
  }
  return 0LL;
}
