/*
 * XREFs of KiInitializeProcessorState @ 0x1407BE390
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KiAssignProcessorNumberToPrcb @ 0x1405F1DB8 (KiAssignProcessorNumberToPrcb.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KiInitializeProcessorState(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  KPCR *Pcr; // rbx
  __int64 v7; // r15
  unsigned __int16 Limit; // ax
  unsigned __int64 v9; // r14
  const void *v10; // rdx
  void *v11; // rcx
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  int v17; // edx
  int v18; // eax
  _QWORD *v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx

  Pcr = KeGetPcr();
  memset_0(*(void **)(a3 + 8), 0, *(unsigned int *)(a3 + 16));
  v7 = *(_QWORD *)(a3 + 8);
  memset_0(a1, 0, 0x5E0uLL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v9 = v7 + *(unsigned int *)(a3 + 36);
  a1[11] = v9;
  *((_WORD *)a1 + 43) = Limit;
  memmove(
    (void *)v9,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  v10 = *(const void **)&PspSiloMonitorLock.PriorityFloorCounts[24];
  *((_WORD *)a1 + 51) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v11 = (void *)(v7 + *(unsigned int *)(a3 + 40));
  a1[13] = (unsigned __int64)v11;
  memmove(v11, v10, (unsigned int)KiBootProcessorIdtSize);
  v12 = v9 - 8112;
  *(_BYTE *)(v7 + 82) = *(_BYTE *)(a3 + 24);
  v13 = 4LL;
  *(_DWORD *)(v7 + 420) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(v7 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(v7 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v14 = (_QWORD *)(v9 - 8112 + 36);
  *(_QWORD *)(v9 - 8000) = v7;
  *(_BYTE *)(v9 + 68) = (unsigned int)(v9 - 8112) >> 16;
  *(_BYTE *)(v9 + 71) = (unsigned int)(v9 - 8112) >> 24;
  *(_DWORD *)(v9 + 72) = (v9 - 8112) >> 32;
  *(_WORD *)(v9 + 66) = v9 - 8112;
  do
  {
    *v14 = *(_QWORD *)((char *)v14 + a3 - (v9 - 8112) + 60);
    ++v14;
    --v13;
  }
  while ( v13 );
  v15 = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(v15 - 40) = &KiExceptionDispatchOnExceptionStackContinue;
  *(_QWORD *)(v7 + 37272) = *(_QWORD *)(a3 + 72);
  *(_QWORD *)(v7 + 35048) = v15 - 80;
  *(_QWORD *)(v12 + 4) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL);
  if ( !(unsigned int)KiEnableKvaShadowing(v7 + 384, v9 - 12208, a3) )
    return 0LL;
  KiAssignProcessorNumberToPrcb(v7 + 384, (char *)(a3 + 32), *(_DWORD *)a3);
  v17 = *(unsigned __int8 *)(v7 + 592) | (*(unsigned __int8 *)(v7 + 593) << 14) | 0x3C00;
  v18 = *(_DWORD *)(v9 + 84);
  *(_WORD *)(v9 + 80) = *(unsigned __int8 *)(v7 + 592) | (*(unsigned __int8 *)(v7 + 593) << 14) | 0x3C00;
  *(_DWORD *)(v9 + 84) = v18 ^ (v17 ^ v18) & 0xF0000;
  v19 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 56LL) - 8LL);
  v20 = KeSmapEnabled == 0;
  *v19 = 0LL;
  a1[50] = (unsigned __int64)a2;
  a1[65] = (unsigned __int64)KiSystemStartup;
  a1[53] = (unsigned __int64)v19;
  *((_DWORD *)a1 + 82) = 2818064;
  *((_DWORD *)a1 + 83) = 5439531;
  a1[42] = 1572907LL;
  if ( !v20 )
    *((_DWORD *)a1 + 85) = 0x40000;
  v21 = __readcr0();
  *a1 = v21;
  v22 = __readcr3();
  *((_WORD *)a1 + 56) = 64;
  a1[2] = v22 & 0xFFFFFFFFFFFFF000uLL;
  *(_BYTE *)(v9 + 69) = -119;
  if ( VslVsmEnabled )
    *(_BYTE *)(v9 + 69) = -117;
  v23 = __readcr4();
  a1[3] = v23 & 0xFFFFFFFFFF7FFFFFuLL;
  v24 = *(_QWORD *)(a3 + 48);
  a2[16] = *(_QWORD *)(a3 + 64);
  a2[19] = v24;
  a2[18] = &unk_140FC9F40;
  a2[17] = v7 + 384;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    *(_QWORD *)(a2[30] + 3712LL) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 1032LL);
    *(_QWORD *)(a2[30] + 3720LL) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a2[30] + 3728LL) = *(_QWORD *)(a3 + 224);
  }
  if ( KiFredEnabled )
  {
    a1[29] = __readmsr(0x1D4u);
    a1[30] = __readmsr(0x1D0u);
    a1[31] = *(_QWORD *)(v12 + 4);
    a1[32] = *(_QWORD *)(v12 + 52);
    a1[33] = *(_QWORD *)(v12 + 36);
  }
  return v7 + 384;
}
