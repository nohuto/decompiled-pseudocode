/*
 * XREFs of ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1801C5160
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180039DF0 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x1801C50F0 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::SetForceActiveWindowAppearance(CWin32ApplicationView *this, int a2)
{
  __int64 v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v4[0] = 15LL;
  v4[1] = &v5;
  v4[2] = 4LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  SetWindowCompositionAttribute(v2, v4);
  return 0LL;
}
