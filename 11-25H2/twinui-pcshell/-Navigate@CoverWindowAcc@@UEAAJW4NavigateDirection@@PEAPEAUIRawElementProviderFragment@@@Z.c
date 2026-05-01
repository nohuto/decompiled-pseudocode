/*
 * XREFs of ?Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x180513170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CopyTo@UIRawElementProviderFragment@@@?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x180512B50 (--$CopyTo@UIRawElementProviderFragment@@@-$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CoverWindowAcc::Navigate(
        CoverWindowAcc *this,
        unsigned int a2,
        struct IRawElementProviderFragment **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  switch ( a2 )
  {
    case 0u:
      if ( *((_QWORD *)this + 4) )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
        *a3 = (struct IRawElementProviderFragment *)*((_QWORD *)this + 4);
      }
      return 0LL;
    case 1u:
    case 2u:
      v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
      if ( !v9 )
        return 0LL;
      v14 = 0LL;
      v10 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v11 = v10(v9, &GUID_231595a6_2227_4cb4_910c_0b70e7e3a76c, &v14);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct IRawElementProviderFragment **))(*(_QWORD *)v14 + 24LL))(
                v14,
                (char *)this - 8,
                a2,
                a3);
        v6 = v11;
        if ( v11 >= 0 )
        {
LABEL_20:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          return v6;
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
        v6 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(
               (_QWORD *)this + 5,
               (__int64)a3);
        if ( (v6 & 0x80000000) != 0 )
        {
          v7 = 231LL;
          goto LABEL_12;
        }
        return v6;
      }
      break;
    default:
      if ( a2 == 4 && !*((_QWORD *)this + 4) )
      {
        v6 = Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(
               (_QWORD *)this + 7,
               (__int64)a3);
        if ( (v6 & 0x80000000) != 0 )
        {
          v7 = 238LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
            (const char *)v6);
          return v6;
        }
        return v6;
      }
      break;
  }
  return 0LL;
}
