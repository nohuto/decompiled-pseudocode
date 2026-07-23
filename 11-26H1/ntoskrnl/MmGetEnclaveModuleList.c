/*
 * XREFs of MmGetEnclaveModuleList @ 0x140704FE8
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1404ED0DC (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, __int64 *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rdi
  __int64 **v9; // rsi
  unsigned int v10; // edx
  __int64 **v11; // rax
  __int64 PoolMm; // r9
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v17 = 0;
  v6 = MiObtainReferencedVadEx(a1, 2LL, (int *)&v17);
  v7 = v6;
  if ( !v6 )
    return v17;
  if ( (*(_DWORD *)(v6 + 48) & 0x880000) != 0x880000 || (*(_DWORD *)(v6 + 72) & 1) != 0 )
  {
    v3 = -1073741800;
  }
  else
  {
    v9 = (__int64 **)(v6 + 88);
    v10 = 0;
    v11 = *(__int64 ***)(v6 + 88);
    while ( v11 != v9 )
    {
      if ( v10 == -1 )
        goto LABEL_9;
      v11 = (__int64 **)*v11;
      ++v10;
    }
    PoolMm = ExAllocatePoolMm(
               256LL,
               24LL * v10,
               1280132438,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
    {
LABEL_9:
      v3 = -1073741670;
      goto LABEL_16;
    }
    v13 = *v9;
    v14 = 0;
    while ( v13 != (__int64 *)v9 )
    {
      v15 = v14++;
      v16 = 3 * v15;
      *(_QWORD *)(PoolMm + 8 * v16) = v13[2];
      *(_QWORD *)(PoolMm + 8 * v16 + 8) = v13[3];
      *(_DWORD *)(PoolMm + 8 * v16 + 16) = *((_DWORD *)v13 + 9);
      *(_DWORD *)(PoolMm + 8 * v16 + 20) = *((_DWORD *)v13 + 10);
      v13 = (__int64 *)*v13;
    }
    *a2 = PoolMm;
    *a3 = v14;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v7);
  return v3;
}
