/*
 * XREFs of ??1CQueryKnownGameList@@UEAA@XZ @ 0x1801978CC
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x180197890 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x180197950 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CQueryKnownGameList::~CQueryKnownGameList(struct _RTL_CRITICAL_SECTION *this)
{
  const struct std::nothrow_t *v2; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  DeleteCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[18].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore, v2);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&this->LockSemaphore);
  std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&this->OwningThread);
  this->RecursionCount = -1073741823;
}
