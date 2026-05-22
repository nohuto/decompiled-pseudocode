/*
 * XREFs of ??1LampArrayDevice@@UEAA@XZ @ 0x1800E6738
 * Callers:
 *     ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800E6890 (--_ELampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800E68E0 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayDevice::~LampArrayDevice(LampArrayDevice *this)
{
  char *v2; // rsi
  char *i; // rbx
  unsigned int v4; // edx
  LampArrayDevice::ViewClientListEntry *v5; // rcx
  __int64 v6; // rax
  InputContext *v7; // rcx
  InputContext *v8; // rcx

  *(_QWORD *)this = &LampArrayDevice::`vftable';
  v2 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v2; i = *(char **)i )
    (*(void (__fastcall **)(__int64, __int64))(**((_QWORD **)i + 2) + 48LL))(*((_QWORD *)i + 2), *((_QWORD *)i + 4));
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  while ( 1 )
  {
    v5 = *(LampArrayDevice::ViewClientListEntry **)v2;
    v6 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(LampArrayDevice::ViewClientListEntry **)(v6 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    if ( v5 == (LampArrayDevice::ViewClientListEntry *)v2 )
      break;
    if ( v5 )
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(v5, v4);
    --*((_DWORD *)v2 + 4);
  }
  v7 = (InputContext *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    InputContext::Release(v7);
  }
  v8 = (InputContext *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = 0LL;
    InputContext::Release(v8);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
