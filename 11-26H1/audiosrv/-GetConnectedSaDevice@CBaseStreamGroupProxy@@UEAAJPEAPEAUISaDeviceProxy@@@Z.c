/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180065AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(struct _RTL_CRITICAL_SECTION *this, ULONG_PTR *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  ULONG_PTR SpinCount; // rcx

  *a2 = 0LL;
  v4 = this + 3;
  EnterCriticalSection(this + 3);
  SpinCount = this[2].SpinCount;
  if ( SpinCount )
  {
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
    *a2 = this[2].SpinCount;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
