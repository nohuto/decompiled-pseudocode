/*
 * XREFs of MiOutSwapFreeSoftWslePxe @ 0x140714A24
 * Callers:
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 */

__int64 __fastcall MiOutSwapFreeSoftWslePxe(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  __int64 result; // rax

  v2 = (volatile signed __int64 *)&unk_140E379B8;
  if ( (*(_DWORD *)(a1 + 1208) & 0xF) != 1 )
    v2 = (volatile signed __int64 *)(a1 + 1272);
  result = MiLockAndDecrementShareCount(48 * a2 - 0x220000000000LL, 3LL);
  _InterlockedDecrement64(v2);
  return result;
}
