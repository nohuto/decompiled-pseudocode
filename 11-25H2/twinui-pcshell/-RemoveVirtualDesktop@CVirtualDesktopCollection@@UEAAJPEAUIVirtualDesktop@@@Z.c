/*
 * XREFs of ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180269D90 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x18052BDF8 (-Remove@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTask.c)
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052BE38 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::RemoveVirtualDesktop(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v11)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **); // [rsp+48h] [rbp+20h] BYREF

  v10 = 0;
  if ( (int)CVirtualDesktopCollection::IsRemote(this, a2, &v10) >= 0 && v10 )
    return CVirtualDesktopCollection::RemoveRemoteDesktop(this, a2);
  if ( *((_QWORD *)this + 7) == 1LL )
  {
    v5 = -2147019873;
    v6 = 134LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Remove(
         (__int64 *)this + 6,
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  if ( v5 < 0 )
  {
    v6 = 135LL;
    goto LABEL_6;
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v7 + 24LL))(v7, this);
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Remove(
         (__int64 *)this + 14,
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v11);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
