/*
 * XREFs of ??0CIconicBitmapRegistry@@QEAA@XZ @ 0x180071EB0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  CIconicBitmapRegistry *v3; // r9

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CIconicBitmapRegistry *)((char *)this + 16));
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 48, 0LL, 0);
  *((_QWORD *)v3 + 12) &= v2;
  return v3;
}
