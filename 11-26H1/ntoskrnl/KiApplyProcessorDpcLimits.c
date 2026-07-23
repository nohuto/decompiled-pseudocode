/*
 * XREFs of KiApplyProcessorDpcLimits @ 0x140BF9624
 * Callers:
 *     KiUpdateProcessorDpcWatchdogConfiguration @ 0x1405EBBE0 (KiUpdateProcessorDpcWatchdogConfiguration.c)
 *     KiInitializeProcessor @ 0x140BF9FD4 (KiInitializeProcessor.c)
 * Callees:
 *     KiSetProcessorDpcLimits @ 0x1405EE1BC (KiSetProcessorDpcLimits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiApplyProcessorDpcLimits(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 Pool2; // r8
  int v6; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2[6];
  Pool2 = *(_QWORD *)(a1 + 36584);
  P = 0LL;
  if ( a2[7] != v2 )
  {
    if ( v2 )
      Pool2 = ExAllocatePool2(0x40uLL);
    else
      Pool2 = 0LL;
  }
  v6 = KiSetProcessorDpcLimits(a1, a2, Pool2, &P);
  if ( v6 >= 0 && P )
    ExFreePoolWithTag(P, 0x5057694Bu);
  return (unsigned int)v6;
}
