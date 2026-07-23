/*
 * XREFs of KiUpdateInterruptRate @ 0x14047E49C
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 * Callees:
 *     <none>
 */

void __fastcall KiUpdateInterruptRate(_DWORD *a1, unsigned int a2)
{
  _DWORD *v3; // r10
  _DWORD *v4; // r11
  unsigned int v5; // ecx
  __int64 v6; // rax

  if ( a2 )
  {
    v3 = a1 + 8592;
    v4 = a1 + 2920;
    if ( a2 >= 8 )
    {
      a1[2921] = 0;
    }
    else
    {
      v5 = a1[2921] + 15 * (*v3 - *v4);
      a1[2921] = v5;
      v6 = a2;
      do
      {
        v5 >>= 4;
        --v6;
      }
      while ( v6 );
      a1[2921] = v5;
    }
    *v4 = *v3;
  }
}
