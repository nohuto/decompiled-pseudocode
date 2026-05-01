/*
 * XREFs of ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x180219E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x180219FBC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowingEnvironmentConfig::AddDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        int a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[5]; // [rsp+28h] [rbp-50h] BYREF
  float v12[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IImmersiveMonitor *v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a2;
  v12[0] = (float)a3->left;
  v12[1] = (float)a3->top;
  v12[2] = (float)(a3->right - a3->left);
  v12[3] = (float)(a3->bottom - a3->top);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), &SRWLock);
  v11[0] = (char *)this - 32;
  v11[1] = &v14;
  v11[2] = a3;
  v11[3] = &v15;
  v11[4] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___(
         v7,
         CurrentThreadId,
         v11);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v8,
      (int)SRWLock);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
