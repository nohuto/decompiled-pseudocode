/*
 * XREFs of VfFaultsAddAllApps @ 0x140C3A42C
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x14064C1E4 (VfRlrsVolatileConfigUpdate.c)
 *     VfFaultsInitPhase0 @ 0x140C3A594 (VfFaultsInitPhase0.c)
 *     VfFaultsSetParameters @ 0x140C3AAB4 (VfFaultsSetParameters.c)
 * Callees:
 *     ViFaultsAddAppNoDuplicates @ 0x140C3ACB0 (ViFaultsAddAppNoDuplicates.c)
 */

__int64 __fastcall VfFaultsAddAllApps(unsigned __int16 *a1, int a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int16 *i; // rbx
  unsigned __int64 v7; // rdx

  v2 = 0;
  v3 = (unsigned __int64)&a1[a2];
  if ( (unsigned __int64)a1 < v3 )
  {
    v4 = 0x100002401LL;
    do
    {
      v5 = *a1;
      if ( (_DWORD)v5 == 9 || (unsigned int)v5 <= 0x20 && _bittest64(&v4, v5) || (_WORD)v5 == 12288 )
      {
        i = a1;
      }
      else
      {
        for ( i = a1; (unsigned __int64)i < v3; ++i )
        {
          v7 = *i;
          if ( (_DWORD)v7 == 9 || (unsigned int)v7 <= 0x20 && _bittest64(&v4, v7) )
            break;
          if ( (_WORD)v7 == 12288 )
            break;
        }
        v2 = ViFaultsAddAppNoDuplicates(a1);
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
      a1 = i + 1;
    }
    while ( (unsigned __int64)(i + 1) < v3 );
  }
  return (unsigned int)v2;
}
