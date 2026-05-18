/*
 * XREFs of sub_1800D040C @ 0x1800D040C
 * Callers:
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 */

HRESULT __fastcall sub_1800D040C(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        ID3D11DeviceContext *a3,
        UINT a4,
        D3D_FEATURE_LEVEL *a5,
        UINT a6,
        int a7,
        ID3D11Device **a8,
        D3D_FEATURE_LEVEL *a9,
        ID3D11DeviceContext **a10)
{
  UINT v10; // ebx
  UINT FeatureLevels; // r12d
  const D3D_FEATURE_LEVEL *pFeatureLevels; // r13
  char v15; // al
  unsigned int v16; // ecx
  char v17; // r15
  HRESULT v18; // r14d
  ID3D11Device *ppDevice[2]; // [rsp+50h] [rbp-10h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+B0h] [rbp+50h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+B8h] [rbp+58h] BYREF

  ppImmediateContext = a3;
  v10 = a4;
  if ( (a4 & 2) == 0 )
    return D3D11CreateDevice(pAdapter, DriverType, 0LL, a4, a5, a6, 7u, a8, a9, a10);
  FeatureLevels = a6;
  pFeatureLevels = a5;
  while ( 1 )
  {
    v15 = sub_180041DBC((__int64)&byte_1801C7CA4);
    ppDevice[0] = 0LL;
    v16 = v10 & 0xFFFFFFFD;
    pFeatureLevel = 0;
    v10 |= 2u;
    ppImmediateContext = 0LL;
    v17 = v15;
    if ( !v15 )
      v10 = v16;
    sub_18000F938((__int64 *)&ppImmediateContext);
    sub_18000F938((__int64 *)ppDevice);
    v18 = D3D11CreateDevice(
            pAdapter,
            DriverType,
            0LL,
            v10,
            pFeatureLevels,
            FeatureLevels,
            7u,
            ppDevice,
            &pFeatureLevel,
            &ppImmediateContext);
    if ( v18 >= 0 )
      break;
    if ( !v17 )
      goto LABEL_14;
    byte_1801C7CA4 = 0;
    sub_18000F938((__int64 *)&ppImmediateContext);
    sub_18000F938((__int64 *)ppDevice);
  }
  if ( a8 )
  {
    *a8 = ppDevice[0];
    ppDevice[0] = 0LL;
  }
  if ( a9 )
    *a9 = pFeatureLevel;
  if ( a10 )
  {
    *a10 = ppImmediateContext;
    ppImmediateContext = 0LL;
  }
LABEL_14:
  sub_18000F938((__int64 *)&ppImmediateContext);
  sub_18000F938((__int64 *)ppDevice);
  return v18;
}
