/*
 * XREFs of HalpEnlightenmentInitialize @ 0x140585848
 * Callers:
 *     HalpHvInitDiscard @ 0x140CAF3C0 (HalpHvInitDiscard.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x1405857EC (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 HalpEnlightenmentInitialize()
{
  __int64 v0; // rdx
  __int64 result; // rax
  _DWORD v2[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v3; // [rsp+28h] [rbp-D8h]
  int v4; // [rsp+38h] [rbp-C8h]
  _DWORD v5[3]; // [rsp+3Ch] [rbp-C4h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int64 v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  __int64 v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int64 v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  __int64 v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  __int64 v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  __int64 v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  __int64 v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  __int64 v68; // [rsp+248h] [rbp+148h]
  __int64 v69; // [rsp+250h] [rbp+150h]
  __int64 v70; // [rsp+258h] [rbp+158h]
  __int64 v71; // [rsp+260h] [rbp+160h]
  __int64 v72; // [rsp+268h] [rbp+168h]
  __int64 v73; // [rsp+270h] [rbp+170h]
  __int64 v74; // [rsp+278h] [rbp+178h]
  __int64 v75; // [rsp+280h] [rbp+180h]
  __int64 v76; // [rsp+288h] [rbp+188h]
  __int64 v77; // [rsp+290h] [rbp+190h]
  __int64 v78; // [rsp+298h] [rbp+198h]

  memset_0(v2, 0, 0x280uLL);
  result = qword_140E00970;
  if ( qword_140E00970 )
  {
    result = guard_dispatch_icall_no_overrides(v2, v0);
    if ( !v4 )
    {
      if ( v5[0] )
      {
        result = (unsigned int)(v5[0] + 1);
        if ( ((unsigned int)result & v5[0]) == 0 )
        {
          HalpEnlightenment = v2[0];
          dword_140FBB024 = v2[1];
          dword_140FBB03C = v5[0];
          qword_140FBB040 = *(_QWORD *)&v5[1];
          qword_140FBB048 = v6;
          qword_140FBB068 = v10;
          qword_140FBB070 = v11;
          qword_140FBB078 = v12;
          qword_140FBB050 = v7;
          qword_140FBB058 = v8;
          qword_140FBB060 = v9;
          qword_140FBB090 = v15;
          qword_140FBB0B8 = v20;
          qword_140FBB0C0 = v21;
          qword_140FBB0C8 = v22;
          qword_140FBB0D0 = v23;
          qword_140FBB0D8 = v24;
          qword_140FBB0E0 = v25;
          qword_140FBB0E8 = v26;
          qword_140FBB1A8 = v50;
          qword_140FBB1B0 = v51;
          qword_140FBB0F0 = v27;
          qword_140FBB0F8 = v28;
          qword_140FBB100 = v29;
          qword_140FBB120 = v33;
          qword_140FBB188 = v46;
          qword_140FBB118 = v32;
          qword_140FBB128 = v34;
          qword_140FBB140 = v37;
          qword_140FBB148 = v38;
          qword_140FBB150 = v39;
          qword_140FBB158 = v40;
          qword_140FBB130 = v35;
          qword_140FBB108 = v30;
          qword_140FBB110 = v31;
          xmmword_140FBB028 = v3;
          qword_140FBB080 = v13;
          qword_140FBB088 = v14;
          qword_140FBB098 = v16;
          qword_140FBB0A0 = v17;
          qword_140FBB0A8 = v18;
          qword_140FBB0B0 = v19;
          qword_140FBB160 = v41;
          qword_140FBB168 = v42;
          qword_140FBB170 = v43;
          qword_140FBB178 = v44;
          qword_140FBB180 = v45;
          qword_140FBB190 = v47;
          qword_140FBB198 = v48;
          qword_140FBB1A0 = v49;
          qword_140FBB1B8 = v52;
          qword_140FBB1C0 = v53;
          qword_140FBB1C8 = v54;
          qword_140FBB1D0 = v55;
          qword_140FBB1D8 = v56;
          qword_140FBB1E0 = v57;
          qword_140FBB210 = v63;
          qword_140FBB218 = v64;
          qword_140FBB230 = v66;
          qword_140FBB238 = v67;
          qword_140FBB1E8 = v58;
          qword_140FBB1F0 = v59;
          qword_140FBB1F8 = v60;
          qword_140FBB200 = v61;
          qword_140FBB208 = v62;
          qword_140FBB248 = v68;
          qword_140FBB258 = v70;
          qword_140FBB250 = v69;
          qword_140FBB260 = v71;
          qword_140FBB268 = v72;
          qword_140FBB270 = v73;
          qword_140FBB228 = v65;
          qword_140FBB278 = v74;
          qword_140FBB280 = v75;
          qword_140FBB138 = v36;
          if ( (unsigned int)Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline() )
            qword_140FBB288 = v76;
          qword_140FBB290 = v77;
          result = v78;
          qword_140FBB298 = v78;
        }
      }
    }
  }
  return result;
}
