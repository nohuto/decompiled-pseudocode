/*
 * XREFs of RemoveWindowFullScreen @ 0x14021536C
 * Callers:
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x140053B74 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 */

void __fastcall RemoveWindowFullScreen(__int64 a1)
{
  *(_DWORD *)(a1 + 380) &= ~0x400u;
  PostShellHookMessagesEx((LastWokenThread *)0x36, *(_QWORD *)a1);
}
