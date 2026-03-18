/*
 * XREFs of ?vDownload@RGNCOREOBJ@@QEBA_KPEAU_RECTL@@_K@Z @ 0x140107A88
 * Callers:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401FB7FC (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::vDownload(unsigned int ***this, struct _RECTL *a2, __int64 a3)
{
  unsigned int **v4; // rcx
  __int64 v7; // r9
  unsigned int *v8; // r8
  int v9; // r10d
  unsigned __int64 v10; // r11
  unsigned int v11; // esi
  int v12; // ebx
  struct _RECTL *v13; // rdx
  __int64 v14; // rcx
  struct _RECTL v16; // [rsp+20h] [rbp-18h]

  v4 = *this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(unsigned int **))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 256LL))(v4);
  v7 = 0LL;
  v8 = *v4;
  v9 = *((_DWORD *)*this + 6);
  while ( v9 )
  {
    --v9;
    v16.top = v8[1];
    v10 = (unsigned __int64)*v8 >> 1;
    v16.bottom = v8[2];
    if ( v10 >= a3 - v7 )
      v10 = a3 - v7;
    v11 = 0;
    if ( v10 )
    {
      v12 = 0;
      v13 = &a2[v7];
      do
      {
        v14 = v12;
        ++v11;
        ++v7;
        v12 += 2;
        v16.left = v8[v14 + 3];
        v16.right = v8[v14 + 4];
        *v13++ = v16;
      }
      while ( v11 < v10 );
    }
    v8 += *v8 + 4;
  }
  return v7;
}
