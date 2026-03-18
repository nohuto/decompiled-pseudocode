/*
 * XREFs of ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234B20
 * Callers:
 *     ?ReleaseAllReferences@CTableTransferEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140235150 (-ReleaseAllReferences@CTableTransferEffectMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::ReleaseAllReferences(
        char **this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 10, (__int64)a2, a3, a4);
  LOBYTE(v6) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CResourceMarshalerArrayBase *)(this + 13),
    a2,
    v6,
    v7);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 16, v8, v9, v10);
  LOBYTE(v11) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CResourceMarshalerArrayBase *)(this + 19),
    a2,
    v11,
    v12);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 22, v13, v14, v15);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 25, v16, v17, v18);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(this + 28, v19, v20, v21);
}
