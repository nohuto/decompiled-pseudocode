/*
 * XREFs of HvpIsMetadataArrayCoherent @ 0x140ADDCF0
 * Callers:
 *     HvpApplyLegacyLogFile @ 0x140868C18 (HvpApplyLegacyLogFile.c)
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140ADDB38 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpIsMetadataArrayCoherent(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // rdx
  unsigned int v8; // r8d

  v5 = 0LL;
  v6 = 8LL * a1[5] + 40;
  while ( (unsigned int)v5 < a3 )
  {
    v7 = *(unsigned int *)(a2 + 8 * v5 + 4);
    if ( !(_DWORD)v7 )
      return 0;
    if ( (v7 & 0xFFF) != 0 )
      return 0;
    v8 = *(_DWORD *)(a2 + 8 * v5);
    if ( (v8 & 0xFFF) != 0
      || v8 + (unsigned int)v7 < v8
      || v8 + (unsigned int)v7 > a1[4]
      || (_DWORD)v5
      && v8 <= *(_DWORD *)(a2 + 8LL * (unsigned int)(v5 - 1)) + *(_DWORD *)(a2 + 8LL * (unsigned int)(v5 - 1) + 4) )
    {
      return 0;
    }
    v6 += v7;
    if ( v6 > 0xFFFFFFFF || v6 > a1[1] )
      return 0;
    v5 = (unsigned int)(v5 + 1);
  }
  return 1;
}
