/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x1409104D8
 * Callers:
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     IopQueryDeviceResources @ 0x140AA5668 (IopQueryDeviceResources.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
