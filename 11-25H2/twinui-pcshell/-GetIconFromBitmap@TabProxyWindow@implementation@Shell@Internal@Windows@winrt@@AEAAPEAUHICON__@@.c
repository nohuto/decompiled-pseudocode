/*
 * XREFs of ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800AB6DC
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800AB810 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     ImageList_Destroy @ 0x180224A00 (ImageList_Destroy.c)
 *     ImageList_Create @ 0x18022ACA0 (ImageList_Create.c)
 *     ImageList_GetIcon @ 0x1802C881C (ImageList_GetIcon.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CF3B4 (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 *     _GetProcFromComCtl32 @ 0x1802DF578 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
HICON __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HBITMAP a2)
{
  int v3; // r9d
  struct _IMAGELIST *v4; // rbx
  unsigned int (__fastcall *v5)(struct _IMAGELIST *, HBITMAP, _QWORD); // rax
  int v6; // edx
  UINT v7; // r8d
  HICON Icon; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  memset(v11, 0, 32);
  if ( GetObjectW(a2, 32, v11) )
  {
    v4 = ImageList_Create(v11[1], v11[2], 0x20021u, v3, v10);
    v12 = v4;
    if ( v4 )
    {
      v5 = (unsigned int (__fastcall *)(struct _IMAGELIST *, HBITMAP, _QWORD))qword_180897E30;
      if ( qword_180897E30 == -1 )
      {
        GetProcFromComCtl32(&qword_180897E30, "ImageList_Add");
        v5 = (unsigned int (__fastcall *)(struct _IMAGELIST *, HBITMAP, _QWORD))qword_180897E30;
      }
      if ( v5 && v5(v4, a2, 0LL) != -1 )
      {
        Icon = ImageList_GetIcon(v4, v6, v7);
        ImageList_Destroy(v4);
        return Icon;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>(&v12);
  }
  return 0LL;
}
