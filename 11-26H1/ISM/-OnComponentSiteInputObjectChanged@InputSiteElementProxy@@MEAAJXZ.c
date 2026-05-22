/*
 * XREFs of ?OnComponentSiteInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005B130
 * Callers:
 *     <none>
 * Callees:
 *     ??$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18003EC18 (--$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ??$RemoveObject@UIComponentSiteInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18005B1A4 (--$RemoveObject@UIComponentSiteInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputSiteElementProxy::OnComponentSiteInputObjectChanged(
        InputSiteElementProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 42);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteelementproxy.cpp",
      a4);
  InputSite::RemoveObject<IComponentSiteInputObjectProxy>(v5, this);
  v6 = *((_QWORD *)this + 42);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8);
  InputSite::AttachObject<BamoResizeControllerClientProxy>(v6, (__int64)this, v7);
  return 0LL;
}
