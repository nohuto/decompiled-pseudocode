/*
 * XREFs of ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1401C997C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1401C9B24 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
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
  char v14; // r14
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
  v12 = left + v10;
  v13 = v8 + a4->bottom;
  a4->left = v12;
  v22 = v13;
  a4->bottom = v13;
  v21 = v8 + a4->top;
  a4->top = v21;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v14 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v15 = 0;
  }
  if ( v14 || v15 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    v18 = v22;
    v19 = v21;
    v20 = " side move, ";
    if ( !a3 )
      v20 = " ";
    LOBYTE(v18) = v14;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v19,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      44,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
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
