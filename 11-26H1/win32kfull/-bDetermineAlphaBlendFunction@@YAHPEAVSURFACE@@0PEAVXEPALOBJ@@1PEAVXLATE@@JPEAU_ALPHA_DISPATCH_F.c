/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1400E5C38
 * Callers:
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
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
  void *v24; // rax
  _DWORD *v25; // rax
  bool v26; // zf
  void (__fastcall *v27)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v28; // rax
  bool v29; // zf
  int v30; // eax
  void *v31; // rax
  void (__fastcall *v32)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rcx
  int v33; // eax
  __int64 (__fastcall *v34)(); // rax
  _DWORD *v35; // rcx
  void *v36; // rax
  void (__fastcall *v37)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  _DWORD *v38; // rcx
  _DWORD *v39; // rax
  bool v40; // zf
  _DWORD *v41; // rax
  bool v42; // zf

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
    v24 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
LABEL_27:
    *((_QWORD *)a7 + 3) = v24;
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v24 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
    goto LABEL_27;
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
    v35 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
    if ( *v35 == 63488 )
    {
      if ( v35[1] == 2016 && v35[2] == 31 )
      {
        v36 = &vConvertAndSaveBGRAToRGB16_565;
        v37 = vLoadAndConvertRGB16_565ToBGRA;
        goto LABEL_65;
      }
    }
    else if ( *v35 == 31744 && v35[1] == 992 && v35[2] == 31 )
    {
      v36 = &vConvertAndSaveBGRAToRGB16_555;
      v37 = vLoadAndConvertRGB16_555ToBGRA;
LABEL_65:
      *((_QWORD *)a7 + 2) = v37;
      *((_QWORD *)a7 + 3) = v36;
      *(_DWORD *)a7 = 16;
      goto LABEL_13;
    }
    v36 = &vConvertAndSaveBGRAToRGB16Bitfields;
    v37 = vLoadAndConvert16BitfieldsToBGRA;
    goto LABEL_65;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v30 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v30 & 8) != 0 )
    {
LABEL_52:
      v31 = &vConvertAndSaveBGRAToBGR24;
      v32 = vLoadAndConvertBGR24ToBGRA;
LABEL_53:
      *((_QWORD *)a7 + 2) = v32;
      *((_QWORD *)a7 + 3) = v31;
      *(_DWORD *)a7 = 24;
      goto LABEL_13;
    }
    if ( (v30 & 2) != 0 )
    {
      v39 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v39 == 16711680 )
      {
        if ( v39[1] != 65280 )
          goto LABEL_77;
        v40 = v39[2] == 255;
      }
      else
      {
        if ( *v39 || v39[1] )
          goto LABEL_77;
        v40 = v39[2] == 0;
      }
      if ( v40 )
        goto LABEL_52;
    }
LABEL_77:
    v31 = &vConvertAndSaveBGRAToRGB24;
    v32 = vLoadAndConvertRGB24ToBGRA;
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
      v28 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v28 == 16711680 )
      {
        if ( v28[1] != 65280 )
          goto LABEL_49;
        v29 = v28[2] == 255;
      }
      else
      {
        if ( *v28 || v28[1] )
          goto LABEL_49;
        v29 = v28[2] == 0;
      }
      if ( v29 )
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
      v38 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v38 == 63488 )
      {
        if ( v38[1] == 2016 && v38[2] == 31 )
          v13 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v38 == 31744 && v38[1] == 992 && v38[2] == 31 )
      {
        v13 = vLoadAndConvertRGB16_555ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v13;
      *((_DWORD *)a7 + 1) = 16;
      goto LABEL_23;
    case 5:
      v33 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v33 & 8) != 0 )
      {
LABEL_55:
        *((_QWORD *)a7 + 1) = v12;
        *((_DWORD *)a7 + 1) = 24;
        goto LABEL_23;
      }
      if ( (v33 & 2) != 0 )
      {
        v41 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
        if ( *v41 == 16711680 )
        {
          if ( v41[1] != 65280 )
            goto LABEL_83;
          v42 = v41[2] == 255;
        }
        else
        {
          if ( *v41 || v41[1] )
            goto LABEL_83;
          v42 = v41[2] == 0;
        }
        if ( v42 )
          goto LABEL_55;
      }
LABEL_83:
      v12 = vLoadAndConvertRGB24ToBGRA;
      goto LABEL_55;
    case 6:
      if ( !a5 )
        goto LABEL_21;
      v22 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v22 & 8) != 0 )
        goto LABEL_21;
      if ( (v22 & 2) != 0 )
      {
        v25 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
        if ( *v25 == 16711680 )
        {
          if ( v25[1] != 65280 )
            goto LABEL_41;
          v26 = v25[2] == 255;
        }
        else
        {
          if ( *v25 || v25[1] )
            goto LABEL_41;
          v26 = v25[2] == 0;
        }
        if ( v26 )
        {
LABEL_21:
          v11 = 0LL;
LABEL_22:
          *((_QWORD *)a7 + 1) = v11;
          *((_DWORD *)a7 + 1) = 32;
          goto LABEL_23;
        }
      }
LABEL_41:
      if ( (v22 & 4) != 0 )
        v11 = vLoadAndConvertRGB32ToBGRA;
      goto LABEL_22;
  }
  v7 = 0;
LABEL_23:
  if ( *((__int64 (__fastcall **)())a7 + 4) != vAlphaConstOnly )
    return v7;
  v27 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
  if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
  {
    v34 = vAlphaConstOnly16_555;
LABEL_58:
    *((_QWORD *)a7 + 4) = v34;
    *((_BYTE *)a7 + 42) = (31 * (unsigned int)*((unsigned __int8 *)a7 + 42) + 128) / 0xFF;
    goto LABEL_59;
  }
  if ( v27 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB16_565ToBGRA )
  {
    v34 = vAlphaConstOnly16_565;
    goto LABEL_58;
  }
  if ( v27 == vLoadAndConvertRGB24ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
LABEL_59:
    *((_QWORD *)a7 + 1) = 0LL;
    *((_QWORD *)a7 + 2) = 0LL;
    *((_QWORD *)a7 + 3) = 0LL;
  }
  return v7;
}
