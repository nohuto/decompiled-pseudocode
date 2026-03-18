/*
 * XREFs of ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x14018B118
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifyRemoteVidPnSourceIdsAreValid(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  int v3; // edi
  __int64 i; // rdx
  unsigned int v6; // ecx

  v1 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1184LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
    {
      LOBYTE(v1) = v3 == (1 << v2) - 1;
      return v1;
    }
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 )
      break;
LABEL_5:
    ;
  }
  v6 = *(_DWORD *)(i + 248);
  ++v2;
  if ( v6 <= 0x10 && ((1 << v6) & v3) == 0 )
  {
    v3 |= 1 << v6;
    goto LABEL_5;
  }
  return 0LL;
}
