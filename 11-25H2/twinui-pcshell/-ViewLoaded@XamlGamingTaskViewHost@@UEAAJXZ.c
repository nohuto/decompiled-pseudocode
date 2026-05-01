/*
 * XREFs of ?ViewLoaded@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067C900
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18067AA14 (-DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost::ViewLoaded(XamlGamingTaskViewHost *this)
{
  XamlGamingTaskViewHost *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  LPCRITICAL_SECTION v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (XamlGamingTaskViewHost *)((char *)this - 120);
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (XamlGamingTaskViewHost *)120));
  v5 = v2;
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    XamlGamingTaskViewHost::DisplayGamingTaskView(v1);
    CThreadUseDetector::~CThreadUseDetector(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13F,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                           v3);
  }
  return result;
}
