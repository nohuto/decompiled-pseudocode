/*
 * XREFs of KiGetHalNumaConversionFactor @ 0x140CCFC5C
 * Callers:
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiGetHalNumaConversionFactor(int *a1)
{
  unsigned int v2; // edx
  unsigned int i; // r8d
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 result; // rax
  int v8; // ecx
  unsigned __int64 v9; // rax

  v2 = 0;
LABEL_2:
  if ( v2 >= (unsigned __int16)KeNumberNodes )
  {
    *a1 = 1;
    return 0LL;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)KeNumberNodes )
      {
        ++v2;
        goto LABEL_2;
      }
      v4 = i + v2 * (unsigned __int16)KeNumberNodes;
      v5 = *((_QWORD *)KiActualNodeCost + v4);
      if ( v5 )
      {
        if ( v5 != -1LL )
        {
          v6 = *((unsigned int *)KeNodeDistance + v4);
          if ( (unsigned int)v6 > 1 )
            break;
        }
      }
    }
    if ( v6 < v5 )
    {
      v9 = 100 * v5;
      v8 = 2;
      result = v9 / v6;
    }
    else
    {
      result = (unsigned int)(100 * v6) / v5;
      v8 = 3;
    }
    *a1 = v8;
  }
  return result;
}
