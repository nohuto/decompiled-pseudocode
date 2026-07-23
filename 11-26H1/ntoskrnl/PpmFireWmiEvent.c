/*
 * XREFs of PpmFireWmiEvent @ 0x14060FA28
 * Callers:
 *     PpmEventThermalCapChange @ 0x14044656C (PpmEventThermalCapChange.c)
 *     PpmEventDomainPerfStateChange @ 0x140462364 (PpmEventDomainPerfStateChange.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1404A8878 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PopFireThermalWmiEvent @ 0x14060A650 (PopFireThermalWmiEvent.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x1403E0E10 (IoWMIWriteEvent.c)
 *     PpmAllocWmiEvent @ 0x14060F98C (PpmAllocWmiEvent.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmFireWmiEvent(__int64 a1, __int128 *a2, unsigned int a3, const void *a4)
{
  size_t v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  void *v8; // rdi

  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = PpmAllocWmiEvent((PDEVICE_OBJECT)a1, a2, a3);
    v8 = (void *)v7;
    if ( v7 )
    {
      if ( a4 )
        memmove((void *)(v7 + *(unsigned int *)(v7 + 56)), a4, v5);
      v6 = IoWMIWriteEvent(v8);
      if ( v6 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v8, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
