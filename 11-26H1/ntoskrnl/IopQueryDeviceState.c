/*
 * XREFs of IopQueryDeviceState @ 0x1409B11E0
 * Callers:
 *     IopMarkDeviceToBeReset @ 0x1407A53A0 (IopMarkDeviceToBeReset.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(_QWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, &v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
