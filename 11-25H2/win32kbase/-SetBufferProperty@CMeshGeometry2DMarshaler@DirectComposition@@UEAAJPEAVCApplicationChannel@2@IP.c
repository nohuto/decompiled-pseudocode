/*
 * XREFs of ?SetBufferProperty@CMeshGeometry2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022E070
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229238 (-Copy@-$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022925C (-Copy@-$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAAJPEBX.c)
 *     ?Copy@?$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAAJPEBX_K@Z @ 0x140229280 (-Copy@-$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAAJPEBX.c)
 */

__int64 __fastcall DirectComposition::CMeshGeometry2DMarshaler::SetBufferProperty(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  int v8; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && (a4 || !a5) )
      {
        result = DirectComposition::CMarshaledArray<int,1735213892,256,553,554>::Copy(
                   (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 112),
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
    result = DirectComposition::CMarshaledArray<D2D_POINT_2F,1735213892,128,551,552>::Copy(
               (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 88),
               a4,
               a5);
    if ( (int)result >= 0 )
    {
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x80u;
    }
  }
  else
  {
    if ( !a4 && a5 )
      return 3221225485LL;
    result = DirectComposition::CMarshaledArray<D2D_POINT_3F,1735213892,64,549,550>::Copy(
               (DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 64),
               a4,
               a5);
    if ( (int)result >= 0 )
    {
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
    }
  }
  return result;
}
