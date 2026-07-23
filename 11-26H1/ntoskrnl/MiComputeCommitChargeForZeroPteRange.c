/*
 * XREFs of MiComputeCommitChargeForZeroPteRange @ 0x1406E8F3C
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiComputeImageVadCommitCharge @ 0x1406E8FF4 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiComputeCommitChargeForZeroPteRange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a3;
  v10 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  if ( (v5 & 0x80000) != 0 )
    return a3 & -(__int64)((v5 & 0x400000) != 0);
  if ( (v5 & 0x1C) == 8 )
  {
    v7 = (unsigned __int64)(a2 << 25 >> 16) >> 12;
    if ( a3 )
    {
      do
      {
        v8 = MiComputeImageVadCommitCharge(a1, v7, v4, &v10);
        v7 += v10;
        v3 += v8;
        v4 -= v10;
      }
      while ( v4 );
    }
  }
  else
  {
    if ( (v5 & 0xA0) != 0xA0 )
      return 0LL;
    return v4;
  }
  return v3;
}
