/*
 * XREFs of ObSetHandleAttributes @ 0x1409BAAF0
 * Callers:
 *     NtSetInformationObject @ 0x1409BA9F0 (NtSetInformationObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // r15
  char v4; // r14
  _BYTE *v5; // r12
  unsigned __int64 v6; // rbx
  _KPROCESS *Process; // rbp
  unsigned __int64 KernelTime; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r8
  unsigned __int64 HandlePointer; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(v17, 0, sizeof(v17));
  v4 = 0;
  v5 = (_BYTE *)a2;
  v6 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a3 || a1 > 0xFFFFFFFFFFFFFFFDuLL || (a1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      KernelTime = ObReferenceProcessHandleTable(Process);
      if ( !KernelTime )
        return 3221225480LL;
      v4 = 1;
    }
    else
    {
      KernelTime = KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    }
  }
  else
  {
    KernelTime = ObpKernelHandleTable;
    v6 = a1 ^ 0xFFFFFFFF80000000uLL;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
      v3 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) != 0 && (v10 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v6)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( !v11 )
          goto LABEL_26;
        ExpBlockOnLockedHandleEntry(KernelTime, v10, v11);
      }
    }
    while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
    HandlePointer = ExGetHandlePointer(v10);
    if ( !*v5
      || (a2 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer),
          (*(_DWORD *)(ObTypeIndexTable[a2] + 72) & 2) == 0) )
    {
      v13 = (*v5 != 0 ? 2 : 0) | 1;
      if ( !v5[1] )
        v13 = *v5 != 0 ? 2 : 0;
      a2 = *v10 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v13 << 17);
      *v10 = a2;
    }
    _InterlockedIncrement64(v10);
    _InterlockedOr(v16, 0);
    if ( *(_QWORD *)(KernelTime + 48) )
      ExfUnblockPushLock((volatile __int64 *)(KernelTime + 48), 0LL);
    v14 = 0;
  }
  else
  {
LABEL_26:
    v14 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v17, 0);
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v14;
}
