/*
 * XREFs of ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x14037C758
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x14037CA4C (-RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z.c)
 */

__int64 __fastcall RotateCursorShape(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGK_DRIVERCAPS *a4)
{
  __int64 v4; // rsi
  __int64 v8; // r14
  UINT Height; // edx
  UINT Width; // r9d
  UINT Value; // r8d
  UINT Pitch; // ecx
  int v13; // r8d
  char *pPixels; // r11
  UINT v15; // eax
  UINT v16; // ecx
  UINT v17; // edx
  UINT v18; // eax
  UINT v19; // ecx
  UINT XHot; // eax
  UINT v22; // [rsp+58h] [rbp-9h] BYREF
  UINT v23; // [rsp+5Ch] [rbp-5h]
  UINT v24; // [rsp+60h] [rbp-1h]
  UINT v25; // [rsp+64h] [rbp+3h]
  UINT v26; // [rsp+68h] [rbp+7h]
  UINT v27; // [rsp+6Ch] [rbp+Bh]
  char *v28; // [rsp+70h] [rbp+Fh]
  int v29; // [rsp+78h] [rbp+17h]
  int v30; // [rsp+7Ch] [rbp+1Bh]
  UINT v31; // [rsp+80h] [rbp+1Fh] BYREF
  UINT v32; // [rsp+84h] [rbp+23h]
  UINT v33; // [rsp+88h] [rbp+27h]
  UINT v34; // [rsp+8Ch] [rbp+2Bh]
  UINT v35; // [rsp+90h] [rbp+2Fh]
  UINT v36; // [rsp+94h] [rbp+33h]
  char *v37; // [rsp+98h] [rbp+37h]
  int v38; // [rsp+A0h] [rbp+3Fh]
  int v39; // [rsp+A4h] [rbp+43h]

  v4 = a3;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v23 = 0;
  v25 = 0;
  if ( a3 == D3DKMDT_VPPR_IDENTITY )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
    goto LABEL_16;
  }
  v8 = 2LL;
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
    a2->XHot = a1->XHot;
    a2->YHot = a1->YHot;
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 517;
    goto LABEL_29;
  }
  Height = a1->Height;
  Width = a1->Width;
  Value = a1->Flags.Value;
  Pitch = a1->Pitch;
  v13 = Value & 1;
  pPixels = (char *)a2->pPixels;
  v37 = (char *)a1->pPixels;
  v39 = v13;
  v30 = v13;
  v34 = Height;
  v33 = Height;
  v24 = Height;
  v32 = Width;
  v31 = Width;
  v22 = Width;
  v36 = Pitch;
  v35 = Pitch;
  v26 = Pitch;
  v28 = pPixels;
  v29 = v4;
  v38 = 1;
  if ( (((_DWORD)v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    v15 = Width;
    v23 = Width;
  }
  else
  {
    if ( v13 )
      Pitch = (Height + 7) >> 3;
    else
      Pitch = 4 * Height;
    v15 = Height;
    v23 = Height;
    Height = Width;
  }
  v27 = Pitch;
  v25 = Height;
  if ( v15 <= a4->MaxPointerWidth && Height <= a4->MaxPointerHeight )
  {
    if ( v13 )
    {
      memset(pPixels, 255, Height * Pitch);
      do
      {
        RotateCursorShapeWorker((struct CURSOR_INFO *)&v22, (const struct CURSOR_INFO *)&v31);
        v16 = v27;
        v17 = v25;
        v28 += v25 * v27;
        v37 += v33 * v35;
        --v8;
      }
      while ( v8 );
    }
    else
    {
      RotateCursorShapeWorker((struct CURSOR_INFO *)&v22, (const struct CURSOR_INFO *)&v31);
      v16 = v27;
      v17 = v25;
    }
    v18 = v23;
    a2->Pitch = v16;
    a2->Height = v17;
    a2->Width = v18;
    a2->Flags.Value = a1->Flags.Value;
    if ( (_DWORD)v4 != 1 )
    {
      switch ( (_DWORD)v4 )
      {
        case 2:
          a2->XHot = a1->YHot;
          v19 = a1->Width - a1->XHot;
LABEL_14:
          a2->YHot = v19;
          return 0LL;
        case 3:
          a2->XHot = a1->Width - a1->XHot;
          v19 = a1->Height - a1->YHot;
          goto LABEL_14;
        case 4:
          a2->XHot = a1->Height - a1->YHot;
          XHot = a1->XHot;
          goto LABEL_17;
      }
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 617;
LABEL_29:
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Invalid rotation (0x%I64x) specified",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
LABEL_16:
    a2->XHot = a1->XHot;
    XHot = a1->YHot;
LABEL_17:
    a2->YHot = XHot;
    return 0LL;
  }
  return 3221225659LL;
}
