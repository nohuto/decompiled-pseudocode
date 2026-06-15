/*
 * XREFs of sub_1400B1DCC @ 0x1400B1DCC
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005C388 @ 0x14005C388 (sub_14005C388.c)
 */

void __fastcall __noreturn sub_1400B1DCC(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v3 = *(_QWORD *)(a2 + 120);
  if ( !v3 )
    sub_14004639C(-2147467259);
  v4 = *(_QWORD *)(a2 + 96);
  v5 = (unsigned int)(*(_DWORD *)(v3 + 24) % *(_DWORD *)(v4 + 16));
  if ( v3 == *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v5);
    if ( *(_QWORD *)(v6 + 16) != v3 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      do
      {
        v6 = v7;
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v7 != v3 );
    }
  }
  sub_14005C388(*(_QWORD *)(a2 + 96), v3, v6);
  throw;
}
