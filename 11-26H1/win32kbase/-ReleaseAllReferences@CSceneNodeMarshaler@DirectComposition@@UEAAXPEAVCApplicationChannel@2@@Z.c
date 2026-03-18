/*
 * XREFs of ?ReleaseAllReferences@CSceneNodeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CSceneNodeMarshaler::ReleaseAllReferences(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct DirectComposition::CResourceMarshaler *v8; // rdx

  LOBYTE(a3) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CSceneNodeMarshaler *)((char *)this + 56),
    a2,
    a3,
    a4);
  LOBYTE(v6) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CSceneNodeMarshaler *)((char *)this + 80),
    a2,
    v6,
    v7);
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource((struct _RTL_GENERIC_TABLE *)a2, v8);
    *((_QWORD *)this + 13) = 0LL;
  }
}
