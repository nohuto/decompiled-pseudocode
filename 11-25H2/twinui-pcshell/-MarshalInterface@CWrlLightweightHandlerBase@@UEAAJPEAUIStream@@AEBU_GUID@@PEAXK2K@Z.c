/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18007B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B8B8 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801C3B64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     IStream_Write_0 @ 0x1802DADBE (IStream_Write_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  HRESULT StdMarshaler; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rax
  ULONG v18; // r14d
  void *v19; // rcx
  void *v20; // r10
  int v21; // eax
  void *v22; // [rsp+40h] [rbp-30h] BYREF
  void *v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-10h] BYREF

  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v11, &v22);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v22 + 40LL))(
                     v22,
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
          v25 = 0LL;
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(v13 + 40))(
                           pstm,
                           0LL,
                           1LL,
                           &v25);
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
              v24 = 0LL;
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(v14 + 40))(
                               pstm,
                               0LL,
                               1LL,
                               &v24);
              if ( StdMarshaler >= 0 )
              {
                v15 = *((unsigned int *)this + 4);
                if ( v24 - v25 > v15 )
                {
                  StdMarshaler = -2147467259;
                }
                else if ( v24 - v25 < v15 )
                {
                  v17 = v15 - (v24 - v25);
                  if ( v17 > 0xFFFFFFFF )
                  {
                    StdMarshaler = -2147024362;
                  }
                  else
                  {
                    v26 = 0LL;
                    v23 = 0LL;
                    v18 = v17;
                    StdMarshaler = ULongLongMult((unsigned int)v17, 1uLL, &v26);
                    if ( StdMarshaler >= 0 )
                    {
                      v21 = CTCoAllocPolicy::Alloc(v19, 1u, v26, &v23);
                      v20 = v23;
                      StdMarshaler = v21;
                    }
                    if ( StdMarshaler >= 0 )
                      StdMarshaler = IStream_Write_0(pstm, v20, v18);
                    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v23);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return (unsigned int)StdMarshaler;
}
