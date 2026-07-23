/*
 * XREFs of CcSetVacbLargeOffset @ 0x1402C3430
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SetVacb @ 0x1402C3ED0 (SetVacb.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcAdjustVacbLevelLockCount @ 0x14046FEC0 (CcAdjustVacbLevelLockCount.c)
 *     CcDereferenceFileOffset @ 0x1404EC870 (CcDereferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     CcDeallocateVacbLevel @ 0x1403BFFA8 (CcDeallocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x1403C0CDC (CcAllocateVacbLevels.c)
 *     VacbLevelReference @ 0x1403C15DC (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140447F50 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateVacbLevel @ 0x1404B0124 (CcAllocateVacbLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v5; // r8
  __int128 *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // ecx
  char v13; // si
  __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *VacbLevel; // r12
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  void *v21; // rdx
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  BOOL v32; // r12d
  _DWORD *v33; // rax
  __int64 BcbListHeadLargeOffset; // rdx
  __int64 i; // rcx
  _QWORD *v36; // r10
  int v37; // [rsp+20h] [rbp-E8h]
  BOOL v38; // [rsp+24h] [rbp-E4h]
  unsigned int v40; // [rsp+30h] [rbp-D8h]
  __int128 *v41; // [rsp+38h] [rbp-D0h]
  __int128 v42; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  _OWORD v46[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-68h]
  _DWORD v48[8]; // [rsp+A8h] [rbp-60h]

  v41 = a4;
  memset(v46, 0, sizeof(v46));
  v5 = a1;
  v6 = a4;
  v44 = a2;
  v47 = 0LL;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = 0LL;
  v9 = a2;
  v37 = 0;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v12 = 25;
  v42 = 0LL;
  v43 = 0LL;
  do
  {
    v13 = v12;
    v12 += 7;
    ++v11;
  }
  while ( v10 > 1LL << v12 );
  do
  {
    v40 = v11;
    v14 = v11;
    v15 = v9 >> v13;
    --v11;
    if ( (unsigned int)v8 >= 7 )
      return 0;
    v48[v8] = v15;
    *((_QWORD *)v46 + v8) = v7;
    v8 = (unsigned int)(v8 + 1);
    v45 = (unsigned int)v15;
    VacbLevel = (_QWORD *)v7[(unsigned int)v15];
    if ( !VacbLevel )
    {
      v31 = *(_DWORD *)(v5 + 152) & 0x200;
      v32 = v31 && !v11;
      v38 = v32;
      if ( !v6 )
      {
        *(_QWORD *)&v43 = 0LL;
        *((_QWORD *)&v42 + 1) = &v42;
        DWORD2(v43) = 0;
        *(_QWORD *)&v42 = &v42;
        LOBYTE(v15) = v31 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)v14, v15, &v42) )
          return 0;
        v6 = &v42;
        v41 = &v42;
      }
      VacbLevel = (_QWORD *)CcAllocateVacbLevel(v6, v32, v5, v14);
      if ( v38 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v44, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v36 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        VacbLevel[128] = BcbListHeadLargeOffset;
        VacbLevel[129] = VacbLevel + 130;
        VacbLevel[130] = VacbLevel + 128;
        VacbLevel[131] = VacbLevel + 132;
        VacbLevel[132] = VacbLevel + 130;
        VacbLevel[133] = VacbLevel + 134;
        VacbLevel[134] = VacbLevel + 132;
        VacbLevel[135] = VacbLevel + 136;
        VacbLevel[136] = VacbLevel + 134;
        VacbLevel[137] = VacbLevel + 138;
        VacbLevel[138] = VacbLevel + 136;
        VacbLevel[139] = VacbLevel + 140;
        VacbLevel[140] = VacbLevel + 138;
        VacbLevel[141] = VacbLevel + 142;
        VacbLevel[142] = VacbLevel + 140;
        VacbLevel[143] = VacbLevel + 144;
        VacbLevel[144] = VacbLevel + 142;
        VacbLevel[145] = VacbLevel + 146;
        VacbLevel[146] = VacbLevel + 144;
        VacbLevel[147] = VacbLevel + 148;
        VacbLevel[148] = VacbLevel + 146;
        VacbLevel[149] = VacbLevel + 150;
        VacbLevel[150] = VacbLevel + 148;
        VacbLevel[151] = VacbLevel + 152;
        VacbLevel[152] = VacbLevel + 150;
        VacbLevel[153] = VacbLevel + 154;
        VacbLevel[154] = VacbLevel + 152;
        VacbLevel[155] = VacbLevel + 156;
        VacbLevel[156] = VacbLevel + 154;
        VacbLevel[157] = VacbLevel + 158;
        VacbLevel[158] = VacbLevel + 156;
        VacbLevel[159] = VacbLevel + 160;
        VacbLevel[160] = VacbLevel + 158;
        VacbLevel[161] = VacbLevel + 162;
        VacbLevel[162] = VacbLevel + 160;
        VacbLevel[163] = VacbLevel + 164;
        VacbLevel[164] = VacbLevel + 162;
        VacbLevel[165] = VacbLevel + 166;
        VacbLevel[166] = VacbLevel + 164;
        VacbLevel[167] = VacbLevel + 168;
        VacbLevel[168] = VacbLevel + 166;
        VacbLevel[169] = VacbLevel + 170;
        VacbLevel[170] = VacbLevel + 168;
        VacbLevel[171] = VacbLevel + 172;
        VacbLevel[172] = VacbLevel + 170;
        VacbLevel[173] = VacbLevel + 174;
        VacbLevel[174] = VacbLevel + 172;
        VacbLevel[175] = VacbLevel + 176;
        VacbLevel[176] = VacbLevel + 174;
        VacbLevel[177] = VacbLevel + 178;
        VacbLevel[178] = VacbLevel + 176;
        VacbLevel[179] = VacbLevel + 180;
        VacbLevel[180] = VacbLevel + 178;
        VacbLevel[181] = VacbLevel + 182;
        VacbLevel[182] = VacbLevel + 180;
        VacbLevel[183] = VacbLevel + 184;
        VacbLevel[184] = VacbLevel + 182;
        VacbLevel[185] = VacbLevel + 186;
        VacbLevel[186] = VacbLevel + 184;
        VacbLevel[187] = VacbLevel + 188;
        VacbLevel[188] = VacbLevel + 186;
        VacbLevel[189] = VacbLevel + 190;
        VacbLevel[190] = VacbLevel + 188;
        VacbLevel[191] = VacbLevel + 192;
        VacbLevel[192] = VacbLevel + 190;
        VacbLevel[193] = VacbLevel + 194;
        VacbLevel[194] = VacbLevel + 192;
        VacbLevel[195] = VacbLevel + 196;
        VacbLevel[196] = VacbLevel + 194;
        VacbLevel[197] = VacbLevel + 198;
        VacbLevel[198] = VacbLevel + 196;
        VacbLevel[199] = VacbLevel + 200;
        VacbLevel[200] = VacbLevel + 198;
        VacbLevel[201] = VacbLevel + 202;
        VacbLevel[202] = VacbLevel + 200;
        VacbLevel[203] = VacbLevel + 204;
        VacbLevel[204] = VacbLevel + 202;
        VacbLevel[205] = VacbLevel + 206;
        VacbLevel[206] = VacbLevel + 204;
        VacbLevel[207] = VacbLevel + 208;
        VacbLevel[208] = VacbLevel + 206;
        VacbLevel[209] = VacbLevel + 210;
        VacbLevel[210] = VacbLevel + 208;
        VacbLevel[211] = VacbLevel + 212;
        VacbLevel[212] = VacbLevel + 210;
        VacbLevel[213] = VacbLevel + 214;
        VacbLevel[214] = VacbLevel + 212;
        VacbLevel[215] = VacbLevel + 216;
        VacbLevel[216] = VacbLevel + 214;
        VacbLevel[217] = VacbLevel + 218;
        VacbLevel[218] = VacbLevel + 216;
        VacbLevel[219] = VacbLevel + 220;
        VacbLevel[220] = VacbLevel + 218;
        VacbLevel[221] = VacbLevel + 222;
        VacbLevel[222] = VacbLevel + 220;
        VacbLevel[223] = VacbLevel + 224;
        VacbLevel[224] = VacbLevel + 222;
        VacbLevel[225] = VacbLevel + 226;
        VacbLevel[226] = VacbLevel + 224;
        VacbLevel[227] = VacbLevel + 228;
        VacbLevel[228] = VacbLevel + 226;
        VacbLevel[229] = VacbLevel + 230;
        VacbLevel[230] = VacbLevel + 228;
        VacbLevel[231] = VacbLevel + 232;
        VacbLevel[232] = VacbLevel + 230;
        VacbLevel[233] = VacbLevel + 234;
        VacbLevel[234] = VacbLevel + 232;
        VacbLevel[235] = VacbLevel + 236;
        VacbLevel[236] = VacbLevel + 234;
        VacbLevel[237] = VacbLevel + 238;
        VacbLevel[238] = VacbLevel + 236;
        VacbLevel[239] = VacbLevel + 240;
        VacbLevel[240] = VacbLevel + 238;
        VacbLevel[241] = VacbLevel + 242;
        VacbLevel[242] = VacbLevel + 240;
        VacbLevel[243] = VacbLevel + 244;
        VacbLevel[244] = VacbLevel + 242;
        VacbLevel[245] = VacbLevel + 246;
        VacbLevel[246] = VacbLevel + 244;
        VacbLevel[247] = VacbLevel + 248;
        VacbLevel[248] = VacbLevel + 246;
        VacbLevel[249] = VacbLevel + 250;
        VacbLevel[250] = VacbLevel + 248;
        VacbLevel[251] = VacbLevel + 252;
        VacbLevel[252] = VacbLevel + 250;
        VacbLevel[253] = VacbLevel + 254;
        VacbLevel[254] = VacbLevel + 252;
        VacbLevel[255] = v36;
        *v36 = VacbLevel + 254;
      }
      v7[v45] = VacbLevel;
      v33 = (_DWORD *)VacbLevelReference(a1, v7, v40);
      v5 = a1;
      ++*v33;
    }
    v17 = 1LL << v13;
    v13 -= 7;
    v7 = VacbLevel;
    v9 &= v17 - 1;
  }
  while ( v11 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v18 = 1;
    v37 = 1;
    if ( a3 == -2LL )
    {
LABEL_22:
      v24 = v37;
      while ( 1 )
      {
        if ( v11 )
        {
          v25 = 128LL;
        }
        else
        {
          v25 = 128LL;
          if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
            v25 = 256LL;
        }
        if ( v24 )
          --HIDWORD(v7[v25]);
        else
          --LODWORD(v7[v25]);
        v24 = 0;
        if ( !v11 && (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
        {
          v27 = 2052LL;
          v26 = 256LL;
        }
        else
        {
          v26 = 128LL;
          v27 = 1028LL;
        }
        if ( LODWORD(v7[v26]) | *(_DWORD *)((char *)v7 + v27) || !(_DWORD)v8 )
          break;
        v28 = v11;
        v8 = (unsigned int)(v8 - 1);
        ++v11;
        if ( !v28 && (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
        {
          v29 = v7[128];
          v30 = (_QWORD *)v7[255];
          *(_QWORD *)(v29 + 8) = v30;
          *v30 = v29;
        }
        CcDeallocateVacbLevel(v7);
        v7 = (_QWORD *)*((_QWORD *)v46 + v8);
        v5 = a1;
        v7[v48[v8]] = 0LL;
      }
      v6 = v41;
      goto LABEL_13;
    }
  }
  else
  {
    v18 = 0;
    VacbLevel[(unsigned int)(v9 >> v13)] = a3;
  }
  if ( !a3 )
    goto LABEL_22;
  v19 = 256LL;
  if ( (*(_DWORD *)(v5 + 152) & 0x200) == 0 )
    v19 = 128LL;
  if ( v18 )
    ++HIDWORD(VacbLevel[v19]);
  else
    ++LODWORD(VacbLevel[v19]);
LABEL_13:
  if ( v6 == &v42 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD **)v6;
      if ( *(__int128 **)v6 == v6 )
        break;
      if ( (__int128 *)v20[1] != v6 || (v23 = *v20, *(_QWORD **)(*v20 + 8LL) != v20) )
        __fastfail(3u);
      *(_QWORD *)v6 = v23;
      *(_QWORD *)(v23 + 8) = v6;
      ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v20);
      --*((_DWORD *)v6 + 6);
    }
    v21 = (void *)*((_QWORD *)v6 + 2);
    if ( v21 )
    {
      ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v21);
      *((_QWORD *)v6 + 2) = 0LL;
    }
  }
  return 1;
}
