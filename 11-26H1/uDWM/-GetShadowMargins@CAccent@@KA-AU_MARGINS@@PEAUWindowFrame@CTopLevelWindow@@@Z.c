/*
 * XREFs of ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x18006D438
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CAccent::GetShadowMargins(
        struct _MARGINS *__return_ptr retstr,
        struct CTopLevelWindow::WindowFrame *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  *retstr = 0LL;
  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 220);
    if ( v2 )
      retstr->cxLeftWidth = *(_DWORD *)(v2 + 128);
    v3 = *((_QWORD *)a2 + 222);
    if ( v3 )
      retstr->cxRightWidth = *(_DWORD *)(v3 + 128);
    v4 = *((_QWORD *)a2 + 224);
    if ( v4 )
      retstr->cyTopHeight = *(_DWORD *)(v4 + 132);
    v5 = *((_QWORD *)a2 + 226);
    if ( v5 )
      retstr->cyBottomHeight = *(_DWORD *)(v5 + 132);
  }
  return retstr;
}
