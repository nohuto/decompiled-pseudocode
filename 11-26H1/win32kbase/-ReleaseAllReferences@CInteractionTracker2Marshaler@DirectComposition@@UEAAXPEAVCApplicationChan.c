/*
 * XREFs of ?ReleaseAllReferences@CInteractionTracker2Marshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14022AD30 (-ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?Clear@?$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ @ 0x14022B4AC (-Clear@-$CMarshaledArray@I$0HAGJEDEE@$0CAO@$0CAP@$0A@@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CInteractionTracker2Marshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTracker2Marshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CWeakReferenceBase *v6; // rdx
  struct DirectComposition::CWeakReferenceBase *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DirectComposition::CResourceMarshaler *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DirectComposition::CResourceMarshaler *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9

  v6 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v6, a3, a4);
    *((_QWORD *)this + 22) = 0LL;
  }
  v7 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 29);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v7, a3, a4);
    *((_QWORD *)this + 29) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 35);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 35) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 36);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 36) = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 37);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 37) = 0LL;
  }
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char **)this + 38, (__int64)v10, a3, a4);
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 42);
  if ( v13 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
    *((_QWORD *)this + 42) = 0LL;
  }
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(
    (char **)this + 43,
    (__int64)v13,
    v11,
    v12);
  v16 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 47);
  if ( v16 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v16);
    *((_QWORD *)this + 47) = 0LL;
  }
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(
    (char **)this + 48,
    (__int64)v16,
    v14,
    v15);
  v19 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 52);
  if ( v19 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v19);
    *((_QWORD *)this + 52) = 0LL;
  }
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear(
    (char **)this + 53,
    (__int64)v19,
    v17,
    v18);
  LOBYTE(v20) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CInteractionTracker2Marshaler *)((char *)this + 456),
    (struct DirectComposition::CApplicationChannel *)a2,
    v20,
    v21);
  LOBYTE(v22) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CInteractionTracker2Marshaler *)((char *)this + 480),
    (struct DirectComposition::CApplicationChannel *)a2,
    v22,
    v23);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char **)this + 63, v24, v25, v26);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,526,527,0>::Clear((char **)this + 67, v27, v28, v29);
  DirectComposition::CInteractionTrackerBaseMarshaler::ReleaseAllReferences(
    this,
    (struct DirectComposition::CApplicationChannel *)a2);
}
