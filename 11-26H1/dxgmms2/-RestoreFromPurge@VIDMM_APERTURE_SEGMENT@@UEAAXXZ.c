/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1400D7F90
 * Callers:
 *     <none>
 * Callees:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v2; // rsi
  char *v3; // rbx
  __int64 v4; // r11
  char *v5; // r10
  int *v6; // rax
  int v7; // ecx
  bool v8; // cl
  VIDMM_APERTURE_SEGMENT *v9; // rbx
  __int64 v10; // r10
  VIDMM_APERTURE_SEGMENT *v11; // r11
  int *v12; // rax
  int v13; // ecx
  bool v14; // cl
  unsigned __int64 v15; // [rsp+20h] [rbp-28h]

  if ( (*((_DWORD *)this + 16) & 0x400000) == 0 )
  {
    v2 = (char *)this + 136;
    v3 = (char *)*((_QWORD *)this + 17);
    while ( v3 != v2 )
    {
      v4 = *((_QWORD *)v3 - 30);
      v5 = v3;
      v6 = (int *)*((_QWORD *)v3 + 16);
      v3 = *(char **)v3;
      v7 = *v6;
      if ( (*v6 & 0x10000000) == 0 && (*((_DWORD *)v5 - 53) & 2) == 0 )
      {
        v8 = (v7 & 4) != 0 && (v7 & 0x800000) == 0;
        VIDMM_APERTURE_SEGMENT::MapApertureRange(
          this,
          (struct VIDMM_GLOBAL_ALLOC **)v4,
          *(_QWORD *)(v4 + 16) >> 12,
          *(_QWORD *)(v4 + 72) / 4096LL,
          v15,
          *((struct _MDL **)v5 - 23),
          0,
          v8);
      }
    }
    v9 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 33);
    while ( v9 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 264) )
    {
      v10 = *((_QWORD *)v9 - 30);
      v11 = v9;
      v12 = (int *)*((_QWORD *)v9 + 16);
      v9 = *(VIDMM_APERTURE_SEGMENT **)v9;
      v13 = *v12;
      if ( (*v12 & 0x10000000) == 0 )
      {
        v14 = (v13 & 4) != 0 && (v13 & 0x800000) == 0;
        VIDMM_APERTURE_SEGMENT::MapApertureRange(
          this,
          (struct VIDMM_GLOBAL_ALLOC **)v10,
          *(_QWORD *)(v10 + 16) >> 12,
          *(_QWORD *)(v10 + 72) / 4096LL,
          v15,
          *((struct _MDL **)v11 - 23),
          0,
          v14);
      }
    }
  }
}
