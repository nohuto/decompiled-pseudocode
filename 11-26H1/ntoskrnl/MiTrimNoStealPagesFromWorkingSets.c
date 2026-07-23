/*
 * XREFs of MiTrimNoStealPagesFromWorkingSets @ 0x140533854
 * Callers:
 *     MiFindContiguousPagesRetry @ 0x14028EE8C (MiFindContiguousPagesRetry.c)
 * Callees:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 */

__int64 __fastcall MiTrimNoStealPagesFromWorkingSets(__int64 a1, char a2)
{
  int v2; // r8d
  int v3; // eax
  int v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+3Ch] [rbp-Ch]

  if ( LOBYTE(stru_140E366D8.ReadyTime) )
  {
    v2 = 0;
    if ( (a2 & 2) != 0 && *(__int64 *)(a1 + 2136) > 1 )
      v2 = 4;
    if ( (a2 & 1) != 0 && *(_DWORD *)(a1 + 18044) )
    {
      v3 = 5;
      if ( v2 == 4 )
        v3 = 3;
      v2 = v3;
      goto LABEL_11;
    }
    if ( v2 )
    {
LABEL_11:
      v7 = 0;
      v5[0] = 2;
      v6 = 0LL;
      v5[1] = v2;
      v5[2] = 6;
      MiWalkAllWorkingSets(a1, v5);
      return 1LL;
    }
  }
  return 0LL;
}
