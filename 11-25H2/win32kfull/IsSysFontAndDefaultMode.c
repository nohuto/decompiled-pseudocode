/*
 * XREFs of IsSysFontAndDefaultMode @ 0x14021EDAC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x14021EDF8 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x14033E7AC (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int MapMode; // eax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(GetDPIServerInfo() + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v4 = 1;
  if ( MapMode != 1 )
    return 0;
  return v4;
}
