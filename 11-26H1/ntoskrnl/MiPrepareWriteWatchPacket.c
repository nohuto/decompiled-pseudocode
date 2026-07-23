/*
 * XREFs of MiPrepareWriteWatchPacket @ 0x140A929A0
 * Callers:
 *     NtGetWriteWatch @ 0x140A927B0 (NtGetWriteWatch.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiGetVadMandatoryPageSize @ 0x140319EC0 (MiGetVadMandatoryPageSize.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiGetVadPtesInCluster @ 0x1404F234C (MiGetVadPtesInCluster.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiPrepareWriteWatchPacket(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r12
  char PreviousMode; // si
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  volatile void *v7; // r13
  _QWORD *v8; // rdi
  __int64 ULong64FromUser; // rax
  unsigned __int64 v10; // rax
  int ULongFromUser; // eax
  __int64 result; // rax
  __int64 VadPtesInCluster; // rdi
  ULONG_PTR v14; // rcx
  _KPROCESS *v15; // rcx
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rax
  unsigned int VadFlags; // ecx
  __int64 v19; // r9
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v24; // rax
  int CurrentProcessorColor; // eax
  __int64 v26; // rdx
  __int64 PoolMm; // rax
  unsigned int v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  v29 = 0LL;
  if ( (*(_DWORD *)(a1 + 24) & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v28) = PreviousMode;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(volatile void **)a1;
  v8 = *(_QWORD **)(a1 + 8);
  *(_BYTE *)(a1 + 132) = PreviousMode;
  if ( PreviousMode )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225713LL;
    if ( 0x7FFFFFFF0000LL - v5 < v6 )
      return 3221225714LL;
    ULong64FromUser = RtlReadULong64FromUser(v8);
    RtlWriteULong64ToUser(v8, ULong64FromUser);
    v10 = RtlReadULong64FromUser(v8);
  }
  else
  {
    v10 = *v8;
  }
  *(_QWORD *)(a1 + 88) = v10;
  if ( !v10 )
    return 3221225715LL;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225715LL;
  if ( PreviousMode )
  {
    ProbeForWrite(v7, 8 * v10, 8u);
    ULongFromUser = RtlReadULongFromUser(*(unsigned int **)(a1 + 48));
    RtlWriteULongToUser(*(_DWORD **)(a1 + 48), ULongFromUser);
  }
  *(_QWORD *)(a1 + 192) = a1 + 200;
  if ( *(_QWORD *)(a1 + 88) > 0x100uLL )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(65LL, 8 * v26, 1665625421, CurrentProcessorColor | 0x80000000);
    *(_QWORD *)(a1 + 192) = PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
  }
  VadPtesInCluster = 1LL;
  *(_QWORD *)(a1 + 112) = 1LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( v14 == -1LL )
  {
    v15 = Process;
    v28 = 0;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v14,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x77576D4Du,
               &v29,
               0LL,
               0LL);
    v28 = result;
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 128) |= 2u;
    v15 = (_KPROCESS *)v29;
  }
  *(_QWORD *)(a1 + 104) = v15;
  v16 = v5 + v6 - 1;
  if ( v5 > v16 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 56) = v16;
  if ( Process != v15 )
  {
    KiStackAttachProcess(v15, 0, a1 + 136);
    *(_DWORD *)(a1 + 128) |= 1u;
  }
  *(_QWORD *)(a1 + 64) = MiGetPteAddress(v5);
  *(_QWORD *)(a1 + 72) = MiGetPteAddress(v5 + v6 - 1);
  v17 = MiObtainReferencedVadEx(v5, 0LL, (int *)&v28);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 184) = v17;
    VadFlags = MiReadVadFlags(v17);
    if ( (VadFlags & 0x180000) != 0x180000
      || v16 > (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
    {
      return 3221225711LL;
    }
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(VadFlags);
    *(_QWORD *)(a1 + 112) = VadMandatoryPageSize;
    if ( VadMandatoryPageSize > 1 )
    {
      v24 = (VadMandatoryPageSize << 12) - 1;
      if ( (v24 & v5) != 0 )
        return 3221225713LL;
      if ( (v24 & v6) != 0 )
        return 3221225714LL;
    }
    if ( (v21 & 0x80000) != 0 && (v21 & 0x200000) != 0 )
      VadPtesInCluster = MiGetVadPtesInCluster(v21);
    *(_QWORD *)(a1 + 96) = VadPtesInCluster;
    *(_QWORD *)(a1 + 120) = MiLocateLockedVadEvent(v22, 4u);
    return 0LL;
  }
  else
  {
    result = v28;
    if ( v28 == -1073741664 )
      return 3221225711LL;
  }
  return result;
}
