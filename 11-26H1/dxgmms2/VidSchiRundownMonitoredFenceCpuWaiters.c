/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x14003AD38
 * Callers:
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003AB8C (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x14003AC20 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 */

char __fastcall VidSchiRundownMonitoredFenceCpuWaiters(HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  HwQueueStagingList *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  __int64 i; // rsi
  __int64 v10; // r12
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __int64 v13; // r9
  __int64 v15; // [rsp+78h] [rbp+10h]

  v15 = a2;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = a1;
  v6 = *(_QWORD **)(v3 + 904);
  if ( v6 != (_QWORD *)(v3 + 904) )
  {
    do
    {
      v8 = v6;
      v6 = (_QWORD *)*v6;
      if ( v8[3] == a3 || !a3 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 50); i = (unsigned int)(i + 1) )
        {
          v10 = v8[4];
          v11 = *(_QWORD *)(v10 + 40 * i);
          if ( v11 == a2 )
          {
            if ( *(_DWORD *)(v11 + 48) == 6 )
            {
              v13 = *(_QWORD *)(*(unsigned int *)(v11 + 80) + *(_QWORD *)(*(_QWORD *)(v11 + 64) + 192LL));
            }
            else
            {
              v12 = *(unsigned int **)(v11 + 72);
              if ( *(_BYTE *)(v11 + 30) )
                v13 = *(_QWORD *)v12;
              else
                v13 = *v12;
            }
            WdLogSingleEntry5(
              4LL,
              *(_QWORD *)(v10 + 40 * i),
              a3,
              v13,
              *(_QWORD *)(v10 + 40 * i + 8),
              *(unsigned __int8 *)(v11 + 29));
            a2 = v15;
            WdLogGlobalForLineNumber = 27116;
            *(_QWORD *)(v10 + 40 * i) = 0LL;
          }
        }
      }
    }
    while ( v6 != (_QWORD *)(v3 + 904) );
    v5 = a1;
  }
  return VidSchiUnwaitMonitoredFences(v5, v3);
}
