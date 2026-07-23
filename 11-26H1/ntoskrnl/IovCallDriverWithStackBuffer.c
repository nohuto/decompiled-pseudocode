/*
 * XREFs of IovCallDriverWithStackBuffer @ 0x140C3084C
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovCallDriverWithStackBuffer(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v7; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v8[160]; // [rsp+28h] [rbp-100h] BYREF
  __int64 v9; // [rsp+C8h] [rbp-60h]
  ULONG_PTR v10; // [rsp+D0h] [rbp-58h]
  __int64 v11; // [rsp+D8h] [rbp-50h]

  memset_0(v8, 0, 0xD8uLL);
  v9 = a1;
  v10 = a2;
  v11 = a3;
  VfBeforeCallDriver(a1, a2, v8);
  v7 = IopfCallDriver(a1, a2);
  VfAfterCallDriver(v8, &v7);
  return v7;
}
