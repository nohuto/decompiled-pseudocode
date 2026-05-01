/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003F9E0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v2; // r10
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // edi
  bool v9; // [rsp+30h] [rbp-39h]
  _DWORD v10[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  _DWORD *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]

  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 620) & 0x100) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v9 = a2 != 0;
    v6 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, bool))(*(_QWORD *)(v2 + 40) + 56LL))(
           (char *)a1 + 544,
           *((unsigned int *)a1 + 153),
           (char *)a1 + 80,
           *((unsigned int *)a1 + 154),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
           v9);
    v7 = v6;
    if ( *((_DWORD *)a1 + 154) != 8 && v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (unsigned int)dword_1800E12B0 > 4
      && (qword_1800E12C0 & 0x40) != 0
      && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    {
      v11 = *((_QWORD *)a1 + 4);
      v10[0] = a2;
      v19 = v10;
      v20 = 4LL;
      v17 = &v11;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v18 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v14 = &unk_1800D49FC;
      UserData.Reserved = 2;
      v15 = 33;
      v16 = 1;
      v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
