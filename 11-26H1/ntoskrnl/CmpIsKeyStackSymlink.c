/*
 * XREFs of CmpIsKeyStackSymlink @ 0x140A4F6E0
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 i; // dx
  __int64 v2; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    if ( i >= 2 )
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v2 = *(_QWORD *)(a1 + 8LL * i + 8);
    if ( *(_DWORD *)(v2 + 40) != -1 )
      return (*(_DWORD *)(v2 + 184) & 0x100000) != 0;
  }
  return 0;
}
