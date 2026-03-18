/*
 * XREFs of ?vAdvXDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x14013AF80
 * Callers:
 *     ?prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14013A520 (-prunPlgRead32@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14013AB50 (-prunPlgRead24@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1403414A0 (-prunPlgRead16@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341660 (-prunPlgRead1@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341880 (-prunPlgRead4@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140341AE0 (-prunPlgRead8@rotate@@YAPEAU_PLGRUN@1@PEAU_PLGDDA@1@PEAU21@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall rotate::vAdvXDDA(rotate *this, struct rotate::_PLGDDA *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  int v4; // r9d
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // eax
  int v11; // r9d
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // r9d
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r8d
  int v21; // r9d
  unsigned int v22; // r8d
  int v23; // r9d
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned int v26; // r8d
  int v27; // r9d
  unsigned int v28; // r8d

  *((_DWORD *)this + 17) += *((_DWORD *)this + 33);
  v2 = *((_DWORD *)this + 18) + *((_DWORD *)this + 34);
  v3 = *((_DWORD *)this + 35);
  v4 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 18) = v2;
  if ( v2 >= v3 )
  {
    *((_DWORD *)this + 17) = v4 + 1;
    *((_DWORD *)this + 18) = v2 - v3;
    v5 = *((_DWORD *)this + 93) + *((_DWORD *)this + 25);
    *((_DWORD *)this + 25) = v5;
    v6 = *((_DWORD *)this + 26) + *((_DWORD *)this + 94);
    *((_DWORD *)this + 26) = v6;
    if ( v6 >= *((_DWORD *)this + 95) )
    {
      *((_DWORD *)this + 25) = v5 + 1;
      *((_DWORD *)this + 26) = v6 - *((_DWORD *)this + 95);
    }
    v7 = *((_DWORD *)this + 96) + *((_DWORD *)this + 27);
    *((_DWORD *)this + 27) = v7;
    v8 = *((_DWORD *)this + 28) + *((_DWORD *)this + 97);
    *((_DWORD *)this + 28) = v8;
    if ( v8 >= *((_DWORD *)this + 98) )
    {
      *((_DWORD *)this + 27) = v7 + 1;
      *((_DWORD *)this + 28) = v8 - *((_DWORD *)this + 98);
    }
  }
  *((_DWORD *)this + 19) += *((_DWORD *)this + 36);
  v9 = *((_DWORD *)this + 20) + *((_DWORD *)this + 37);
  v10 = *((_DWORD *)this + 38);
  v11 = *((_DWORD *)this + 19);
  *((_DWORD *)this + 20) = v9;
  if ( v9 >= v10 )
  {
    *((_DWORD *)this + 19) = v11 + 1;
    *((_DWORD *)this + 20) = v9 - v10;
    v12 = *((_DWORD *)this + 96) + *((_DWORD *)this + 29);
    *((_DWORD *)this + 29) = v12;
    v13 = *((_DWORD *)this + 30) + *((_DWORD *)this + 97);
    *((_DWORD *)this + 30) = v13;
    if ( v13 >= *((_DWORD *)this + 98) )
    {
      *((_DWORD *)this + 29) = v12 + 1;
      *((_DWORD *)this + 30) = v13 - *((_DWORD *)this + 98);
    }
  }
  *((_DWORD *)this + 21) += *((_DWORD *)this + 39);
  v14 = *((_DWORD *)this + 22) + *((_DWORD *)this + 40);
  v15 = *((_DWORD *)this + 41);
  v16 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 22) = v14;
  if ( v14 >= v15 )
  {
    *((_DWORD *)this + 21) = v16 + 1;
    *((_DWORD *)this + 22) = v14 - v15;
    v17 = *((_DWORD *)this + 93) + *((_DWORD *)this + 31);
    *((_DWORD *)this + 31) = v17;
    v18 = *((_DWORD *)this + 32) + *((_DWORD *)this + 94);
    *((_DWORD *)this + 32) = v18;
    if ( v18 >= *((_DWORD *)this + 95) )
    {
      *((_DWORD *)this + 31) = v17 + 1;
      *((_DWORD *)this + 32) = v18 - *((_DWORD *)this + 95);
    }
  }
  v19 = *((_DWORD *)this + 42) + *((_DWORD *)this + 23);
  *((_DWORD *)this + 23) = v19;
  v20 = *((_DWORD *)this + 24) + *((_DWORD *)this + 43);
  *((_DWORD *)this + 24) = v20;
  if ( v20 >= *((_DWORD *)this + 44) )
  {
    *((_DWORD *)this + 23) = v19 + 1;
    *((_DWORD *)this + 24) = v20 - *((_DWORD *)this + 44);
  }
  v21 = *((_DWORD *)this + 57) + *((_DWORD *)this + 25);
  *((_DWORD *)this + 25) = v21;
  v22 = *((_DWORD *)this + 26) + *((_DWORD *)this + 58);
  *((_DWORD *)this + 26) = v22;
  if ( v22 >= *((_DWORD *)this + 59) )
  {
    *((_DWORD *)this + 25) = v21 + 1;
    *((_DWORD *)this + 26) = v22 - *((_DWORD *)this + 59);
  }
  v23 = *((_DWORD *)this + 60) + *((_DWORD *)this + 27);
  *((_DWORD *)this + 27) = v23;
  v24 = *((_DWORD *)this + 28) + *((_DWORD *)this + 61);
  *((_DWORD *)this + 28) = v24;
  if ( v24 >= *((_DWORD *)this + 62) )
  {
    *((_DWORD *)this + 27) = v23 + 1;
    *((_DWORD *)this + 28) = v24 - *((_DWORD *)this + 62);
  }
  v25 = *((_DWORD *)this + 29) + *((_DWORD *)this + 63);
  *((_DWORD *)this + 29) = v25;
  v26 = *((_DWORD *)this + 30) + *((_DWORD *)this + 64);
  *((_DWORD *)this + 30) = v26;
  if ( v26 >= *((_DWORD *)this + 65) )
  {
    *((_DWORD *)this + 29) = v25 + 1;
    *((_DWORD *)this + 30) = v26 - *((_DWORD *)this + 65);
  }
  v27 = *((_DWORD *)this + 31) + *((_DWORD *)this + 66);
  *((_DWORD *)this + 31) = v27;
  v28 = *((_DWORD *)this + 32) + *((_DWORD *)this + 67);
  *((_DWORD *)this + 32) = v28;
  if ( v28 >= *((_DWORD *)this + 68) )
  {
    *((_DWORD *)this + 31) = v27 + 1;
    *((_DWORD *)this + 32) = v28 - *((_DWORD *)this + 68);
  }
}
