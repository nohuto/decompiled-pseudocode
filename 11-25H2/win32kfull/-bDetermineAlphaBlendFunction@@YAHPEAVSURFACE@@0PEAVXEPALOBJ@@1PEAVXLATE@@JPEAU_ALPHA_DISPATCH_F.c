/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x14006E5A8
 * Callers:
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineAlphaBlendFunction(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct XEPALOBJ *a3,
        struct XEPALOBJ *a4,
        struct XLATE *a5,
        int a6,
        struct _ALPHA_DISPATCH_FORMAT *a7)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *v10)(); // rax
  void (__fastcall *v11)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r9
  void (__fastcall *v12)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rdi
  void (__fastcall *v13)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r11
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  void *v20; // rax
  void (__fastcall *v21)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  int v22; // ecx
  _DWORD *v24; // rax
  void *v25; // rax
  void (__fastcall *v26)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v27; // rax
  int v28; // eax
  void *v29; // rax
  void (__fastcall *v30)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  void *v33; // rax
  void (__fastcall *v34)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  _DWORD *v35; // rcx
  __int64 (__fastcall *v36)(); // rax
  _DWORD *v37; // rax
  _DWORD *v38; // rax

  v7 = 1;
  *((_DWORD *)a7 + 11) = 0;
  if ( (*((_BYTE *)a7 + 43) & 1) != 0 )
  {
    v10 = vAlphaPerPixelAndConst;
    if ( *((_BYTE *)a7 + 42) == 0xFF )
      v10 = vAlphaPerPixelOnly;
  }
  else
  {
    v10 = vAlphaConstOnly;
  }
  *((_QWORD *)a7 + 4) = v10;
  v11 = vLoadAndConvert32BitfieldsToBGRA;
  v12 = vLoadAndConvertBGR24ToBGRA;
  v13 = vLoadAndConvert16BitfieldsToBGRA;
  v14 = *((_DWORD *)a1 + 24) - 1;
  if ( !v14 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
    v25 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
LABEL_35:
    *((_QWORD *)a7 + 3) = v25;
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v25 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
    goto LABEL_35;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *(_DWORD *)a7 = 8;
    *((_QWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
    *((_QWORD *)a7 + 3) = &vConvertAndSaveBGRATo8;
    goto LABEL_13;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v32 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
    if ( *v32 == 63488 )
    {
      if ( v32[1] == 2016 && v32[2] == 31 )
      {
        v33 = &vConvertAndSaveBGRAToRGB16_565;
        v34 = vLoadAndConvertRGB16_565ToBGRA;
        goto LABEL_62;
      }
    }
    else if ( *v32 == 31744 && v32[1] == 992 && v32[2] == 31 )
    {
      v33 = &vConvertAndSaveBGRAToRGB16_555;
      v34 = vLoadAndConvertRGB16_555ToBGRA;
LABEL_62:
      *((_QWORD *)a7 + 2) = v34;
      *((_QWORD *)a7 + 3) = v33;
      *(_DWORD *)a7 = 16;
      goto LABEL_13;
    }
    v33 = &vConvertAndSaveBGRAToRGB16Bitfields;
    v34 = vLoadAndConvert16BitfieldsToBGRA;
    goto LABEL_62;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v28 & 8) != 0 )
    {
LABEL_52:
      v29 = &vConvertAndSaveBGRAToBGR24;
      v30 = vLoadAndConvertBGR24ToBGRA;
LABEL_53:
      *((_QWORD *)a7 + 2) = v30;
      *((_QWORD *)a7 + 3) = v29;
      *(_DWORD *)a7 = 24;
      goto LABEL_13;
    }
    if ( (v28 & 2) != 0 )
    {
      v37 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v37 == 16711680 )
      {
        if ( v37[1] != 65280 )
          goto LABEL_80;
        if ( v37[2] == 255 )
          goto LABEL_52;
      }
      if ( !*v37 && !v37[1] && !v37[2] )
        goto LABEL_52;
    }
LABEL_80:
    v29 = &vConvertAndSaveBGRAToRGB24;
    v30 = vLoadAndConvertRGB24ToBGRA;
    goto LABEL_53;
  }
  if ( v18 == 1 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v19 & 8) != 0 )
    {
LABEL_11:
      v20 = 0LL;
      v21 = 0LL;
LABEL_12:
      *((_QWORD *)a7 + 2) = v21;
      *((_QWORD *)a7 + 3) = v20;
      *(_DWORD *)a7 = 32;
      goto LABEL_13;
    }
    if ( (v19 & 2) != 0 )
    {
      v27 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v27 == 16711680 )
      {
        if ( v27[1] != 65280 )
          goto LABEL_49;
        if ( v27[2] == 255 )
          goto LABEL_11;
      }
      if ( !*v27 && !v27[1] && !v27[2] )
        goto LABEL_11;
    }
LABEL_49:
    if ( (v19 & 4) != 0 )
    {
      v20 = &vConvertAndSaveBGRAToRGB32;
      v21 = vLoadAndConvertRGB32ToBGRA;
    }
    else
    {
      v20 = &vConvertAndSaveBGRATo32Bitfields;
      v21 = vLoadAndConvert32BitfieldsToBGRA;
    }
    goto LABEL_12;
  }
  v7 = 0;
LABEL_13:
  switch ( *((_DWORD *)a2 + 24) )
  {
    case 1:
      *((_QWORD *)a7 + 1) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      goto LABEL_23;
    case 2:
      *((_DWORD *)a7 + 1) = 4;
      *((_QWORD *)a7 + 1) = vLoadAndConvert4ToBGRA;
      goto LABEL_23;
    case 3:
      *((_QWORD *)a7 + 1) = vLoadAndConvert8ToBGRA;
      *((_DWORD *)a7 + 1) = 8;
      goto LABEL_23;
    case 4:
      v35 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v35 == 63488 )
      {
        if ( v35[1] == 2016 && v35[2] == 31 )
          v13 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v35 == 31744 && v35[1] == 992 && v35[2] == 31 )
      {
        v13 = vLoadAndConvertRGB16_555ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v13;
      *((_DWORD *)a7 + 1) = 16;
      goto LABEL_23;
    case 5:
      v31 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v31 & 8) != 0 )
      {
LABEL_55:
        *((_QWORD *)a7 + 1) = v12;
        *((_DWORD *)a7 + 1) = 24;
        goto LABEL_23;
      }
      if ( (v31 & 2) != 0 )
      {
        v38 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
        if ( *v38 != 16711680 )
        {
LABEL_94:
          if ( !*v38 && !v38[1] && !v38[2] )
            goto LABEL_55;
          goto LABEL_97;
        }
        if ( v38[1] == 65280 )
        {
          if ( v38[2] == 255 )
            goto LABEL_55;
          goto LABEL_94;
        }
      }
LABEL_97:
      v12 = vLoadAndConvertRGB24ToBGRA;
      goto LABEL_55;
    case 6:
      if ( !a5 )
        goto LABEL_21;
      v22 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v22 & 8) != 0 )
        goto LABEL_21;
      if ( (v22 & 2) == 0 )
        goto LABEL_31;
      v24 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v24 != 16711680 )
        goto LABEL_108;
      if ( v24[1] != 65280 )
        goto LABEL_31;
      if ( v24[2] != 255 )
      {
LABEL_108:
        if ( *v24 || v24[1] || v24[2] )
        {
LABEL_31:
          if ( (v22 & 4) != 0 )
            v11 = vLoadAndConvertRGB32ToBGRA;
          goto LABEL_22;
        }
      }
LABEL_21:
      v11 = 0LL;
LABEL_22:
      *((_QWORD *)a7 + 1) = v11;
      *((_DWORD *)a7 + 1) = 32;
      goto LABEL_23;
  }
  v7 = 0;
LABEL_23:
  if ( *((__int64 (__fastcall **)())a7 + 4) != vAlphaConstOnly )
    return v7;
  v26 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
  if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
  {
    v36 = vAlphaConstOnly16_555;
LABEL_69:
    *((_QWORD *)a7 + 4) = v36;
    *((_BYTE *)a7 + 42) = (31 * (unsigned int)*((unsigned __int8 *)a7 + 42) + 128) / 0xFF;
    goto LABEL_70;
  }
  if ( v26 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB16_565ToBGRA )
  {
    v36 = vAlphaConstOnly16_565;
    goto LABEL_69;
  }
  if ( v26 == vLoadAndConvertRGB24ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
LABEL_70:
    *((_QWORD *)a7 + 1) = 0LL;
    *((_QWORD *)a7 + 2) = 0LL;
    *((_QWORD *)a7 + 3) = 0LL;
  }
  return v7;
}
