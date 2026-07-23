/*
 * XREFs of WheapPrmTranslateDimmAddressIntel @ 0x1406DB8D0
 * Callers:
 *     WheaPrmTranslateDimmAddress @ 0x1406DB630 (WheaPrmTranslateDimmAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x1406DB750 (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslateDimmAddressIntel(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
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
  _BYTE v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh]
  int v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+4Ch] [rbp-B4h]
  __int64 v22; // [rsp+64h] [rbp-9Ch]
  __int64 v23; // [rsp+6Ch] [rbp-94h]
  __int64 v24; // [rsp+74h] [rbp-8Ch]
  __int64 v25; // [rsp+7Ch] [rbp-84h]
  __int64 v26; // [rsp+A4h] [rbp-5Ch]
  __int64 v27; // [rsp+ACh] [rbp-54h]
  __int64 v28; // [rsp+C4h] [rbp-3Ch]
  __int64 v29; // [rsp+CCh] [rbp-34h]
  __int64 v30; // [rsp+D4h] [rbp-2Ch]
  __int64 v31; // [rsp+DCh] [rbp-24h]
  __int64 v32; // [rsp+E4h] [rbp-1Ch]
  __int64 v33; // [rsp+ECh] [rbp-14h]
  __int64 v34; // [rsp+F4h] [rbp-Ch]
  __int64 v35; // [rsp+FCh] [rbp-4h]
  __int64 v36; // [rsp+104h] [rbp+4h]
  __int64 v37; // [rsp+10Ch] [rbp+Ch]
  __int64 v38; // [rsp+114h] [rbp+14h]
  __int64 v39; // [rsp+11Ch] [rbp+1Ch]
  __int64 v40; // [rsp+124h] [rbp+24h]
  __int64 v41; // [rsp+14Ch] [rbp+4Ch]
  __int64 v42; // [rsp+154h] [rbp+54h]
  __int64 v43; // [rsp+164h] [rbp+64h]
  __int64 v44; // [rsp+16Ch] [rbp+6Ch]

  memset_0(v18, 255, 0x134uLL);
  v22 = *(_QWORD *)(a1 + 36);
  v23 = *(_QWORD *)(a1 + 44);
  v24 = *(_QWORD *)(a1 + 52);
  v25 = *(_QWORD *)(a1 + 60);
  v26 = *(_QWORD *)(a1 + 100);
  v27 = *(_QWORD *)(a1 + 108);
  v28 = *(_QWORD *)(a1 + 132);
  v29 = *(_QWORD *)(a1 + 140);
  v30 = *(_QWORD *)(a1 + 148);
  v31 = *(_QWORD *)(a1 + 156);
  v32 = *(_QWORD *)(a1 + 164);
  v33 = *(_QWORD *)(a1 + 172);
  v34 = *(_QWORD *)(a1 + 180);
  v35 = *(_QWORD *)(a1 + 188);
  v36 = *(_QWORD *)(a1 + 196);
  v37 = *(_QWORD *)(a1 + 204);
  v38 = *(_QWORD *)(a1 + 212);
  v39 = *(_QWORD *)(a1 + 220);
  v40 = *(_QWORD *)(a1 + 228);
  v41 = *(_QWORD *)(a1 + 268);
  v42 = *(_QWORD *)(a1 + 276);
  v43 = *(_QWORD *)(a1 + 292);
  v44 = *(_QWORD *)(a1 + 300);
  v19 = 3;
  v4 = WheapPrmInvokeHandler(&INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID, (__int64)v18, 308LL);
  if ( v4 >= 0 )
  {
    v5 = 2LL;
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
        *(_OWORD *)a1 = *v6;
        v8 = v6[2];
        *(_OWORD *)(a1 + 16) = v7;
        v9 = v6[3];
        *(_OWORD *)(a1 + 32) = v8;
        v10 = v6[4];
        *(_OWORD *)(a1 + 48) = v9;
        v11 = v6[5];
        *(_OWORD *)(a1 + 64) = v10;
        v12 = v6[6];
        *(_OWORD *)(a1 + 80) = v11;
        v13 = v6[7];
        v6 += 8;
        *(_OWORD *)(a1 + 96) = v12;
        a1 += 128LL;
        *(_OWORD *)(a1 - 16) = v13;
        --v5;
      }
      while ( v5 );
      v14 = v6[1];
      *(_OWORD *)a1 = *v6;
      v15 = v6[2];
      v16 = *((_DWORD *)v6 + 12);
      *(_OWORD *)(a1 + 16) = v14;
      *(_OWORD *)(a1 + 32) = v15;
      *(_DWORD *)(a1 + 48) = v16;
      *a2 = v21;
    }
  }
  return (unsigned int)v4;
}
