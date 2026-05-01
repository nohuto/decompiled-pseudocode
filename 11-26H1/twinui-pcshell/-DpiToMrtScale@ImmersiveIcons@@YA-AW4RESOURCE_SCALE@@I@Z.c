/*
 * XREFs of ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18067E4C0
 * Callers:
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067E950 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067EAE0 (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveIcons::DpiToMrtScale(unsigned int a1)
{
  char *v2; // rcx
  _DWORD v4[2]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v5; // [rsp+8h] [rbp-78h]
  int v6; // [rsp+10h] [rbp-70h]
  int v7; // [rsp+14h] [rbp-6Ch]
  int v8; // [rsp+18h] [rbp-68h]
  int v9; // [rsp+1Ch] [rbp-64h]
  int v10; // [rsp+20h] [rbp-60h]
  int v11; // [rsp+24h] [rbp-5Ch]
  int v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+2Ch] [rbp-54h]
  int v14; // [rsp+30h] [rbp-50h]
  int v15; // [rsp+34h] [rbp-4Ch]
  int v16; // [rsp+38h] [rbp-48h]
  int v17; // [rsp+3Ch] [rbp-44h]
  int v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+44h] [rbp-3Ch]
  int v20; // [rsp+48h] [rbp-38h]
  int v21; // [rsp+4Ch] [rbp-34h]
  int v22; // [rsp+50h] [rbp-30h]
  int v23; // [rsp+54h] [rbp-2Ch]
  int v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]
  int v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+64h] [rbp-1Ch]
  int v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]
  int v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+74h] [rbp-Ch]
  int v32; // [rsp+78h] [rbp-8h]
  int v33; // [rsp+7Ch] [rbp-4h]
  char vars0; // [rsp+80h] [rbp+0h] BYREF

  v4[0] = 76;
  v33 = 15;
  v4[1] = 3;
  v2 = (char *)v4;
  v5 = 96LL;
  v6 = 115;
  v7 = 7;
  v8 = 120;
  v9 = 8;
  v10 = 134;
  v11 = 1;
  v12 = 144;
  v13 = 4;
  v14 = 153;
  v15 = 5;
  v16 = 172;
  v17 = 2;
  v18 = 192;
  v19 = 9;
  v20 = 211;
  v21 = 10;
  v22 = 216;
  v23 = 6;
  v24 = 230;
  v25 = 11;
  v26 = 240;
  v27 = 12;
  v28 = 288;
  v29 = 13;
  v30 = 384;
  v31 = 14;
  v32 = 480;
  while ( v2 != &vars0 )
  {
    if ( (unsigned int)*(_QWORD *)v2 >= a1 )
      return HIDWORD(*(_QWORD *)v2);
    v2 += 8;
  }
  return 15LL;
}
