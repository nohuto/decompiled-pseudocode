/*
 * XREFs of ?SetBufferProperty@CDataSourceReaderMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140246B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDataSourceReaderMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 && a5 == 8 )
    {
      if ( *(_QWORD *)(a1 + 64) == *a4 )
        return result;
      *(_QWORD *)(a1 + 64) = *a4;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  if ( a5 != 8 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 56) == *a4 )
    return result;
  *(_QWORD *)(a1 + 56) = *a4;
LABEL_10:
  *(_DWORD *)(a1 + 16) |= 0x40u;
  *a6 = 1;
  return result;
}
