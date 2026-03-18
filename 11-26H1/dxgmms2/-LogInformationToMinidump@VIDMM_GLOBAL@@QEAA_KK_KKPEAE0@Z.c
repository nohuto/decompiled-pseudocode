/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x14009FB4C
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x14004D710 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x14009B178 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1400A3890 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140126C64 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::LogInformationToMinidump(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int128 v16; // xmm1
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r9
  __int64 v24; // rax

  if ( a6 < 0x5D8 )
    return 0LL;
  memset((char *)a5 + 4, 0, 0x5D4uLL);
  v11 = 7LL;
  *(_DWORD *)a5 = 1;
  v12 = &VIDMM_GLOBAL::_Config;
  *((_DWORD *)a5 + 1) = *((_DWORD *)this + 928);
  v13 = (_OWORD *)((char *)a5 + 8);
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v11;
  }
  while ( v11 );
  v15 = 4LL;
  *v13 = *v12;
  v16 = v12[1];
  v17 = (_OWORD *)((char *)a5 + 936);
  v13[1] = v16;
  v18 = &gVidMmLowResourceAccumulated;
  do
  {
    *v17 = *v18;
    v17[1] = v18[1];
    v17[2] = v18[2];
    v17[3] = v18[3];
    v17[4] = v18[4];
    v17[5] = v18[5];
    v17[6] = v18[6];
    v17 += 8;
    v19 = v18[7];
    v18 += 8;
    *(v17 - 1) = v19;
    --v15;
  }
  while ( v15 );
  *v17 = *v18;
  v17[1] = v18[1];
  *((_DWORD *)v17 + 8) = *((_DWORD *)v18 + 8);
  v20 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, (unsigned __int8 *)a5 + 1496, a6 - 1496);
  v21 = (unsigned __int8 *)a5 + v20 + 1496;
  v22 = a6 - 1496 - v20;
  v23 = 10240LL;
  if ( v22 < 0x2800 )
    v23 = a6 - 1496 - v20;
  v24 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v21, v23);
  return a6
       - (v22
        - v24)
       + VidMmWriteDmaHistoryToMinidump(*((struct VIDMM_DMA_POOL **)this + 80), a5, &v21[v24], v22 - v24, a2, a3, a4);
}
