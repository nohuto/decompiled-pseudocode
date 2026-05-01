/*
 * XREFs of ?NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x180485B70
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewServiceProvider::NotifyRaiseDesktopCompleted(
        CMultitaskingViewServiceProvider *this)
{
  signed __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v3 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88);
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 80LL))(*((_QWORD *)this + 11));
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  return 0LL;
}
