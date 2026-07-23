/*
 * XREFs of MxMapFreePageNode @ 0x140CFE074
 * Callers:
 *     MxCreateFreePages @ 0x140CFC028 (MxCreateFreePages.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MxCreatePfnsForDescriptor @ 0x140CFC444 (MxCreatePfnsForDescriptor.c)
 *     MxCreatePfnsForPfns @ 0x140CFC488 (MxCreatePfnsForPfns.c)
 *     MxIsPfnDatabaseMapped @ 0x140CFDEAC (MxIsPfnDatabaseMapped.c)
 */

void __fastcall MxMapFreePageNode(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 )
      goto LABEL_10;
    v5 = (_QWORD *)*v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_10;
    *a2 = v5;
    v5[1] = a2;
    if ( !(unsigned int)MxIsPfnDatabaseMapped((__int64)v4)
      && (!(unsigned int)MxCreatePfnsForDescriptor((__int64)v4) || !(unsigned int)MxCreatePfnsForPfns()) )
    {
      KeBugCheckEx(0x1Au, 0x62002uLL, v4[4], v4[5], qword_14101FBF0);
    }
    v6 = *(_QWORD **)(a1 + 88);
    if ( *v6 != a1 + 80 )
LABEL_10:
      __fastfail(3u);
    *v4 = a1 + 80;
    v4[1] = v6;
    *v6 = v4;
    *(_QWORD *)(a1 + 88) = v4;
  }
}
