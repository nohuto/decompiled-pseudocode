/*
 * XREFs of ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x14019E5D8
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x14019E780 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 */

char __fastcall MoveDragRect(const struct MOVESIZEDATA *this, struct tagPOINT a2, char a3, struct tagRECT *a4)
{
  char v4; // bl
  int v8; // r10d
  LONG left; // eax
  __int64 v10; // rdx
  LONG v11; // r13d
  LONG v12; // r12d
  LONG v13; // eax
  char v14; // bp
  char v15; // si
  __int64 UserSessionState; // rax
  LONG v18; // edx
  LONG v19; // r8d
  const char *v20; // r10
  LONG v21; // [rsp+C0h] [rbp+8h]
  LONG v22; // [rsp+D0h] [rbp+18h]

  v4 = 0;
  if ( a3 )
    v8 = 0;
  else
    v8 = a2.y - a4->top;
  left = a4->left;
  v10 = (unsigned int)(a2.x - a4->left);
  v11 = v10 + a4->right;
  a4->right = v11;
  v12 = v10 + left;
  v13 = v8 + a4->bottom;
  a4->left = v12;
  v22 = v13;
  a4->bottom = v13;
  v21 = v8 + a4->top;
  a4->top = v21;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v14 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v15 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v15 = 0;
  }
  if ( v14 || v15 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    v18 = v22;
    v19 = v21;
    v20 = " side move, ";
    if ( !a3 )
      v20 = " ";
    LOBYTE(v18) = v14;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v19,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      44,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      (__int64)v20,
      v12,
      v21,
      v11,
      v22,
      v11 - v12,
      v22 - v21);
  }
  if ( (*((_DWORD *)this + 50) & 0x40) != 0 || MOVESIZEDATA::RectInClipRegion(this, a4) )
    return 1;
  return v4;
}
