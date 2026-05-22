/*
 * XREFs of ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801D2070
 * Callers:
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x1801CEFCC (--1HotKeyProcessor@@UEAA@XZ.c)
 *     ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801D1E7C (--1SharedMessagePortRefPtr@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SharedMessagePortRefPtr::Release(SharedMessagePortRefPtr *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( !RtlDllShutdownInProgress() )
  {
    if ( v1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    }
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
