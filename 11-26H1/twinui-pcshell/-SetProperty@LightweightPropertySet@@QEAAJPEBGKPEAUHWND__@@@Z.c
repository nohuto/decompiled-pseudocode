/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180088C84
 * Callers:
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z @ 0x1800891B0 (-SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x18043EAC0 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18043ED60 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180088B04 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x180088EE8 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x180088F40 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x180088F90 (-MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rdi
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  void *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rax
  const WCHAR *StringRawBuffer; // rax
  __int64 v21; // [rsp+28h] [rbp-30h] BYREF
  char v22; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *((_QWORD *)this + 1) )
      goto LABEL_3;
    if ( LightweightPropertySet::LightweightProperty::IsName(
           (LightweightPropertySet::LightweightProperty *)(*(_QWORD *)(*(_QWORD *)this + 8 * i) + 8LL),
           a2) )
    {
      break;
    }
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
  if ( !v10 )
  {
LABEL_3:
    v9 = (char *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v24);
    v10 = 0LL;
    if ( &v22 != v9 )
    {
      v10 = *(_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( !v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v12 = LightweightPropertySet::LightweightProperty::MangleAndInitializeName(
            (LightweightPropertySet::LightweightProperty *)(v10 + 8),
            a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v21 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v13 = 0;
      v15 = *((_QWORD *)this + 1);
      if ( v15 == *((_QWORD *)this + 3) )
        v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                (__int64)this,
                v15 + 1,
                v14);
      v16 = v10;
      if ( v13 >= 0 )
      {
        v18 = *((_QWORD *)this + 1) + 1LL;
        *((_QWORD *)this + 1) = v18;
        v19 = (__int64 *)(*(_QWORD *)this - 8LL + 8 * v18);
        v16 = v10;
        if ( v19 )
        {
          *v19 = 0LL;
          if ( v19 != &v21 )
          {
            *v19 = v10;
            v16 = 0LL;
          }
        }
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v13 >= 0 )
        goto LABEL_15;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)(unsigned int)v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)v13;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(*(_QWORD *)this + 8 * i));
LABEL_15:
  *(_DWORD *)(v10 + 16) = v5;
  if ( a4 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v10 + 8), 0LL);
    SetPropW(a4, StringRawBuffer, (HANDLE)v5);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
