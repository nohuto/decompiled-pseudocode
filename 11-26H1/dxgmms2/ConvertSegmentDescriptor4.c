/*
 * XREFs of ConvertSegmentDescriptor4 @ 0x1400B1444
 * Callers:
 *     InitializePhysicalAdapterSegments_0 @ 0x1400B1ED8 (InitializePhysicalAdapterSegments_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertSegmentDescriptor4(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *a1;
  *(_QWORD *)(a2 + 8) = *((_QWORD *)a1 + 1);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)a1 + 3);
  *(_QWORD *)(a2 + 32) = *((_QWORD *)a1 + 4);
  *(_QWORD *)(a2 + 40) = *((_QWORD *)a1 + 5);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 10);
  *(_DWORD *)(a2 + 56) = a1[14];
  *(_QWORD *)(a2 + 64) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(a2 + 72) = *((_QWORD *)a1 + 9);
  *(_DWORD *)(a2 + 80) = a1[20];
  *(_DWORD *)(a2 + 84) = a1[21];
  *(_DWORD *)(a2 + 88) = a1[22];
  *(_DWORD *)(a2 + 92) = a1[23];
  result = *a1;
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) = 2;
  }
  else
  {
    result = (*a1 & 0x1000) == 0;
    *(_DWORD *)(a2 + 96) = result;
  }
  *(_DWORD *)(a2 + 100) = -1;
  return result;
}
