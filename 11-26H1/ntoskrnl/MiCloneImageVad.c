/*
 * XREFs of MiCloneImageVad @ 0x140714B50
 * Callers:
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiCreateFixupVad @ 0x14099F45C (MiCreateFixupVad.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 result; // rax
  unsigned int SessionId; // eax
  int PerSessionProtos; // eax

  v3 = 0;
  v5 = **(_QWORD **)(a3 + 80);
  v6 = *(_DWORD *)(a3 + 48);
  if ( (v6 & 0x80000) != 0
    || (v6 & 0x1C) != 8
    || (v6 & 0x100000) == 0
    || (result = MiCreateFixupVad(a1, a2, a3, 0, 0), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v5 + 56) & 8) != 0 && (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
    {
      SessionId = PsGetSessionIdEx(a1);
      PerSessionProtos = MiCreatePerSessionProtos(v5, SessionId);
      if ( PerSessionProtos < 0 )
        return (unsigned int)PerSessionProtos;
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
