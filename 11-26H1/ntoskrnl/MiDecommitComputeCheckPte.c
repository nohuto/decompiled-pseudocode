/*
 * XREFs of MiDecommitComputeCheckPte @ 0x140413520
 * Callers:
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDecommitComputeCheckPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8

  *(_QWORD *)(a1 + 64) = a2;
  v2 = a2 << 25;
  v3 = a2;
  v5 = *(_DWORD *)(a1 + 100);
  v6 = 0;
  *(_QWORD *)(a1 + 48) = v2 >> 16;
  if ( (v5 & 0x30000) <= 0x10000 )
  {
    v8 = HIWORD(v5) & 3;
    if ( v8 < 2 )
    {
      v6 = 2 - v8;
      v9 = 2 - v8;
      do
      {
        v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v9;
      }
      while ( v9 );
    }
  }
  *(_QWORD *)(a1 + 80) = v3;
  result = v5 ^ (v5 ^ (v6 << 18)) & 0x1C0000;
  *(_DWORD *)(a1 + 100) = result;
  return result;
}
