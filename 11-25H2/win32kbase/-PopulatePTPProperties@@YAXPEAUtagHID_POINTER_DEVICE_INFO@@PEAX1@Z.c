/*
 * XREFs of ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401810B0
 * Callers:
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401EC44C (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x140130494 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline @ 0x1401D6590 (Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall PopulatePTPProperties(struct tagHID_POINTER_DEVICE_INFO *a1, void *a2, void *a3)
{
  int *v6; // rdi
  const unsigned __int16 **v7; // rsi
  __int64 v8; // r14
  const unsigned __int16 **v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  int v12; // r10d
  int v13; // r8d
  int v14; // edi
  int v15; // r11d
  int v16; // r9d
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  bool v22; // zf
  INT v23; // eax
  INT v24; // ecx
  INT v25; // eax
  INT v26; // ecx
  INT v27; // eax
  INT v28; // ecx
  INT v29; // eax
  INT v30; // ecx
  INT v31; // eax
  INT v32; // ecx
  INT v33; // eax
  INT v34; // ecx
  INT v35; // eax
  INT v36; // ecx
  INT v37; // eax
  INT v38; // ecx
  INT v39; // eax
  INT v40; // ecx
  INT v41; // eax
  INT v42; // ecx
  INT v43; // eax
  INT v44; // ecx
  __int128 v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+40h] [rbp-C0h]
  char v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h]
  char v49; // [rsp+4Ch] [rbp-B4h]
  int v50; // [rsp+50h] [rbp-B0h]
  char v51; // [rsp+54h] [rbp-ACh]
  int v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A8h] [rbp-58h]
  int v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  INT a; // [rsp+C8h] [rbp-38h]
  INT v66; // [rsp+D0h] [rbp-30h]
  INT v67; // [rsp+D8h] [rbp-28h]
  INT v68; // [rsp+E0h] [rbp-20h]
  INT v69; // [rsp+E8h] [rbp-18h]
  INT v70; // [rsp+F0h] [rbp-10h]
  INT v71; // [rsp+F8h] [rbp-8h]
  INT v72; // [rsp+100h] [rbp+0h]
  INT v73; // [rsp+108h] [rbp+8h]
  INT v74; // [rsp+110h] [rbp+10h]
  INT v75; // [rsp+118h] [rbp+18h]
  INT v76; // [rsp+120h] [rbp+20h]

  v6 = (int *)&v47;
  if ( (unsigned int)Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = (const unsigned __int16 **)&off_14025C638;
    v8 = 29LL;
    do
    {
      *(_BYTE *)v6 = ReadDevicePropertyFromRegistry(*v7, a2, a3, *((_DWORD *)v7 - 1), v6 - 1);
      v6 += 2;
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v9 = (const unsigned __int16 **)&off_14025C528;
    v10 = 17LL;
    do
    {
      *(_BYTE *)v6 = ReadDevicePropertyFromRegistry(*v9, a2, a3, *((_DWORD *)v9 - 1), v6 - 1);
      v6 += 2;
      v9 += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( v47 && v49 && v51 )
  {
    *((_DWORD *)a1 + 69) = v46;
    *((_DWORD *)a1 + 70) = v48;
    *((_DWORD *)a1 + 71) = v50;
    v11 = v52;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 37);
    v13 = v54;
    v45 = *(_OWORD *)((char *)a1 + 140);
    if ( v55 && v54 )
      v13 = -v54;
    v15 = v53 + v57;
    if ( v13 > v53 + v57 )
    {
      v12 = *(_QWORD *)((char *)a1 + 148);
      v16 = HIDWORD(*(_QWORD *)((char *)a1 + 140));
      v17 = *(_OWORD *)((char *)a1 + 140);
    }
    else
    {
      v16 = *((_DWORD *)a1 + 36);
      v17 = *((_DWORD *)a1 + 35);
      if ( v16 - v53 + v56 > v16 )
        v16 = *((_DWORD *)a1 + 36) - v53 + v56;
      if ( *((_DWORD *)a1 + 37) / 2 - v15 - v13 > v17 )
        v17 = *((_DWORD *)a1 + 37) / 2 - v15 - v13;
      v14 = *((_DWORD *)a1 + 37) / 2;
      if ( v15 - v13 + v14 < v12 )
        v12 = v15 - v13 + v14;
    }
    *((_DWORD *)a1 + 69) = v17 - *((_DWORD *)a1 + 35);
    *((_DWORD *)a1 + 70) = v16 - *((_DWORD *)a1 + 36);
    *((_DWORD *)a1 + 71) = *((_DWORD *)a1 + 37) - v12;
    v11 = *((_DWORD *)a1 + 38) - HIDWORD(v45);
  }
  v18 = v62;
  v19 = 50;
  *((_DWORD *)a1 + 72) = v11;
  *((_DWORD *)a1 + 73) = v58;
  *((_DWORD *)a1 + 74) = v59;
  *((_DWORD *)a1 + 75) = v60;
  *((_DWORD *)a1 + 76) = v61;
  if ( (unsigned int)(v18 - 1) <= 0x63 )
    v19 = v18;
  v20 = v63;
  *((_DWORD *)a1 + 77) = v19;
  v21 = 25;
  if ( (unsigned int)(v20 - 1) <= 0x63 )
    v21 = v20;
  v22 = v64 == 0;
  *((_DWORD *)a1 + 78) = v21;
  *((_DWORD *)a1 + 67) = v22;
  if ( (unsigned int)Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline() )
  {
    v23 = EngMulDiv(a, *((_DWORD *)a1 + 37), 100);
    v24 = v66;
    *((_DWORD *)a1 + 79) = v23;
    v25 = EngMulDiv(v24, *((_DWORD *)a1 + 38), 100);
    v26 = v67;
    *((_DWORD *)a1 + 80) = v25;
    v27 = EngMulDiv(v26, *((_DWORD *)a1 + 37), 100);
    v28 = v68;
    *((_DWORD *)a1 + 81) = v27;
    v29 = EngMulDiv(v28, *((_DWORD *)a1 + 38), 100);
    v30 = v69;
    *((_DWORD *)a1 + 82) = v29;
    v31 = EngMulDiv(v30, *((_DWORD *)a1 + 37), 100);
    v32 = v70;
    *((_DWORD *)a1 + 83) = v31;
    v33 = EngMulDiv(v32, *((_DWORD *)a1 + 38), 100);
    v34 = v71;
    *((_DWORD *)a1 + 84) = v33;
    v35 = EngMulDiv(v34, *((_DWORD *)a1 + 37), 100);
    v36 = v72;
    *((_DWORD *)a1 + 85) = v35;
    v37 = EngMulDiv(v36, *((_DWORD *)a1 + 38), 100);
    v38 = v73;
    *((_DWORD *)a1 + 86) = v37;
    v39 = EngMulDiv(v38, *((_DWORD *)a1 + 37), 100);
    v40 = v74;
    *((_DWORD *)a1 + 87) = v39;
    v41 = EngMulDiv(v40, *((_DWORD *)a1 + 38), 100);
    v42 = v75;
    *((_DWORD *)a1 + 88) = v41;
    v43 = EngMulDiv(v42, *((_DWORD *)a1 + 37), 100);
    v44 = v76;
    *((_DWORD *)a1 + 89) = v43;
    *((_DWORD *)a1 + 90) = EngMulDiv(v44, *((_DWORD *)a1 + 38), 100);
  }
}
