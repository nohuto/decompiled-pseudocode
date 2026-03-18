/*
 * XREFs of IsPciBusAsync @ 0x140028690
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x140028570 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 *     IsNsobjPciBus @ 0x1400C83A4 (IsNsobjPciBus.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     AcpipAllocatePciBusState @ 0x140028CDC (AcpipAllocatePciBusState.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall IsPciBusAsync(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 PciBusState; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return 0LL;
  PciBusState = AcpipAllocatePciBusState();
  v11 = PciBusState;
  if ( !PciBusState )
    return 3221225626LL;
  memset((void *)(PciBusState + 8), 0, 0x80uLL);
  *(_QWORD *)v11 = a1;
  AMLIReferenceHandleEx(a1);
  *(_QWORD *)(v11 + 48) = a2;
  *(_QWORD *)(v11 + 56) = a3;
  *(_QWORD *)(v11 + 64) = a4;
  *(_DWORD *)(v11 + 40) = -1;
  return IsPciBusAsyncWorker(v12, 0LL, 0LL, v11);
}
