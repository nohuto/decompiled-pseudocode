/*
 * XREFs of ?InitializeFeedbackData@@YAJXZ @ 0x1402A53E8
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 InitializeFeedbackData(void)
{
  _QWORD *v0; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v0 = (_QWORD *)Win32AllocPoolZInit(104LL, 1684435797LL);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    memset_0(v0, 0, 0x68uLL);
    v2[6] = v2 + 1;
    v2[7] = (char *)v2 + 20;
    v2[8] = v2 + 4;
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36312) = v2;
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36312);
    *(_QWORD *)(v7 + 72) = CreateKernelEvent(1LL, 0LL);
    if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 36312) + 72LL) )
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
