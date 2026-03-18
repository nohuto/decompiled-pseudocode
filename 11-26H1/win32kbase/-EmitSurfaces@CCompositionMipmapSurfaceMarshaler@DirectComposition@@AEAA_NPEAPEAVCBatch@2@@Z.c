/*
 * XREFs of ?EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140246D28
 * Callers:
 *     ?EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140246E90 (-EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::EmitSurfaces(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v3; // esi
  int i; // ecx
  void *v6; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  for ( i = *((_DWORD *)this + 22); i; i &= i - 1 )
    ++v3;
  while ( v3 )
  {
    v6 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v14 = v6;
    if ( (unsigned __int64)v6 < 0x28 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v14) )
        return 0;
      v6 = v14;
    }
    v14 = 0LL;
    v7 = ((unsigned __int64)v6 - 16) / 0x18;
    if ( v3 < v7 )
      LODWORD(v7) = v3;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(24 * v7 + 16), &v14);
    v8 = v14;
    v9 = 0LL;
    v10 = 0LL;
    *(_DWORD *)v14 = 24 * v7 + 16;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 1) = 62;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v8 + 3) = v7; (unsigned int)v10 < (unsigned int)v7; v9 = (unsigned int)(v9 + 1) )
    {
      if ( ((1 << v9) & *((_DWORD *)this + 22)) != 0 )
      {
        v11 = 3 * v10;
        LODWORD(v8[3 * v10 + 2]) = v9;
        v12 = *(_QWORD *)(*((_QWORD *)this + 7) + 24 * v9);
        if ( v12 )
          LODWORD(v12) = *(_DWORD *)(v12 + 32);
        HIDWORD(v8[3 * v10 + 2]) = v12;
        v10 = (unsigned int)(v10 + 1);
        *(_OWORD *)&v8[v11 + 3] = *(_OWORD *)(*((_QWORD *)this + 7) + 24 * v9 + 8);
        *((_DWORD *)this + 22) &= ~(1 << v9);
      }
    }
    v3 -= v7;
  }
  *((_DWORD *)this + 4) |= 0x80u;
  return 1;
}
