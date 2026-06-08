/*
 * XREFs of ProcLibCapChange @ 0x14004061C
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1400032A0 (ProcLibOnD0StateChangeWorker.c)
 *     PccCapWorker @ 0x14000DD00 (PccCapWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140026A40 (CpcGuaranteedNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x14002B960 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C670 (PepUpdatePerformanceConstraintWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1400404C0 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     QueueCapTrace @ 0x14002F8E8 (QueueCapTrace.c)
 */

char __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf

  LOBYTE(v8) = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 744);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      v8 = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 744) = 0LL;
      *(_QWORD *)(a1 + 752) += v8;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 924) == 0;
    *(_QWORD *)(a1 + 744) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
      LOBYTE(v8) = QueueCapTrace(a1 + 776, 300);
    if ( !*(_BYTE *)(a1 + 1076) )
      LOBYTE(v8) = QueueCapTrace(a1 + 928, 86400);
  }
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    ++*(_DWORD *)(a1 + 760);
    *(_DWORD *)(a1 + 464) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 512) )
  {
    ++*(_DWORD *)(a1 + 764);
    *(_DWORD *)(a1 + 512) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 740) )
  {
    ++*(_DWORD *)(a1 + 768);
    *(_DWORD *)(a1 + 740) = a4;
  }
  return v8;
}
