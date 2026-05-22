/*
 * XREFs of ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800E68E0
 * Callers:
 *     ??1?$unique_ptr@UViewClientListEntry@LampArrayDevice@@U?$default_delete@UViewClientListEntry@LampArrayDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6718 (--1-$unique_ptr@UViewClientListEntry@LampArrayDevice@@U-$default_delete@UViewClientListEntry@Lam.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800E6738 (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800E6EEC (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LampArrayDevice::ViewClientListEntry *__fastcall LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(
        LampArrayDevice::ViewClientListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
