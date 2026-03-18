/*
 * XREFs of ?SetBufferProperty@CViewBoxMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023E420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CViewBoxMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 && a4 && a5 == 8 )
    {
      v7 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x80u;
      *(_QWORD *)(a1 + 64) = v7;
LABEL_9:
      *a6 = 1;
      return result;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v8 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_QWORD *)(a1 + 56) = v8;
    goto LABEL_9;
  }
  return 3221225485LL;
}
