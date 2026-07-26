/*
 * XREFs of ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x14014F1BC
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x14014F4A4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x140056840 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014F408 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x14014FB2C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall KnobNamespace::ClearKnobStoreValue(KnobNamespace *this, const wchar_t *a2, char a3)
{
  unsigned int v6; // ebx
  struct KnobCollection *v7; // rdi
  KnobNamespace *v8; // rcx
  struct KnobState *v9; // rbx
  struct KnobState *v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  char v13; // [rsp+48h] [rbp-28h]
  KLockThisExclusive v14; // [rsp+50h] [rbp-20h] BYREF
  struct KnobDescriptor *v15; // [rsp+90h] [rbp+20h] BYREF
  struct KnobCollection *v16; // [rsp+A8h] [rbp+38h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  KLockThisExclusive::KLockThisExclusive(&v14, &this->m_lock);
  if ( KnobNamespace::FindKnobByName(this, a2, &v16, (const struct KnobDescriptor **)&v15, &v11) )
  {
    v7 = v16;
    v6 = (*(__int64 (__fastcall **)(struct KnobCollection *, struct KnobDescriptor *))(*(_QWORD *)v16 + 24LL))(v16, v15);
    if ( !v6 )
    {
      v9 = v11;
      if ( a3 )
        KnobNamespace::UpdateSingleKnob(v8, v7, v15, v11);
      v6 = *((_DWORD *)v9 + 2);
    }
  }
  else
  {
    v6 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v14);
  KnobTransaction::~KnobTransaction((KnobTransaction *)&v12);
  return v6;
}
