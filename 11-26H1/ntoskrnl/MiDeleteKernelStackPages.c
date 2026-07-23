/*
 * XREFs of MiDeleteKernelStackPages @ 0x14028DF2C
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x14028F3BC (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A8BB0 (MiDeleteCachedKernelShadowStack.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

__int64 __fastcall MiDeleteKernelStackPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // r9d
  __int64 v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-18h]

  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = MiVaToFlushVm(a2 + 8);
  if ( v10 == 5 )
  {
    v11 = 0LL;
    result = MiDecommitPages(v8, v9, 0, 0, 0LL, 0, 0LL, (__int64)&v13);
  }
  else
  {
    result = MiDeleteShadowStackPtes(v7, v6, v8, v9, a5, &v13);
    v11 = result;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 528), v11 - *((_QWORD *)&v14 + 1));
  if ( (_QWORD)v13 != v11 )
    result = MiReturnResident(a1, v13 - v11);
  if ( *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1) != v11 )
    return MiReturnCommit(a1, *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1) - v11, 0LL);
  return result;
}
