/*
 * XREFs of AlpcHandleDataDestroyProcedure @ 0x140A9DE80
 * Callers:
 *     <none>
 * Callees:
 *     ObReleaseDuplicateInfo @ 0x140A9DEE8 (ObReleaseDuplicateInfo.c)
 */

__int64 __fastcall AlpcHandleDataDestroyProcedure(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rsi
  _QWORD *v4; // rdi

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  if ( v1 )
  {
    v4 = (_QWORD *)(a1 + 24);
    do
    {
      if ( !*v4 )
        break;
      ObReleaseDuplicateInfo(a1 + 48 * v2 + 8);
      v2 = (unsigned int)(v2 + 1);
      v4 += 6;
    }
    while ( (unsigned int)v2 < v1 );
  }
  return 0LL;
}
