/*
 * XREFs of RaBuildDiagnosticBufferForMiniport @ 0x140090C3C
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x14018BB30 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildDiagnosticBufferForMiniport(__int64 a1, __int64 a2, int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v9; // rbp
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  _DWORD *Pool; // rax
  _DWORD *v14; // rcx
  int v15; // eax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v7 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v5 == 1431193940 )
    v9 = *(_QWORD *)(v5 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  v10 = a3 - 32;
  v11 = ((unsigned int)(a3 - 32) + 47LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v12 = v11 + 28;
  if ( v11 > 0xFFFFFFFF || v12 > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, v11 + 28, 1918067026LL, a1);
    v14 = Pool;
    if ( Pool )
    {
      Pool[4] = 1771776;
      *Pool = 28;
      Pool[6] = v12 - 28;
      Pool[5] = 0;
      if ( v5 )
        v15 = *(_DWORD *)(v5 + 1392);
      else
        v15 = *(_DWORD *)(v9 + 4188);
      v14[3] = v15;
      *(_QWORD *)(v14 + 1) = 0x47414944524F5453LL;
      v14[7] = 44;
      v14[10] = *(_DWORD *)(v7 + 16);
      v14[9] = *(_DWORD *)(v7 + 12);
      v14[8] = v10 + 40;
      v14[15] = v10;
      *a4 = v14;
      *a5 = v12;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
