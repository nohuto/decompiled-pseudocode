/*
 * XREFs of KeMarkPcrHiberPhase @ 0x140BF8F24
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall KeMarkPcrHiberPhase(size_t *Address)
{
  size_t v1; // rbx
  char *v2; // r15
  ULONG_PTR v3; // r9
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rdi
  ULONG_PTR v7; // r14
  void *v8; // rdi
  _QWORD **v9; // rsi
  __int64 v10; // rbp
  _QWORD *i; // rdi
  void *v12; // r8
  __int64 v13; // rbp
  _QWORD **v14; // rsi
  _QWORD *j; // rdi
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  void *v18; // r8
  void *v19; // r8
  _QWORD *v20; // rsi
  void *v21; // rdi
  ULONG_PTR v22; // rbx
  struct _KTHREAD *k; // rbx

  v1 = Address[4];
  v2 = (char *)Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    v3 = ((((_DWORD)KeNumberProcessors_0 + 896) << 6) & 0xFFFFF000) + 28672;
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0xD080uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0xCF00uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, v2, 0x68uLL, 0x6370654Bu);
    Address = &KiBootProcessorIdtSize;
    v3 = 0LL;
  }
  PoSetHiberRange(0LL, 0x10000u, Address, v3, 0x6370654Bu);
  v4 = 1;
  v5 = 8LL;
  do
  {
    v6 = *(_QWORD *)&v2[v5 + 28];
    if ( v4 == 1 || v4 == 2 || v4 - 3 <= 1 )
    {
      v7 = (unsigned int)KeIstStackSize;
      if ( KiKvaShadow )
      {
        PoSetHiberRange(0LL, 0x10000u, (PVOID)(v6 - 464), 0x200uLL, 0x6370654Bu);
        v8 = (void *)(*(_QWORD *)(v6 + 8) - v7 + 32);
      }
      else
      {
        v8 = (void *)(v6 - (unsigned int)KeIstStackSize);
      }
      PoSetHiberRange(0LL, 0x10000u, v8, v7, 0x6370654Bu);
      if ( (_BYTE)KiKernelCetEnabled )
        PoSetHiberRange(
          0LL,
          0x10000u,
          (PVOID)(*(_QWORD *)(*(_QWORD *)(v1 + 39920) + v5) - 4088LL),
          0x1000uLL,
          0x7373654Bu);
    }
    ++v4;
    v5 += 8LL;
  }
  while ( v4 <= 4 );
  if ( !KiFredEnabled )
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358) + 1LL, 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342) + 1LL, 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 14496) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 34664) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeExceptionStackSize),
    (unsigned int)KeExceptionStackSize,
    0x6573654Bu);
  v9 = (_QWORD **)(v1 + 14400);
  v10 = 2LL;
  do
  {
    for ( i = *v9; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v9 += 6;
    --v10;
  }
  while ( v10 );
  v12 = *(void **)(v1 + 14352);
  if ( v12 )
  {
    PoSetHiberRange(0LL, 0x10000u, v12, 0x10uLL, 0x7264654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)(*(_QWORD *)(v1 + 14352) + 8LL),
      8 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 14352) + 4LL) >> 5),
      0x7264654Bu);
    v13 = *(_QWORD *)(v1 + 14352);
    v14 = *(_QWORD ***)(v13 + 8);
    for ( j = v14; j; PoSetHiberRange(0LL, 0x10000u, j, 0x20uLL, 0x7264654Bu) )
    {
      v16 = (_QWORD *)*j;
      j = v16;
      if ( ((unsigned __int8)v16 & 1) != 0 )
        break;
LABEL_30:
      if ( !v16 )
        goto LABEL_32;
    }
    for ( ++v14;
          (unsigned __int64)v14 < *(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v13 + 4) >> 5);
          ++v14 )
    {
      j = *v14;
      if ( ((unsigned __int8)*v14 & 1) == 0 )
      {
        v16 = *v14;
        goto LABEL_30;
      }
    }
  }
LABEL_32:
  v17 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v17 = KeXStateLength + 815;
    if ( (_BYTE)KiKernelCetEnabled )
      v17 = KeXStateLength + 847;
  }
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 36864), v17, 0x7873654Bu);
  v18 = *(void **)(v1 + 1792);
  if ( v18 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v18,
      MEMORY[0xFFFFF78000000600]
    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
    + (unsigned int)KiIptSaveAreaLength
    + 64LL,
      0x7373654Bu);
  v19 = *(void **)(v1 + 34880);
  if ( v19 )
    PoSetHiberRange(0LL, 0x10000u, v19, 0x580uLL, 0x7349654Bu);
  if ( qword_140F15098 )
    PoSetHiberRange(0LL, 0x10000u, qword_140F15098, 16 * (unsigned int)(unsigned __int8)qword_140F15088, 0x7272744Du);
  if ( qword_140F150A0 )
    PoSetHiberRange(0LL, 0x10000u, qword_140F150A0, 0x58uLL, 0x7272744Du);
  v20 = *(_QWORD **)(v1 + 8);
  v21 = (void *)((v20[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v22 = v20[7] - (_QWORD)v21;
  PoSetHiberRange(0LL, 0x10000u, v20, 0x798uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v21, v22, 0x7473654Bu);
  for ( k = (struct _KTHREAD *)KiSupervisorXStateFeaturesLock.QuantumTarget;
        k != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.QuantumTarget;
        k = *(struct _KTHREAD **)&k->Header.Lock )
  {
    PoSetHiberRange(0LL, 0x10000u, k, 0x30uLL, 0x7473654Bu);
  }
  if ( (_BYTE)KiKernelCetEnabled )
    PoSetHiberRange(
      0LL,
      0x10000u,
      (PVOID)((v20[132] & 0xFFFFFFFFFFFFF000uLL) + 4096),
      v20[131] - ((v20[132] & 0xFFFFFFFFFFFFF000uLL) + 4096) - 4096,
      0x7373654Bu);
  PoSetHiberRange(0LL, 0x10000u, ExpSysDbgLock.WaitBlockList, 0x1000uLL, 0x706C7845u);
}
