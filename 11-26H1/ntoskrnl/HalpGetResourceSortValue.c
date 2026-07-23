/*
 * XREFs of HalpGetResourceSortValue @ 0x140CB48E8
 * Callers:
 *     HalpReportResourceUsage @ 0x140CB4938 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetResourceSortValue(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 1:
      *a2 = 1;
      goto LABEL_9;
    case 2:
      *a2 = 0;
      result = *(unsigned __int16 *)(a1 + 4);
      goto LABEL_10;
    case 3:
    case 7:
      *a2 = 2;
LABEL_9:
      result = *(_QWORD *)(a1 + 4);
      goto LABEL_10;
  }
  *a2 = 4;
  result = 0LL;
LABEL_10:
  *a3 = result;
  return result;
}
