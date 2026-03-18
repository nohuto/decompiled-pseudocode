/*
 * XREFs of ?InitializeFeedbackData@@YAJXZ @ 0x14025E188
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 InitializeFeedbackData(void)
{
  _QWORD *v0; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v0 = (_QWORD *)Win32AllocPoolZInit(104LL, 1684435797LL);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    memset_0(v0, 0, 0x68uLL);
    v2[6] = v2 + 1;
    v2[7] = (char *)v2 + 20;
    v2[8] = v2 + 4;
    *(_QWORD *)(W32GetUserSessionState(v2 + 4, v3) + 36344) = v2;
    v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36344);
    *(_QWORD *)(v6 + 72) = CreateKernelEvent(1LL);
    if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 36344) + 72LL) )
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
