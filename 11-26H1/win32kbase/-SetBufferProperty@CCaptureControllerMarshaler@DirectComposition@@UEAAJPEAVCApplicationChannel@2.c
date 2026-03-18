/*
 * XREFs of ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402357E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // xmm0_8

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( a4 && a5 == 8 )
    {
      v10 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(_QWORD *)(a1 + 68) = v10;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 5;
  if ( v8 )
  {
    if ( v8 == 1 && a4 && a5 == 8 )
    {
      v9 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x2000u;
      *(_QWORD *)(a1 + 128) = v9;
LABEL_14:
      *a6 = 1;
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 && a5 )
    return (unsigned int)-1073741811;
  v6 = DirectComposition::CMarshaledArrayBase::Copy(
         (DirectComposition::CMarshaledArrayBase *)(a1 + 104),
         a4,
         a5,
         0x20uLL,
         0x71634344u);
  if ( v6 >= 0 )
    goto LABEL_14;
  return (unsigned int)v6;
}
