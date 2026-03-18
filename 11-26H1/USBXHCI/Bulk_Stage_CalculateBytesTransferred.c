/*
 * XREFs of Bulk_Stage_CalculateBytesTransferred @ 0x140023EFC
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Bulk_Stage_ProcessSegment @ 0x140023F7C (Bulk_Stage_ProcessSegment.c)
 */

__int64 __fastcall Bulk_Stage_CalculateBytesTransferred(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v3 = *(_DWORD *)(a2 + 104);
  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(a2 + 24);
  LODWORD(v9) = 0;
  while ( v4 != v5 )
  {
    if ( (unsigned __int8)Bulk_Stage_ProcessSegment(a1, a3, (_DWORD)v5, v3, (__int64)&v9) )
      return (unsigned int)v9;
    v5 = (_QWORD *)*v5;
    v3 = 0;
  }
  Bulk_Stage_ProcessSegment(a1, a3, *(_QWORD *)(a2 + 112), v3, (__int64)&v9);
  return (unsigned int)v9;
}
