/*
 * XREFs of PopDirectedDripsVisitPs4Device @ 0x1407E7A4C
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077451C (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsInsertQueueDevice @ 0x14077DA5C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x14077EAE8 (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x140B0D684 (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140B0DA00 (PopDirectedDripsDiagTraceProblemDevice.c)
 */

__int64 __fastcall PopDirectedDripsVisitPs4Device(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r14
  _QWORD *i; // rsi
  __int64 v13; // rbx
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v15 = 0;
  PopDirectedDripsVisitDevice(a3, a1 + 728, a4, 5LL);
  if ( PopDirectedDripsIsLikelySpecialDevice(a1, &v15) )
  {
    v10 = v15;
LABEL_3:
    PopDirectedDripsDiagTraceProblemDevice(v9, a4, v10);
    return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(a1 + 760) & 8) != 0 )
  {
    v10 = 3LL;
    goto LABEL_3;
  }
  v11 = (_QWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 760) |= 0x20000u;
  for ( i = *(_QWORD **)(a1 + 176); i != v11; i = (_QWORD *)*i )
  {
    v13 = *(i - 1);
    PopDirectedDripsVisitDevice(a3, v13 + 568, a4, 6LL);
    PopDirectedDripsInsertQueueDevice(a2, (_QWORD *)(v13 + 568));
  }
  return v6;
}
