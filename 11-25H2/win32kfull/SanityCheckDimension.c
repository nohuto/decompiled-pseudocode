/*
 * XREFs of SanityCheckDimension @ 0x1401BA2F8
 * Callers:
 *     HT_HalftoneBitmap @ 0x14013D908 (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SanityCheckDimension(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v5; // r8d

  v2 = a2;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 112);
  if ( !*(_DWORD *)(v4 + 72) )
    return 1;
  v5 = a1;
  if ( a1 <= v2 )
  {
    v5 = v2;
    v2 = a1;
  }
  return (unsigned int)(v5 - v2) <= *(_DWORD *)(v4 + 76);
}
