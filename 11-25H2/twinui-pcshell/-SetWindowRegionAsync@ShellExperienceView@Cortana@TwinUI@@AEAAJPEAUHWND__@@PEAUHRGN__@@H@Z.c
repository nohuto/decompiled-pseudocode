/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x1803B60E0
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1803B5F50 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18020D2B4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18021B240 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9_____lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x1803B547C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2743f96ca4684.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v8; // rbx
  HRGN RectRgn; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // edi
  volatile signed __int32 **v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v17; // [rsp+30h] [rbp-20h] BYREF
  HWND v18; // [rsp+38h] [rbp-18h] BYREF
  HRGN v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HRGN hrgnDst; // [rsp+80h] [rbp+30h] BYREF

  v8 = 0LL;
  hrgnDst = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v8 = hrgnDst;
    if ( !hrgnDst )
    {
      v10 = -2147467259;
      v11 = 378LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_13;
    }
    if ( !CombineRgn(hrgnDst, a3, 0LL, 5) )
    {
      v10 = -2147467259;
      v11 = 379LL;
      goto LABEL_12;
    }
  }
  v18 = a2;
  v19 = v8;
  hrgnDst = 0LL;
  v20 = a4;
  v12 = *((_DWORD *)this + 76);
  v13 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9_____lambda_2743f96ca4684a8efa4b094fa43a59d9___(
          &v17,
          (__int64)&v18);
  v14 = *v13;
  *v13 = 0LL;
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v15);
  }
  v10 = SHTaskPoolQueueTask(3LL, 258LL, v12);
  if ( v14 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v19);
  if ( v10 < 0 )
  {
    v11 = 387LL;
    goto LABEL_12;
  }
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
  return (unsigned int)v10;
}
