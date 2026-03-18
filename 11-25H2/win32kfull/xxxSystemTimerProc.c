/*
 * XREFs of xxxSystemTimerProc @ 0x140246950
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x14015232C (InvalidateWEFCOMPOSITEDDCEs.c)
 *     zzzAnimateFade @ 0x140242188 (zzzAnimateFade.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     GetActiveTrackPwnd @ 0x140281D18 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxSystemTimerProc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // edx
  unsigned int v9; // r14d
  unsigned int MouseKeyFlags; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+60h] [rbp+18h]

  switch ( a3 )
  {
    case 65525LL:
      return InvalidateWEFCOMPOSITEDDCEs((__int64)a1, a2);
    case 65526LL:
      return zzzAnimateFade((__int64)a1, a2);
    case 65527LL:
      v13 = *((_QWORD *)a1 + 2);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 496) + 192LL);
      if ( v14 && a1 == (struct tagWND *)GetActiveTrackPwnd(v14) )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 472) + 412LL) |= 0x200020u;
        SetWakeBit(v13, 2LL);
      }
      return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
    case 65528LL:
      return xxxFlashWindow(a1);
  }
  if ( a3 != 65530 )
    return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(v5 + 496);
  result = *(unsigned int *)(v6 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v6 + 192);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v15 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      result = PtInRect((_DWORD *)(v6 + 204), v15);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v6 + 200);
        if ( v8 == 1 )
        {
          v9 = 673;
          MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v5 + 472));
          v11 = *((_QWORD *)a1 + 5);
          v12 = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v15) = *(_DWORD *)(v11 + 112) - v15 - 1;
          else
            LODWORD(v15) = v15 - *(_DWORD *)(v11 + 104);
          HIDWORD(v15) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = *(unsigned __int16 *)(v6 + 200);
          v9 = 672;
          if ( v12 - 65 > 4 )
          {
            if ( v12 - 60 <= 4 )
              v12 = (HIWORD(v8) != 0) + 6LL;
          }
          else
          {
            v12 = 5LL;
          }
        }
        PostTransformableMessage(a1, v9, v12, (unsigned __int16)v15 | (unsigned __int64)(WORD2(v15) << 16), 0);
        *(_DWORD *)(v6 + 48) &= ~0x40u;
        return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
      }
    }
  }
  return result;
}
