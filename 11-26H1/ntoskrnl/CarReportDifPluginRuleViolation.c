/*
 * XREFs of CarReportDifPluginRuleViolation @ 0x14064A330
 * Callers:
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     CarHandleEtwEvent @ 0x140649078 (CarHandleEtwEvent.c)
 *     CarCopyRuleViolationDetails @ 0x140649670 (CarCopyRuleViolationDetails.c)
 *     CarCreateRuleViolationDetails @ 0x140649850 (CarCreateRuleViolationDetails.c)
 *     CarDeleteTelemetryData @ 0x1406498BC (CarDeleteTelemetryData.c)
 *     CarDeleteRuleViolationDetails @ 0x1406498F0 (CarDeleteRuleViolationDetails.c)
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x140649A5C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     CarInitializeTelemetryData @ 0x140649C90 (CarInitializeTelemetryData.c)
 *     CarQueryReportActionForTriage @ 0x140649EE0 (CarQueryReportActionForTriage.c)
 *     CarInitiateBugcheck @ 0x14064CADC (CarInitiateBugcheck.c)
 *     CarWriteLivedump @ 0x14064CD54 (CarWriteLivedump.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     VfUtilGetSigningLevel @ 0x140C218E0 (VfUtilGetSigningLevel.c)
 */

__int64 __fastcall CarReportDifPluginRuleViolation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int RuleViolationDetails; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  char *v12; // r14
  const wchar_t *Pool2; // rax
  const wchar_t *v14; // r13
  const wchar_t *v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+90h] [rbp+30h]

  v19 = a1;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( *(int *)(a4 + 76) <= 2000000 )
    {
      v7 = *(_DWORD *)(a4 + 80);
      if ( v7 )
      {
        v8 = a2;
      }
      else
      {
        v8 = a2 | (((_DWORD)a1 + 1) << 16);
        RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
        if ( !RuleClassConfigurationEntryByRuleClassId )
        {
          RuleViolationDetails = -1073741275;
          goto LABEL_42;
        }
        v7 = *(_DWORD *)RuleClassConfigurationEntryByRuleClassId;
      }
      RuleViolationDetails = CarCreateRuleViolationDetails((PVOID *)&v17);
      if ( RuleViolationDetails >= 0 )
      {
        v10 = a4;
        v11 = v17;
        RuleViolationDetails = CarCopyRuleViolationDetails(v17, v10);
        if ( RuleViolationDetails >= 0 )
        {
          *(_QWORD *)(v11 + 48) = a3;
          v12 = *(char **)(v11 + 24);
          if ( !v12 )
          {
            switch ( v7 )
            {
              case 0xC4u:
                v12 = "DRIVER VERIFIER DETECTED VIOLATION";
                break;
              case 0xC9u:
                v12 = "DRIVER VERIFIER IOMANAGER VIOLATION";
                break;
              case 0xE6u:
                v12 = "DRIVER VERIFIER DMA VIOLATION";
                break;
              default:
                v12 = "UNKNOWN VIOLATION REPORTED VIA DRIVER VERIFIER";
                break;
            }
          }
          RuleViolationDetails = CarQueryReportActionForTriage(v7, v8, &v18);
          if ( RuleViolationDetails >= 0 )
          {
            Pool2 = (const wchar_t *)ExAllocatePool2(0x40uLL);
            v16 = Pool2;
            v14 = Pool2;
            if ( Pool2 )
            {
              RuleViolationDetails = CarInitializeTelemetryData(
                                       (__int64)Pool2,
                                       v7,
                                       v8,
                                       (const wchar_t ***)v11,
                                       (__int64)v12);
              if ( RuleViolationDetails >= 0 )
              {
                if ( v14 )
                {
                  RuleViolationDetails = CarHandleEtwEvent((__int64)v14, v8, v12, KeGetCurrentIrql(), v19, a3, v11);
                  if ( RuleViolationDetails >= 0 )
                  {
                    if ( _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 1, 0) != 1 )
                    {
                      *((_DWORD *)&stru_140F066E8.SwapListEntry + 2) = v7;
                      *((_DWORD *)&stru_140F066E8.SwapListEntry + 3) = v8;
                      stru_140F066E8.Queue = *(_DISPATCHER_HEADER *volatile *)v11;
                      stru_140F066E8.Teb = *(void **)(v11 + 8);
                      stru_140F066E8.RelativeTimerBias = *(_QWORD *)(v11 + 16);
                      RtlStringCchCopyW(
                        (NTSTRSAFE_PWSTR)&stru_140F066E8.Timer.Header.WaitListHead.Blink + 2,
                        0x20uLL,
                        v14 + 2);
                    }
                    switch ( (_DWORD)v18 )
                    {
                      case 2:
                        RuleViolationDetails = CarWriteLivedump(
                                                 (_DWORD)v14,
                                                 v8,
                                                 *(_QWORD *)v11,
                                                 *(_QWORD *)(v11 + 8),
                                                 *(_QWORD *)(v11 + 16));
                        if ( RuleViolationDetails != -1073738736 )
                          v14 = 0LL;
                        v16 = v14;
                        break;
                      case 3:
                        if ( a3 )
                        {
                          if ( (((unsigned __int8)VfUtilGetSigningLevel(a3) - 8) & 0xFB) != 0 )
                            CarInitiateBugcheck(v7, v8);
                        }
                        else
                        {
                          RuleViolationDetails = -1073741811;
                        }
                        break;
                      case 4:
                        CarInitiateBugcheck(v7, v8);
                    }
                    _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 0, 1);
                  }
                }
                else
                {
                  RuleViolationDetails = -1073741811;
                }
              }
              else
              {
                CarDeleteTelemetryData((void **)&v16);
              }
            }
            else
            {
              RuleViolationDetails = -1073741801;
            }
          }
        }
      }
    }
    else
    {
      RuleViolationDetails = -1073741582;
    }
  }
  else
  {
    RuleViolationDetails = -1073741637;
  }
LABEL_42:
  CarDeleteTelemetryData((void **)&v16);
  CarDeleteRuleViolationDetails((PVOID *)&v17);
  return (unsigned int)RuleViolationDetails;
}
