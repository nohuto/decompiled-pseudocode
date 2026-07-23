/*
 * XREFs of PspRecheckThreadOptionalXStateFeatures @ 0x140A7BC1C
 * Callers:
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRecheckThreadOptionalXStateFeatures(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r14
  _QWORD *Pool2; // rdi
  int KernelStack; // esi
  __int64 v8; // rax
  _DWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int128 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-10h]

  v2 = ~*(_QWORD *)(a1 + 408);
  v9[3] = 0;
  v12 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(a2 + 1064) & v2;
  if ( !v4 )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 116) & 0x800000) == 0 )
    {
      v9[0] = 32;
      v9[1] = 5;
      v9[2] = (unsigned __int16)KeGetIdealNodeNumberThread(a2);
      v10 = a2;
      KernelStack = MmCreateKernelStack((__int64)v9);
      if ( KernelStack < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)KernelStack;
      }
      v8 = v11 - (unsigned int)KeDecoupledStateSaveAreaLength;
      Pool2[13] = v11;
      Pool2[12] = v8;
    }
    Pool2[14] = v4;
    Pool2[15] = a2;
    Pool2[16] = Pool2;
    *(_DWORD *)Pool2 = 1;
    KeInitializeApc((__int64)(Pool2 + 1), a2, 0, (__int64)KeEnableOptionalXStateFeaturesApc, 0LL, 0LL, 0, 0LL);
    KeInsertQueueApc((__int64)(Pool2 + 1), 0LL, 0LL, 0);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
