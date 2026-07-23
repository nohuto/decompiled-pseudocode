/*
 * XREFs of WdipSemValidateEndEvent @ 0x140826F34
 * Callers:
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemValidateEndEvent(_QWORD *a1, __int16 a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int i; // ecx
  __int64 v7; // r10
  __int64 v8; // rdx

  v3 = 0;
  if ( a1 && a3 )
  {
    for ( i = 0; i < *(_DWORD *)(a3 + 52); ++i )
    {
      v7 = *(_QWORD *)(a3 + 8LL * i + 1048);
      v8 = *a1 - *(_QWORD *)v7;
      if ( *a1 == *(_QWORD *)v7 )
        v8 = a1[1] - *(_QWORD *)(v7 + 8);
      if ( !v8 && a2 == *(_WORD *)(v7 + 16) )
        return v3;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
