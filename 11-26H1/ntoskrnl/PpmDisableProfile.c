/*
 * XREFs of PpmDisableProfile @ 0x140AD85C4
 * Callers:
 *     PdcPoPpmResetProfile @ 0x140AD84C0 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404D838C (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmResetProfileSettings @ 0x1404E4C60 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfileEnable @ 0x140AD86A4 (PpmEventTraceProfileEnable.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmDisableProfile(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r14
  char v5; // bp
  _QWORD **v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  LONG result; // eax
  __int64 v11; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v4 = *(_BYTE *)(a1 + 8);
  v5 = 1;
  PpmResetProfileSettings(a1);
  v6 = (_QWORD **)&off_140E08178;
  v7 = 6LL;
  do
  {
    v8 = *(v6 - 1);
    v9 = *(_QWORD *)(a1 + 12) - *v8;
    if ( !v9 )
      v9 = *(_QWORD *)(a1 + 20) - v8[1];
    if ( !v9 )
    {
      **v6 = 0LL;
      v11 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v11 )
      {
        v12 = 2048;
        PpmReapplyPerfPolicy(&v12);
        v5 = 0;
      }
      else
      {
        PpmPerfUpdateMultimediaPowerModel();
      }
    }
    v6 += 2;
    --v7;
  }
  while ( v7 );
  LOBYTE(v9) = v4;
  result = PpmEventTraceProfileEnable(v9, 0LL);
  if ( v5 )
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return result;
}
