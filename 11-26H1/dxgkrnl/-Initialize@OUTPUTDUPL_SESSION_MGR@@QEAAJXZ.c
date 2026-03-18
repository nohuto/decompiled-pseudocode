/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1401EDC80
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // edi
  unsigned int v3; // edi
  void **v4; // rax
  void **v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v7; // eax
  const wchar_t *v8; // r9
  unsigned int v10; // eax

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new(0x10uLL, 0x674D444Fu, 256LL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, v3, 0);
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 7) = v5;
  if ( !v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 4110;
    v7 = PsGetCurrentProcessSessionId();
    v8 = L"Failed to allocate session data for output duplication with 0x%I64x apps in session 0x%I64x.";
LABEL_6:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v8, *((unsigned int *)this + 1), v7, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  if ( !*v5 )
  {
    v10 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), v10);
    WdLogGlobalForLineNumber = 4117;
    v7 = PsGetCurrentProcessSessionId();
    v8 = L"Failed to get session data buffer for output duplication with 0x%I64x apps in session 0x%I64x.";
    goto LABEL_6;
  }
  memset(*v5, 0, v3);
  return 0LL;
}
