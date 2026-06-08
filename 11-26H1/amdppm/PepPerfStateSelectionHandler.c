/*
 * XREFs of PepPerfStateSelectionHandler @ 0x14000D3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  char v5; // al
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 40);
  v8 = a2;
  v4 = *(_QWORD *)(v3 + 40);
  v5 = a2;
  if ( *(_BYTE *)(a3 + 72) )
    v5 = -1;
  LOBYTE(v8) = v5;
  BYTE3(v8) = 255 * *(_DWORD *)(a3 + 36) / 0x64u;
  *(_QWORD *)a3 = v8;
  v6 = *(_DWORD *)(v4 + 24LL * (unsigned __int8)a2 + 4);
  result = *(unsigned int *)(v3 + 20);
  if ( (unsigned int)result >= v6 )
    result = v6;
  *(_DWORD *)(a3 + 20) = result;
  return result;
}
