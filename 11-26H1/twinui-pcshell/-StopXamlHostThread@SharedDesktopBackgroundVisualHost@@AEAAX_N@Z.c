/*
 * XREFs of ?StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z @ 0x18060EB70
 * Callers:
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060BC48 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::StopXamlHostThread(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // r15
  int Ptr; // eax
  char v6; // di
  PVOID v7; // r14
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+8h] BYREF
  DWORD dwindex; // [rsp+68h] [rbp+10h] BYREF
  HANDLE pHandles; // [rsp+70h] [rbp+18h] BYREF

  v2 = this + 22;
  wil::AcquireSRWLockExclusive(&v8, this + 22);
  Ptr = (int)this[23].Ptr;
  if ( Ptr == 1 || Ptr == 2 )
  {
    v6 = 1;
    LODWORD(this[23].Ptr) = 3;
  }
  else
  {
    v6 = 0;
  }
  v7 = this[29].Ptr;
  pHandles = this[31].Ptr;
  if ( a2 )
    BYTE2(this[26].Ptr) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  if ( v6 )
  {
    SetEvent(v7);
    dwindex = 0;
    CoWaitForMultipleHandles(0x1Au, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
    wil::AcquireSRWLockExclusive(&v8, v2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &this[31].Ptr,
      0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  }
}
