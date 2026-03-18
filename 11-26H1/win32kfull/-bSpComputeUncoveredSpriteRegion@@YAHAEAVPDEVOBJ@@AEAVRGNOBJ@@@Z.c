/*
 * XREFs of ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x140186B78
 * Callers:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140186A3C (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ??0ENUMUNCOVERED@@QEAA@PEAU_SPRITESTATE@@@Z @ 0x140186C30 (--0ENUMUNCOVERED@@QEAA@PEAU_SPRITESTATE@@@Z.c)
 *     ?DownloadScans@ENUMUNCOVERED@@QEBA?AUSCAN_DATA@1@XZ @ 0x140186CA0 (-DownloadScans@ENUMUNCOVERED@@QEBA-AUSCAN_DATA@1@XZ.c)
 */

__int64 __fastcall bSpComputeUncoveredSpriteRegion(struct PDEVOBJ *a1, struct RGNOBJ *a2)
{
  unsigned int v3; // ebx
  int *v5; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-40h]
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  ENUMUNCOVERED::ENUMUNCOVERED((ENUMUNCOVERED *)v7, (struct _SPRITESTATE *)(*(_QWORD *)a1 + 80LL));
  ENUMUNCOVERED::DownloadScans(v7, &v5);
  if ( v5 && v6 )
  {
    v8 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    v3 = RGNCOREOBJ::bUpload((RGNCOREOBJ *)&v8, v5, v6);
    Win32FreePool(v5);
    return v3;
  }
  else
  {
    RGNOBJ::vSet(a2);
    if ( v5 )
      Win32FreePool(v5);
    return 1LL;
  }
}
