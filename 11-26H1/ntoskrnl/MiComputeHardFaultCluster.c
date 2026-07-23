/*
 * XREFs of MiComputeHardFaultCluster @ 0x14044FB00
 * Callers:
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x1403715AC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiComputePageFileReadAttributes @ 0x14037257C (MiComputePageFileReadAttributes.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiComputeHardFaultCluster(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, char a5)
{
  __int128 v9; // xmm1
  unsigned __int64 v10; // r15
  bool v11; // zf
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  int v16; // r8d
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // r13d
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r14
  __int64 v24; // rbp
  unsigned __int64 v25; // r10
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  _KPROCESS *v29; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v31; // rax
  __int16 v32; // cx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+30h] [rbp-98h]
  unsigned __int64 v37; // [rsp+40h] [rbp-88h]
  int v39; // [rsp+F0h] [rbp+28h]

  memset_0(&v35, 0, 0x78uLL);
  v9 = a2[1];
  v10 = *((_QWORD *)a2 + 2);
  v11 = *(_BYTE *)a2 == 1;
  v35 = *a2;
  v37 = *((_QWORD *)a2 + 4);
  v39 = a5 & 1;
  v36 = v9;
  if ( v11 )
  {
    v12 = v37;
  }
  else
  {
    v33 = *((_QWORD *)a2 + 1);
    v34 = 2LL * *((_QWORD *)a2 + 3);
    LOBYTE(v35) = 1;
    v12 = ((a3 & 0xFFFFFFFFFFFFF000uLL) - (*(_QWORD *)(v33 + 8 * v34) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
    v37 = v12;
  }
  v13 = *(_QWORD *)(16LL * *((_QWORD *)&v36 + 1) + *((_QWORD *)&v35 + 1)) + (v12 << 12);
  MiAdvanceFaultList(&v35);
  v14 = *((_QWORD *)&v36 + 1);
  v15 = 1LL;
  if ( *((_QWORD *)&v36 + 1) < v10 )
  {
    v16 = v39;
    v17 = a1;
    v18 = 256LL;
    if ( v39 )
    {
      v19 = *(unsigned int *)(a1 + 1304);
      if ( v19 < 0x100 )
        v18 = (unsigned int)v19;
    }
    if ( a4 )
    {
      v20 = (*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) - (v13 >> 12);
      if ( v18 > v20 + 1 )
        v18 = v20 + 1;
    }
    v21 = 0;
    v22 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( (a5 & 2) != 0 )
    {
      v21 = 1;
      if ( a4 )
      {
        if ( !(*(unsigned int *)(a4 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 32)) )
          v22 = 0LL;
      }
    }
    if ( v18 > 1 )
    {
      v23 = v36;
      v24 = *((_QWORD *)&v35 + 1);
      v25 = v37;
      while ( !v22 )
      {
LABEL_20:
        v27 = *(_QWORD *)(v24 + 16 * v14) + (v25 << 12);
        if ( (v27 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v13 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v15;
          if ( ++v25 == ((*(_QWORD *)(v24 + 16 * v14) & 0xFFFuLL) + *(_QWORD *)(v24 + 16 * v14 + 8) + 4095LL) >> 12 )
          {
            ++v14;
            v25 = 0LL;
            if ( v14 < v23 && !*(_QWORD *)(v24 + 16 * v14 + 8) )
              v14 = v23;
          }
          if ( v14 != v10 )
          {
            v16 = v39;
            v13 = v27;
            v17 = a1;
            if ( v15 < v18 )
              continue;
          }
        }
        return (unsigned int)v15;
      }
      if ( (v22 & 0xFFF) == 0 )
        return (unsigned int)v15;
      v26 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (v26 & 1) == 0 )
        {
LABEL_17:
          if ( v21 )
          {
            if ( (v26 & 0x400) == 0 )
              return (unsigned int)v15;
          }
          else if ( (v26 & 0xC00) != 0
                 || (v26 & 8) == 0
                 || v16 != ((unsigned __int16)v26 >> 12 == *(_DWORD *)(v17 + 1300)) )
          {
            return (unsigned int)v15;
          }
          v22 += 8LL;
          goto LABEL_20;
        }
        if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
        {
          v29 = MiPteHasShadow();
          if ( v29 )
          {
            KernelWaitTime = v29[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v31 = *(_QWORD *)(KernelWaitTime + 8 * ((v22 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                LOWORD(v26) = v26 | 0x20;
              v32 = v26;
              LOWORD(v26) = v26 | 0x42;
              if ( (v31 & 0x42) == 0 )
                LOWORD(v26) = v32;
            }
          }
        }
      }
      if ( (v26 & 1) != 0 )
        return (unsigned int)v15;
      goto LABEL_17;
    }
  }
  return (unsigned int)v15;
}
