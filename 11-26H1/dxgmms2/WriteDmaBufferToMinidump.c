/*
 * XREFs of WriteDmaBufferToMinidump @ 0x1400A4368
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140126C64 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     VidMmBeginDmaBufferCPUAccess_0 @ 0x14010CDD8 (VidMmBeginDmaBufferCPUAccess_0.c)
 */

__int64 __fastcall WriteDmaBufferToMinidump(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        int a13,
        int a14,
        unsigned int a15)
{
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned int v18; // ecx
  char *v19; // r13
  unsigned __int64 v20; // rbx
  unsigned int v21; // esi
  int v22; // r10d
  unsigned int v23; // r12d
  unsigned int v24; // edi
  size_t v25; // rbp
  size_t v26; // r15
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r8
  unsigned int v29; // r9d
  unsigned int v30; // r13d
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r10d
  unsigned int v36; // edx
  unsigned int v37; // esi
  unsigned int *v38; // rcx
  int v39; // r12d
  unsigned int v40; // eax
  unsigned int v41; // r10d
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned __int64 v44; // r8
  unsigned int v45; // r12d
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  char *v51; // rbx
  __int64 v52; // r12
  char *v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rcx
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // rbp
  unsigned int v58; // [rsp+20h] [rbp-68h]
  unsigned int v59; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+18h]
  unsigned int v64; // [rsp+A8h] [rbp+20h]
  unsigned int v65; // [rsp+B0h] [rbp+28h]
  unsigned int v66; // [rsp+B8h] [rbp+30h]

  v15 = a2;
  v16 = a1;
  if ( a3 < 0x48 )
    return 0LL;
  v18 = a15;
  v19 = (char *)(a3 - 72);
  v20 = *(unsigned int *)(v16 + 36);
  v21 = 0;
  v22 = 0;
  v63 = 0;
  v23 = 0;
  v58 = 0;
  v24 = -1;
  v65 = 0;
  v25 = 0LL;
  v66 = 0;
  v26 = 0LL;
  v59 = -1;
  v64 = 0;
  v27 = a15;
  Src = v19;
  v28 = a3 - 72;
  if ( v19 )
  {
    v29 = a12;
    v30 = 0;
    while ( 1 )
    {
      if ( v27 )
      {
        v31 = 64LL;
        if ( v28 < 0x40 )
          v31 = v28;
        if ( v31 >= v27 )
        {
          v32 = v27;
        }
        else
        {
          v32 = 64LL;
          if ( v28 < 0x40 )
            v32 = v28;
        }
        v26 += v32;
        v27 -= v32;
        v28 -= v32;
        if ( !v20 )
          goto LABEL_49;
      }
      else if ( !v20 )
      {
        goto LABEL_50;
      }
      v33 = 1024LL;
      if ( v28 < 0x400 )
        v33 = v28;
      if ( v33 >= v20 )
      {
        v34 = v20;
      }
      else
      {
        v34 = 1024LL;
        if ( v28 < 0x400 )
          v34 = v28;
      }
      v25 += v34;
      v20 -= v34;
      v28 -= v34;
      if ( v29 )
      {
        v35 = 0;
        v36 = a11;
        if ( a11 < v29 )
        {
          v37 = v65;
          v38 = (unsigned int *)(*(_QWORD *)(v16 + 112) + 8 * (3LL * a11 + 2));
          do
          {
            v39 = v35;
            if ( *v38 < v25 )
            {
              v66 = v36;
              v40 = v36;
              if ( !v35 )
                v35 = 1;
              if ( v39 )
                v40 = v37;
              v37 = v40;
            }
            ++v36;
            v38 += 6;
          }
          while ( v36 < v29 );
          v16 = a1;
          v65 = v37;
          v23 = v37;
          v21 = v63;
        }
        v41 = v23;
        v42 = v28 / 0x18;
        v43 = v66 - v23 - v21 + 1;
        if ( (unsigned int)(v28 / 0x18) >= v43 )
          v42 = v43;
        v21 += v42;
        v63 = v21;
        v44 = v28 - 24 * v42;
        if ( v23 <= v66 )
        {
          v45 = v64;
          do
          {
            v46 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 24LL * v41);
            v47 = v46;
            if ( v24 < v46 )
              v47 = v24;
            v24 = v47;
            if ( v45 > v46 )
              v46 = v45;
            ++v41;
            v45 = v46;
          }
          while ( v41 <= v66 );
          v16 = a1;
          v30 = v46;
          v23 = v65;
          v29 = a12;
        }
        v48 = *(_DWORD *)(v16 + 44) - 1;
        if ( v30 < v48 )
          v48 = v30;
        v64 = v48;
        v30 = v48;
        v49 = v48 - v24 - v58 + 1;
        v50 = v44 / 0x18;
        if ( (unsigned int)(v44 / 0x18) >= v49 )
          v50 = v49;
        v22 = v50 + v58;
        v58 += v50;
        v28 = v44 - 24 * v50;
      }
LABEL_49:
      if ( !v28 )
      {
LABEL_50:
        v15 = a2;
        v19 = (char *)Src;
        v18 = a15;
        v59 = v24;
        break;
      }
    }
  }
  v51 = v19;
  *(_QWORD *)v15 = a7;
  *(_QWORD *)(v15 + 8) = a8;
  *(_DWORD *)(v15 + 16) = v18;
  *(_DWORD *)(v15 + 20) = a9;
  *(_DWORD *)(v15 + 24) = a10;
  *(_DWORD *)(v15 + 28) = a11;
  *(_DWORD *)(v15 + 32) = a12;
  *(_DWORD *)(v15 + 36) = a13;
  *(_DWORD *)(v15 + 40) = a14;
  *(_DWORD *)(v15 + 44) = v26;
  *(_DWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 52) = v25;
  *(_DWORD *)(v15 + 56) = v23;
  v52 = v15 + 72;
  *(_DWORD *)(v15 + 60) = v21;
  v53 = (char *)(v15 + 72);
  *(_DWORD *)(v15 + 64) = v24;
  v54 = 72LL;
  *(_DWORD *)(v15 + 68) = v22;
  if ( v26 && v26 <= (unsigned __int64)v19 )
  {
    memmove((void *)(v15 + 72), *(const void **)(v16 + 120), v26);
    v53 = (char *)(v52 + v26);
    v54 = v26 + 72;
    v51 = &v19[-v26];
  }
  if ( v25 && v25 <= (unsigned __int64)v51 )
  {
    v55 = *(_QWORD *)(v16 + 128);
    Src = 0LL;
    VidMmBeginDmaBufferCPUAccess_0(v55, v16, &Src);
    memmove(v53, Src, v25);
    v53 += v25;
    v54 += v25;
    v51 -= v25;
  }
  v56 = 24LL * v63;
  if ( v63 && v56 <= (unsigned __int64)v51 )
  {
    memmove(v53, (const void *)(*(_QWORD *)(v16 + 112) + 24LL * v65), 24LL * v63);
    v53 += v56;
    v54 += v56;
    v51 -= v56;
  }
  v57 = 24LL * v58;
  if ( v58 )
  {
    if ( v57 <= (unsigned __int64)v51 )
    {
      memmove(v53, (const void *)(*(_QWORD *)(v16 + 104) + 24LL * v59), 24LL * v58);
      v54 += v57;
    }
  }
  return v54;
}
