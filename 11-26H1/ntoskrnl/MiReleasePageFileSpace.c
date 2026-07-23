/*
 * XREFs of MiReleasePageFileSpace @ 0x140340D20
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 */

__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v10[0] = a2;
  if ( (a2 & 8) != 0 )
  {
    if ( !a3 )
    {
      v5 = v10[0];
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
      v10[0] = v5 & 0xFFFFFFFFFFFFFFFBuLL;
      a2 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
    }
  }
  else if ( !a3 || (a2 & 4) == 0 )
  {
    a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  if ( !a2 )
    return 0LL;
  MiReleasePageFileInfo(a1, a2, 1LL);
  return 1LL;
}
