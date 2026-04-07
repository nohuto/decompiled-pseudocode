/*
 * XREFs of ?GetInsets@NineGridLayout@@QEBAXPEAM000@Z @ 0x18000A044
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NineGridLayout::GetInsets(NineGridLayout *this, float *a2, float *a3, float *a4, float *a5)
{
  *a2 = (float)(*((_DWORD *)this + 1) - *(_DWORD *)this);
  *a3 = (float)(*((_DWORD *)this + 5) - *((_DWORD *)this + 4));
  *a4 = (float)(*((_DWORD *)this + 3) - *((_DWORD *)this + 2));
  *a5 = (float)(*((_DWORD *)this + 7) - *((_DWORD *)this + 6));
}
