/*
 * XREFs of MiMappingHasIoTracker @ 0x1402810D0
 * Callers:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // r11d
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  __int64 v7; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+0h] [rbp-30h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4;
  v11[1] = v1;
  v12 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 4LL;
  while ( 1 )
  {
    v4 = v11[v3--];
    --v2;
    v5 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v7 = *(_QWORD *)v4;
      if ( (v5 & 1) == 0 )
        return (*(_QWORD *)v1 >> 9) & 1LL;
      if ( ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              LOBYTE(v7) = v5 | 0x20;
            LOBYTE(v5) = v7 | 0x42;
            if ( (v10 & 0x42) == 0 )
              LOBYTE(v5) = v7;
          }
        }
      }
    }
    if ( (v5 & 1) == 0 )
      return (*(_QWORD *)v1 >> 9) & 1LL;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( v3 == 1 )
      return (*(_QWORD *)v1 >> 9) & 1LL;
  }
  for ( ; v2; --v2 )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return (*(_QWORD *)v1 >> 9) & 1LL;
}
