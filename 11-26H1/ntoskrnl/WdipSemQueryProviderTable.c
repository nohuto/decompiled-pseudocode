/*
 * XREFs of WdipSemQueryProviderTable @ 0x140B631C0
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x140B630F4 (WdipSemUpdateProviderTableWithEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemQueryProviderTable(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned int i; // r8d
  _QWORD *v4; // r10
  __int64 v5; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    for ( i = 0; i < dword_140F06A20; ++i )
    {
      v4 = (_QWORD *)*((_QWORD *)&stru_140F049E8.StackBase + i);
      v5 = *a1 - *v4;
      if ( *a1 == *v4 )
        v5 = a1[1] - v4[1];
      if ( !v5 )
        return *((_QWORD *)&stru_140F049E8.StackBase + i);
    }
  }
  return v1;
}
