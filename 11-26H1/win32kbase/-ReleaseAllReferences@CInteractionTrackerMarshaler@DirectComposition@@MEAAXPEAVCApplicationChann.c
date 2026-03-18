/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402437B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140138DF0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140171460 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14022AD30 (-ReleaseAllReferences@CInteractionTrackerBaseMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        struct DirectComposition::CWeakReferenceBase **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  struct DirectComposition::CWeakReferenceBase **v8; // rbx
  __int64 v9; // rbp
  struct DirectComposition::CResourceMarshaler **v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rcx
  struct DirectComposition::CWeakReferenceBase *v16; // rdx
  struct DirectComposition::CWeakReferenceBase *v17; // rdx

  DirectComposition::CInteractionTrackerBaseMarshaler::ReleaseAllReferences(
    (DirectComposition::CInteractionTrackerBaseMarshaler *)this,
    a2);
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
    (DirectComposition::CInteractionTrackerMarshaler *)this,
    (struct _RTL_GENERIC_TABLE *)a2,
    v4,
    v5);
  v8 = this + 43;
  v9 = 3LL;
  do
  {
    if ( *v8 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference((struct _RTL_GENERIC_TABLE *)a2, *v8, v6, v7);
      *v8 = 0LL;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = this + 35;
  v11 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource((struct _RTL_GENERIC_TABLE *)a2, *(v10 - 4));
    v15 = (char *)*v10;
    *(v10 - 4) = 0LL;
    if ( v15 )
    {
      GreDeleteFastMutex(v15, v12, v13, v14);
      *v10 = 0LL;
    }
    v10[4] = 0LL;
    ++v10;
    --v11;
  }
  while ( v11 );
  v16 = this[29];
  if ( v16 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference((struct _RTL_GENERIC_TABLE *)a2, v16, v13, v14);
    this[29] = 0LL;
  }
  v17 = this[30];
  if ( v17 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference((struct _RTL_GENERIC_TABLE *)a2, v17, v13, v14);
    this[30] = 0LL;
  }
}
