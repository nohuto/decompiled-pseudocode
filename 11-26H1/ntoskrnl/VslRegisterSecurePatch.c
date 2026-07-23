/*
 * XREFs of VslRegisterSecurePatch @ 0x1405C6324
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslRegisterSecurePatch(const __m128i *a1, struct _MDL **a2)
{
  __int64 result; // rax
  __m128i v5; // xmm1
  unsigned int v6; // ebx
  __int64 *v7[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v8[8]; // [rsp+80h] [rbp-88h] BYREF
  __m128i v9; // [rsp+88h] [rbp-80h]
  __int64 v10; // [rsp+98h] [rbp-70h]
  __int64 *v11; // [rsp+A0h] [rbp-68h]
  __int64 *v12; // [rsp+A8h] [rbp-60h]

  memset_0(v8, 0, 0x68uLL);
  memset_0(v7, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v7, a2[1], *(unsigned __int16 *)a2, 0, 0);
  if ( (int)result >= 0 )
  {
    v5 = _mm_loadl_epi64(a1);
    v10 = a1[1].m128i_u32[2];
    v11 = v7[0];
    v12 = v7[7];
    v9 = _mm_unpacklo_epi32(v5, (__m128i)0LL);
    v6 = VslpEnterIumSecureMode(2u, 0x49u, 0, (__int64)v8);
    VslpUnlockPagesForTransfer(v7);
    return v6;
  }
  return result;
}
