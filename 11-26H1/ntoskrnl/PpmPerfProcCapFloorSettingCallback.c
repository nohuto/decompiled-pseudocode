/*
 * XREFs of PpmPerfProcCapFloorSettingCallback @ 0x1407D93C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmPerfProcCapFloorSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // r14d
  __int64 v7; // r9
  BOOL v8; // esi
  unsigned int v9; // edi
  __int64 Prcb; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = SettingGuid->Data4[7];
  v14 = *(_QWORD *)GUID_PROC_CAP_BASE.Data4;
  v7 = *(_QWORD *)&GUID_PROC_CAP_BASE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( !v7 )
  {
    HIBYTE(v14) = SettingGuid->Data4[7];
    v7 = v14 - *(_QWORD *)SettingGuid->Data4;
  }
  v8 = v7 == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, (__int64)Value, ValueLength);
  if ( ValueLength != 4 || !Value )
    goto LABEL_13;
  v9 = *Value;
  if ( v9 > 0x64 )
    v9 = 100;
  Prcb = KeGetPrcb(v4);
  if ( Prcb )
  {
    v11 = *(_QWORD *)(Prcb + 35272);
    if ( v11 )
    {
      if ( v8 )
        *(_DWORD *)(v11 + 48) = v9;
      else
        *(_DWORD *)(v11 + 52) = v9;
    }
    v12 = 0;
  }
  else
  {
LABEL_13:
    v12 = -1073741811;
  }
  v15 = 14;
  PpmReapplyPerfPolicy(&v15);
  return v12;
}
