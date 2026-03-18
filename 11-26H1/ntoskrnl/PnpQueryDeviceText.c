/*
 * XREFs of PnpQueryDeviceText @ 0x140AA7990
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryDeviceText(_QWORD *a1, int a2, __int64 a3, PVOID *a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  PVOID v9; // rsi
  wchar_t *v11; // [rsp+30h] [rbp-50h] BYREF
  __int16 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-38h]
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  v11 = 0LL;
  *a4 = 0LL;
  memset_0(&v12, 0, 0x48uLL);
  v13 = a2;
  v14 = PsDefaultSystemLocaleId;
  v7 = -1073741637;
  v12 = 3099;
  v8 = IopSynchronousCall(a1, (__int64)&v12, -1073741637, 0LL, &P);
  v9 = P;
  if ( P )
  {
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a4 = P;
      if ( (int)PiNormalizeDeviceText((const WCHAR *)v9, &v11) >= 0 )
      {
        if ( v11 )
        {
          *a4 = v11;
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
  }
  return v7;
}
