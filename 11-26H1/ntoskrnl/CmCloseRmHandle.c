/*
 * XREFs of CmCloseRmHandle @ 0x140776A94
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseRmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
