/*
 * XREFs of ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401AF324
 * Callers:
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x14020ADC0 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1400EC23C (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall PopulatePTPProperties(struct tagHID_POINTER_DEVICE_INFO *a1, void *a2, void *a3)
{
  int *v4; // rdi
  const unsigned __int16 **v6; // rsi
  __int64 v8; // r14
  int v9; // r10d
  int v10; // eax
  int v11; // r11d
  int v12; // r8d
  int v13; // esi
  int v14; // edi
  int v15; // r9d
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  INT v21; // ecx
  INT v22; // eax
  INT v23; // ecx
  INT v24; // eax
  INT v25; // ecx
  INT v26; // eax
  INT v27; // ecx
  INT v28; // eax
  INT v29; // ecx
  INT v30; // eax
  INT v31; // ecx
  INT v32; // eax
  INT v33; // ecx
  INT v34; // eax
  INT v35; // ecx
  INT v36; // eax
  INT v37; // ecx
  INT v38; // eax
  INT v39; // ecx
  INT v40; // eax
  INT v41; // ecx
  __int128 v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+40h] [rbp-C0h]
  char v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h]
  char v46; // [rsp+4Ch] [rbp-B4h]
  int v47; // [rsp+50h] [rbp-B0h]
  char v48; // [rsp+54h] [rbp-ACh]
  int v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B8h] [rbp-48h]
  INT a; // [rsp+C8h] [rbp-38h]
  INT v63; // [rsp+D0h] [rbp-30h]
  INT v64; // [rsp+D8h] [rbp-28h]
  INT v65; // [rsp+E0h] [rbp-20h]
  INT v66; // [rsp+E8h] [rbp-18h]
  INT v67; // [rsp+F0h] [rbp-10h]
  INT v68; // [rsp+F8h] [rbp-8h]
  INT v69; // [rsp+100h] [rbp+0h]
  INT v70; // [rsp+108h] [rbp+8h]
  INT v71; // [rsp+110h] [rbp+10h]
  INT v72; // [rsp+118h] [rbp+18h]
  INT v73; // [rsp+120h] [rbp+20h]

  v4 = (int *)&v44;
  v6 = (const unsigned __int16 **)&off_140264568;
  v8 = 29LL;
  do
  {
    *(_BYTE *)v4 = ReadDevicePropertyFromRegistry(*v6, a2, a3, *((_DWORD *)v6 - 1), v4 - 1);
    v4 += 2;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  if ( v44 && v46 && v48 )
  {
    *((_DWORD *)a1 + 69) = v43;
    *((_DWORD *)a1 + 70) = v45;
    *((_DWORD *)a1 + 71) = v47;
    v10 = v49;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 37);
    v12 = v51;
    v42 = *(_OWORD *)((char *)a1 + 140);
    if ( v52 && v51 )
      v12 = -v51;
    v14 = v50 + v54;
    if ( v12 > v50 + v54 )
    {
      v11 = *(_QWORD *)((char *)a1 + 148);
      v15 = HIDWORD(*(_QWORD *)((char *)a1 + 140));
      v16 = *(_OWORD *)((char *)a1 + 140);
    }
    else
    {
      v15 = *((_DWORD *)a1 + 36);
      v16 = *((_DWORD *)a1 + 35);
      if ( v15 - v50 + v53 > v15 )
        v15 = *((_DWORD *)a1 + 36) - v50 + v53;
      if ( *((_DWORD *)a1 + 37) / 2 - v14 - v12 > v16 )
        v16 = *((_DWORD *)a1 + 37) / 2 - v14 - v12;
      v13 = *((_DWORD *)a1 + 37) / 2;
      if ( v14 - v12 + v13 < v11 )
        v11 = v14 - v12 + v13;
    }
    *((_DWORD *)a1 + 69) = v16 - *((_DWORD *)a1 + 35);
    *((_DWORD *)a1 + 70) = v15 - *((_DWORD *)a1 + 36);
    *((_DWORD *)a1 + 71) = *((_DWORD *)a1 + 37) - v11;
    v10 = *((_DWORD *)a1 + 38) - HIDWORD(v42);
  }
  *((_DWORD *)a1 + 72) = v10;
  v17 = 50;
  v18 = v59;
  *((_DWORD *)a1 + 73) = v55;
  *((_DWORD *)a1 + 74) = v56;
  *((_DWORD *)a1 + 75) = v57;
  *((_DWORD *)a1 + 76) = v58;
  if ( (unsigned int)(v18 - 1) <= 0x63 )
    v17 = v18;
  v19 = v60;
  *((_DWORD *)a1 + 77) = v17;
  v20 = 25;
  if ( (unsigned int)(v19 - 1) <= 0x63 )
    v20 = v19;
  v21 = a;
  LOBYTE(v9) = v61 == 0;
  *((_DWORD *)a1 + 78) = v20;
  *((_DWORD *)a1 + 67) = v9;
  v22 = EngMulDiv(v21, *((_DWORD *)a1 + 37), 100);
  v23 = v63;
  *((_DWORD *)a1 + 79) = v22;
  v24 = EngMulDiv(v23, *((_DWORD *)a1 + 38), 100);
  v25 = v64;
  *((_DWORD *)a1 + 80) = v24;
  v26 = EngMulDiv(v25, *((_DWORD *)a1 + 37), 100);
  v27 = v65;
  *((_DWORD *)a1 + 81) = v26;
  v28 = EngMulDiv(v27, *((_DWORD *)a1 + 38), 100);
  v29 = v66;
  *((_DWORD *)a1 + 82) = v28;
  v30 = EngMulDiv(v29, *((_DWORD *)a1 + 37), 100);
  v31 = v67;
  *((_DWORD *)a1 + 83) = v30;
  v32 = EngMulDiv(v31, *((_DWORD *)a1 + 38), 100);
  v33 = v68;
  *((_DWORD *)a1 + 84) = v32;
  v34 = EngMulDiv(v33, *((_DWORD *)a1 + 37), 100);
  v35 = v69;
  *((_DWORD *)a1 + 85) = v34;
  v36 = EngMulDiv(v35, *((_DWORD *)a1 + 38), 100);
  v37 = v70;
  *((_DWORD *)a1 + 86) = v36;
  v38 = EngMulDiv(v37, *((_DWORD *)a1 + 37), 100);
  v39 = v71;
  *((_DWORD *)a1 + 87) = v38;
  v40 = EngMulDiv(v39, *((_DWORD *)a1 + 38), 100);
  v41 = v72;
  *((_DWORD *)a1 + 88) = v40;
  *((_DWORD *)a1 + 89) = EngMulDiv(v41, *((_DWORD *)a1 + 37), 100);
  *((_DWORD *)a1 + 90) = EngMulDiv(v73, *((_DWORD *)a1 + 38), 100);
}
