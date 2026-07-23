/*
 * XREFs of KiCheckDueTimeExpired @ 0x1403CACD0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckDueTimeExpired(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rax

  if ( a2 == 2 )
  {
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 248) - MEMORY[0xFFFFF780000003B0];
    v5 = *(unsigned int *)(a1 + 952);
    if ( !*(_BYTE *)(a1 + 391) || *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) || *(_BYTE *)(a1 + 192) || !(_DWORD)v5 )
      return v3 > a3;
    return v3 > v5 + a3;
  }
  else if ( a2 )
  {
    if ( a3 )
    {
      v3 = MEMORY[0xFFFFF78000000014];
      return v3 > a3;
    }
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
