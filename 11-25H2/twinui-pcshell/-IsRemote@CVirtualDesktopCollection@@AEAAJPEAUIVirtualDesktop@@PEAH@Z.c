/*
 * XREFs of ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180269D90
 * Callers:
 *     ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x180269900 (-ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052B3EC (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z @ 0x18052B970 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x18052BB00 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BE38 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BF30 (-RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::IsRemote(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **),
        int *a3)
{
  __int64 (__fastcall **v4)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVirtualDesktopCollection *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = *a2;
  v10 = 0LL;
  v5 = (*v4)((struct IVirtualDesktop *)a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CVirtualDesktopCollection *, int *))(*(_QWORD *)v10 + 56LL))(v10, a3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 89LL;
  }
  else
  {
    v7 = 88LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return v6;
}
