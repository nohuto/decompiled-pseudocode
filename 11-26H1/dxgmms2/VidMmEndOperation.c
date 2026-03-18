/*
 * XREFs of VidMmEndOperation @ 0x14010B1C8
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmEndOperation(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // r15d
  int v5; // ebp
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  int v11; // r14d
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+24h] [rbp-84h]
  int v33; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+2Ch] [rbp-7Ch]
  int v35; // [rsp+30h] [rbp-78h]
  unsigned __int64 v36; // [rsp+38h] [rbp-70h]
  unsigned __int64 v37; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  unsigned __int64 v39; // [rsp+50h] [rbp-58h]
  unsigned __int64 v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-48h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+B0h] [rbp+8h]
  int v44; // [rsp+B8h] [rbp+10h]
  int v45; // [rsp+C8h] [rbp+20h]

  if ( a2 )
  {
    v4 = a3;
    v5 = a2;
    if ( *(_QWORD *)(a1 + 248) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v7 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 288);
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
      v34 = *(_DWORD *)(a1 + 364);
      v42 = *(_QWORD *)(a1 + 312);
      v33 = *(_DWORD *)(a1 + 360);
      v41 = *(_QWORD *)(a1 + 304);
      v32 = *(_DWORD *)(a1 + 356);
      v40 = *(_QWORD *)(a1 + 296);
      v31 = *(_DWORD *)(a1 + 380);
      v39 = *(_QWORD *)(a1 + 344);
      v45 = *(_DWORD *)(a1 + 376);
      v38 = *(_QWORD *)(a1 + 336);
      v43 = *(_DWORD *)(a1 + 372);
      v37 = *(_QWORD *)(a1 + 328);
      v44 = *(_DWORD *)(a1 + 368);
      v36 = *(_QWORD *)(a1 + 320);
      v35 = *(_DWORD *)(a1 + 352);
      v9 = *(_QWORD *)(a1 + 280);
      if ( v9 > 0x100000000LL )
      {
        v12 = 21;
      }
      else if ( !_BitScanReverse((unsigned int *)&v11, v9 >> 12) )
      {
        v12 = 0;
      }
      else
      {
        v12 = v11 + 1;
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(a1 + 4024, 0LL);
      *(_QWORD *)(a1 + 4032) = KeGetCurrentThread();
      ++*(_DWORD *)(a1 + 4LL * v12 + 416);
      v13 = *(_QWORD *)(a1 + 8LL * v12 + 504);
      if ( v13 <= v7 )
        v13 = v7;
      *(_QWORD *)(a1 + 8LL * v12 + 680) += v7;
      *(_QWORD *)(a1 + 8LL * v12 + 504) = v13;
      *(_DWORD *)(a1 + 4LL * v12 + 856) += v44;
      v14 = *(_QWORD *)(a1 + 8LL * v12 + 944);
      if ( v14 <= v36 )
        v14 = v36;
      *(_QWORD *)(a1 + 8LL * v12 + 1120) += v36;
      *(_QWORD *)(a1 + 8LL * v12 + 944) = v14;
      *(_DWORD *)(a1 + 4LL * v12 + 1296) += v43;
      v15 = *(_QWORD *)(a1 + 8LL * v12 + 1384);
      if ( v15 <= v37 )
        v15 = v37;
      *(_QWORD *)(a1 + 8LL * v12 + 1560) += v37;
      *(_QWORD *)(a1 + 8LL * v12 + 1384) = v15;
      *(_DWORD *)(a1 + 4LL * v12 + 1736) += v45;
      v16 = *(_QWORD *)(a1 + 8LL * v12 + 1824);
      if ( v16 <= v38 )
        v16 = v38;
      *(_QWORD *)(a1 + 8LL * v12 + 2000) += v38;
      *(_QWORD *)(a1 + 8LL * v12 + 1824) = v16;
      *(_DWORD *)(a1 + 4LL * v12 + 2176) += v31;
      v17 = *(_QWORD *)(a1 + 8LL * v12 + 2264);
      if ( v17 <= v39 )
        v17 = v39;
      *(_QWORD *)(a1 + 8LL * v12 + 2440) += v39;
      *(_QWORD *)(a1 + 8LL * v12 + 2264) = v17;
      *(_DWORD *)(a1 + 4LL * v12 + 2616) += v32;
      v18 = *(_QWORD *)(a1 + 8LL * v12 + 2704);
      if ( v18 <= v40 )
        v18 = v40;
      *(_QWORD *)(a1 + 8LL * v12 + 2880) += v40;
      *(_QWORD *)(a1 + 8LL * v12 + 2704) = v18;
      *(_DWORD *)(a1 + 4LL * v12 + 3056) += v33;
      v19 = *(_QWORD *)(a1 + 8LL * v12 + 3144);
      if ( v19 <= v41 )
        v19 = v41;
      *(_QWORD *)(a1 + 8LL * v12 + 3320) += v41;
      *(_QWORD *)(a1 + 8LL * v12 + 3144) = v19;
      *(_DWORD *)(a1 + 4LL * v12 + 3496) += v34;
      v20 = *(_QWORD *)(a1 + 8LL * v12 + 3584);
      if ( v20 <= v42 )
        v20 = v42;
      *(_QWORD *)(a1 + 8LL * v12 + 3760) += v42;
      *(_QWORD *)(a1 + 8LL * v12 + 3584) = v20;
      *(_DWORD *)(a1 + 4LL * v12 + 3936) += v35;
      *(_QWORD *)(a1 + 4032) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 4024, 0LL);
      KeLeaveCriticalRegion();
      if ( v8 )
      {
        v21 = *(_DWORD *)(a1 + 384);
        v22 = *(_QWORD *)(v8 + 184);
        v23 = *(_DWORD *)(a1 + 380);
        v24 = *(_DWORD *)(a1 + 392);
        v25 = *(_DWORD *)(a1 + 388);
        *(_DWORD *)(v22 + 744) += v21;
        *(_DWORD *)(v22 + 748) += v25;
        *(_DWORD *)(v22 + 752) += v24;
        *(_DWORD *)(v22 + 756) += v23;
        *(_DWORD *)(v22 + 760) += v4;
        if ( v21 || v25 || v24 || v23 || (_BYTE)v4 )
          *(_BYTE *)(v22 + 764) = 1;
      }
      v26 = 0xFFFF;
      v27 = 5LL * *(unsigned int *)(a1 + 5328);
      v28 = *(_DWORD *)(a1 + 40LL * *(unsigned int *)(a1 + 5328) + 4080);
      *(_QWORD *)(a1 + 8 * v27 + 4048) = *(_QWORD *)(a1 + 288);
      *(LARGE_INTEGER *)(a1 + 8 * v27 + 4056) = PerformanceCounter;
      *(_QWORD *)(a1 + 8 * v27 + 4064) = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 8 * v27 + 4072) = *(_QWORD *)(a1 + 264);
      v29 = (2 * v4) | v5 & 0xFFFFFFFD | v28 & 0xFFFFFFFC;
      *(_DWORD *)(a1 + 8 * v27 + 4080) = v29;
      if ( *(_DWORD *)(a1 + 352) < 0xFFFFu )
        v26 = *(_DWORD *)(a1 + 352);
      v30 = v29 ^ (v29 ^ (4 * v26)) & 0x3FFFC;
      *(_DWORD *)(a1 + 8 * v27 + 4080) = v30;
      *(_DWORD *)(a1 + 8 * v27 + 4080) = v30 & 0x3FFFF | (*(_DWORD *)(a1 + 272) << 18);
      *(_DWORD *)(a1 + 5328) = ((unsigned __int8)*(_DWORD *)(a1 + 5328) + 1) & 0x1F;
      *(_QWORD *)(a1 + 248) = 0LL;
    }
  }
}
