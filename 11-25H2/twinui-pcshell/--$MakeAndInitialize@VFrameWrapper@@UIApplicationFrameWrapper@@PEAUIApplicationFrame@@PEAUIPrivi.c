/*
 * XREFs of ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180067B14
 * Callers:
 *     ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180067BE0 (-CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180118958 (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 *     ??0FrameWrapper@@QEAA@XZ @ 0x1802304B4 (--0FrameWrapper@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameWrapper,IApplicationFrameWrapper,IApplicationFrame *,IPrivilegedPresentationOperations *>(
        _QWORD *a1,
        struct IApplicationFrame **a2,
        struct IPrivilegedPresentationOperations **a3)
{
  void *v6; // rax
  int v7; // ebx
  FrameWrapper *v8; // rdi
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  FrameWrapper *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = FrameWrapper::FrameWrapper((FrameWrapper *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = FrameWrapper::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(FrameWrapper *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19,
             a1);
      (*(void (__fastcall **)(FrameWrapper *))(*(_QWORD *)v8 + 16LL))(v8);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(FrameWrapper *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
