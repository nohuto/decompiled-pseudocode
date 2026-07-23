/*
 * XREFs of PopPowerRequestCallbackExecutionRequired @ 0x1409F8DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackExecutionRequired(__int64 a1, __int64 a2, char a3)
{
  char *v4; // rsi
  int v5; // ebx
  char v6; // al
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-8h]

  if ( (_DWORD)a2 == 3 )
  {
    v6 = PopPowerRequestPdcNotifiedExecutionRequired;
    v4 = &PopPowerRequestPdcNotifiedExecutionRequired;
    v5 = 2;
  }
  else
  {
    v4 = &PopPowerRequestPdcNotifiedSystemRequired;
    v5 = 1;
    if ( !HIDWORD(ExpPlatformBinaryLock.KernelStack) )
      goto LABEL_8;
    v6 = PopPowerRequestPdcNotifiedSystemRequired;
  }
  a2 = qword_140E67830;
  if ( qword_140E67830 && v6 != a3 )
  {
    LOBYTE(a1) = a3;
    guard_dispatch_icall_no_overrides(a1, qword_140E67830);
    *v4 = a3;
  }
LABEL_8:
  PopAcquirePolicyLock(a1, a2);
  if ( a3 )
    v7 = v5 | dword_140F10330;
  else
    v7 = ~v5 & dword_140F10330;
  dword_140F10330 = v7;
  if ( !v7 )
    dword_140F10350 = dword_140F10328;
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock(v9, v8, v10, v11, v13);
}
