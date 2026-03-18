/*
 * XREFs of ?ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1401645F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::ReleaseAllReferences(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char *)this + 56);
}
