/*
 * XREFs of MiReferenceCfgVad @ 0x140AF33F0
 * Callers:
 *     MiCfgInitializeProcess @ 0x14077B82C (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 */

char __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r12
  __int64 v7; // r13
  ULONG_PTR v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp+8h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = *(_QWORD *)(a1 + 184);
  v6 = 32LL * a3;
  v7 = *(_QWORD *)(v13 + 1040);
  v8 = MiObtainReferencedVadEx(a2, 2LL, &v14);
  v9 = *(unsigned int *)(v8 + 28);
  v10 = *(unsigned __int8 *)(v8 + 33);
  MiUnlockVadShared(a1, v8);
  v11 = 0;
  *(_QWORD *)(v6 + v7 + 1384) = a2;
  *(_QWORD *)(v6 + v7 + 1400) = v8;
  *(_DWORD *)(v6 + v7 + 1408) = 0;
  *(_QWORD *)(v6 + v7 + 1392) = (((v9 | ((unsigned __int64)v10 << 32)) << 12) | 0xFFF) - a2 + 1;
  if ( a3 == 1 )
  {
    LOBYTE(v11) = *(_WORD *)(v13 + 1772) == 452;
    *(_DWORD *)(v6 + v7 + 1408) = v11;
  }
  return v11;
}
