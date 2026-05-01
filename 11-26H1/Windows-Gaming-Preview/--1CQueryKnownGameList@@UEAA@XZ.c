/*
 * XREFs of ??1CQueryKnownGameList@@UEAA@XZ @ 0x18003D3FC
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D520 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CQueryKnownGameList::~CQueryKnownGameList(struct _RTL_CRITICAL_SECTION *this)
{
  const struct std::nothrow_t *v2; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  HANDLE v5; // rcx
  HANDLE OwningThread; // rcx

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
  v5 = this->LockSemaphore;
  if ( v5 != (HANDLE)-1LL && v5 )
    CloseHandle(v5);
  OwningThread = this->OwningThread;
  if ( OwningThread )
    operator delete(OwningThread, v2);
  this->RecursionCount = -1073741823;
}
