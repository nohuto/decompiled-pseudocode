/*
 * XREFs of sub_140068CE0 @ 0x140068CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 */

__int64 __fastcall sub_140068CE0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, unsigned int *a5)
{
  unsigned int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // ecx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1400229C8(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_DWORD *)(a2 + 60);
  else
    v8 = *(_DWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = (*(unsigned __int8 *)(v9 + 3) | (*(unsigned __int8 *)(v9 + 2) << 8)) + 4;
  if ( v10 > 0xFFFF )
    v10 = 0xFFFF;
  if ( v10 <= v8 )
  {
    *(_QWORD *)(a3 + 64) = v9;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
    return 0LL;
  }
  else
  {
    *a4 = 1;
    *a5 = v10;
    return 3221225507LL;
  }
}
