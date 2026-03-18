/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x18012BE94
 * Callers:
 *     ??1CD2DBrush@@UEAA@XZ @ 0x1801233BC (--1CD2DBrush@@UEAA@XZ.c)
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x18012BDA4 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x1801CC98C (--1CD2DEffect@@MEAA@XZ.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x1802A9280 (--1CD2DInk@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298CF0 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 5);
    v3 = (_QWORD *)((char *)this + 56);
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( *((_BYTE *)this + 49) )
    {
      if ( *((_BYTE *)this + 50) )
        CD2DContext::RemoveHwProtectedResource(*(CD2DContext **)(v2 + 24));
      --*(_DWORD *)(v2 + 16);
    }
    *((_BYTE *)this + 48) = 0;
  }
  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
}
