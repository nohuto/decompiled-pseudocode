/*
 * XREFs of ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180027F34
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180027F00 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18006DA44 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98 (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  LPARAM i; // rbp
  __int64 v5; // rsi
  __int64 j; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a2; (unsigned int)v2 < *(_DWORD *)(a1 + 120); v2 = (unsigned int)(v2 + 1) )
  {
    v7 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v2);
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(v5 + 16), &v7) )
    {
      if ( (*(_DWORD *)(v5 + 24) & 0x400000) == 0 )
      {
        for ( j = 0LL; (unsigned int)j < 5; j = (unsigned int)(j + 1) )
        {
          if ( v7 == dword_1800F9B90[j] )
            goto LABEL_3;
        }
      }
      PostMessageW(*(HWND *)(v5 + 16), 0x32Au, *(int *)(a1 + 72), i);
    }
LABEL_3:
    ;
  }
}
