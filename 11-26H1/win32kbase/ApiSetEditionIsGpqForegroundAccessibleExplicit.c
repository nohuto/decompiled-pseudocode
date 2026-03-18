/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x140124498
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x140124400 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x14015276C (EditionIsGpqForegroundAccessibleExplicit.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleExplicit(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4680LL);
  if ( v9 && v9() >= 0 )
  {
    v10 = *((_DWORD *)a3 + 2);
    v12 = *a3;
    v13 = v10;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, _QWORD))EditionIsGpqForegroundAccessibleExplicit)(
                           v7,
                           a2,
                           &v12,
                           a4);
  }
  return v8;
}
