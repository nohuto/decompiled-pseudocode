/*
 * XREFs of ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x180043128
 * Callers:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x18004309C (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_GetIdealWindowRect(
        struct CWindowData *a1,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT **a5)
{
  __int64 v5; // rax
  struct tagRECT *v6; // r14
  char *v10; // rsi
  struct tagRECT v11; // xmm0

  v5 = 32 * (a2 ^ 1LL);
  v6 = (struct tagRECT *)((char *)a1 + v5 + 684);
  v10 = (char *)a1 + v5;
  if ( (((a2 + 1) << 23) & *((_DWORD *)a1 + 170)) != (a2 + 1) << 23 || IsRectEmpty((const RECT *)(v10 + 700)) )
  {
    if ( a3 )
      v11 = *a3;
    else
      v11 = (struct tagRECT)*((_OWORD *)a1 + 3);
    *a4 = v11;
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    *a4 = *(struct tagRECT *)(v10 + 700);
    if ( a5 )
      *a5 = v6;
  }
}
