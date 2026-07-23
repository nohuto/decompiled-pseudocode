/*
 * XREFs of MiDbgLockPage @ 0x140702F08
 * Callers:
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiDbgPatchIdentity @ 0x140703644 (MiDbgPatchIdentity.c)
 */

__int64 __fastcall MiDbgLockPage(int *a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  int v4; // edi
  __int64 result; // rax
  int v6; // ecx
  int ProtectionPfnCompatible; // eax
  int v8; // edx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 48LL * (*((_QWORD *)a1 + 7) >> 12) - 0x220000000000LL;
  v4 = 4;
  if ( (*a1 & 2) != 0 )
  {
    if ( (v2 & 4) != 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        if ( (v2 & 0x41) != 0 || ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 )
        {
          stru_140E2ED08.SuspendEvent.Header.SignalState |= 4u;
          return 0LL;
        }
        ++LODWORD(stru_140E2ED08.ThreadListEntry.Flink);
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      v4 = 2;
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
  }
  if ( (unsigned int)MiDbgPatchIdentity(v3, a1) && (v2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 34) & 7) != 6 )
    {
      if ( (unsigned int)(v4 - 1) <= 1 )
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 8u;
      return 0LL;
    }
    *a1 |= 0x40u;
  }
  v6 = a1[16];
  a1[22] = v4;
  *((_QWORD *)a1 + 13) = v3;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v6, v3);
  v8 = ProtectionPfnCompatible | 8;
  if ( (*(_DWORD *)(v3 + 32) & 0xC00000) != 0xC00000 )
    v8 = ProtectionPfnCompatible;
  result = 1LL;
  a1[16] = v8;
  return result;
}
