/*
 * XREFs of PopDirectedDripsUmQueryCapabilities @ 0x1407E77C0
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140775F20 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopDirectedDripsQueryMitigationStatus @ 0x140B27FBC (PopDirectedDripsQueryMitigationStatus.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsUmQueryCapabilities(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _BYTE *Pool2; // rdi
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    PopDirectedDripsQueryMitigationStatus(&v7, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
      *Pool2 = 1;
    if ( (v7 & 2) != 0 )
      Pool2[1] = 1;
    *a1 = 2;
    *a2 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
