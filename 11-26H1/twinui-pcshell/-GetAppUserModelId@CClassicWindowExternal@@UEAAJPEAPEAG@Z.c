/*
 * XREFs of ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x180233750
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowExternal::GetAppUserModelId(CClassicWindowExternal *this, unsigned __int16 **a2)
{
  CClassicWindowExternal *v3; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  CIAMGlobals::AcquireExclusive((__int64)this, &v5);
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)v3 + 7) + 56LL))(
                  *((_QWORD *)v3 + 7),
                  a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return (unsigned int)v3;
}
