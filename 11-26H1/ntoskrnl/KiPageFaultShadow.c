/*
 * XREFs of KiPageFaultShadow @ 0x140C5F840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiPageFaultShadow(int a1, int a2, int a3, int a4, __int16 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  _KIDTENTRY64 *v9; // rsi
  _KIDTENTRY64 v11; // [rsp-30h] [rbp-30h] BYREF
  _KIDTENTRY64 v12; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v13; // [rsp-10h] [rbp-10h]

  if ( (v12.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 45080LL), 1u) )
      __writecr3((unsigned __int64)&v11);
    __writegsqword(0x10u, v6);
    v9 = KeGetPcr()->IdtBase + 1056;
    v13 = v9[-1];
    v12 = v9[-2];
    v11 = v9[-3];
    __writegsqword(0x10u, 0LL);
    return KiPageFault(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    _mm_lfence();
    return KiPageFault(a1, a2, a3, a4, a5, a6);
  }
}
