/*
 * XREFs of sub_14001F440 @ 0x14001F440
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001F9F4 @ 0x14001F9F4 (sub_14001F9F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001F440(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax

  *a3 = 0LL;
  v5 = *a2;
  v6 = 0;
  if ( !*a2 )
    v5 = a2[1] - 0x46000000000000C0LL;
  if ( !v5 )
  {
    v25 = a1 - 15;
    v23 = a1 - 16;
    if ( !v23 )
      v25 = 0LL;
    *a3 = v25;
    goto LABEL_56;
  }
  v7 = *a2 - 0x4B5C24D0FD7F2B29LL;
  if ( *a2 == 0x4B5C24D0FD7F2B29LL )
    v7 = a2[1] - 0x10CAF9392C5977B1LL;
  if ( !v7 )
  {
    v26 = a1 - 16;
    if ( !a1[7] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 7);
      if ( v6 >= 0 )
      {
        v31 = a1 - 15;
        if ( !v26 )
          v31 = 0LL;
        *a3 = v31;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 15;
    goto LABEL_60;
  }
  v8 = *a2 - 0x49C3ABA60E5ED805LL;
  if ( *a2 == 0x49C3ABA60E5ED805LL )
    v8 = a2[1] + 0x57B0637773D46571LL;
  if ( !v8 )
  {
    v26 = a1 - 16;
    if ( !a1[9] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 9);
      if ( v6 >= 0 )
      {
        v36 = a1 - 13;
        if ( !v26 )
          v36 = 0LL;
        *a3 = v36;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 13;
    goto LABEL_60;
  }
  v9 = *a2 - 0x4E95DDBC9E1D6A6DLL;
  if ( *a2 == 0x4E95DDBC9E1D6A6DLL )
    v9 = a2[1] - 0x6C8437BA64ADC7A4LL;
  if ( !v9 )
  {
    v26 = a1 - 16;
    if ( !a1[8] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 8);
      if ( v6 >= 0 )
      {
        v35 = a1 - 12;
        if ( !v26 )
          v35 = 0LL;
        *a3 = v35;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 12;
    goto LABEL_60;
  }
  v10 = *a2 - 0x499AADD65FA00F27LL;
  if ( *a2 == 0x499AADD65FA00F27LL )
    v10 = a2[1] - 0x5BA71F52986B9D8ALL;
  if ( !v10 )
  {
    v26 = a1 - 16;
    if ( !a1[10] )
    {
      v29 = a1 + 10;
      goto LABEL_71;
    }
LABEL_109:
    v27 = a1 - 11;
    goto LABEL_60;
  }
  v11 = *a2 - 0x44CE7436BAFE99D2LL;
  if ( *a2 == 0x44CE7436BAFE99D2LL )
    v11 = a2[1] - 0x56FFBFAF894D0E9ELL;
  if ( !v11 )
  {
    v26 = a1 - 16;
    if ( !a1[11] )
    {
      v29 = a1 + 11;
      goto LABEL_71;
    }
    goto LABEL_109;
  }
  v12 = *a2 - 0x4255FC6AC58B31CDLL;
  if ( *a2 == 0x4255FC6AC58B31CDLL )
    v12 = a2[1] - 0x174A0ABB29AD1FBCLL;
  if ( !v12 )
  {
    v26 = a1 - 16;
    if ( !a1[12] )
    {
      v29 = a1 + 12;
LABEL_71:
      v6 = sub_14001F9F4(v26, a2, v29);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v30 = a1 - 11;
      goto LABEL_101;
    }
    goto LABEL_109;
  }
  v13 = *a2 - 0x49A0C177F851809CLL;
  if ( *a2 == 0x49A0C177F851809CLL )
    v13 = a2[1] + 0x54BC86FE90494D4FLL;
  if ( !v13 )
  {
    v26 = a1 - 16;
    if ( a1[15] )
    {
      v27 = a1 - 9;
      goto LABEL_60;
    }
    v6 = sub_14001F9F4(a1 - 16, a2, a1 + 15);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v30 = a1 - 9;
LABEL_101:
    if ( !v26 )
      v30 = 0LL;
    *a3 = v30;
    return (unsigned int)v6;
  }
  v14 = *a2 - 0x48EDFA194CEB0AABLL;
  if ( *a2 == 0x48EDFA194CEB0AABLL )
    v14 = a2[1] - 0x68B7E11A778757A8LL;
  if ( !v14 )
  {
    v26 = a1 - 16;
    if ( !a1[13] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 13);
      if ( v6 >= 0 )
      {
        v33 = a1 - 10;
        if ( !v26 )
          v33 = 0LL;
        *a3 = v33;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 10;
    goto LABEL_60;
  }
  v15 = *a2 - 0x4101323625385759LL;
  if ( *a2 == 0x4101323625385759LL )
    v15 = a2[1] - 0x2D5DFB3D692543A9LL;
  if ( !v15 )
  {
    v26 = a1 - 16;
    if ( !a1[16] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 16);
      if ( v6 >= 0 )
      {
        v32 = a1 - 8;
        if ( !v26 )
          v32 = 0LL;
        *a3 = v32;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 8;
    goto LABEL_60;
  }
  v16 = *a2 - 0x4132F9208AB91395LL;
  if ( *a2 == 0x4132F9208AB91395LL )
    v16 = a2[1] - 0x1797F60407A3F87LL;
  if ( !v16 )
  {
    v26 = a1 - 16;
    if ( !a1[17] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 17);
      if ( v6 >= 0 )
      {
        v39 = a1 - 7;
        if ( !v26 )
          v39 = 0LL;
        *a3 = v39;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 7;
    goto LABEL_60;
  }
  v17 = *a2 - 0x4D2FF1F351CBD3C4LL;
  if ( *a2 == 0x4D2FF1F351CBD3C4LL )
    v17 = a2[1] + 0x4C012FB263811E60LL;
  if ( !v17 )
  {
    v26 = a1 - 16;
    if ( !a1[14] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 14);
      if ( v6 >= 0 )
      {
        v34 = a1 - 6;
        if ( !v26 )
          v34 = 0LL;
        *a3 = v34;
      }
      return (unsigned int)v6;
    }
    v27 = a1 - 6;
    goto LABEL_60;
  }
  v18 = *a2 - 0x4B2102FD56B0C76FLL;
  if ( *a2 == 0x4B2102FD56B0C76FLL )
    v18 = a2[1] + 0x1B7903E67D60D15BLL;
  if ( v18 )
  {
    v19 = *a2 - 0x4EB0A9D6CA2CFBDELL;
    if ( *a2 == 0x4EB0A9D6CA2CFBDELL )
      v19 = a2[1] + 0xF7F4CD92F3B6A44LL;
    if ( v19 )
    {
      v20 = *a2 - 0x48F21E7C67309FFALL;
      if ( *a2 == 0x48F21E7C67309FFALL )
        v20 = a2[1] - 0x25BA83B1259B6FB9LL;
      if ( v20 )
      {
        v21 = *a2 - 56;
        if ( *a2 == 56 )
          v21 = a2[1] - 0x46000000000000C0LL;
        if ( v21 )
        {
          v22 = *a2 - unk_1400C6698;
          if ( *a2 == unk_1400C6698 )
            v22 = a2[1] + 0x6FE1EF9A5528A564LL;
          v23 = a1 - 16;
          if ( v22 )
            return sub_14001F9F4(v23, a2, a3);
          *a3 = v23;
        }
        else
        {
          v28 = a1 - 14;
          v23 = a1 - 16;
          if ( !v23 )
            v28 = 0LL;
          *a3 = v28;
        }
      }
      else
      {
        v37 = a1 - 3;
        v23 = a1 - 16;
        if ( !v23 )
          v37 = 0LL;
        *a3 = v37;
      }
      goto LABEL_56;
    }
    v26 = a1 - 16;
    if ( !a1[19] )
    {
      v6 = sub_14001F9F4(a1 - 16, a2, a1 + 19);
      if ( v6 >= 0 )
      {
        v38 = a1 - 4;
        if ( !v26 )
          v38 = 0LL;
        *a3 = v38;
        a1[18] = a1[19];
      }
      return (unsigned int)v6;
    }
    goto LABEL_59;
  }
  v26 = a1 - 16;
  if ( !a1[18] )
  {
    v6 = sub_14001F9F4(a1 - 16, a2, a1 + 18);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v30 = a1 - 4;
    goto LABEL_101;
  }
LABEL_59:
  v27 = a1 - 4;
LABEL_60:
  v23 = v26;
  if ( !v26 )
    v27 = 0LL;
  *a3 = v27;
LABEL_56:
  sub_1400B6010(v23);
  return (unsigned int)v6;
}
