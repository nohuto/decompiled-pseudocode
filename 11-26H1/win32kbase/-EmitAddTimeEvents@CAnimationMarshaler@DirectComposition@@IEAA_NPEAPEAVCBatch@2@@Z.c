/*
 * XREFs of ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B1B8
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ABE0 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 61) < *((_DWORD *)this + 60); *((_DWORD *)this + 61) += v6 )
  {
    v5 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v9 = v5;
    if ( (unsigned __int64)v5 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v9) )
        return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
      v5 = v9;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 60) - *((_DWORD *)this + 61));
    v7 = ((unsigned __int64)v5 - 12) >> 4;
    v9 = 0LL;
    if ( v6 >= v7 )
      LODWORD(v6) = v7;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v6 + 12), &v9);
    v8 = (char *)v9;
    *(_DWORD *)v9 = 16 * v6 + 12;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 1) = 1;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 12);
    memmove(
      v8 + 12,
      (const void *)(*((_QWORD *)this + 29) + 16LL * *((unsigned int *)this + 61)),
      (unsigned int)(16 * v6));
  }
  return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
}
