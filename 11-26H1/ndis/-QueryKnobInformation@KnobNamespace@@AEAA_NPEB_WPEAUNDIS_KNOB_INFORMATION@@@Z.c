/*
 * XREFs of ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x14014F7E8
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x14014F4A4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x140068600 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014F408 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

char __fastcall KnobNamespace::QueryKnobInformation(
        KnobNamespace *this,
        const wchar_t *a2,
        struct NDIS_KNOB_INFORMATION *a3)
{
  char v3; // bp
  __int64 v7; // rcx
  ConfigKnobFlag v8; // eax
  struct KnobState *v9; // rcx
  struct KnobCollection *v11; // [rsp+30h] [rbp-38h] BYREF
  KLockHolder v12; // [rsp+38h] [rbp-30h] BYREF
  KnobDescriptor *v13; // [rsp+70h] [rbp+8h] BYREF
  struct KnobState *v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v12, &this->m_lock);
  if ( KnobNamespace::FindKnobByName(this, a2, (_LIST_ENTRY ***)&v11, (const struct KnobDescriptor **)&v13, &v14) )
  {
    a3->CurrentValue = KnobDescriptor::GetCurrentValue(v13);
    v3 = 1;
    a3->DefaultValue = *(_QWORD *)(v7 + 16);
    a3->MinimumValue = *(_QWORD *)(v7 + 32);
    a3->MaximumValue = *(_QWORD *)(v7 + 40);
    v8 = *(_DWORD *)(v7 + 24);
    v9 = v14;
    a3->Flags = v8;
    a3->Source = *((_DWORD *)v9 + 3);
    a3->LastUpdateStatus = *((_DWORD *)v9 + 2);
  }
  KLockHolder::~KLockHolder(&v12);
  return v3;
}
