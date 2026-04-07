/*
 * XREFs of ?SetOpacity@CAtlasedRectsMeshProxy@@QEAAJH@Z @ 0x180003CF0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800051EC (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMeshProxy::SetOpacity(CAtlasedRectsMeshProxy *this, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 552LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
