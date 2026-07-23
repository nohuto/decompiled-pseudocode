/*
 * XREFs of CmpTransWriteLog @ 0x1408B3A74
 * Callers:
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1408B5494 (CmLogTmRmAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpAddRemoveRMLogContainer @ 0x140864224 (CmpAddRemoveRMLogContainer.c)
 *     CmpDoTransWriteLogRecord @ 0x1408B3B80 (CmpDoTransWriteLogRecord.c)
 *     LockRMLog @ 0x1408B3D64 (LockRMLog.c)
 *     CmpComputeLogFillLevel @ 0x1408B3D94 (CmpComputeLogFillLevel.c)
 *     CmpLogCheckpoint @ 0x1408B3F84 (CmpLogCheckpoint.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v5; // edi
  __int64 i; // r9
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r14d
  int v18; // r8d
  unsigned int v19; // [rsp+30h] [rbp-51h] BYREF
  int v20; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v21; // [rsp+38h] [rbp-49h] BYREF
  int v22; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int *v24; // [rsp+60h] [rbp-21h]
  __int64 v25; // [rsp+68h] [rbp-19h]
  int *v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h]

  v5 = 0;
  v19 = 0;
  v21 = a4;
  LockRMLog(a1);
  for ( i = a4; ; i = v21 )
  {
    v12 = CmpDoTransWriteLogRecord(a1, a2, a3, i, plsnFinish);
    if ( v12 != -1072037859 )
      break;
    if ( v5 )
    {
      if ( v5 != 1 )
        break;
    }
    else
    {
      v5 = 1;
      LOBYTE(v13) = 1;
      v19 = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, v13) >= 0 )
        continue;
    }
    v19 = ++v5;
    v17 = CmpAddRemoveRMLogContainer(a1);
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
    {
      v22 = v15;
      v25 = (unsigned int)(v15 + 3);
      v24 = (unsigned int *)&v22;
      v27 = v25;
      v26 = &v20;
      v20 = v17;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)&byte_140057EE7,
        0LL,
        0LL,
        v25,
        v23);
    }
    if ( v17 < 0 )
      break;
    LOBYTE(v16) = 1;
    CmpLogCheckpoint(a1, v15, v16);
  }
  if ( v12 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v19) >= 0
    && v19 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
    {
      v20 = v18;
      v24 = &v21;
      v21 = 2;
      v26 = &v20;
      v25 = 4LL;
      v27 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)&dword_140057EB4,
        0LL,
        0LL,
        4u,
        v23);
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
