/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180135758
 * Callers:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18013569C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, CD3DResource *); // rcx

  if ( *((_BYTE *)this + 118) )
  {
    *((_BYTE *)this + 118) = 0;
    for ( i = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, CD3DResource *))(*((_QWORD *)this + 6) + 8LL * (unsigned int)(i - 1));
      (**v3)(v3, this);
    }
  }
}
