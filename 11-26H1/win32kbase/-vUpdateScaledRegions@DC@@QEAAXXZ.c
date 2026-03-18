/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x140015370
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  __int64 v1; // rax
  unsigned int *v3; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 62);
  if ( v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0 )
  {
    v3 = (unsigned int *)((char *)this + 524);
    if ( (*((_DWORD *)this + 130) & 0x10) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 143),
        (char *)this + 1160,
        _mm_unpacklo_ps((__m128)*v3, (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
    if ( (*((_DWORD *)this + 130) & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (char *)this + 1168,
        _mm_unpacklo_ps((__m128)*v3, (__m128)v3[1]).m128_u64[0]);
  }
  else
  {
    if ( *((_QWORD *)this + 145) )
    {
      v4 = *((_QWORD *)this + 145);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
      *((_QWORD *)this + 145) = 0LL;
    }
    if ( *((_QWORD *)this + 146) )
    {
      v4 = *((_QWORD *)this + 146);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
      *((_QWORD *)this + 146) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
