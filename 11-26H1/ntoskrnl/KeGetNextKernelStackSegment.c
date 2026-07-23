/*
 * XREFs of KeGetNextKernelStackSegment @ 0x140428EF0
 * Callers:
 *     IopMarkPagesForProcessorData @ 0x1405D849C (IopMarkPagesForProcessorData.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  _OWORD *v3; // rax
  char result; // al
  __int128 v5; // xmm1

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
    a2[4] = a1[131];
    a2[5] = a1[132];
    a2[6] = a1[129];
    a2[7] = a1[130];
    return 1;
  }
  else
  {
    v3 = (_OWORD *)a2[3];
    if ( *((_QWORD *)v3 + 2) )
    {
      *(_OWORD *)a2 = v3[1];
      *((_OWORD *)a2 + 1) = v3[2];
      *((_OWORD *)a2 + 2) = v3[3];
      v5 = v3[4];
      result = 1;
      *((_OWORD *)a2 + 3) = v5;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
