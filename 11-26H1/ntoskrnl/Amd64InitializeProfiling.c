/*
 * XREFs of Amd64InitializeProfiling @ 0x140BF5590
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     Amd64FreeCounter @ 0x1405A6504 (Amd64FreeCounter.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 Amd64InitializeProfiling()
{
  unsigned int Number; // r15d
  unsigned int v1; // edi
  unsigned int *v2; // rsi
  unsigned int v3; // ebp
  int v4; // r12d
  __int64 v5; // r14
  unsigned int v11; // r15d
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r8
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r8
  unsigned int MaximumRegisteredProcessorCount; // ecx
  struct _KPRCB *v30; // rax
  unsigned int v31; // r14d
  unsigned __int64 *v32; // r13
  unsigned __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // r15d
  void *Memory; // rax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned __int64 *v39; // r8
  unsigned int i; // esi
  unsigned __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r15
  unsigned int v44; // ebp
  char *v45; // rax
  char *v46; // r12
  unsigned int j; // edx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  unsigned __int16 *v54; // rbx
  __int64 result; // rax
  __int64 v56; // rbx
  unsigned int v57; // ebx
  char *v58; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v59; // [rsp+38h] [rbp-60h]
  int v60; // [rsp+A0h] [rbp+8h]
  unsigned int v61; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v62; // [rsp+B8h] [rbp+20h]

  Number = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v58 = 0LL;
  v2 = (unsigned int *)&xmmword_140F879E0;
  v3 = 0;
  v4 = 0;
  v5 = 35LL;
  if ( !Number )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    if ( (_RCX & 0x800000) != 0 )
    {
      dword_140F87970 |= 1u;
      v11 = 6;
      v60 = 6;
      v12 = -1073675776;
      v13 = 0LL;
      v14 = 6LL;
      do
      {
        *(_DWORD *)((char *)&xmmword_140F879E0 + v13) = v12;
        *(_DWORD *)((char *)&xmmword_140F87980 + v13) = v12 + 1;
        v12 += 2;
        v13 += 4LL;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      v11 = 4;
      xmmword_140F87980 = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010007c0010006c0010005c0010004);
      v60 = 4;
      xmmword_140F879E0 = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010003c0010002c0010001c0010000);
    }
    if ( (_RCX & 0x1000000) != 0 && (_RCX & 0x400000) != 0 )
    {
      v4 = 4;
      dword_140F87970 |= 2u;
      *(__int128 *)((char *)&xmmword_140F87980 + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010247c0010245c0010243c0010241);
      *(__int128 *)((char *)&xmmword_140F879E0 + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010246c0010244c0010242c0010240);
      qword_140F87968 = (__int64)&qword_140F87960;
      qword_140F87960 = (__int64)&qword_140F87960;
    }
    if ( (_RCX & 0x10000000) != 0 && (_RCX & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = v4 + v11;
      dword_140F87970 |= 4u;
      v3 = 4;
      if ( CurrentPrcb->CpuType != 22 )
        v3 = 6;
      v17 = -1073675728;
      v18 = v3;
      do
      {
        *((_DWORD *)&xmmword_140F879E0 + v16) = v17;
        *((_DWORD *)&xmmword_140F87980 + v16) = v17 + 1;
        v17 += 2;
        v16 = (unsigned int)(v16 + 1);
        --v18;
      }
      while ( v18 );
      qword_140F879C8 = (__int64)&qword_140F879C0;
      qword_140F879C0 = (__int64)&qword_140F879C0;
    }
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 && (KeGetCurrentPrcb()->CpuType != 23 || KeGetCurrentPrcb()->CpuModel >= 0x1Fu) )
        dword_140F87970 |= 8u;
    }
    HalpProfileIntervalLimits = (__int64)Amd64ProfileIntervalLimits;
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v61 = MaximumRegisteredProcessorCount;
    v30 = KeGetCurrentPrcb();
    v31 = 0;
    v59 = v30;
    v62 = &v30->HalReserved[2];
    v32 = &v30->HalReserved[2];
    while ( v31 < MaximumRegisteredProcessorCount )
    {
      v32 = &v30->HalReserved[2];
      v33 = v30->HalReserved[2];
      v34 = 96LL * v31;
      *(_DWORD *)(v34 + v33 + 8) = v11 - 1;
      *(_DWORD *)(v34 + v33 + 4) = v11;
      *(_DWORD *)(v34 + v33) = 0;
      v35 = 48 * v11;
      Memory = (void *)HalpMmAllocateMemory(v35);
      *(_QWORD *)(v34 + v33 + 16) = Memory;
      if ( !Memory )
        KeBugCheckEx(0x5Cu, 0x9002uLL, v35, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x81FuLL);
      memset_0(Memory, 0, v35);
      *(_QWORD *)(v34 + v33 + 24) = 1LL;
      *(_DWORD *)(v34 + v33 + 32) = 0;
      v37 = v4 - 1;
      *(_QWORD *)(v34 + v33 + 40) = 0LL;
      *(_DWORD *)(v34 + v33 + 48) = 100;
      *(_DWORD *)(v34 + v33 + 52) = v4;
      *(_QWORD *)(v34 + v33 + 64) = 0LL;
      if ( !v4 )
        v37 = 0;
      *(_DWORD *)(v34 + v33 + 56) = v37;
      v38 = v3 - 1;
      *(_DWORD *)(v34 + v33 + 72) = 101;
      *(_DWORD *)(v34 + v33 + 76) = v3;
      *(_QWORD *)(v34 + v33 + 88) = 0LL;
      if ( !v3 )
        v38 = 0;
      v11 = v60;
      ++v31;
      MaximumRegisteredProcessorCount = v61;
      *(_DWORD *)(v34 + v33 + 80) = v38;
      v30 = v59;
    }
    v39 = v62;
    for ( i = 0; i < MaximumRegisteredProcessorCount; ++i )
    {
      v41 = *v32;
      v42 = 96LL * i;
      v43 = *(_QWORD *)(v42 + *v32 + 16);
      v44 = 16 * *(_DWORD *)(v42 + *v32 + 4);
      if ( v44 )
      {
        v45 = (char *)HalpMmAllocateMemory(v44);
        v58 = v45;
        v46 = v45;
        if ( !v45 )
          KeBugCheckEx(0x5Cu, 0x9002uLL, v44, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x855uLL);
        memset_0(v45, 0, v44);
        v39 = v62;
      }
      else
      {
        v46 = v58;
      }
      for ( j = 0; j < *(_DWORD *)(v42 + v41 + 4); *(_DWORD *)(v43 + 8 * v49 + 28) = 0 )
      {
        v48 = j++;
        v49 = 6 * v48;
        *(_QWORD *)(v43 + 8 * v49 + 16) = &v46[16 * v48];
      }
      MaximumRegisteredProcessorCount = v61;
      v32 = v39;
    }
    HalpProfileSourceDescriptorListLock = 0LL;
    qword_140FBC2E8 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    v50 = 0;
    v5 = 35LL;
    while ( 1 )
    {
      v51 = 320LL * v50;
      if ( !byte_140E03F0D[v51] )
        goto LABEL_46;
      if ( *(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v51) == 50 && (dword_140F87970 & 8) != 0 )
        break;
LABEL_48:
      if ( ++v50 >= 0x23 )
      {
        Number = 0;
        v2 = (unsigned int *)&xmmword_140F879E0;
        goto LABEL_50;
      }
    }
    byte_140E03F0D[v51] = 0;
LABEL_46:
    v52 = (_QWORD *)((char *)&unk_140E03EF8 + v51);
    v53 = (_QWORD *)qword_140FBC2E8;
    if ( *(__int64 **)qword_140FBC2E8 != &HalpProfileSourceDescriptorListHead )
      __fastfail(3u);
    ++HalpProfileSourceDescriptorCount;
    *v52 = &HalpProfileSourceDescriptorListHead;
    v52[1] = v53;
    *v53 = v52;
    qword_140FBC2E8 = (__int64)v52;
    goto LABEL_48;
  }
LABEL_50:
  if ( (dword_140F87970 & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v54 = (unsigned __int16 *)&unk_140E03F10;
  do
  {
    KeAddProcessorAffinityEx(v54, Number);
    v54 += 160;
    --v5;
  }
  while ( v5 );
  result = KiProcessorBlock[Number];
  v56 = *(_QWORD *)(result + 88);
  if ( v56 )
  {
    v57 = *(_DWORD *)(v56 + 4);
    if ( v57 )
    {
      do
      {
        __writemsr(*v2, 0LL);
        result = Amd64FreeCounter(v1++, 0);
        ++v2;
      }
      while ( v1 < v57 );
    }
  }
  return result;
}
