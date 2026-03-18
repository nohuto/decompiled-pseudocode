/*
 * XREFs of sub_140024570 @ 0x140024570
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_140024570(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = sub_140005000(a2);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v5 = *(_QWORD *)(v3 + 64);
  else
    v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v5 + 28);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v6 >= *(_DWORD *)(v4 + 4208) )
      v6 = *(_DWORD *)(v4 + 4208);
    sub_140032980(v5 + *(unsigned int *)(v5 + 44), *(_QWORD *)(v4 + 4160), v6);
  }
  else
  {
    *(_BYTE *)(v3 + 3) = 1;
  }
  result = sub_14000CF50(a1, *(unsigned int *)(v4 + 4208), (__int64 *)(v4 + 4160), *(_QWORD *)(v4 + 4168));
  *(_DWORD *)(v4 + 4208) = 0;
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_BYTE *)(v4 + 4225) |= 8u;
  return result;
}
