/*
 * XREFs of MiWriteValidPteVolatile @ 0x140443050
 * Callers:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdi
  int v6; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r11
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v6 = a2 & 2;
  while ( 1 )
  {
    if ( v4 )
      v8 = ((unsigned __int64)a3 << 56) ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x80FFFFFFFFFFFFFFuLL;
    else
      v8 = v3;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    v10 = v9 | 0x42;
    if ( !v6 )
      v10 = v9;
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(a1, v10, v3);
    if ( v3 == result )
      break;
    v3 = result;
  }
  return result;
}
