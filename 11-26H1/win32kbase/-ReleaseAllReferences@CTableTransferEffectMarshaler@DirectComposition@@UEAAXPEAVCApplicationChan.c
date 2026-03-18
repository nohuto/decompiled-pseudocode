/*
 * XREFs of ?ReleaseAllReferences@CTableTransferEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140235150
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234B20 (-ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::ReleaseAllReferences(
        char **this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9

  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 33, (__int64)a2, a3, a4);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 36, v6, v7, v8);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 39, v9, v10, v11);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 42, v12, v13, v14);
  DirectComposition::CFilterEffectMarshaler::ReleaseAllReferences(this, a2, v15, v16);
}
