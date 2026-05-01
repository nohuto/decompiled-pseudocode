/*
 * XREFs of ?Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1805358D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CopyTo@UIRawElementProviderFragment@@@?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1805352A8 (--$CopyTo@UIRawElementProviderFragment@@@-$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CoverWindowAcc::Navigate(
        CoverWindowAcc *this,
        unsigned int a2,
        struct IRawElementProviderFragment **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char *v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct IRawElementProviderFragment **v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  switch ( a2 )
  {
    case 0u:
      v13 = (struct IRawElementProviderFragment **)((char *)this + 32);
      if ( *((_QWORD *)this + 4) )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
        *a3 = *v13;
      }
      return 0LL;
    case 1u:
    case 2u:
      v8 = (char *)this - 8;
      if ( !*((_QWORD *)this + 4) )
        return 0LL;
      v15 = 0LL;
      v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
      v10 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v11 = v10(v9, &GUID_231595a6_2227_4cb4_910c_0b70e7e3a76c, &v15);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct IRawElementProviderFragment **))(*(_QWORD *)v15 + 24LL))(
                v15,
                v8,
                a2,
                a3);
        v5 = v11;
        if ( v11 >= 0 )
        {
LABEL_20:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
          return v5;
        }
        v12 = 248LL;
      }
      else
      {
        v12 = 247LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_20;
    case 3u:
      if ( !*((_QWORD *)this + 4) )
      {
        v5 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(
               (_QWORD *)this + 5,
               (__int64)a3);
        if ( (v5 & 0x80000000) != 0 )
        {
          v6 = 231LL;
          goto LABEL_12;
        }
        return v5;
      }
      break;
    default:
      if ( a2 == 4 && !*((_QWORD *)this + 4) )
      {
        v5 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(
               (_QWORD *)this + 7,
               (__int64)a3);
        if ( (v5 & 0x80000000) != 0 )
        {
          v6 = 238LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v6,
            (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
            (const char *)v5);
          return v5;
        }
        return v5;
      }
      break;
  }
  return 0LL;
}
