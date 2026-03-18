/*
 * XREFs of ACPIPepWnfCallback @ 0x1400B4A20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140065BD0 (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     AcpiDiagTraceModernStandbyStateNotification @ 0x1400AB1F8 (AcpiDiagTraceModernStandbyStateNotification.c)
 *     ACPIPepQueueWorker @ 0x1400CD730 (ACPIPepQueueWorker.c)
 */

__int64 __fastcall ACPIPepWnfCallback(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rdi
  int v8; // esi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // ebp
  int v15; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v16[5]; // [rsp+24h] [rbp-14h] BYREF

  v7 = a6 + 160;
  v8 = 0;
  v9 = (unsigned int)Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline() == 0;
  v10 = *a2;
  if ( v9 )
  {
    if ( v10 != WNF_PO_MODERN_STANDBY_EXIT_INITIATED )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != WNF_PO_MODERN_STANDBY_EXIT_INITIATED )
  {
    if ( v10 == WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION )
    {
      v11 = *(_QWORD *)(v7 + 176);
      v16[0] = 0;
      LODWORD(a6) = 0;
      v15 = 4;
      v12 = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64 *, int *))ExQueryWnfStateData)(v11, v16, &a6, &v15);
      if ( v12 < 0 )
        return (unsigned int)v12;
      if ( !(_BYTE)a6 )
      {
        v13 = BYTE1(a6);
        ExAcquireFastMutex((PFAST_MUTEX)(v7 + 24));
        if ( v13 != *(_DWORD *)(v7 + 92) )
        {
          *(_DWORD *)(v7 + 92) = v13;
          ACPIPepQueueWorker(v7);
          v8 = 1;
        }
        ExReleaseFastMutex((PFAST_MUTEX)(v7 + 24));
        AcpiDiagTraceModernStandbyStateNotification(v8, v13);
        return (unsigned int)v12;
      }
    }
    return (unsigned int)-1073741811;
  }
  ExAcquireFastMutex((PFAST_MUTEX)(v7 + 24));
  if ( !*(_BYTE *)(v7 + 96) )
  {
    *(_BYTE *)(v7 + 96) = 1;
    ACPIPepQueueWorker(v7);
  }
  ExReleaseFastMutex((PFAST_MUTEX)(v7 + 24));
  return 0;
}
