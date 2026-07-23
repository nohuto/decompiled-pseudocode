/*
 * XREFs of WheapPrmTranslatePhysicalAddressIntel @ 0x1406DBBC8
 * Callers:
 *     WheaPrmTranslatePhysicalAddress @ 0x1406DB700 (WheaPrmTranslatePhysicalAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x1406DB750 (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslatePhysicalAddressIntel(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  _BYTE v18[4]; // [rsp+40h] [rbp-158h] BYREF
  int v19; // [rsp+44h] [rbp-154h]
  int v20; // [rsp+48h] [rbp-150h]
  __int64 v21; // [rsp+4Ch] [rbp-14Ch]

  memset_0(v18, 255, 0x134uLL);
  v21 = a1;
  v4 = 2LL;
  v19 = 2;
  v5 = WheapPrmInvokeHandler(&INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID, (__int64)v18, 308LL);
  if ( v5 >= 0 )
  {
    if ( v20 == 2 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( v20 == 3 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v20 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v6 = v18;
      do
      {
        v7 = v6[1];
        *a2 = *v6;
        v8 = v6[2];
        a2[1] = v7;
        v9 = v6[3];
        a2[2] = v8;
        v10 = v6[4];
        a2[3] = v9;
        v11 = v6[5];
        a2[4] = v10;
        v12 = v6[6];
        a2[5] = v11;
        v13 = v6[7];
        v6 += 8;
        a2[6] = v12;
        a2 += 8;
        *(a2 - 1) = v13;
        --v4;
      }
      while ( v4 );
      v14 = v6[1];
      *a2 = *v6;
      v15 = v6[2];
      v16 = *((_DWORD *)v6 + 12);
      a2[1] = v14;
      a2[2] = v15;
      *((_DWORD *)a2 + 12) = v16;
    }
  }
  return (unsigned int)v5;
}
