/*
 * XREFs of MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC
 * Callers:
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockFaultPageTable @ 0x1402CD850 (MiUnlockFaultPageTable.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiSetFaultClusterContextBlockEntryState @ 0x140467AA4 (MiSetFaultClusterContextBlockEntryState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiLockAndConfirmFaultClusterDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        char a5)
{
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // edi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  BOOL v14; // eax
  unsigned __int64 v15; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-A1h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v19[3]; // [rsp+68h] [rbp-59h] BYREF
  int v20; // [rsp+80h] [rbp-41h]
  __int64 v21; // [rsp+90h] [rbp-31h]

  v8 = a3 & 0xFFFFFFFFFFFF0000uLL;
  memset_0(v17, 0, 0x98uLL);
  MiFillPteHierarchy(v8, v18);
  v10 = *(_QWORD *)(a1 + 56);
  v20 |= 0x100u;
  v19[0] = v10;
  v21 = 0LL;
  v17[1] = 0LL;
  v17[0] = v8;
  v17[2] = 0LL;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)(a3 >> 6)) & 0x3F) != 0 )
  {
    v11 = MiResolvePageTablePage((__int64)v17, 1);
  }
  else
  {
    if ( (a5 & 1) == 0 )
      return;
    v11 = -1073741823;
  }
  v16[0] = 0;
LABEL_4:
  v12 = *(_QWORD *)(a2 + 40);
  do
  {
    if ( (v12 & 1) != 0 )
    {
      KeYieldProcessorEx(v16);
      goto LABEL_4;
    }
    v13 = v12;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), v12 | 1, v12);
  }
  while ( v13 != v12 );
  if ( *a4 == a3 )
  {
    v14 = v11 >= 0 && MiConfirmFaultClusterDescriptor((__int64)v17, a2, a4, (a5 & 2) != 0);
    if ( (a5 & 1) != 0 || !v14 )
    {
      v15 = *(_QWORD *)(a2 + 40);
      if ( a4 != (unsigned __int64 *)(a2 + 32) )
      {
        v15 = (2 * (v15 >> 1) - 2) ^ ((2 * (v15 >> 1) - 2) ^ v15) & 0xFFFFFFFFFFFFFFF1uLL;
        if ( ((((*a4 >> 6) + (*a4 >> 16)) << 16) & 0x1FFFFF) == 0 )
          v15 = (16 * ((v15 >> 4) - 1)) ^ (v15 ^ (16 * ((v15 >> 4) - 1))) & 0xFFFFFFFFFFFFFF8FuLL;
        *(_QWORD *)(a2 + 40) = v15;
      }
      *a4 = 0LL;
      if ( (v15 & 0xE) == 0 && !*(_QWORD *)(a2 + 32) && (a5 & 2) == 0 )
        MiSetFaultClusterContextBlockEntryState(a2, 0LL);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(a2 + 40));
  MiUnlockFaultPageTable(v19);
}
