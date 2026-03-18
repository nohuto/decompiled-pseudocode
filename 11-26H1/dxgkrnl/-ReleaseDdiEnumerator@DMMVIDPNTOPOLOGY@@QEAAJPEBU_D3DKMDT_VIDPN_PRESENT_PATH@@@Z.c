/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140395424
 * Callers:
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140265CE0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r9
  char *v5; // r11
  char *v6; // r8
  char *v7; // rcx
  __int64 result; // rax
  char *v9; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2114;
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2128;
    return 3223192345LL;
  }
  pRgb256x3x16 = a2[-1].GammaRamp.Data.pRgb256x3x16;
  if ( pRgb256x3x16 )
  {
    v5 = (char *)this + 24;
    v6 = 0LL;
    v7 = (char *)*((_QWORD *)this + 3);
    if ( v7 != v5 )
      v6 = v7 - 8;
    while ( v6 )
    {
      if ( v6 == (char *)pRgb256x3x16 )
        goto LABEL_8;
      v9 = (char *)*((_QWORD *)v6 + 1);
      v6 = v9 - 8;
      if ( v9 == v5 )
        v6 = 0LL;
    }
    WdLogSingleEntry2(2LL, &a2[-1].GammaRamp.DataSize, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 2144;
  }
  else
  {
LABEL_8:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2->GammaRamp.Data.pRgb256x3x16);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(p_DataSize);
    return 0LL;
  }
  return result;
}
