/*
 * XREFs of ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140062D7C
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x14005F4CC (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiInternal::CalculateMinMaxOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        int *a4,
        int *a5)
{
  __int64 v5; // r10
  int v6; // ebx
  int v8; // esi
  __int64 v9; // r9
  unsigned int v10; // r8d

  v5 = 0LL;
  v6 = a2;
  *(_DWORD *)a3.cx = 0;
  *a4 = 0;
  if ( (int)a2 >= SHIDWORD(a2) )
  {
    v8 = HIDWORD(a2);
  }
  else
  {
    v8 = a2;
    v6 = HIDWORD(a2);
  }
  while ( (unsigned int)v5 < a5[2] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a5 + 2) + 4 * v5) == (_DWORD)this )
    {
      *(_DWORD *)a3.cx = -(int)v5;
      LODWORD(v9) = a5[2];
      while ( 1 )
      {
        v9 = (unsigned int)(v9 - 1);
        if ( (unsigned int)v9 <= (unsigned int)v5 )
          break;
        v10 = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4 * v9);
        if ( (int)(100 * v6 / v10) >= *a5 && (int)(100 * v8 / v10) >= a5[1] )
        {
          *a4 = v9 - v5;
          return;
        }
      }
      return;
    }
    v5 = (unsigned int)(v5 + 1);
  }
}
