/*
 * XREFs of ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180029C44
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180029C10 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  LPARAM i; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 j; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a2; (unsigned int)v2 < *(_DWORD *)(a1 + 120); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v8 = 0;
    v6 = *(_QWORD *)(v5 + 8 * v2);
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(v6 + 16), &v8) )
    {
      if ( (*(_DWORD *)(v6 + 24) & 0x400000) == 0 )
      {
        for ( j = 0LL; (unsigned int)j < 5; j = (unsigned int)(j + 1) )
        {
          if ( v8 == dword_1800F5150[j] )
            goto LABEL_3;
        }
      }
      PostMessageW(*(HWND *)(v6 + 16), 0x32Au, *(int *)(a1 + 72), i);
    }
LABEL_3:
    ;
  }
}
