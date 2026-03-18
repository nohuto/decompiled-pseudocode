/*
 * XREFs of VmUnpinMemoryRange @ 0x14078FBA0
 * Callers:
 *     <none>
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     VmpUnpinMemoryRange @ 0x1407903DC (VmpUnpinMemoryRange.c)
 *     VmpLogPin @ 0x140790D10 (VmpLogPin.c)
 */

__int64 __fastcall VmUnpinMemoryRange(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v10; // ebx
  int v11; // ecx
  volatile signed __int64 *p_Blink; // rcx
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(v14) = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a4 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 )
  {
    v10 = -1073741811;
  }
  else if ( Blink )
  {
    v4 = 1;
    PfLockSharedAcquire((volatile signed __int64 *)&Blink[7].Blink);
    v10 = VmpUnpinMemoryRange((PEX_SPIN_LOCK)Blink, a4, 0, (__int64)&v14);
  }
  else
  {
    v10 = -1073741688;
  }
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 32LL) )
  {
    VmpLogPin(v11, 0, a1, a2, a3, 0, a4, v10);
  }
  if ( v4 )
  {
    p_Blink = (volatile signed __int64 *)&Blink[7].Blink;
    if ( (_DWORD)v14 )
      VmpReleasePushLockExclusive(p_Blink);
    else
      PfLockSharedRelease(p_Blink);
  }
  return v10;
}
