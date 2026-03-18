/*
 * XREFs of xxxGetControlColor @ 0x140055B60
 * Callers:
 *     xxxPaintRect @ 0x14005426C (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1401E3760 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x140206420 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, struct tagDRAWITEMSTRUCT **a2, HWND a3, unsigned int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  struct tagDRAWITEMSTRUCT *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = 0LL;
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
  {
    v11 = xxxSendMessage(a1, a4);
    v12 = v11;
    if ( !v11 || !(unsigned int)GreValidateServerHandle(v11, 16LL) )
    {
      if ( a2 )
        v9 = *a2;
      return xxxDefWindowProc(a1, a4, a3, v9);
    }
    return v12;
  }
  else
  {
    if ( a2 )
      v9 = *a2;
    return xxxDefWindowProc(a1, a4, a3, v9);
  }
}
