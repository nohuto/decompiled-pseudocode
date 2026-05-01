/*
 * XREFs of ?UnregisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E7DAC
 * Callers:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E7D3C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180245C20 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::UnregisterHotkeys(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  PVOID Ptr; // rcx
  int v4; // eax
  int v5; // esi
  RTL_SRWLOCK *v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v7, this + 114);
  if ( LODWORD(this[115].Ptr) )
  {
    Ptr = this[50].Ptr;
    if ( Ptr && (v4 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 32LL))(Ptr), v5 = v4, v4 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116B,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v4);
      v2 = v5;
    }
    else
    {
      LODWORD(this[115].Ptr) = 0;
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return v2;
}
