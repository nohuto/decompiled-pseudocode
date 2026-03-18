/*
 * XREFs of ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18018D7F4
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rdi
  char *v3; // rbx

  if ( *((_DWORD *)this + 1498) )
  {
    v2 = 0LL;
    v3 = (char *)this + 5968;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*(_QWORD *)v3 + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 1498) );
    *((_DWORD *)v3 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v3, 8u);
  }
}
