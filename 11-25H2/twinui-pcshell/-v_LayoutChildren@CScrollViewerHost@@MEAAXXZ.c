/*
 * XREFs of ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1804B74B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804B71C8 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804B7410 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewerHost::v_LayoutChildren(CScrollViewerHost *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  void (__fastcall *v5)(__int64 *, _DWORD *, _QWORD, _QWORD); // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  v6[0] = *((_DWORD *)this + 14);
  v6[2] = v6[0] + 1;
  v5 = *(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(v3 + 24);
  v6[1] = v4;
  v6[3] = v4 + 1;
  v5(v2, v6, 0LL, 0LL);
  CScrollViewerHost::_LayoutWithoutScrollButtons(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 64LL))(*((_QWORD *)this + 56)) )
    CScrollViewerHost::_LayoutWithScrollButtons(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 72LL))(*((_QWORD *)this + 56));
}
