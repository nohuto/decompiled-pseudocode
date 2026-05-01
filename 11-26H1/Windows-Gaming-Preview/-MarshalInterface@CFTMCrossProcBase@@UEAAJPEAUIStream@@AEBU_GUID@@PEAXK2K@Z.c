/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180042950
 * Callers:
 *     <none>
 * Callees:
 *     CoTaskMemFree_0 @ 0x180003139 (CoTaskMemFree_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180006C98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003CD14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042D48 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFTMCrossProcBase::MarshalInterface(
        LPUNKNOWN punkOuter,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  void *v8; // rbx
  const struct _GUID *v12; // rdx
  HRESULT FTM; // esi
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 lpVtbl_low; // rdi
  unsigned __int64 v18; // rdi
  int v19; // eax
  void *v21; // [rsp+40h] [rbp-30h] BYREF
  void *pv; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-18h] BYREF

  v8 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, &v21);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v21 + 40LL))(
            v21,
            pstm,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( FTM >= 0 && a5 != 3 )
    {
      v14 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v14 || *(_QWORD *)GUID_NULL.Data4 != v14[1] )
      {
        FTM = IStream_Write(pstm, &punkOuter[4], 4u);
        if ( FTM >= 0 )
        {
          v15 = *(_QWORD *)pstm;
          v24[0] = 0LL;
          FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, _QWORD *))(v15 + 40))(pstm, 0LL, 1LL, v24);
          if ( FTM >= 0 )
          {
            FTM = ((__int64 (__fastcall *)(LPUNKNOWN, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))punkOuter->lpVtbl[3].AddRef)(
                    punkOuter,
                    pstm,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( FTM >= 0 )
            {
              v16 = *(_QWORD *)pstm;
              v23 = 0LL;
              FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(v16 + 40))(
                      pstm,
                      0LL,
                      1LL,
                      &v23);
              if ( FTM >= 0 )
              {
                lpVtbl_low = LODWORD(punkOuter[4].lpVtbl);
                if ( v23 - v24[0] <= lpVtbl_low )
                {
                  if ( v23 - v24[0] < lpVtbl_low )
                  {
                    v18 = lpVtbl_low - (v23 - v24[0]);
                    if ( v18 <= 0xFFFFFFFF )
                    {
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v18, 1uLL) )
                      {
                        v19 = CTCoAllocPolicy::Alloc(
                                (IMalloc *)(unsigned int)v18,
                                ((unsigned int)v18 * (unsigned __int128)1uLL) >> 64,
                                (unsigned int)v18,
                                &pv);
                        v8 = pv;
                        FTM = v19;
                        if ( v19 >= 0 )
                          FTM = IStream_Write(pstm, pv, v18);
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v8);
                    }
                    else
                    {
                      FTM = -2147024362;
                    }
                  }
                }
                else
                {
                  FTM = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  return (unsigned int)FTM;
}
