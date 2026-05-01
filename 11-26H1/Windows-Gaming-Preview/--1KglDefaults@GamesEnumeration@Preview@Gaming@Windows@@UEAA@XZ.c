/*
 * XREFs of ??1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003A89C
 * Callers:
 *     ??_GKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003A9B0 (--_GKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::~KglDefaults(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this)
{
  struct _TP_WORK *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`vftable';
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  v2 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread;
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  if ( v2 )
    WaitForThreadpoolWorkCallbacks(v2, 0);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
