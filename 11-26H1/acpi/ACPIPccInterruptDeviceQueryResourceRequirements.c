/*
 * XREFs of ACPIPccInterruptDeviceQueryResourceRequirements @ 0x1400B29B8
 * Callers:
 *     ACPIInternalDeviceQueryResourceRequirements @ 0x1400B1540 (ACPIInternalDeviceQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIPccInterruptDeviceQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 Pool2; // rax
  int v6; // edx

  v3 = 0;
  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
  Pool2 = ExAllocatePool2(256LL, 72LL, 1383097153LL);
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 72;
    *(_DWORD *)(Pool2 + 28) = 1;
    *(_DWORD *)(Pool2 + 36) = 1;
    *(_QWORD *)(Pool2 + 4) = 15LL;
    *(_DWORD *)(Pool2 + 32) = 65537;
    v6 = 2;
    *(_WORD *)(Pool2 + 40) = 512;
    *(_BYTE *)(Pool2 + 42) = 3;
    *(_WORD *)(Pool2 + 44) = *(_DWORD *)(v4 + 24) != 0;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(Pool2 + 52) = *(_DWORD *)(v4 + 16);
    if ( *(_DWORD *)(v4 + 20) != 2 )
      v6 = 0;
    *(_DWORD *)(Pool2 + 56) = v6;
    a2->IoStatus.Information = Pool2;
  }
  else
  {
    *(_DWORD *)(v4 + 64) = 2;
    v3 = -1073741670;
    KeSetEvent((PRKEVENT)(v4 + 40), 0, 0);
  }
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
