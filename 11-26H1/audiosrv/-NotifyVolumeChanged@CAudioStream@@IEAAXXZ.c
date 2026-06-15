/*
 * XREFs of ?NotifyVolumeChanged@CAudioStream@@IEAAXXZ @ 0x1800253DC
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180024214 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::NotifyVolumeChanged(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *i; // rdi
  int v5; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+10h]

  v2 = this + 6;
  EnterCriticalSection(this + 6);
  v6 = v2;
  v5 = 0;
  (*(void (__fastcall **)(LONG *, int *))(*(_QWORD *)&this->LockCount + 96LL))(&this->LockCount, &v5);
  v3 = *(_QWORD **)&this[7].LockCount;
  for ( i = &this[7].DebugInfo->Type; i != v3; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *(_QWORD *)&this[1].LockCount);
  if ( v2 )
    LeaveCriticalSection(v2);
}
