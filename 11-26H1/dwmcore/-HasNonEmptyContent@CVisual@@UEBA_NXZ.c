/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x180122B30
 * Callers:
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1801228C0 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x180122900 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  __int64 v5; // rax
  _BYTE *v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // r8d

  v2 = *((_QWORD *)this + 31);
  if ( v2 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 224LL))(v2) )
    return 1;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v3 & 0x80000) == 0 )
    return 0;
  v5 = (unsigned int)v3[1];
  v6 = v3 + 2;
  v7 = 0LL;
  v8 = 0;
  if ( (_DWORD)v5 )
  {
    while ( *v6 != 13 )
    {
      ++v8;
      ++v6;
      if ( v8 >= (unsigned int)v5 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
LABEL_12:
  if ( v8 < (unsigned int)v5 )
LABEL_8:
    v7 = (unsigned __int64)&v3[2 * v8] + ((v5 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
  return **(_QWORD **)v7 != *(_QWORD *)(*(_QWORD *)v7 + 8LL);
}
