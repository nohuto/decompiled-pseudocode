/*
 * XREFs of MiInitializeBootDefaults @ 0x140CF1C18
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     strstr @ 0x140535B20 (strstr.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    BYTE1(stru_140E36558.ReadyTime) = 1;
    dword_140FBE20C = 0;
    *(_BYTE *)(MmWriteableSharedUserData + 748) = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MiFlags |= 0x80uLL;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmVerifierData )
    {
      v4 = MiFlags | 1;
      MiFlags |= 1uLL;
      if ( KernelVerifier )
        MiFlags = v4 | 2;
    }
    if ( (MiFlags & 1) != 0 && (VfRuleClasses & 0x400000) == 0 || MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
  }
  v5 = MiFlags | 8;
  MiFlags |= 8uLL;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v5 | 0x40;
  *(_QWORD *)&stru_140E2D150.SuspendEvent.Header.Lock = 0LL;
  stru_140E2D150.ThreadListEntry.Flink = (struct _LIST_ENTRY *)&stru_140E2D150.SuspendEvent.Header.WaitListHead.Blink;
  stru_140E2D150.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140E2D150.SuspendEvent.Header.WaitListHead.Blink;
  *(_QWORD *)&stru_140E2C7D0.Header.Lock = 0LL;
  qword_140E2D620 = (__int64)&qword_140E2D618;
  qword_140E2D618 = (__int64)&qword_140E2D618;
  qword_140E2D610 = -10000000LL * dword_140FBE224;
  qword_140E2CFF0 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1, -10000000LL * dword_140FBE224) << 16;
  qword_140E2CFF0 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
