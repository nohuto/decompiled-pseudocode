/*
 * XREFs of SmpAddKnownSubSys @ 0x140009AB0
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmpAddKnownSubSys(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *i; // rcx
  __int64 v4; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  ++*a2;
  for ( i = (_QWORD *)v2[1]; i != v2; i = (_QWORD *)i[1] )
  {
    if ( *((_DWORD *)i - 2) == a2[16] )
      break;
  }
  v4 = *i;
  result = a2 + 18;
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *result = v4;
  result[1] = v6;
  *v6 = result;
  *(_QWORD *)(v4 + 8) = result;
  return result;
}
