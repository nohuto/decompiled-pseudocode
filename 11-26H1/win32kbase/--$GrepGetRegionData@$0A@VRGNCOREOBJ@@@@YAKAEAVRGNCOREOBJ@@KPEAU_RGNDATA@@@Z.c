/*
 * XREFs of ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401FB7FC
 * Callers:
 *     CddEngGetRgnData @ 0x1401FBA30 (CddEngGetRgnData.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x1400A8198 (-sizeSave@RGNCOREOBJ@@QEBAKXZ.c)
 *     ?vDownload@RGNCOREOBJ@@QEBA_KPEAU_RECTL@@_K@Z @ 0x140107A88 (-vDownload@RGNCOREOBJ@@QEBA_KPEAU_RECTL@@_K@Z.c)
 */

__int64 __fastcall GrepGetRegionData<0,RGNCOREOBJ>(RGNCOREOBJ *this, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi

  v6 = RGNCOREOBJ::sizeSave(this);
  v7 = v6 + 32;
  if ( a3 )
  {
    if ( v7 <= a2 )
    {
      *(_DWORD *)a3 = 32;
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v6 >> 4;
      *(_DWORD *)(a3 + 12) = v6;
      if ( v6 >> 4 )
      {
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(*(_QWORD *)this + 28LL);
      }
      else
      {
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
      }
      RGNCOREOBJ::vDownload((unsigned int ***)this, (struct _RECTL *)(a3 + 32), v6 >> 4);
    }
    else
    {
      EngSetLastError(0x57u);
      return 0;
    }
  }
  return v7;
}
