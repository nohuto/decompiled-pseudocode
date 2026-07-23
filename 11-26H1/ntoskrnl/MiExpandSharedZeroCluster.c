/*
 * XREFs of MiExpandSharedZeroCluster @ 0x1403DCAFC
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPteEvaluated @ 0x1403DCEC8 (MiIsPteEvaluated.c)
 *     MiComputeZeroClusterMaximum @ 0x1403DCF50 (MiComputeZeroClusterMaximum.c)
 *     MiUpdatePageTableUseCount @ 0x1403DD1D0 (MiUpdatePageTableUseCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbx
  __int16 *v5; // rcx
  _QWORD *v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  unsigned int *v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // r11
  __int64 ProtoPteAddress; // rax
  __int64 *v14; // r9
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r10
  __int64 PteShadow; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  int v22; // ecx
  unsigned __int64 PrototypePteDirect; // rax
  __int64 *v24; // r11
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-79h]
  __int16 v29; // [rsp+40h] [rbp-69h] BYREF
  __int128 *v30; // [rsp+48h] [rbp-61h]
  __int64 v31; // [rsp+50h] [rbp-59h]
  __int64 v32; // [rsp+58h] [rbp-51h]
  __int64 v33; // [rsp+60h] [rbp-49h]
  char v34; // [rsp+110h] [rbp+67h]
  unsigned __int64 v35; // [rsp+118h] [rbp+6Fh]
  unsigned int *v36; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v37; // [rsp+128h] [rbp+7Fh]

  memset_0(&v29, 0, 0x78uLL);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(__int16 **)(a1 + 48);
  v27 = 0LL;
  v6 = *(_QWORD **)(v2 + 128);
  v36 = 0LL;
  v34 = 0;
  v35 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x80000) == 0 && MiVadPageSizes[(v8 >> 17) & 3] == 16 )
  {
    *((_QWORD *)&v27 + 1) = 0x10000LL;
    *(_QWORD *)&v27 = v4 & 0xFFFFFFFFFFFF0000uLL;
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    v29 = 2;
    v30 = &v27;
    v5 = &v29;
    v31 = 1LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 1;
  }
  v28 = MiComputeZeroClusterMaximum(v5, v4, &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v2);
  v37 = v4 >> 12;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v28 )
    return 1LL;
  while ( !(unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
  {
    ProtoPteAddress = MiGetProtoPteAddress(v2, v12, 0xCu, &v36);
    v14 = (__int64 *)ProtoPteAddress;
    if ( !ProtoPteAddress || !v36 || v10 && v36 != v10 )
      break;
    if ( ((*(_QWORD *)(a1 + 24) ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    v15 = v37;
    v16 = 0xFFFFF6FB7DBED000uLL;
    if ( !v10 )
      v10 = v36;
    if ( v37 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) <= v7 )
    {
      PteShadow = *(_QWORD *)ProtoPteAddress;
      if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v14, *v14);
      if ( (PteShadow & 1) == 0 && PteShadow && (PteShadow & 0xC00) == 0 && (PteShadow & 8) == 0 )
      {
        if ( !v3 )
          v9 = v14;
        ++v3;
        v11 += 8LL;
        v37 = v15 + 1;
        if ( v3 < v28 )
          continue;
      }
    }
    goto LABEL_21;
  }
  v16 = 0xFFFFF6FB7DBED000uLL;
LABEL_21:
  if ( v3 <= 1 || v34 && v11 <= ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  LODWORD(v19) = 0;
  v20 = 0;
  do
  {
    v21 = v19;
    if ( (unsigned __int64)v9 >= v16 && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      MiReadPteShadow((unsigned __int64)v9, *v9);
    v22 = *(_DWORD *)(a1 + 32);
    if ( v22 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect((unsigned __int64)v9);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v22);
    v25 = PrototypePteDirect;
    v26 = *v24;
    if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
      v26 = MiReadPteShadow((unsigned __int64)v24, *v24);
    if ( !v26 )
      *v24 = v25;
    v16 = 0xFFFFF6FB7DBED000uLL;
    v19 = v21 + 1;
    if ( v26 )
      v19 = v21;
    ++v20;
    ++v9;
  }
  while ( v20 < (unsigned __int64)v3 );
  if ( (_DWORD)v19 )
    MiUpdatePageTableUseCount(v35, v19);
  return v3;
}
