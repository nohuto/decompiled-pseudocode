/*
 * XREFs of TransformRectAroundPoint @ 0x1401F2D58
 * Callers:
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformRectAroundPoint(
        _DWORD *a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int64 a6)
{
  INT v9; // edi
  INT v10; // eax
  INT v11; // ecx
  INT v12; // eax
  INT v13; // ecx
  INT result; // eax
  int v15; // ecx
  INT v16; // eax
  int v17; // r9d
  INT v18; // r8d
  INT v19; // edx

  if ( a3 )
  {
    v16 = EngMulDiv(a6 - *a1, a3[2] - *a3, a1[2] - *a1);
    v17 = a1[1];
    v18 = a1[3] - v17;
    v19 = a3[3] - a3[1];
    *a4 = a6 - v16;
    result = EngMulDiv(HIDWORD(a6) - v17, v19, v18);
    a4[2] = *a4 + a3[2] - *a3;
    v15 = HIDWORD(a6) - result + a3[3] - a3[1];
    a4[1] = HIDWORD(a6) - result;
  }
  else
  {
    v9 = a2;
    *a4 = a6 - EngMulDiv(a6 - *a1, a5, a2);
    v10 = EngMulDiv(HIDWORD(a6) - a1[1], a5, v9);
    v11 = a1[2] - *a1;
    a4[1] = HIDWORD(a6) - v10;
    v12 = EngMulDiv(v11, a5, v9);
    v13 = a1[3] - a1[1];
    a4[2] = *a4 + v12;
    result = EngMulDiv(v13, a5, v9);
    v15 = result + a4[1];
  }
  a4[3] = v15;
  return result;
}
