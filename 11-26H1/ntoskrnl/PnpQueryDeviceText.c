/*
 * XREFs of PnpQueryDeviceText @ 0x1409DAEC4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryDeviceText(_QWORD *a1, int a2, __int64 a3, PVOID *a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  PVOID v9; // rsi
  __int16 v11; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+40h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-38h]
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset_0(&v11, 0, 0x48uLL);
  v12 = a2;
  v13 = PsDefaultSystemLocaleId;
  v7 = -1073741637;
  v11 = 3099;
  v8 = IopSynchronousCall(a1, (__int64)&v11, -1073741637, 0LL, &P);
  v9 = P;
  if ( P )
  {
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a4 = P;
      PiNormalizeDeviceText(v9);
    }
  }
  return v7;
}
