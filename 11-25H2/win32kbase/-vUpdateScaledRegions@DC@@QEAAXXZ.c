/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1400924C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1400925B8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  __int64 v1; // rax
  ULONG_PTR v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 62);
  if ( v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0 )
  {
    if ( (*((_DWORD *)this + 130) & 0x10) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 143),
        (char *)this + 1160,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
    if ( (*((_DWORD *)this + 130) & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (char *)this + 1168,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    if ( *((_QWORD *)this + 145) )
    {
      v3 = *((_QWORD *)this + 145);
      RGNOBJ::vDeleteRGNOBJ(&v3);
      *((_QWORD *)this + 145) = 0LL;
    }
    if ( *((_QWORD *)this + 146) )
    {
      v3 = *((_QWORD *)this + 146);
      RGNOBJ::vDeleteRGNOBJ(&v3);
      *((_QWORD *)this + 146) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
