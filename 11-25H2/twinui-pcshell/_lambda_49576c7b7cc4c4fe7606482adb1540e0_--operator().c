/*
 * XREFs of _lambda_49576c7b7cc4c4fe7606482adb1540e0_::operator() @ 0x1805BFD20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49576c7b7cc4c4fe7606482adb1540e0___::Run @ 0x1805C4F70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49576c7b7cc4c4fe7606482adb1540e0___--Run.c)
 * Callees:
 *     _lambda_e444c801a41511fb3819c6a1e051bb24_::operator() @ 0x1805C0220 (_lambda_e444c801a41511fb3819c6a1e051bb24_--operator().c)
 */

void __fastcall lambda_49576c7b7cc4c4fe7606482adb1540e0_::operator()(void **a1)
{
  void **v1; // rcx
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    lambda_e444c801a41511fb3819c6a1e051bb24_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = 0LL;
    __ExceptionPtrCreate(&v2);
    __ExceptionPtrCurrentException(&v2);
    __ExceptionPtrAssign(*a1, &v2);
    __ExceptionPtrDestroy(&v2);
  }
}
