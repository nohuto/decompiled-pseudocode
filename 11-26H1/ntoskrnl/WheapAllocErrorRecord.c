/*
 * XREFs of WheapAllocErrorRecord @ 0x1403E1420
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x1406D8A2C (WheapReportBootError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x1404EF214 (WheapInitializeErrorRecordWrapper.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  char v5; // dl
  unsigned int i; // r8d
  char v7; // dl
  __int64 v8; // r11
  __int64 Pool2; // rax

  *a2 = *(_DWORD *)(a1 + 32);
  if ( KeGetCurrentIrql() <= 2u )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      WheapInitializeErrorRecordWrapper(Pool2, (unsigned int)*a2, a1);
      goto LABEL_9;
    }
LABEL_13:
    *a2 = 0;
    return v8;
  }
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
  {
    if ( *(_DWORD *)(v4 + 28) != 1 && !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 28), 1, 0) )
    {
      v5 = 1;
      break;
    }
    v4 += *(unsigned int *)(v4 + 16);
  }
  v7 = -v5;
  v8 = v4 & -(__int64)(v7 != 0);
  if ( !v8 )
    goto LABEL_13;
  *(_DWORD *)((v4 & -(__int64)(v7 != 0)) + 0x18) = 1;
LABEL_9:
  *(_QWORD *)(v8 + 32) = a1;
  return v8;
}
