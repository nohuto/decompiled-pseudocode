/*
 * XREFs of IoIsKernelPagingRead @ 0x140479290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IoIsKernelPagingRead(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int16 v3; // r8
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 200);
  v2 = 0;
  LOBYTE(v3) = 0;
  if ( *(char *)(a1 + 71) >= 0 && v1 && _bittest16((const signed __int16 *)(v1 + 2), 8u) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(a1 + 200) + 60LL);
    v4 = 0;
  }
  else
  {
    v4 = -1073741275;
  }
  if ( v4 >= 0 )
    v2 = v3;
  return (v2 & 1) == 0;
}
