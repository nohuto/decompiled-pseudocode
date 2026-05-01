/*
 * XREFs of ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z @ 0x18005E400
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_H.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, int a2, void **a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+50h] [rbp-49h] BYREF
  struct _RM_ACTIVITY_HOST *v8; // [rsp+58h] [rbp-41h] BYREF
  __int64 v9; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  void *v12; // [rsp+90h] [rbp-9h]
  int v13; // [rsp+98h] [rbp-1h]
  int v14; // [rsp+9Ch] [rbp+3h]
  _DWORD *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  __int64 *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  struct _RM_ACTIVITY_HOST **v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]

  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, int, void **))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                            + 120LL))(
         (char *)a1 + 544,
         *((unsigned int *)a1 + 153),
         (char *)a1 + 80,
         *((unsigned int *)a1 + 154),
         *((_QWORD *)a1 + 4),
         *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
         a2,
         a3);
  v5 = v4;
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v9 = *((_QWORD *)a1 + 4);
    EventDescriptor.Keyword = 1LL;
    v19 = &v8;
    v8 = a1;
    v17 = &v9;
    v15 = v7;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v7[0] = v4;
    v20 = 8LL;
    v18 = 8LL;
    v16 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v12 = &unk_1800D4863;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 46;
    v7[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v5;
}
