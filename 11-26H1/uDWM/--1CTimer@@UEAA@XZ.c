/*
 * XREFs of ??1CTimer@@UEAA@XZ @ 0x18006CDDC
 * Callers:
 *     ??_ECTimer@@UEAAPEAXI@Z @ 0x18006CDA0 (--_ECTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x18006CE2C (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 */

void __fastcall CTimer::~CTimer(CTimer *this)
{
  DWORD CurrentThreadId; // eax

  *(_QWORD *)this = &CTimer::`vftable';
  CurrentThreadId = GetCurrentThreadId();
  CTimer::_DestroyThreadPoolTimer(this, CurrentThreadId != *((_DWORD *)this + 18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  CBaseObject::~CBaseObject(this);
}
