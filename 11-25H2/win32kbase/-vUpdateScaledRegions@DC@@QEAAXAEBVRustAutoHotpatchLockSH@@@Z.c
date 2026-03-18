/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C68D0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14009004C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1400925B8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C49D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this, const struct RustAutoHotpatchLockSH *a2)
{
  const struct RustAutoHotpatchLockSH *v4; // rdx
  unsigned int *v5; // rdi
  REGION *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v5 = (unsigned int *)((char *)this + 524);
    if ( (*((_DWORD *)this + 130) & 0x10) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 143),
        (__int64 *)this + 145,
        (struct REGION_CORE *)_mm_unpacklo_ps((__m128)*v5, (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
    if ( (*((_DWORD *)this + 130) & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (__int64 *)this + 146,
        (struct REGION_CORE *)_mm_unpacklo_ps((__m128)*v5, (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    if ( *((_QWORD *)this + 145) )
    {
      v6 = (REGION *)*((_QWORD *)this + 145);
      RGNOBJ::vDeleteRGNOBJ(&v6, v4);
      *((_QWORD *)this + 145) = 0LL;
    }
    if ( *((_QWORD *)this + 146) )
    {
      v6 = (REGION *)*((_QWORD *)this + 146);
      RGNOBJ::vDeleteRGNOBJ(&v6, a2);
      *((_QWORD *)this + 146) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
