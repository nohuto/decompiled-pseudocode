/*
 * XREFs of ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1401D8AC0
 * Callers:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9128 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9B80 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CVP_SYSTEM_THREAD::Start(void **this)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 512LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = 0LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(this + 1, 0, &v3, 0LL, 0LL, (PKSTART_ROUTINE)CVP_SYSTEM_THREAD::ThreadRoutine, this);
  *((_DWORD *)this + 4) = result;
  if ( result < 0 )
    this[1] = 0LL;
  return result;
}
