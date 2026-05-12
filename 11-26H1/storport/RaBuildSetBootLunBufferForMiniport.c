/*
 * XREFs of RaBuildSetBootLunBufferForMiniport @ 0x14009171C
 * Callers:
 *     RaidAdapterSetBootLunIoctl @ 0x1400685E4 (RaidAdapterSetBootLunIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterFindUnitByIdentifier @ 0x140061194 (RaidAdapterFindUnitByIdentifier.c)
 */

__int64 __fastcall RaBuildSetBootLunBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  _DWORD *Pool; // rax
  _DWORD *v10; // rbx
  _BYTE *UnitByIdentifier; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 44LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    Pool[4] = 3004036;
    *Pool = 28;
    Pool[3] = *(_DWORD *)(a1 + 4188);
    Pool[6] = 16;
    Pool[8] = 16;
    Pool[7] = 1;
    v13 = *(_OWORD *)(v4 + 8);
    UnitByIdentifier = RaidAdapterFindUnitByIdentifier(a1, &v13);
    if ( UnitByIdentifier )
    {
      v10[9] = 8;
      *((_BYTE *)v10 + 43) = UnitByIdentifier[106];
      *((_BYTE *)v10 + 41) = UnitByIdentifier[104];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = UnitByIdentifier[105];
    }
    else
    {
      v5 = -1073741632;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 44;
  return result;
}
