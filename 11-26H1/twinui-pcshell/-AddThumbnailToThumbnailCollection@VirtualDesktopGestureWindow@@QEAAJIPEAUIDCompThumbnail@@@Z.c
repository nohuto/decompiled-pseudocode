/*
 * XREFs of ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x18055D950
 * Callers:
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::operator() @ 0x18055CD74 (_lambda_93656037d821f0cf4f10769c2d148d9f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection(
        VirtualDesktopGestureWindow *this,
        int a2,
        struct IDCompThumbnail *a3)
{
  _QWORD *v4; // rsi
  void *v5; // r8
  char v6; // di
  int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rdx
  _QWORD *v10; // rsi
  void *v11; // r8
  __int64 v12; // rdx
  struct IDCompThumbnail *v14; // [rsp+20h] [rbp-10h] BYREF
  struct IDCompThumbnail *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  if ( a2 == 3 )
  {
    v4 = (_QWORD *)((char *)this + 64);
    v15 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v6 = 1;
    v7 = 0;
    v8 = v4[1];
    if ( v8 != v4[3]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)v4,
                 v8 + 1,
                 v5),
          v7 >= 0) )
    {
      v9 = (__int64 *)(*v4 + 8 * v4[1]++);
      if ( v9 )
      {
        *v9 = 0LL;
        if ( v9 != (__int64 *)&v15 )
        {
          v15 = 0LL;
LABEL_12:
          *v9 = (__int64)a3;
        }
      }
    }
  }
  else
  {
    v10 = (_QWORD *)((char *)this + 96);
    v14 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v6 = 2;
    v7 = 0;
    v12 = v10[1];
    if ( v12 != v10[3]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)v10,
                 v12 + 1,
                 v11),
          v7 >= 0) )
    {
      v9 = (__int64 *)(*v10 + 8 * v10[1]++);
      if ( v9 )
      {
        *v9 = 0LL;
        if ( v9 != (__int64 *)&v14 )
        {
          v14 = 0LL;
          goto LABEL_12;
        }
      }
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  }
  if ( (v6 & 1) != 0 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39E,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
