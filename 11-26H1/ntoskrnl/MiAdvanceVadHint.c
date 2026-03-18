/*
 * XREFs of MiAdvanceVadHint @ 0x14095CE00
 * Callers:
 *     MiReserveUserMemoryInsertVad @ 0x14095BBAC (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // ebx
  BOOL v9; // r11d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx

  v3 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  v4 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  result = (unsigned __int64)(-524288 * qword_140E2DE48 + (a3[1] << 19)) >> 16;
  if ( v3 < result )
    return result;
  v6 = result + *a3;
  if ( v4 >= v6 )
    return result;
  v7 = v4;
  if ( v4 < result )
    v7 = (unsigned __int64)(-524288 * qword_140E2DE48 + (a3[1] << 19)) >> 16;
  v8 = 0;
  v9 = v4 < result;
  if ( v3 >= v6 )
  {
    v3 = v6 - 1;
    v9 = 1;
  }
  v10 = v3 - result;
  v11 = v7 - result;
  v12 = v10 - v11 + 1;
  if ( v10 == v11 && !v9 || v11 == a3[2] )
  {
    result = v10 + 1;
    a3[2] = v10 + 1;
  }
  v13 = a3[4];
  v14 = v10 + 1;
  if ( v13 >= v14 || a3[3] + v13 <= v11 )
  {
    if ( v12 <= 1 )
      return result;
    if ( v9 )
      goto LABEL_16;
  }
  else
  {
    v8 = 1;
  }
  a3[4] = v14;
LABEL_16:
  if ( v12 > 1 && !v9 )
  {
    if ( v8 )
    {
      result = a3[3];
      if ( v12 < result )
        result = v12;
      a3[3] = result;
    }
    else
    {
      a3[3] = v12;
    }
  }
  return result;
}
