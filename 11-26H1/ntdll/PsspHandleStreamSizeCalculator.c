/*
 * XREFs of PsspHandleStreamSizeCalculator @ 0x1800F7D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsspHandleStreamSizeCalculator(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v9; // r8d
  int v10; // edx
  int v11; // eax

  v9 = *a1 + 16;
  *a1 = v9;
  v10 = v9;
  if ( a5 && *a5 )
  {
    v10 = v9 + (unsigned __int16)*a5 + 4;
    *a1 = v10;
  }
  v11 = v10;
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    v11 = v10 + *a6 + 4;
    *a1 = v11;
  }
  if ( a7 )
  {
    v11 += 56;
    *a1 = v11;
  }
  if ( a8 && a9 )
    *a1 = a9 + v11 + 2;
  return 1;
}
