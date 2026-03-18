/*
 * XREFs of ?SetBufferProperty@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292A4 (-Copy@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAAJPEBX_K.c)
 */

__int64 __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::SetBufferProperty(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 2;
  if ( v7 )
  {
    if ( v7 == 1 && (a4 || !a5) )
    {
      result = DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,477,478>::Copy(
                 (DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88),
                 a4,
                 a5);
      if ( (int)result >= 0 )
      {
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x100u;
      }
      return result;
    }
    return 3221225485LL;
  }
  if ( !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,477,478>::Copy(
             (DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64),
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
  }
  return result;
}
