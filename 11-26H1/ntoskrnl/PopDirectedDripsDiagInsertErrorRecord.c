/*
 * XREFs of PopDirectedDripsDiagInsertErrorRecord @ 0x140B47AD4
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1407E73AC (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140B0DA00 (PopDirectedDripsDiagTraceProblemDevice.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsDiagInsertErrorRecord(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 i; // rax
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 24); i && (*(_QWORD *)(i + 8) != a2 || *(_DWORD *)(i + 16) != a3); i = *(_QWORD *)i )
    v3 = (__int64 *)i;
  if ( *v3 )
    goto LABEL_7;
  result = ExAllocatePool2(0x100uLL);
  *v3 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(*v3 + 16) = a3;
LABEL_7:
    result = *v3;
    ++*(_DWORD *)(*v3 + 20);
  }
  return result;
}
