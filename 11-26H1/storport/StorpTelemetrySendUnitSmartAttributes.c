/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1400C3948
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1400467C0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer @ 0x1400B5D1C (McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400BC6CC (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400BCB0C (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1400C40E8 (StorpTelemetrySmartCommand.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  const char *v1; // rdi
  __int64 Pool; // rax
  __int64 v4; // rdx
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  char *v10; // rcx
  _WORD *v11; // r14
  __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *v15; // rbx
  int v16; // [rsp+70h] [rbp-B0h]
  int v17; // [rsp+88h] [rbp-98h]

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 2120) & 2) == 0 && !KeGetCurrentIrql() )
  {
    Pool = RaidAllocatePool(256LL, 556LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    v5 = (unsigned int *)Pool;
    if ( Pool )
    {
      LOBYTE(v4) = -38;
      v6 = StorpTelemetrySmartCommand(a1, v4, Pool);
      if ( v6 >= 0 )
      {
        v8 = *v5;
        if ( *(unsigned int *)((char *)v5 + v8) < 8 )
          goto LABEL_12;
        if ( *((_BYTE *)v5 + v8 + 19) == 0xF4 && *((_BYTE *)v5 + v8 + 20) == 44 )
          *(_DWORD *)(a1 + 2120) |= 0x20u;
        else
          *(_DWORD *)(a1 + 2120) &= ~0x20u;
        LOBYTE(v7) = -48;
        v6 = StorpTelemetrySmartCommand(a1, v7, v5);
        if ( v6 >= 0 )
        {
          v10 = (char *)v5 + *v5;
          v11 = v10 + 16;
          if ( *(unsigned int *)((char *)v5 + v8) >= 0x200 )
          {
            if ( v10 != (char *)-16LL )
            {
              for ( i = 0LL; i < 360; i += 12LL )
                ;
            }
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_31;
            }
            if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( *(_BYTE *)(a1 + 2124) )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( g_StorpTraceLoggingCriticalEventEnabled )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1);
            else
LABEL_31:
              StorpTelemetryLogUnitSmartAttributesMeasures(a1);
            v13 = *(_QWORD *)(a1 + 160);
            if ( v13 )
            {
              v1 = (const char *)(v13 + 90);
            }
            else
            {
              v14 = *(_QWORD *)(a1 + 152);
              if ( v14 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 608LL) + 184LL) & 0x40) != 0 )
                v1 = (const char *)(v14 + 41);
            }
            if ( (byte_140173444 & 0x40) != 0 )
            {
              v15 = (const char *)&dword_140154ADC;
              if ( v1 )
                v15 = v1;
              McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer(
                a1 + 242,
                a1 + 177,
                a1 + 168,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_BYTE *)(a1 + 104),
                *(_BYTE *)(a1 + 105),
                *(_BYTE *)(a1 + 106),
                a1 + 2104,
                *(_QWORD *)(a1 + 24) + 5128LL,
                *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
                (const char *)(a1 + 168),
                (const char *)(a1 + 177),
                (const char *)(a1 + 242),
                v15,
                v16,
                *v11,
                (*(_DWORD *)(a1 + 2120) & 0x20) != 0,
                v17,
                (__int64)v11);
            }
            goto LABEL_14;
          }
          goto LABEL_12;
        }
      }
      if ( v6 == -1073741670 )
      {
LABEL_14:
        ExFreePoolWithTag(v5, 0x65546152u);
        return;
      }
LABEL_12:
      v9 = *(_DWORD *)(a1 + 2120);
      if ( (v9 & 1) == 0 )
        *(_DWORD *)(a1 + 2120) = v9 | 2;
      goto LABEL_14;
    }
  }
}
