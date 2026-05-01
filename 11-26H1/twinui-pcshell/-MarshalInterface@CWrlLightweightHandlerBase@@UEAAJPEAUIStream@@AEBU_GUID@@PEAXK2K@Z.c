/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1800920F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800926F8 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801B6528 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     IStream_Write_0 @ 0x1802D352E (IStream_Write_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  const struct _GUID *v11; // rdx
  HRESULT StdMarshaler; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v17; // rdi
  void *v18; // rcx
  void *v19; // r10
  int v20; // eax
  void *v21; // [rsp+40h] [rbp-30h] BYREF
  void *v22; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-10h] BYREF

  v21 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v11, &v21);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v21 + 40LL))(
                     v21,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write_0(pstm, (char *)this + 16, 4u);
        if ( StdMarshaler >= 0 )
        {
          v13 = *(_QWORD *)pstm;
          v24 = 0LL;
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(v13 + 40))(
                           pstm,
                           0LL,
                           1LL,
                           &v24);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              v14 = *(_QWORD *)pstm;
              v23 = 0LL;
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(v14 + 40))(
                               pstm,
                               0LL,
                               1LL,
                               &v23);
              if ( StdMarshaler >= 0 )
              {
                v15 = *((unsigned int *)this + 4);
                if ( v23 - v24 > v15 )
                {
                  StdMarshaler = -2147467259;
                }
                else if ( v23 - v24 < v15 )
                {
                  v17 = v15 - (v23 - v24);
                  if ( v17 <= 0xFFFFFFFF )
                  {
                    v22 = 0LL;
                    v25 = 0LL;
                    StdMarshaler = ULongLongMult((unsigned int)v17, 1uLL, &v25);
                    if ( StdMarshaler >= 0 )
                    {
                      v20 = CTCoAllocPolicy::Alloc(v18, 1u, v25, &v22);
                      v19 = v22;
                      StdMarshaler = v20;
                    }
                    if ( StdMarshaler >= 0 )
                      StdMarshaler = IStream_Write_0(pstm, v19, v17);
                    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v22);
                  }
                  else
                  {
                    StdMarshaler = -2147024362;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  return (unsigned int)StdMarshaler;
}
