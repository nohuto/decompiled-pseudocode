/*
 * XREFs of MiMapChildLargePageVads @ 0x140885FAC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 */

__int64 __fastcall MiMapChildLargePageVads(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  _QWORD **v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD *i; // rcx

  v2 = a2;
  if ( a2 )
  {
    v4 = *(_QWORD **)(BugCheckParameter1 + 1368);
    v5 = 0LL;
    while ( v4 )
    {
      v5 = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( v5 )
    {
      if ( MiIsVadLargePrivate(v5) )
      {
        MiLocateAddress((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
        result = MiCopyLargeVad(BugCheckParameter1);
        if ( (int)result < 0 )
          return result;
        if ( !--v2 )
          break;
      }
      v7 = *(_QWORD ***)(v5 + 8);
      v8 = v5;
      if ( v7 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        for ( i = *v7; i; i = (_QWORD *)*i )
          v5 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v8 )
            break;
          v8 = v5;
        }
      }
    }
  }
  return 0LL;
}
