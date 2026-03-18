/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x18019C6F0
 * Callers:
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18019C694 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * (unsigned int)--*((_DWORD *)this + 8));
  if ( (_QWORD)v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(v1);
  return 0LL;
}
