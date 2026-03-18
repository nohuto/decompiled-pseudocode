/*
 * XREFs of VidSchRecommitSchedulingLogs @ 0x14003B13C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x14003B1CC (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 */

__int64 __fastcall VidSchRecommitSchedulingLogs(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  struct VIDMM_SCH_LOG *v9; // rcx

  v2 = 0;
  v4 = *(unsigned __int8 *)(a2 + a1 + 96);
  v5 = v4 + *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 3032LL) + 352LL * a2);
  while ( (unsigned int)v4 < v5 )
  {
    v6 = *(__int64 **)(a1 + 696);
    if ( (unsigned int)v4 < *(_DWORD *)(a1 + 768) )
      v6 += v4;
    v7 = *v6;
    if ( (*(_DWORD *)(v7 + 12) & 2) != 0 )
    {
      v9 = *(struct VIDMM_SCH_LOG **)(v7 + 16416);
      if ( v9 )
      {
        v2 = VIDMM_SCH_LOG::RecommitSchLog(v9);
        if ( v2 < 0 )
          break;
      }
    }
    v4 = (unsigned int)(v4 + 1);
  }
  return (unsigned int)v2;
}
