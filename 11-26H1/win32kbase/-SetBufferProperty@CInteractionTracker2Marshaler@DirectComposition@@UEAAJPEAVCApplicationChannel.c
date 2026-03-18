/*
 * XREFs of ?SetBufferProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTracker2Marshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // edx
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned __int64 v12; // r8
  DirectComposition::CMarshaledArrayBase *v13; // rcx
  __int64 v14; // xmm0_8
  __int64 v15; // xmm0_8
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r9

  v6 = 0;
  *a6 = 0;
  if ( a3 > 0x2C )
  {
    switch ( a3 )
    {
      case '/':
        v12 = a5;
        if ( a4 || !a5 )
        {
          v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 384);
          goto LABEL_44;
        }
        break;
      case '2':
        v12 = a5;
        if ( a4 || !a5 )
        {
          v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 424);
          goto LABEL_44;
        }
        break;
      case '6':
        v12 = a5;
        if ( a4 || !a5 )
        {
          v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 504);
          goto LABEL_44;
        }
        break;
      case '8':
        v12 = a5;
        if ( a4 || !a5 )
        {
          v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 536);
          v18 = 12LL;
          goto LABEL_45;
        }
        break;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 44 )
  {
    v12 = a5;
    if ( a4 || !a5 )
    {
      v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 344);
      goto LABEL_44;
    }
    return (unsigned int)-1073741811;
  }
  v8 = a3 - 2;
  if ( !v8 )
  {
    if ( !a4 || a5 != 12 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
    v17 = a4[2];
    *(_DWORD *)(a1 + 80) |= 4u;
    *(_DWORD *)(a1 + 104) = v17;
    goto LABEL_14;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( !a4 || a5 != 12 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 112) = *(_QWORD *)a4;
    v16 = a4[2];
    *(_DWORD *)(a1 + 80) |= 0x10u;
    *(_DWORD *)(a1 + 120) = v16;
    goto LABEL_14;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( !a4 || a5 != 8 )
      return (unsigned int)-1073741811;
    v15 = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 80) |= 0x40u;
    *(_QWORD *)(a1 + 128) = v15;
    goto LABEL_14;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a4 || a5 != 8 )
      return (unsigned int)-1073741811;
    v14 = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 80) |= 0x80u;
    *(_QWORD *)(a1 + 136) = v14;
LABEL_14:
    *(_DWORD *)(a1 + 16) &= ~0x20u;
LABEL_46:
    *a6 = 1;
    return (unsigned int)v6;
  }
  if ( v11 != 34 )
    return (unsigned int)-1073741811;
  v12 = a5;
  if ( !a4 )
  {
    if ( a5 )
      return (unsigned int)-1073741811;
  }
  v13 = (DirectComposition::CMarshaledArrayBase *)(a1 + 304);
LABEL_44:
  v18 = 4LL;
LABEL_45:
  v6 = DirectComposition::CMarshaledArrayBase::Copy(v13, a4, v12, v18, 0x70694344u);
  if ( v6 >= 0 )
    goto LABEL_46;
  return (unsigned int)v6;
}
