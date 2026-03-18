/*
 * XREFs of ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0960
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMWeakRef::Resolve(CMILCOMWeakRef *this, const struct _GUID *a2, void **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 (__fastcall ***v7)(_QWORD, const struct _GUID *, void **); // rcx
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = (**v7)(v7, a2, a3);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v8;
  }
  else
  {
    *a3 = 0LL;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
    return 2147500035LL;
  }
}
