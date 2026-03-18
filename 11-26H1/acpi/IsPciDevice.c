/*
 * XREFs of IsPciDevice @ 0x140047FCC
 * Callers:
 *     GetOpRegionScopeWorker @ 0x140047EC0 (GetOpRegionScopeWorker.c)
 *     AcpiDeletePciBusInterface @ 0x1400D0570 (AcpiDeletePciBusInterface.c)
 *     ACPIInternalIsPci @ 0x1400D4050 (ACPIInternalIsPci.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 */

__int64 __fastcall IsPciDevice(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 *Pool2; // rax
  __int64 v11; // r9
  __int64 v12; // rcx

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 128LL, 1181770561LL);
    if ( Pool2 )
    {
      *Pool2 = a1;
      AMLIReferenceHandleEx(a1);
      *(_QWORD *)(v11 + 40) = a2;
      *(_QWORD *)(v11 + 48) = a3;
      *(_QWORD *)(v11 + 56) = a4;
      *(_DWORD *)(v11 + 36) = -1;
      return IsPciDeviceWorker(v12, 0LL, 0LL);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
