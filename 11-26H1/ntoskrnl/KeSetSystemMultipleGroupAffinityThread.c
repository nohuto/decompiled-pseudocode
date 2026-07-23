/*
 * XREFs of KeSetSystemMultipleGroupAffinityThread @ 0x140509604
 * Callers:
 *     PsSetSystemMultipleGroupAffinityThread @ 0x140618710 (PsSetSystemMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 */

__int64 __fastcall KeSetSystemMultipleGroupAffinityThread(__int64 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int i; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  __int64 CurrentThread; // rdi
  int v15; // eax
  char v16; // r10
  __int64 v17; // rcx
  unsigned __int16 *v18; // rcx
  unsigned __int16 j; // ax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // r8
  _WORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  struct _KAFFINITY_EX *v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // ebx
  unsigned __int16 *v32; // rdx
  unsigned __int16 k; // ax
  struct _SINGLE_LIST_ENTRY v35[2]; // [rsp+30h] [rbp-38h] BYREF
  int v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v35[0].Next = 0LL;
  KeGetCurrentIrql();
  if ( KeGetCurrentIrql() > 2u )
    return (unsigned int)-1073741811;
  if ( a2 > *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a3 + 18) >= 3u )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 **)(a3 + 24);
  v7 = *v6;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  v8 = v6[1];
  if ( (unsigned __int16)v7 > (unsigned __int16)v8
    || *((_DWORD *)v6 + 1)
    || (unsigned __int16)v8 < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    return (unsigned int)-1073741811;
  }
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    v10 = 2LL * i;
    if ( WORD1(a1[v10 + 1]) | (unsigned __int16)(WORD2(a1[v10 + 1]) | HIWORD(a1[v10 + 1])) )
      return (unsigned int)-1073741811;
    v11 = LOWORD(a1[v10 + 1]);
    if ( (unsigned __int16)v11 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
      return (unsigned int)-1073741811;
    v8 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * v11 + 4);
    v7 = a1[v10];
    if ( (v8 & v7) != v7 )
      return (unsigned int)-1073741811;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, v7);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v36 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v15 = *(_DWORD *)(CurrentThread + 116);
  v16 = 1;
  if ( (v15 & 8) == 0 )
  {
    *(_DWORD *)(CurrentThread + 116) = v15 | 8;
    if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
      goto LABEL_56;
    goto LABEL_36;
  }
  v17 = *(_QWORD *)(CurrentThread + 1104);
  if ( !v17 )
  {
    v18 = *(unsigned __int16 **)(CurrentThread + 576);
    for ( j = 0; j < *v18; ++j )
    {
      if ( *(_QWORD *)&v18[4 * j + 4] )
      {
        *(_OWORD *)(a3 + 8) = 0LL;
        *(_WORD *)(a3 + 16) = j;
        v20 = *(_QWORD *)&v18[4 * j + 4];
        goto LABEL_53;
      }
    }
LABEL_54:
    *(_BYTE *)(a3 + 19) |= 2u;
    *(_BYTE *)(a3 + 18) = 2;
    goto LABEL_37;
  }
  if ( v17 == a3 )
  {
    if ( *(_BYTE *)(a3 + 18) != 1 )
    {
      v16 = 0;
      goto LABEL_37;
    }
LABEL_56:
    *(_QWORD *)(CurrentThread + 64) = 0LL;
    v31 = -1073741811;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v31;
  }
  if ( (*(_BYTE *)(a3 + 19) & 1) != 0 )
    goto LABEL_56;
  v21 = *(unsigned __int8 *)(v17 + 18);
  if ( !v21 )
    goto LABEL_36;
  v22 = v21 - 1;
  if ( !v22 )
  {
    v32 = *(unsigned __int16 **)(CurrentThread + 576);
    for ( k = 0; k < *v32; ++k )
    {
      if ( *(_QWORD *)&v32[4 * k + 4] )
      {
        *(_OWORD *)(a3 + 8) = 0LL;
        *(_WORD *)(a3 + 16) = k;
        v20 = *(_QWORD *)&v32[4 * k + 4];
LABEL_53:
        *(_QWORD *)(a3 + 8) = v20;
        goto LABEL_54;
      }
    }
    goto LABEL_54;
  }
  if ( v22 == 1 )
LABEL_36:
    *(_BYTE *)(a3 + 18) = 0;
LABEL_37:
  if ( (_WORD)v3 )
  {
    v23 = v3;
    while ( 1 )
    {
      v24 = *(_WORD **)(a3 + 24);
      v25 = *((unsigned __int16 *)a1 + 4);
      v26 = *a1;
      if ( *v24 > (unsigned __int16)v25 )
        goto LABEL_42;
      if ( v24[1] > (unsigned __int16)v25 )
        break;
LABEL_43:
      a1 += 2;
      if ( !--v23 )
        goto LABEL_44;
    }
    *v24 = v25 + 1;
LABEL_42:
    *(_QWORD *)&v24[4 * v25 + 4] |= v26;
    goto LABEL_43;
  }
LABEL_44:
  if ( v16 )
  {
    *(_BYTE *)(a3 + 19) |= 1u;
    *(_QWORD *)a3 = *(_QWORD *)(CurrentThread + 1104);
    *(_QWORD *)(CurrentThread + 1104) = a3;
  }
  v27 = *(struct _KAFFINITY_EX **)(a3 + 24);
  v35[0].Next = 0LL;
  KiSetSystemAffinityThread(CurrentThread, CurrentPrcb, v27, 0LL, 0x800u, v35);
  LOBYTE(v28) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, v35, v28, v29);
  v31 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
  {
    LOBYTE(v30) = 1;
    KiCpuPartitionCheckAffinitization(
      *(_QWORD *)(CurrentThread + 544),
      CurrentThread,
      *(_QWORD *)(CurrentThread + 576),
      v30);
  }
  return v31;
}
