/*
 * XREFs of ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1401918A0
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x140386FCC (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_VIEW::RemoveDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, bool *a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  bool v8; // zf

  if ( *((SESSION_VIEW **)a2 + 6) == this )
  {
    v5 = (_QWORD *)((char *)a2 + 56);
    *((_QWORD *)a2 + 6) = 0LL;
    v6 = *((_QWORD *)a2 + 7);
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = (*((_DWORD *)this + 10))-- == 1;
    *a3 = v8;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 2066;
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
}
