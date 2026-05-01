/*
 * XREFs of ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x18020BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x18020C03C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAIAEAPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@AEAPEAIAEAV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1802F9484 (--0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV-$SimpleVectorIterator@UCoreKeyboardPosit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowingEnvironmentConfig::AddDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        int a4)
{
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-88h]
  int v12; // [rsp+30h] [rbp-78h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+38h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-68h] BYREF
  char v15; // [rsp+48h] [rbp-60h] BYREF
  float v16[4]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (int)a3;
  v13 = a2;
  v12 = a4;
  v16[0] = (float)a3->left;
  v16[1] = (float)a3->top;
  v16[2] = (float)(a3->right - a3->left);
  v16[3] = (float)(a3->bottom - a3->top);
  v5 = (_DWORD)this - 32;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), &SRWLock);
  v6 = _lambda_712b0f2f9fa774d9b54f88f4633a7b7e_::_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_(
         (unsigned int)&v15,
         v5,
         (unsigned int)&v13,
         v4,
         (__int64)&v12,
         (__int64)v16);
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___(
         v8,
         CurrentThreadId,
         v6);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v9,
      v11);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
