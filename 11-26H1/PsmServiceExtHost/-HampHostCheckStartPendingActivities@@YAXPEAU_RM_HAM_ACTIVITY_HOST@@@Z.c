/*
 * XREFs of ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025520
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078E70 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampHostCheckStartPendingActivities(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  _DWORD v5[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  void *v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  __int64 *v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+78h] [rbp-30h]
  _DWORD *v14; // [rsp+80h] [rbp-28h]
  __int64 v15; // [rsp+88h] [rbp-20h]

  v1 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  if ( v1 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v2 = (__int64)v1 - 96;
    if ( v2 )
    {
      do
      {
        if ( *(_BYTE *)(v2 + 562) == 2 )
        {
          if ( *(_BYTE *)(v2 + 563) )
          {
            v4 = HampActTryStart(v2);
            if ( v4 )
            {
              if ( (unsigned int)dword_1800E12B0 > 5 )
              {
                v5[0] = v4;
                v6 = *(_QWORD *)(v2 + 40);
                v15 = 4LL;
                v14 = v5;
                v12 = &v6;
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (ULONGLONG)off_1800E12B8;
                v13 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1800E12B8;
                UserData.Reserved = 2;
                v9 = &unk_1800CDC53;
                v10 = 49;
                v11 = 1;
                v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
              }
            }
          }
        }
        v3 = *(_QWORD *)(v2 + 96);
        if ( v3 == *(_QWORD *)(v2 + 80) + 608LL )
          break;
        v2 = v3 - 96;
      }
      while ( v3 != 96 );
    }
  }
}
