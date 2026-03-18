/*
 * XREFs of ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D88A4
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D865C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D9DB0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x14025B530 (NtGdiCLIPOBJ_cEnumStart.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 == *(_QWORD *)(a1 + 120) )
    v2 = *(_QWORD *)(a1 + 112);
  else
    v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && v2 )
    v2 &= -(__int64)GrepIsEngineVa((void *)v2);
  return v2;
}
