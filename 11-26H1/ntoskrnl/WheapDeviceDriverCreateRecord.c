/*
 * XREFs of WheapDeviceDriverCreateRecord @ 0x1406D96A0
 * Callers:
 *     <none>
 * Callees:
 *     WheapCreateRecordFromGenericErrorData @ 0x1406DA99C (WheapCreateRecordFromGenericErrorData.c)
 */

__int64 __fastcall WheapDeviceDriverCreateRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  int v8; // ecx
  __int128 v9; // xmm0

  if ( a4 < 0xC8 )
    return 3221225507LL;
  if ( *(_DWORD *)(a2 + 56) != 7 )
    return 3221225474LL;
  result = WheapCreateRecordFromGenericErrorData();
  v8 = *(_DWORD *)(a3 + 104);
  *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 120);
  v9 = *(_OWORD *)(a1 + 44);
  *(_DWORD *)(a3 + 16) |= 5u;
  *(_OWORD *)(a3 + 32) = v9;
  *(_DWORD *)(a3 + 104) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 12))) & 0x10;
  return result;
}
