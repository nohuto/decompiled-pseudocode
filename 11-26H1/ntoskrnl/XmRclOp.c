/*
 * XREFs of XmRclOp @ 0x1405AF620
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmRclOp(_DWORD *a1)
{
  int v1; // edx
  char v2; // bl
  unsigned int v3; // r8d
  int v4; // edi
  unsigned int v5; // edx
  int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int8 v10; // r11
  __int64 result; // rax

  v1 = 8 * a1[30];
  v2 = v1 + 7;
  v3 = a1[26];
  v4 = ((1 << (v1 + 7)) - 1) | (1 << (v1 + 7));
  v5 = (a1[27] & 0x1Fu) % (v1 + 9);
  v6 = a1[4] & 1;
  v7 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)(v3 >> v2) ^ (unsigned __int16)(v3 >> (v2 - 1))) << 11)) & 0x800;
    do
    {
      v8 = v3 >> v2;
      v3 = v6 | v4 & (2 * v3);
      v6 = v8;
      --v7;
    }
    while ( v7 );
  }
  XmStoreResult((__int64)a1, v3);
  result = *(_DWORD *)(v9 + 16) ^ (v10 ^ (unsigned __int8)*(_DWORD *)(v9 + 16)) & 1u;
  *(_DWORD *)(v9 + 16) = result;
  return result;
}
