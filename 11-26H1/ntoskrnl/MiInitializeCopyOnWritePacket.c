/*
 * XREFs of MiInitializeCopyOnWritePacket @ 0x14036CC48
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiGetWsleProtection @ 0x14036DF30 (MiGetWsleProtection.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeCopyOnWritePacket(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int a4)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  _KPROCESS *Process; // rdi
  unsigned int SystemRegionType; // eax
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char WsleContents; // al
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // al
  int WsleProtection; // eax
  int v21; // edi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  _QWORD v27[20]; // [rsp+30h] [rbp-B8h] BYREF

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  v5 = a4;
  v6 = *a3;
  *(_QWORD *)(a1 + 24) = *a3;
  *(_DWORD *)(a1 + 124) = a4;
  v8 = (v6 >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = v8;
  v9 = 48 * v8 - 0x220000000000LL;
  *(_QWORD *)(a1 + 40) = v9;
  if ( (v6 & 0x200) == 0 )
    *(_DWORD *)a1 |= 1u;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(a1 + 64) = Process;
  SystemRegionType = MiGetSystemRegionType(a2);
  *(_DWORD *)(a1 + 84) = 1;
  if ( SystemRegionType == 11 )
  {
    v24 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 72) = &unk_140E36F80;
    if ( *(__int64 *)(v24 + 8) > 0 && (*(_QWORD *)(v24 + 40) & 0x10000000000LL) == 0 )
      *(_DWORD *)a1 |= 2u;
  }
  else
  {
    if ( SystemRegionType <= 0xF )
    {
      v12 = 41216;
      if ( _bittest(&v12, SystemRegionType) )
        KeBugCheckEx(0x1Au, 0x3300uLL, a2, *(_QWORD *)(a1 + 24), (int)(SystemRegionType << 16) | 2LL);
    }
    if ( SystemRegionType == 5 )
    {
      *(_DWORD *)a1 |= 2u;
      v23 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 72) = &unk_140E37200;
      if ( *(__int64 *)(v23 + 8) <= 0 || (*(_QWORD *)(v23 + 40) & 0x10000000000LL) != 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a2, *(_QWORD *)(a1 + 24), 0x50000uLL);
    }
    else
    {
      if ( SystemRegionType == 4 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a2, *(_QWORD *)(a1 + 24), 0x40001uLL);
      if ( Process[1].ActiveGroupPadding[0] )
        return 3221226548LL;
      v13 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 80) = 1LL;
      *(_QWORD *)(a1 + 72) = (char *)Process + 1024;
      if ( *(__int64 *)(v13 + 8) > 0 && (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0 )
        *(_DWORD *)a1 |= 2u;
      memset_0(v27, 0, 0x98uLL);
      v27[7] = *(_QWORD *)(a1 + 72);
      v27[0] = a2;
      *(_DWORD *)(a1 + 48) = MiComputeFaultNode(v27, 0LL, a1 + 104);
    }
  }
  v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 174LL));
  v15 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 96) = v14;
  if ( (*v15 & 1) != 0 )
    *(_DWORD *)a1 |= 0x10u;
  WsleContents = MiGetWsleContents(v14, a2);
  *(_BYTE *)(a1 + 112) = WsleContents;
  LOBYTE(v18) = 10;
  if ( (v5 & 1) == 0 && (WsleContents & 0xF) != 0xA )
  {
    if ( (WsleContents & 0xF) == 9 )
    {
LABEL_32:
      *(_BYTE *)(a1 + 112) = WsleContents & 0xF0 | 0xA;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 80) != 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 32LL) & 0x8000000) != 0 )
    {
      WsleContents = *(_BYTE *)(a1 + 112);
      goto LABEL_32;
    }
  }
LABEL_19:
  v19 = *(_BYTE *)(a1 + 112) & 0xF;
  if ( v19 == 10 )
    goto LABEL_23;
  if ( v19 == 8 )
    *(_DWORD *)(a1 + 88) = 1;
  LOBYTE(v18) = *(_BYTE *)(a1 + 112);
  WsleProtection = MiGetWsleProtection(a2, v18);
  if ( !WsleProtection )
LABEL_23:
    WsleProtection = (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL) >> 5) & 0x1F;
  v21 = MmMakeProtectNotWriteCopy[WsleProtection];
  if ( v21 == 24 )
  {
    v21 = 1;
    if ( !*(_QWORD *)(a1 + 104) )
    {
      MiLockVadTree(1u, v18, v17);
      *(_QWORD *)(a1 + 104) = MiLocateAddress(a2);
      MiUnlockVadTree(1, 0x11u);
    }
    v25 = *(_QWORD *)(a1 + 104);
    if ( v25 )
    {
      v26 = (*(_DWORD *)(v25 + 48) >> 5) & 0x1F;
      if ( v26 >> 3 == 3 )
      {
        if ( (v26 & 7) != 0 )
          v21 = 25;
      }
      else if ( v26 >> 3 == 1 )
      {
        v21 = 9;
      }
    }
  }
  *(_DWORD *)(a1 + 116) = v21;
  return 0LL;
}
