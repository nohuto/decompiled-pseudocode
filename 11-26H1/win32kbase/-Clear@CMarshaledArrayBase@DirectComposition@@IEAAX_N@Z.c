/*
 * XREFs of ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154
 * Callers:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x140137118 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 *     ?Marshal@?$CMarshaledArray@UPositionShift@@$0HAGJEDEE@$0CCA@$0CCB@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402345E8 (-Marshal@-$CMarshaledArray@UPositionShift@@$0HAGJEDEE@$0CCA@$0CCB@$00@DirectComposition@@QEAA_NP.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234640 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0BNA@$0BNB@$00@DirectComposition@@QEAA_NPEAPEAV.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402346F0 (-Marshal@-$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAA_NPEAPEAV.c)
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1402349F0 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 *     ??_G?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B990 (--_G-$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023DF8C (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CMarshaledArrayBase::Clear(char **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char *v6; // rcx
  bool v7; // zf

  v5 = a2;
  v6 = *this;
  if ( v6 )
  {
    GreDeleteFastMutex(v6, a2, a3, a4);
    v7 = this[2] == 0LL;
    *this = 0LL;
    this[1] = 0LL;
    if ( !v7 )
      this[2] = (char *)-(__int64)(v5 != 0);
  }
}
