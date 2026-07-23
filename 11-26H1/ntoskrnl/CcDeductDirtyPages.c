/*
 * XREFs of CcDeductDirtyPages @ 0x1403E611C
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v2 = *(_QWORD **)(a1 + 600);
  }
  else
  {
    result = *((_QWORD *)PspSystemPartition + 1);
  }
  *(_QWORD *)(result + 1056) -= a2;
  if ( v2 )
  {
    result = v2[124] - a2;
    v2[124] = result;
  }
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x35DEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    v5 = -(__int64)a2;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 40LL), v5);
    v6 = *(_QWORD **)(a1 + 512);
    v6[31] += v6[5];
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL);
    result = v6[32];
    if ( result <= v7 )
      result = v7;
    v6[32] = result;
    if ( v2 )
    {
      v6[33] += v2[127];
      v6[34] = v2[128];
      result = v2[129];
      v6[35] = result;
    }
    ++v6[36];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD *)(a1 + 248);
      _InterlockedAdd64((volatile signed __int64 *)(result + 24), v5);
    }
  }
  return result;
}
