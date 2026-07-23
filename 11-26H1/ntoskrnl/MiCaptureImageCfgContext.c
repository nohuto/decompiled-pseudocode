/*
 * XREFs of MiCaptureImageCfgContext @ 0x14099CDC0
 * Callers:
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiFreeImageCfgContext @ 0x1404C6458 (MiFreeImageCfgContext.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int16 a7,
        __int64 a8,
        unsigned int a9,
        int *a10,
        __int64 a11)
{
  unsigned int v13; // ebx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  unsigned int v18; // r14d
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // edx
  unsigned __int64 v25; // r8
  __int64 v26; // r10
  int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  unsigned int v30; // r12d
  int CurrentProcessorColor; // eax
  char *PoolMm; // rax
  char *v33; // r14
  unsigned int i; // eax
  unsigned __int64 v35; // rdx
  int v36; // ecx
  unsigned int v38; // [rsp+24h] [rbp-84h]
  int v39; // [rsp+30h] [rbp-78h]
  unsigned __int64 v40; // [rsp+40h] [rbp-68h]
  void *v41; // [rsp+60h] [rbp-48h]
  unsigned int v45; // [rsp+E0h] [rbp+38h]

  v13 = 0;
  *a10 = 0;
  v14 = a11;
  *(_OWORD *)a11 = 0LL;
  *(_OWORD *)(a11 + 16) = 0LL;
  *(_WORD *)(a11 + 4) = a7 == 452;
  v15 = 0LL;
  v16 = 0;
  if ( *(_WORD *)(a6 + 48) == 523 )
  {
    v17 = *(_QWORD *)(a8 + 128);
    v18 = *(_DWORD *)(a8 + 136);
    v45 = v18;
    v19 = *(_DWORD *)(a8 + 144);
    v38 = v19;
    if ( (v19 & 0x4000) != 0 && a9 >= 0xB0 )
    {
      v15 = *(_QWORD *)(a8 + 160);
      v16 = *(_DWORD *)(a8 + 168);
    }
    v20 = *(_QWORD *)(a8 + 120);
  }
  else
  {
    v17 = *(unsigned int *)(a8 + 80);
    v18 = *(_DWORD *)(a8 + 84);
    v45 = v18;
    v19 = *(_DWORD *)(a8 + 88);
    v38 = v19;
    if ( (v19 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v15 = *(unsigned int *)(a8 + 104);
      v16 = *(_DWORD *)(a8 + 108);
    }
    v20 = *(unsigned int *)(a8 + 76);
  }
  v40 = v20;
  if ( (v19 & 0x400) == 0 || !v17 )
  {
    v27 = 0;
    goto LABEL_49;
  }
  v21 = (v19 >> 28) + 4;
  if ( v17 < a4 || !v18 || v18 >= 0xFFFFFFFF / v21 )
  {
    v27 = -1073741819;
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 4;
    goto LABEL_49;
  }
  v39 = v19 & 0x4000;
  if ( (v19 & 0x4000) != 0 && v15 )
  {
    if ( v15 < a4 || !v16 || v16 >= 0xFFFFFFFF / v21 )
    {
      v27 = -1073741819;
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 10;
      goto LABEL_49;
    }
    v22 = v15 - a4;
    v23 = v21 * v16;
    v24 = v23;
    v25 = v22 + v23;
    if ( v25 <= v22 || (v26 = a6, v25 > *(unsigned int *)(a6 + 16)) || v24 + 4 < v24 )
    {
      v27 = -1073741819;
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 11;
      goto LABEL_49;
    }
  }
  else
  {
    v26 = a6;
  }
  v28 = v17 - a4;
  v29 = v18 * v21;
  v30 = v18 * v21;
  if ( v29 + v28 <= v28 || v29 + v28 > *(unsigned int *)(v26 + 16) || (int)v29 + 4 < (unsigned int)v29 )
  {
    v27 = -1073741819;
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 5;
    goto LABEL_49;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (char *)ExAllocatePoolMm(256LL, v30, 1413704013, CurrentProcessorColor | 0x80000000);
  v41 = PoolMm;
  v33 = PoolMm;
  if ( !PoolMm )
  {
    v27 = -1073741670;
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 6;
    goto LABEL_54;
  }
  memmove(PoolMm, (const void *)(v28 + a3), v30);
  v27 = 0;
  MiLogRelocationRva((unsigned int)v28, (unsigned int)v29, a2, a1);
  for ( i = 0; i < (unsigned int)v29; i += v21 )
  {
    v35 = *(unsigned int *)&v33[i];
    if ( v35 >= a5 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 8;
LABEL_32:
      v27 = -1073741701;
      break;
    }
    if ( i && (unsigned int)v35 < v13 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 9;
      goto LABEL_32;
    }
    v13 = *(_DWORD *)&v33[i];
  }
  if ( v27 < 0 )
    goto LABEL_54;
  if ( !v40 )
  {
    v14 = a11;
    goto LABEL_38;
  }
  if ( v40 < a4 || v40 >= a4 + a5 )
  {
    v27 = -1073741701;
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 10;
LABEL_54:
    v14 = a11;
    goto LABEL_49;
  }
  v14 = a11;
  *(_DWORD *)(a11 + 24) = v40 - a4;
LABEL_38:
  v36 = *a10 | 1;
  *a10 = v36;
  if ( _bittest16((const signed __int16 *)(a6 + 60), 0xEu) )
  {
    v36 |= 2u;
    *a10 = v36;
  }
  if ( (v38 & 0x8000) != 0 )
  {
    v36 |= 0x10u;
    *a10 = v36;
  }
  if ( v39 )
  {
    v36 |= 8u;
    *a10 = v36;
  }
  if ( (v38 & 0x100000) != 0 )
  {
    v36 |= 0x20u;
    *a10 = v36;
  }
  if ( (v38 & 0x400000) != 0 )
    *a10 = v36 | 0x40;
  *(_DWORD *)v14 = v38;
  *(_QWORD *)(v14 + 8) = v41;
  *(_DWORD *)(v14 + 16) = v45;
  *(_DWORD *)(v14 + 20) = v21;
LABEL_49:
  if ( v27 < 0 )
    MiFreeImageCfgContext(v14);
  return (unsigned int)v27;
}
