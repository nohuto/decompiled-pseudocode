/*
 * XREFs of MiComputeCacheAttributeSpeeds @ 0x140714FCC
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     MiFillMemory @ 0x1402A0E80 (MiFillMemory.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocateEngineDescriptor @ 0x14050E6A8 (MiAllocateEngineDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x140713170 (MiFreeHardwareDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiComputeCacheAttributeSpeeds(__int64 a1)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r13
  int v8; // edx
  __int64 Page; // rax
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // r15
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  _QWORD *v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rdx
  __int64 v24; // r14
  unsigned __int64 *v25; // r13
  int v26; // r15d
  unsigned __int64 v27; // r12
  unsigned int v28; // r13d
  LARGE_INTEGER v29; // rbx
  void *v30; // rdi
  int v31; // edi
  LARGE_INTEGER v32; // rax
  LARGE_INTEGER v33; // rcx
  unsigned __int64 *v34; // r13
  __int64 v35; // rax
  volatile LONG *v36; // rbx
  KIRQL v37; // r11
  _BYTE *v38; // r8
  __int64 v39; // rdi
  int *v40; // r10
  int v41; // r9d
  __int64 v42; // rcx
  __int128 v43; // xmm1
  __int64 v44; // rdx
  signed __int32 v45[8]; // [rsp+8h] [rbp-100h] BYREF
  int v46; // [rsp+38h] [rbp-D0h] BYREF
  int v47; // [rsp+3Ch] [rbp-CCh]
  int v48; // [rsp+40h] [rbp-C8h]
  int v49; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-C0h] BYREF
  __int64 EngineDescriptor; // [rsp+50h] [rbp-B8h]
  unsigned __int64 *v52; // [rsp+58h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+68h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  __int64 v59; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-68h]
  char v61[32]; // [rsp+A8h] [rbp-60h] BYREF
  char v62; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v63[56]; // [rsp+D0h] [rbp-38h] BYREF

  v58 = a1;
  LOBYTE(v46) = 0;
  v55 = 0LL;
  memset_0(v61, 0, 0x60uLL);
  if ( (byte_140E2D918 & 1) == 0 )
  {
    v2 = byte_140E2D918 & 4;
    v3 = *(_QWORD *)(a1 + 136);
    v47 = *(_DWORD *)a1;
    v60 = v47;
    v4 = *(unsigned int *)(v3 + 56);
    v59 = (__int64)v47 << 6;
    v5 = qword_140E2D838 + 384 * v4;
    v57 = v5;
    if ( !*(_QWORD *)(v59 + v5 + 200) )
    {
      v6 = *(_QWORD *)(v3 + 48);
      v7 = 168LL * v47;
      v54 = *(_QWORD *)(v5 + 376);
      MiInitializePageColorBase(0LL, 3, v4 + 1, (__int64)&v55);
      v8 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v55, 1u);
      Page = MiGetPage(v6, DWORD2(v55) & 0xFFFFFF00 | v8, 0);
      v56 = Page;
      if ( Page == -1 )
        v10 = 0LL;
      else
        v10 = 48 * Page - 0x220000000000LL;
      v11 = -v2;
      v12 = 2LL - (v11 != 0);
      *(_QWORD *)&v55 = v12;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0xC00000) != 0 )
          MiChangePageAttribute(v10, 0);
        v17 = &v62;
        v18 = 2LL;
        v19 = *(_QWORD *)(v54 + v7 + 80);
        v20 = *(_QWORD **)(v54 + v7 + 120);
        do
        {
          v21 = 2LL - (v11 != 0);
          v22 = (*v20 << 21) / v19;
          v23 = (unsigned __int64 *)v17;
          do
          {
            *v23 = v22;
            v23 += 4;
            --v21;
          }
          while ( v21 );
          ++v20;
          v17 += 16;
          --v18;
        }
        while ( v18 );
        if ( v47 )
          EngineDescriptor = 0LL;
        else
          EngineDescriptor = MiAllocateEngineDescriptor(a1);
        v24 = EngineDescriptor;
        v25 = (unsigned __int64 *)v63;
        v49 = 1;
        v53 = 2LL - (v11 != 0);
        do
        {
          v48 = 0;
          v52 = v25;
          do
          {
            v26 = v48;
            v27 = 0LL;
            v28 = v49;
            v47 = 0;
            do
            {
              PerformanceFrequency.QuadPart = 0LL;
              v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
                v29.QuadPart = 10000000 * v29.QuadPart / PerformanceFrequency.QuadPart;
              _InterlockedOr(v45, 0);
              MiChangePageAttribute(v10, v28);
              v30 = (void *)MiMapPageInHyperSpaceWorker(v56, (unsigned __int8 *)&v46, 0x80000000);
              MiFillMemory(v24, v30, 0x1000uLL, 0LL, v26);
              MiUnmapPageInHyperSpaceWorker((unsigned __int64)v30, v46, 0x80000000);
              MiChangePageAttribute(v10, 0);
              v31 = ++v47;
              _InterlockedOr(v45, 0);
              PerformanceFrequency.QuadPart = 0LL;
              v32 = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
                v32.QuadPart = 10000000 * v32.QuadPart / PerformanceFrequency.QuadPart;
              v33 = v29;
              if ( v32.QuadPart >= (unsigned __int64)v29.QuadPart )
                v33 = v32;
              v27 += v33.QuadPart - v29.QuadPart;
            }
            while ( v27 < 0x1F4 );
            v34 = v52;
            *v52 = (v27 << 21) / (unsigned int)(v31 << 12);
            v25 = v34 + 2;
            v52 = v25;
            v48 = v26 + 1;
          }
          while ( v26 + 1 < 2 );
          ++v49;
          --v53;
        }
        while ( v53 );
        v12 = v55;
        v35 = v24;
        v5 = v57;
        if ( v35 )
          MiFreeHardwareDescriptor(v58, v35);
        MiLockAndInsertPageInFreeList(v10);
      }
      else
      {
        v13 = 1LL;
        v14 = v63;
        do
        {
          v15 = 2LL;
          v16 = MiUnmeasuredTimeToZeroOneLargePage[v13];
          do
          {
            *(v14 - 1) = v16;
            *v14 = -1LL;
            v14 += 2;
            --v15;
          }
          while ( v15 );
          ++v13;
        }
        while ( v13 <= v12 );
      }
      v36 = (volatile LONG *)(v54 + 64);
      v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v54 + 64));
      if ( !*(_QWORD *)(v59 + v5 + 200) )
      {
        v38 = v63;
        v39 = 2 * v60;
        v40 = (int *)(v5 + 124);
        v41 = 1;
        do
        {
          v42 = 2LL;
          v43 = *(_OWORD *)(v38 + 8);
          v44 = 32 * (v39 + (unsigned int)(v41 - 1));
          *(_OWORD *)(v44 + v5 + 184) = *(_OWORD *)(v38 - 8);
          *(_OWORD *)(v44 + v5 + 200) = v43;
          do
          {
            if ( *(_QWORD *)v38 < 9 * (*((_QWORD *)v38 - 1) / 0xAuLL) )
              *v40 = v41;
            v38 += 16;
            --v42;
          }
          while ( v42 );
          ++v41;
          ++v40;
          --v12;
        }
        while ( v12 );
      }
      if ( v37 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v36);
      else
        ExReleaseSpinLockExclusive(v36, v37);
    }
  }
}
