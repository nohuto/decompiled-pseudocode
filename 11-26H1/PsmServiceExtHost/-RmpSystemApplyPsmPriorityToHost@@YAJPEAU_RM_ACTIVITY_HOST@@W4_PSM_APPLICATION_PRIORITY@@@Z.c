/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180045D84
 * Callers:
 *     ?RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800452F0 (-RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  char v2; // al
  bool v5; // cf
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v11[3]; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v12; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-31h] BYREF
  __int64 v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+7Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-9h] BYREF
  void *v18; // [rsp+98h] [rbp+7h]
  int v19; // [rsp+A0h] [rbp+Fh]
  int v20; // [rsp+A4h] [rbp+13h]
  _DWORD *v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  __int64 *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]
  int *v25; // [rsp+C8h] [rbp+37h]
  __int64 v26; // [rsp+D0h] [rbp+3Fh]

  v2 = *(_BYTE *)(a1 + 648);
  v15 = a2;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  v5 = v2 != 0;
  EventDescriptor.Keyword = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 48);
  v16 = 16;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, EVENT_DESCRIPTOR *))(*(_QWORD *)(v6 + 40) + 8LL))(
         a1 + 544,
         *(unsigned int *)(a1 + 612),
         a1 + 80,
         *(unsigned int *)(a1 + 616),
         *(_QWORD *)(a1 + 32),
         v5 ? 4 : 0,
         &EventDescriptor);
  v8 = v7;
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    EventDescriptor.Keyword = 1LL;
    v25 = &v10;
    v10 = a2;
    v23 = &v12;
    v21 = v11;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v11[0] = v7;
    v26 = 4LL;
    v24 = 8LL;
    v22 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v18 = &unk_1800D4401;
    v20 = 1;
    UserData.Reserved = 2;
    v19 = 80;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v8;
}
