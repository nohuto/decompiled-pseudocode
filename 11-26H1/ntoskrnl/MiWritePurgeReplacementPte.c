/*
 * XREFs of MiWritePurgeReplacementPte @ 0x14047822C
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiWritePurgeReplacementPte(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  unsigned __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r10
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    ++*(_QWORD *)(a1 + 112);
    v4 = *(_QWORD *)(a2 + 16);
    v10[0] = v4;
    v5 = v4;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = v10[0];
      if ( (v10[0] & 1) != 0 && ((v10[0] & 0x20) == 0 || (v10[0] & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v9 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v10 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              v6 = v10[0] | 0x20LL;
            v5 = v6 | 0x42;
            if ( (v9 & 0x42) == 0 )
              v5 = v6;
          }
        }
      }
    }
    v10[0] = v5 & ((v5 & 0x400) != 0 ? -5LL : -65537LL);
    result = v10[0];
    if ( (v4 & 0x400) == 0 )
      result = v10[0] & 0xFFFFFFFFFFFFFFF3uLL;
  }
  else
  {
    result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  *v2 = result;
  return result;
}
