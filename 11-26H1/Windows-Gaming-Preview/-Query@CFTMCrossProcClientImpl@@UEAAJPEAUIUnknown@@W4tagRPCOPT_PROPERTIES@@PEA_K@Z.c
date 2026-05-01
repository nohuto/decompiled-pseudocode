/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180042B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006C98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001C738 (-CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        enum tagRPCOPT_PROPERTIES a3,
        unsigned __int64 *a4)
{
  int v5; // esi
  Microsoft::WRL::AgileRef *v6; // rdi
  int v7; // ebx
  bool v8; // zf
  struct IUnknown *v9; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v11; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  if ( a3 == COMBND_SERVER_LOCALITY )
  {
    v6 = (CFTMCrossProcClientImpl *)((char *)this + 16);
    v7 = -2147467262;
    if ( !*((_QWORD *)this + 2) )
      goto LABEL_14;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v8 = *(_QWORD *)v6 == 0LL;
    v14 = 0LL;
    if ( v8 )
    {
      v5 = -2147467259;
    }
    else
    {
      v5 = Microsoft::WRL::AgileRef::CopyTo(v6, &GUID_00000000_0000_0000_c000_000000000046, &v14);
      if ( v5 >= 0 )
      {
        v9 = v14;
        v13[0] = 0LL;
        QueryInterface = v14->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
                v9,
                &GUID_00000144_0000_0000_c000_000000000046,
                v13);
        v7 = v11;
        if ( v11 < 0 )
        {
          if ( v11 != -2147467262 )
            v5 = v11;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64, unsigned __int64 *))(*(_QWORD *)v13[0]
                                                                                                  + 32LL))(
                 v13[0],
                 v14,
                 2LL,
                 a4);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( v5 >= 0 && v7 == -2147467262 )
    {
LABEL_14:
      *a4 = 0LL;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}
