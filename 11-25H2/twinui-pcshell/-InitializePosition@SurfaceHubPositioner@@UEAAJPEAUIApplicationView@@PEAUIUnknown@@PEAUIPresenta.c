/*
 * XREFs of ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804DBA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804DC6C8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::InitializePosition(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **),
        struct IPresentationRequestedArgs *a4)
{
  unsigned int DetailsForActivation; // ebx
  __int64 v7; // rdx
  bool v8; // di
  struct IImmersiveApplication **v9; // r8
  int ApplicationFromView; // eax
  __int64 v11; // rdx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 464) )
  {
    LODWORD(v15.lpVtbl) = 0;
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(this, a3, &v15, 0LL);
    if ( (DetailsForActivation & 0x80000000) != 0 )
    {
      v7 = 280LL;
      goto LABEL_3;
    }
    v8 = 1;
    if ( ((__int64)v15.lpVtbl & 1) != 0 || ((__int64)v15.lpVtbl & 2) != 0 )
      v8 = 0;
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)v13, v9);
    DetailsForActivation = ApplicationFromView;
    if ( ApplicationFromView >= 0 )
    {
      ApplicationFromView = SurfaceHubPositioner::_SetDefaultLayout(
                              (SurfaceHubPositioner *)((char *)this - 112),
                              (struct IApplicationView *)a2,
                              v8);
      DetailsForActivation = ApplicationFromView;
      if ( ApplicationFromView >= 0 )
      {
        DetailsForActivation = 0;
        goto LABEL_15;
      }
      v11 = 288LL;
    }
    else
    {
      v11 = 286LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)ApplicationFromView);
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    return DetailsForActivation;
  }
  DetailsForActivation = -2147418113;
  v7 = 278LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)DetailsForActivation);
  return DetailsForActivation;
}
