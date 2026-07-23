/*
 * XREFs of PopPlLookupComponentPowerProfile @ 0x1406154B0
 * Callers:
 *     PopPlRegisterComponent @ 0x1404DC810 (PopPlRegisterComponent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPlLookupComponentPowerProfile(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  v3 = 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v7 = *(_QWORD *)(a1 + 80);
    v8 = *(_QWORD **)(v7 + 8 * i);
    v9 = *a2 - *v8;
    if ( *a2 == *v8 )
      v9 = a2[1] - v8[1];
    if ( !v9 )
      return *(_QWORD *)(v7 + 8 * i);
  }
  return v3;
}
