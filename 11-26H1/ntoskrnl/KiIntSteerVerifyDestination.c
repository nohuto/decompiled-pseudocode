/*
 * XREFs of KiIntSteerVerifyDestination @ 0x140432D34
 * Callers:
 *     KiIntSteerSetDestination @ 0x140432CA8 (KiIntSteerSetDestination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerVerifyDestination(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx

  if ( *(_WORD *)(a1 + 72) == *((_WORD *)a2 + 4) && (v2 = *a2) != 0 )
    return *(_QWORD *)(a1 + 64) != (v2 | *(_QWORD *)(a1 + 64)) ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
