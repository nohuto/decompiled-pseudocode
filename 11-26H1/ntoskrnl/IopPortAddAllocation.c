/*
 * XREFs of IopPortAddAllocation @ 0x1407A96E0
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x1407A9930 (IopPortGetNextAlias.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 */

__int64 __fastcall IopPortAddAllocation(__int64 a1, __int64 *a2)
{
  __int64 v3; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 result; // rax
  int v9; // r9d
  __int64 v10; // r11
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2[4];
  v5 = *(_QWORD *)(v3 + 32);
  LOBYTE(v3) = *((_BYTE *)a2 + 66);
  RtlAddRange(*(_QWORD *)(a1 + 48), *a2, a2[1], v3, 2 * (*(_DWORD *)(a2[5] + 36) & 1) + 1, 0LL, v5);
  v6 = *a2;
  v11 = *a2;
  while ( 1 )
  {
    result = IopPortGetNextAlias(*(unsigned __int16 *)(*(_QWORD *)(a2[5] + 40) + 4LL), v6, &v11);
    if ( !(_BYTE)result )
      break;
    v7 = v11;
    LOBYTE(v9) = *((_BYTE *)a2 + 66) | 0x10;
    RtlAddRange(
      *(_QWORD *)(a1 + 48),
      v11,
      *(_DWORD *)(v10 + 16) + v11 - 1,
      v9,
      2 * (*(_DWORD *)(v10 + 36) & 1) + 1,
      0LL,
      *(_QWORD *)(a2[4] + 32));
    v6 = v7;
  }
  return result;
}
