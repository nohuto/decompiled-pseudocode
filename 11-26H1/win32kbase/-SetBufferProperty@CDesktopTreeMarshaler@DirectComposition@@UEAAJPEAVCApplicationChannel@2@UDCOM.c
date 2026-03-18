/*
 * XREFs of ?SetBufferProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  __int64 v7; // rax

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 8 )
  {
    v7 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_QWORD *)(a1 + 56) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
