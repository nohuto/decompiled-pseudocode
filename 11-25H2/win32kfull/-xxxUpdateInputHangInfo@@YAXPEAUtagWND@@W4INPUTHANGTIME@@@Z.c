/*
 * XREFs of ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60
 * Callers:
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     xxxGetInputEvent @ 0x14001E960 (xxxGetInputEvent.c)
 *     xxxClearWakeMask @ 0x14001ECD0 (xxxClearWakeMask.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxSleepThreadWithPwnd @ 0x14017BE54 (xxxSleepThreadWithPwnd.c)
 *     EditionInitInputHangInfo @ 0x1401B02B0 (EditionInitInputHangInfo.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001EF1C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001F054 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018123C (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?AddInputHangInfo@@YAHPEAUtagINPUTHANGINFO@@PEAUtagWND@@K@Z @ 0x140216950 (-AddInputHangInfo@@YAHPEAUtagINPUTHANGINFO@@PEAUtagWND@@K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402AEE08 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(struct tagWND *a1, __int64 a2)
{
  int v3; // ebp
  unsigned __int64 v4; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 *i; // r15
  __int16 *v12; // rcx
  __int16 v13; // di

  v3 = a2;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0xFFFFF78000000004uLL, a2);
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  if ( v3 )
  {
    v9 = v4;
    if ( !(_DWORD)v4 )
      v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  if ( a1 )
  {
    for ( i = *(__int64 **)(v8 + 1288); i; i = (__int64 *)*i )
    {
      if ( (struct tagWND *)i[1] != a1 )
      {
        if ( !*((_DWORD *)i + 4) )
          continue;
        LODWORD(v7) = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 69112);
        if ( (int)v4 - *((_DWORD *)i + 4) <= (unsigned int)v7 )
          continue;
      }
      i[1] = (__int64)a1;
      *((_DWORD *)i + 4) = v9;
      goto LABEL_15;
    }
    AddInputHangInfo((struct tagINPUTHANGINFO *)(v8 + 1288), a1, v9);
LABEL_15:
    v12 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
    v13 = *v12;
    if ( v13 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v6) + 19872) + 900LL)
      && (GetGhostProp(a1) || GetFrostProp(a1)) )
    {
      xxxHandleHealthyWindow(a1);
    }
  }
  else
  {
    EtwTraceMessageCheckDelay(v8);
    *(_DWORD *)(v8 + 1304) = v9;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) < 0 )
      xxxHandleHealthyThread((struct tagTHREADINFO *)v8);
  }
  *(_QWORD *)(v8 + 1360) &= ~0x200000000uLL;
  return EtwTraceProcessWindowInfo(v8);
}
