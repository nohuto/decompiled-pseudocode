/*
 * XREFs of StorPortGetLogicalUnit @ 0x140028F80
 * Callers:
 *     RaidAdapterWmiDeferredRoutine @ 0x1400AE8C0 (RaidAdapterWmiDeferredRoutine.c)
 *     StorPortGetLogicalUnitVrfy @ 0x1401C22B0 (StorPortGetLogicalUnitVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorPortGetLogicalUnit(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  __int64 Unit; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  HIBYTE(v9) = 0;
  if ( !v4 )
    return 0LL;
  v6 = *(_DWORD **)v4;
  if ( !*(_QWORD *)v4 || (*(_DWORD *)(v4 + 248) & 1) != 0 || *v6 != 1094997074 )
    return 0LL;
  LOBYTE(v9) = a2;
  BYTE1(v9) = a3;
  BYTE2(v9) = a4;
  Unit = RaidAdapterFindUnit(v6, v9);
  if ( Unit )
    return *(_QWORD *)(Unit + 16);
  return v5;
}
