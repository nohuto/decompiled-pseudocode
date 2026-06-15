/*
 * XREFs of sub_14001EBA4 @ 0x14001EBA4
 * Callers:
 *     sub_14001E9BC @ 0x14001E9BC (sub_14001E9BC.c)
 * Callees:
 *     sub_14001ED34 @ 0x14001ED34 (sub_14001ED34.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_14001EBA4(HKEY hKey, __int64 a2, _OWORD *a3)
{
  HRESULT v5; // edx
  LSTATUS ValueW; // eax
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  DWORD pcbData[4]; // [rsp+40h] [rbp-878h] BYREF
  _DWORD v22[276]; // [rsp+50h] [rbp-868h] BYREF
  OLECHAR sz[512]; // [rsp+4A0h] [rbp-418h] BYREF

  memset(v22, 0, 0x444uLL);
  v5 = sub_14001ED34(hKey);
  if ( v5 >= 0 )
  {
    v22[268] = 1;
    pcbData[0] = 1024;
    ValueW = RegGetValueW(hKey, 0LL, L"APOInterface0", 2u, 0LL, sz, pcbData);
    v5 = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        return (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      v5 = CLSIDFromString(sz, (LPCLSID)&v22[269]);
      if ( v5 >= 0 )
      {
        v7 = 8LL;
        v8 = v22;
        do
        {
          v9 = v8[1];
          *a3 = *v8;
          v10 = v8[2];
          a3[1] = v9;
          v11 = v8[3];
          a3[2] = v10;
          v12 = v8[4];
          a3[3] = v11;
          v13 = v8[5];
          a3[4] = v12;
          v14 = v8[6];
          a3[5] = v13;
          v15 = v8[7];
          v8 += 8;
          a3[6] = v14;
          a3 += 8;
          *(a3 - 1) = v15;
          --v7;
        }
        while ( v7 );
        v16 = v8[1];
        *a3 = *v8;
        v17 = v8[2];
        a3[1] = v16;
        v18 = v8[3];
        v19 = *((_DWORD *)v8 + 16);
        a3[2] = v17;
        a3[3] = v18;
        *((_DWORD *)a3 + 16) = v19;
      }
    }
  }
  return (unsigned int)v5;
}
