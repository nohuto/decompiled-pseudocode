/*
 * XREFs of MiAdjacentVadResolvesPageTable @ 0x1404EF0F0
 * Callers:
 *     MiComputeVadCommitBelow @ 0x140B26574 (MiComputeVadCommitBelow.c)
 *     MiComputeVadCommitAbove @ 0x140B265BC (MiComputeVadCommitAbove.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 */

__int64 __fastcall MiAdjacentVadResolvesPageTable(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rbx
  signed __int64 v6; // rdx
  _BYTE *v7; // rax

  v3 = a2;
  v4 = a1;
  if ( a3 )
  {
    v5 = 72LL;
    v6 = ((unsigned __int64)*(unsigned int *)(a2 + 24) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 23);
  }
  else
  {
    v5 = 64LL;
    v6 = ((unsigned __int64)*(unsigned int *)(a2 + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 23);
  }
  if ( v6 >> (9 * (unsigned __int8)*(_DWORD *)(a1 + 96)) != *(_QWORD *)(v5 + a1) )
    return 1LL;
  if ( ((*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) < 0x7FFFFFFFDLL
     || (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) == 0x7FFFFFFFELL)
    && ((*(_DWORD *)(v3 + 48) & 1) != 0 || !MiVadPureReserve(v3)) )
  {
    if ( *(_DWORD *)(v4 + 56) )
      MiVadPureReserve(v3);
    v7 = *(_BYTE **)(v4 + 88);
    if ( a3 )
    {
      --*(_QWORD *)(v4 + 72);
      v7[1] = 0;
    }
    else
    {
      ++*(_QWORD *)(v4 + 64);
      *v7 = 0;
    }
    return 1LL;
  }
  return 0LL;
}
