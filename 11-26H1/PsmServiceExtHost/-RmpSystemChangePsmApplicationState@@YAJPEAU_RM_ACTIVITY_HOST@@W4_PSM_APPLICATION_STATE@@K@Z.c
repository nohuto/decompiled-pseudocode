/*
 * XREFs of ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18003FF1C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003F3CC (-RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AED4 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemChangePsmApplicationState(_QWORD *a1, int a2)
{
  unsigned int v4; // edi
  const wchar_t *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v9; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-55h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  const wchar_t *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  __int64 *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  int *v24; // [rsp+B0h] [rbp+27h]
  __int64 v25; // [rsp+B8h] [rbp+2Fh]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1[6] + 40LL) + 144LL))(a1[151]);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v5 = (const wchar_t *)(a1 + 10);
    v11 = a1[4];
    v9 = a2;
    v24 = &v9;
    v10[0] = v4;
    v22 = &v11;
    v25 = 4LL;
    v23 = 8LL;
    if ( a1 == (_QWORD *)-80LL )
    {
      v5 = &word_1800BBB1C;
      v7 = 2;
    }
    else
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = 2 * v6 + 2;
    }
    v20 = v7;
    v17 = v10;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v19 = v5;
    v21 = 0;
    EventDescriptor.Keyword = 8LL;
    v18 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v14 = &unk_1800D46A0;
    UserData.Reserved = 2;
    v15 = 66;
    v16 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return v4;
}
