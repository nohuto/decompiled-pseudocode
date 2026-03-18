/*
 * XREFs of ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1400A3558
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x140211790 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14004CF10 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14004E4BC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  char *v2; // rdi
  char *i; // rbx
  CFlipExBuffer *v4; // rax

  if ( *((_QWORD *)this + 19) )
  {
    v2 = (char *)this + 104;
    for ( i = (char *)*((_QWORD *)this + 13); i != v2; i = *(char **)i )
    {
      v4 = CFlipExBuffer::FromBuffer((unsigned __int64)(i - 24));
      CFlipExBuffer::DisableCascadedSignaling(v4);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 16LL))(*((_QWORD *)this + 19));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 8LL))(*((_QWORD *)this + 19), 0LL);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
