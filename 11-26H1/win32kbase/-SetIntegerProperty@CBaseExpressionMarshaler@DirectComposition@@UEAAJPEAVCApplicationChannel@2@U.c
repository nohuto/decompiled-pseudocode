/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401BA610
 * Callers:
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018AC70 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 *     ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401937F0 (-SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140240B50 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140241090 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140245360 (-SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  unsigned __int8 v12; // r8
  char v13; // al
  char v14; // r8
  char v15; // r8
  bool v16; // zf

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 > 52 )
    {
      if ( (_DWORD)a4 == 69 || (_DWORD)a4 == 70 || (_DWORD)a4 == 71 || (_DWORD)a4 == 104 )
        goto LABEL_39;
      v16 = (_DWORD)a4 == 265;
    }
    else
    {
      if ( (_DWORD)a4 == 52 || (_DWORD)a4 == 11 || (_DWORD)a4 == 17 || (_DWORD)a4 == 18 || (_DWORD)a4 == 35 )
        goto LABEL_39;
      v16 = (_DWORD)a4 == 42;
    }
    if ( !v16 )
      return (unsigned int)-1073741811;
LABEL_39:
    if ( *(_DWORD *)(a1 + 64) != (_DWORD)a4 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x80u;
      *(_BYTE *)(a1 + 128) |= 2u;
      *(_DWORD *)(a1 + 64) = a4;
      goto LABEL_41;
    }
    return v5;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v15 = *(_BYTE *)(a1 + 128);
    if ( (v15 & 1) != (a4 != 0) )
    {
      *(_DWORD *)(a1 + 16) &= ~0x80u;
      *(_BYTE *)(a1 + 128) = v15 & 0xFE | (a4 != 0);
      goto LABEL_41;
    }
    return v5;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 80) != a4 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x80u;
      *(_DWORD *)(a1 + 80) = a4;
      goto LABEL_41;
    }
    return v5;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 96) != a4 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x100u;
      *(_DWORD *)(a1 + 96) = a4;
      goto LABEL_41;
    }
    return v5;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( ((*(unsigned __int8 *)(a1 + 128) >> 2) & 1) == (a4 != 0) )
      return v5;
    v13 = a4 != 0 ? 4 : 0;
    v14 = *(_BYTE *)(a1 + 128) & 0xFB;
    goto LABEL_16;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( ((*(unsigned __int8 *)(a1 + 128) >> 3) & 1) == (a4 != 0) )
      return v5;
    v13 = a4 != 0 ? 8 : 0;
    v14 = *(_BYTE *)(a1 + 128) & 0xF7;
LABEL_16:
    *(_DWORD *)(a1 + 16) &= ~0x200u;
    *(_BYTE *)(a1 + 128) = v14 | v13;
    goto LABEL_41;
  }
  v11 = v10 - 2;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      if ( *(_DWORD *)(a1 + 100) != (_DWORD)a4 )
      {
        *(_DWORD *)(a1 + 16) &= 0xFFFFF7DF;
        *(_DWORD *)(a1 + 100) = a4;
LABEL_41:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v12 = *(_BYTE *)(a1 + 128);
  if ( ((v12 >> 4) & 1) != (a4 != 0) && a4 )
  {
    *(_DWORD *)(a1 + 16) &= ~0x400u;
    *(_BYTE *)(a1 + 128) = v12 | 0x10;
    goto LABEL_41;
  }
  return v5;
}
