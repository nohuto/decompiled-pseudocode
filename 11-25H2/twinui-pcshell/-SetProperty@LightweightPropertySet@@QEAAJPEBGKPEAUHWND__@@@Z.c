/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18008D880
 * Callers:
 *     ?SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z @ 0x18008DD70 (-SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1801DBB20 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x180432740 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804329C0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008D674 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18008DAE4 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x18008DB40 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x18008DB90 (-MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  HSTRING *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING *v14; // rdi
  void *v15; // r8
  int v16; // ebp
  __int64 v17; // rdx
  HSTRING *v18; // rcx
  __int64 v20; // rdx
  HSTRING **v21; // r8
  const WCHAR *StringRawBuffer; // rax
  HSTRING *v23; // [rsp+28h] [rbp-30h] BYREF
  char v24; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
  {
    if ( LightweightPropertySet::LightweightProperty::IsName(
           (LightweightPropertySet::LightweightProperty *)(*(_QWORD *)(*(_QWORD *)this + 8 * i) + 8LL),
           a2) )
    {
      v10 = *(HSTRING **)(*(_QWORD *)this + 8 * i);
      if ( v10 )
      {
        (*((void (__fastcall **)(_QWORD))*v10 + 1))(*(_QWORD *)(*(_QWORD *)this + 8 * i));
        goto LABEL_14;
      }
      break;
    }
  }
  v9 = (char *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v26);
  v10 = 0LL;
  if ( &v24 != v9 )
  {
    v10 = *(HSTRING **)v9;
    *(_QWORD *)v9 = 0LL;
  }
  v11 = v26;
  if ( v26 )
  {
    v26 = 0LL;
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
          (LightweightPropertySet::LightweightProperty *)(v10 + 1),
          a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v12);
    (*((void (__fastcall **)(HSTRING *))*v10 + 2))(v10);
    return v13;
  }
  v14 = v10;
  v23 = v10;
  (*((void (__fastcall **)(HSTRING *))*v10 + 1))(v10);
  v16 = 0;
  v17 = *((_QWORD *)this + 1);
  if ( v17 != *((_QWORD *)this + 3)
    || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                (__int64)this,
                v17 + 1,
                v15),
        v18 = v10,
        v16 >= 0) )
  {
    v20 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v20 + 1;
    v21 = (HSTRING **)(*(_QWORD *)this + 8 * v20);
    v18 = v10;
    if ( v21 )
    {
      *v21 = 0LL;
      if ( v21 != &v23 )
      {
        *v21 = v10;
        v14 = 0LL;
        v18 = 0LL;
      }
    }
  }
  if ( v18 )
    (*((void (__fastcall **)(HSTRING *))*v14 + 2))(v14);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v16);
    (*((void (__fastcall **)(HSTRING *))*v10 + 2))(v10);
    return (unsigned int)v16;
  }
LABEL_14:
  *((_DWORD *)v10 + 4) = v5;
  if ( a4 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v10[1], 0LL);
    SetPropW(a4, StringRawBuffer, (HANDLE)v5);
  }
  (*((void (__fastcall **)(HSTRING *))*v10 + 2))(v10);
  return 0LL;
}
