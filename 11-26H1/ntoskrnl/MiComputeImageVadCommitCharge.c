/*
 * XREFs of MiComputeImageVadCommitCharge @ 0x1406E4344
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1406E428C (MiComputeCommitChargeForZeroPteRange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiComputeImageVadCommitCharge(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int *v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  result = MiGetProtoPteAddress(a1, a2, 6u, &v11);
  if ( result )
  {
    v8 = (result - *((_QWORD *)v11 + 1)) >> 3;
    v9 = v11[11] - (unsigned int)v8;
    if ( v9 > a3 )
      v9 = a3;
    if ( (v11[8] & 0xA) == 0xA )
    {
      v10 = v11[11] - v11[13];
      if ( (unsigned int)v8 < v10 )
      {
        v4 = v10 - (unsigned int)v8;
        if ( v4 > v9 )
          v4 = v9;
      }
    }
    *a4 = v9;
    return v4;
  }
  else
  {
    *a4 = 1LL;
  }
  return result;
}
