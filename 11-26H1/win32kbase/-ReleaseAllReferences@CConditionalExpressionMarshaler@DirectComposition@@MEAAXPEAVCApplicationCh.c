/*
 * XREFs of ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140240FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401C11D0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CConditionalExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2,
    a3,
    a4);
  LOBYTE(v6) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CResourceMarshalerArrayBase *)(this + 17),
    (struct DirectComposition::CApplicationChannel *)a2,
    v6,
    v7);
  LOBYTE(v8) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CResourceMarshalerArrayBase *)(this + 20),
    (struct DirectComposition::CApplicationChannel *)a2,
    v8,
    v9);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[23]);
  this[23] = 0LL;
}
