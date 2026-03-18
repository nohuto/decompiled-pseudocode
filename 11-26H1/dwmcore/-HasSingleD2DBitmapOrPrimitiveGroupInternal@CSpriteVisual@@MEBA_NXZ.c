/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x180192C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  int v1; // ebx
  __int64 v3; // rcx

  v1 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    v1 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 16LL) != 0;
  if ( (**((_DWORD **)this + 28) & 0x40000) != 0 )
    ++v1;
  return v1 == 1;
}
