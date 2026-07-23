/*
 * XREFs of HvCheckHive @ 0x140A5D6B0
 * Callers:
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     HvCheckBin @ 0x140A5D8F0 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x140A5DBE0 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140A5DBFC (HvAddToLayoutStats.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvCheckHive(__int64 a1, int a2, __int64 a3, _RTL_BITMAP *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  int v9; // r10d
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 CellMap; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  _DWORD *BinAddress; // rdi
  int v18; // r8d
  unsigned int v19; // eax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // esi
  int v24; // [rsp+40h] [rbp-48h] BYREF
  __int16 v25; // [rsp+98h] [rbp+10h] BYREF
  __int16 v26; // [rsp+9Ah] [rbp+12h]
  __int64 v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v26 = HIWORD(a2);
  v25 = 0;
  HvpGetBinContextInitialize(&v25);
  v8 = a6;
  v10 = v9;
  v11 = a5;
  v12 = v9;
  v24 = v9;
  LODWORD(v27) = v9;
LABEL_2:
  if ( v12 > 1 )
    return 0LL;
  v13 = *(_DWORD *)(632LL * v12 + a1 + 280);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 >= v13 )
      {
        v10 = 0x80000000;
        v12 = v27 + 1;
        LODWORD(v27) = v27 + 1;
        goto LABEL_2;
      }
      CellMap = HvpGetCellMap(a1, v10);
      if ( !CellMap )
      {
        if ( v8 )
        {
          SetFailureLocation(v8, 0, 16, -1073741492, 0);
          *(_DWORD *)(v8 + 296) = v27;
          *(_DWORD *)(v8 + 300) = v10;
        }
        return 3221225804LL;
      }
      if ( !HvpMapEntryIsDiscardable(CellMap) || !*(_QWORD *)v15 )
        break;
      v10 += *(_DWORD *)(*(_QWORD *)v15 + 16LL);
      if ( v11 )
      {
        HvAddToLayoutStats(v11);
        HvMoveLayoutStats();
      }
    }
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v15, v15, &v25, v16);
    v19 = BinAddress[2];
    if ( v19 > v13 - v10 || v19 < 0x20 || (v19 & 0xFFF) != 0 || *BinAddress != 1852400232 || BinAddress[1] != v10 )
      break;
    result = HvCheckBin(v13 - v10, (int)BinAddress, v18, (int)&v24, a4, v11, v8);
    v23 = result;
    if ( (int)result < 0 )
    {
      if ( v8 )
      {
        SetFailureLocation(v8, 0, 16, result, 48);
        *(_DWORD *)(v8 + 296) = v27;
        result = v23;
        *(_DWORD *)(v8 + 300) = v10;
        *(_QWORD *)(v8 + 304) = BinAddress;
      }
      return result;
    }
    v10 += BinAddress[2];
    HvpMapEntryReleaseBinAddress(v22, v21, &v25);
  }
  if ( !v8 )
    return 3221225804LL;
  SetFailureLocation(v8, 0, 16, -1073741492, 32);
  *(_DWORD *)(v8 + 296) = v27;
  result = 3221225804LL;
  *(_DWORD *)(v8 + 300) = v10;
  *(_QWORD *)(v8 + 304) = BinAddress;
  return result;
}
