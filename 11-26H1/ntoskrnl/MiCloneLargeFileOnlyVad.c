/*
 * XREFs of MiCloneLargeFileOnlyVad @ 0x14086CE70
 * Callers:
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1406FA404 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiCloneLargeFileOnlyVad(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned int *v7; // rbx
  __int64 *v8; // rdi
  unsigned int *v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned int *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v9 = 0LL;
  v5 = v2 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v10 = 0LL;
  MiGetProtoPteAddress(a1, v5, 0, &v9);
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    0,
    &v10);
  if ( a2 )
  {
    v7 = v9;
    v8 = 0LL;
    while ( (unsigned int)MiIncrementLargeSubsections((__int64 *)v7, v7[11]) != -1 )
    {
      if ( v7 == v10 )
        return 0LL;
      v8 = (__int64 *)v7;
      v7 = (unsigned int *)*((_QWORD *)v7 + 2);
    }
    if ( v8 )
      MiDecrementLargeSubsections((__int64 *)v9, v8);
    return 3221225626LL;
  }
  else
  {
    MiDecrementLargeSubsections((__int64 *)v9, (__int64 *)v10);
    return 0LL;
  }
}
