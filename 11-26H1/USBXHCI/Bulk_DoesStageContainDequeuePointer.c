/*
 * XREFs of Bulk_DoesStageContainDequeuePointer @ 0x140015F8C
 * Callers:
 *     Bulk_FindStage @ 0x140023C2C (Bulk_FindStage.c)
 * Callees:
 *     TR_DoesSegmentContainDequeuePointer @ 0x1400157C4 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_DoesStageContainDequeuePointer(__int64 a1, signed __int64 a2)
{
  _QWORD *v2; // r14
  signed __int64 v3; // r9
  _QWORD *v4; // rdi
  int v6; // edx
  char v7; // bl
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r11

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  v4 = *(_QWORD **)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 104);
  v7 = 0;
  while ( v2 != v4 )
  {
    if ( TR_DoesSegmentContainDequeuePointer((__int64)v4, v6, 0xFFFFFFFF, v3) )
      return 1;
    v4 = (_QWORD *)*v4;
    v6 = 0;
  }
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(unsigned int *)(v8 + 44);
  v10 = *(_QWORD *)(v8 + 24);
  if ( v3 >= v10 + (unsigned int)(16 * v6) )
  {
    v7 = 0;
    if ( 16 * (unsigned __int64)*(unsigned int *)(a1 + 120) <= v9 )
      LODWORD(v9) = 16 * *(_DWORD *)(a1 + 120);
    if ( v3 < v10 + (unsigned int)v9 )
      return 1;
  }
  return v7;
}
