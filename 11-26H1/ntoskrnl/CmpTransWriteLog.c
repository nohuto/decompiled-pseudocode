/*
 * XREFs of CmpTransWriteLog @ 0x1408AD634
 * Callers:
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1408AF088 (CmLogTmRmAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpAddRemoveRMLogContainer @ 0x14085DF34 (CmpAddRemoveRMLogContainer.c)
 *     CmpDoTransWriteLogRecord @ 0x1408AD740 (CmpDoTransWriteLogRecord.c)
 *     LockRMLog @ 0x1408AD924 (LockRMLog.c)
 *     CmpComputeLogFillLevel @ 0x1408AD954 (CmpComputeLogFillLevel.c)
 *     CmpLogCheckpoint @ 0x1408ADB44 (CmpLogCheckpoint.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  int v5; // edi
  __int64 i; // r9
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r14d
  int v20; // r8d
  unsigned int v21; // [rsp+30h] [rbp-51h] BYREF
  int v22; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-49h] BYREF
  int v24; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int *v26; // [rsp+60h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp-19h]
  int *v28; // [rsp+70h] [rbp-11h]
  __int64 v29; // [rsp+78h] [rbp-9h]

  v5 = 0;
  v21 = 0;
  v23 = a4;
  LockRMLog(a1);
  for ( i = a4; ; i = v23 )
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
      v21 = 1;
      if ( (int)CmpLogCheckpoint(a1, v11, v13) >= 0 )
        continue;
    }
    v21 = ++v5;
    v19 = CmpAddRemoveRMLogContainer(a1, v11, v13);
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
    {
      v24 = v17;
      v27 = (unsigned int)(v17 + 3);
      v26 = (unsigned int *)&v24;
      v29 = v27;
      v28 = &v22;
      v22 = v19;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)&dword_140056EF4,
        0LL,
        0LL,
        v27,
        v25);
    }
    if ( v19 < 0 )
      break;
    LOBYTE(v18) = 1;
    CmpLogCheckpoint(a1, v17, v18);
  }
  if ( v12 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v21) >= 0
    && v21 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1, v14, v15);
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
    {
      v22 = v20;
      v26 = &v23;
      v23 = 2;
      v28 = &v22;
      v27 = 4LL;
      v29 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)qword_140056E98,
        0LL,
        0LL,
        4u,
        v25);
    }
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
