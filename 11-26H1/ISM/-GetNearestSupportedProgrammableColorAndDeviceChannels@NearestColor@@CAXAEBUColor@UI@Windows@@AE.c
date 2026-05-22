/*
 * XREFs of ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x180062204
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
        const struct Windows::UI::Color *a1,
        const struct LampAttributes *a2,
        struct Windows::UI::Color *a3,
        struct LampColor *a4)
{
  double v4; // xmm1_8
  double v5; // xmm11_8
  double v6; // xmm12_8
  int v7; // eax
  double v8; // xmm13_8
  double v9; // xmm8_8
  int v10; // eax
  double v11; // xmm7_8
  int v12; // eax
  double v13; // xmm6_8
  int v14; // r8d
  unsigned __int8 v15; // dl
  int v16; // edi
  int v17; // r11d
  int v18; // ebx
  double v19; // xmm3_8
  double v20; // xmm4_8
  double v21; // xmm3_8
  double v22; // xmm1_8
  double v23; // xmm0_8
  double v24; // xmm10_8
  double v25; // xmm1_8
  double v26; // xmm0_8
  double v27; // xmm5_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm0_8
  double v31; // xmm1_8
  double v32; // xmm9_8
  double v33; // xmm0_8
  double v34; // xmm9_8
  double v35; // [rsp+A8h] [rbp+10h]
  double v36; // [rsp+B0h] [rbp+18h]

  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = *((unsigned __int8 *)a2 + 24);
  v8 = 0.0;
  v35 = 0.0;
  if ( (_BYTE)v7 )
    v9 = 255.0 / (double)v7;
  else
    v9 = 0.0;
  v10 = *((unsigned __int8 *)a2 + 25);
  if ( (_BYTE)v10 )
    v11 = 255.0 / (double)v10;
  else
    v11 = 0.0;
  v12 = *((unsigned __int8 *)a2 + 26);
  if ( (_BYTE)v12 )
    v13 = 255.0 / (double)v12;
  else
    v13 = 0.0;
  v14 = *((unsigned __int8 *)a2 + 27);
  if ( (_BYTE)v14 )
  {
    v15 = 1;
    v36 = DOUBLE__Inf;
    v16 = *((unsigned __int8 *)a1 + 3);
    v17 = *((unsigned __int8 *)a1 + 1);
    v18 = *((unsigned __int8 *)a1 + 2);
    v19 = (double)v14;
    do
    {
      v20 = (double)v15 / v19;
      v21 = v20 * 255.0;
      v22 = v20 * v9;
      if ( v20 * v9 <= 0.0 )
        v23 = 0.0;
      else
        v23 = (double)v17 / v22;
      v24 = (double)(int)(v23 + 0.5) * v22;
      if ( v24 > v21 )
        v24 = v20 * 255.0;
      v25 = v20 * v11;
      if ( v20 * v11 <= 0.0 )
        v26 = 0.0;
      else
        v26 = (double)v18 / v25;
      v27 = (double)(int)(v26 + 0.5) * v25;
      if ( v27 > v21 )
        v27 = v20 * 255.0;
      v28 = v20 * v13;
      if ( v20 * v13 <= 0.0 )
        v29 = 0.0;
      else
        v29 = (double)v16 / v28;
      v30 = (double)(int)(v29 + 0.5) * v28;
      if ( v30 <= v21 )
        v21 = v30;
      v31 = (double)(v17 - (unsigned __int8)(int)v24);
      v32 = (double)(v18 - (unsigned __int8)(int)v27);
      v33 = (double)(v16 - (unsigned __int8)(int)v21);
      v34 = v32 * v32 + v31 * v31 + v33 * v33;
      if ( v36 <= v34 )
      {
        v4 = v35;
      }
      else
      {
        v4 = (double)v15;
        v35 = v4;
        v5 = v24 / v9 / v20;
        v6 = v27 / v11 / v20;
        v8 = v21 / v13 / v20;
        if ( v34 == 0.0 )
          break;
        v36 = v34;
      }
      v19 = (double)v14;
      ++v15;
    }
    while ( v15 <= (unsigned __int8)v14 );
  }
  if ( a4 )
  {
    *(_BYTE *)a4 = (int)v5;
    *((_BYTE *)a4 + 1) = (int)v6;
    *((_BYTE *)a4 + 2) = (int)v8;
    *((_BYTE *)a4 + 3) = (int)v4;
  }
}
