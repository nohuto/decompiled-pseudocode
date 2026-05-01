/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18007B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BA08 (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        LPUNKNOWN pUnkOuter)
{
  LPUNKNOWN v7; // r12
  __int64 v10; // rbx
  HRESULT StdMarshal; // edi
  unsigned int v12; // r14d
  void *v13; // r15
  unsigned int *v15; // rbx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // edx
  __int64 (__fastcall **v19)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rax
  __int64 (__fastcall *v20)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *); // rbx
  DWORD v21; // eax
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  const struct _GUID *v23; // [rsp+88h] [rbp+48h]
  void *v24; // [rsp+90h] [rbp+50h]

  v24 = a3;
  v23 = a2;
  v7 = pUnkOuter;
  v22 = 0LL;
  LODWORD(pUnkOuter->lpVtbl) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v22 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)this + 3);
  v10 = *((_QWORD *)this + 4);
  ReleaseSRWLockShared((PSRWLOCK)this + 3);
  StdMarshal = v10 == 0 ? 0x80004005 : 0;
  if ( !v10 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 3);
    if ( *((_QWORD *)this + 4) )
    {
      StdMarshal = 0;
    }
    else
    {
      v19 = *(__int64 (__fastcall ***)(CWrlLightweightHandlerBase *, GUID *, LPUNKNOWN *))this;
      pUnkOuter = 0LL;
      v20 = *v19;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
      StdMarshal = v20(this, &GUID_00000000_0000_0000_c000_000000000046, &pUnkOuter);
      if ( StdMarshal >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
        v21 = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *))(*(_QWORD *)this + 72LL))(this);
        StdMarshal = CoGetStdMarshalEx(pUnkOuter, v21, (LPUNKNOWN *)this + 4);
        if ( StdMarshal >= 0 )
          (*(void (__fastcall **)(CWrlLightweightHandlerBase *))(*(_QWORD *)this + 96LL))(this);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)this + 3);
  }
  if ( StdMarshal >= 0 )
  {
    StdMarshal = Microsoft::WRL::ComPtr<IInspectable>::CopyTo(
                   (char *)this + 32,
                   &GUID_00000003_0000_0000_c000_000000000046,
                   &v22);
    if ( StdMarshal >= 0 )
    {
      LODWORD(pUnkOuter) = 0;
      v12 = a6;
      v13 = a5;
      StdMarshal = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, LPUNKNOWN *))(*(_QWORD *)v22 + 32LL))(
                     v22,
                     v23,
                     v24,
                     a4,
                     a5,
                     a6,
                     &pUnkOuter);
      if ( StdMarshal >= 0 )
      {
        v15 = (unsigned int *)((char *)this + 16);
        StdMarshal = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       v23,
                       v24,
                       a4,
                       v13,
                       v12,
                       (char *)this + 16);
        if ( StdMarshal >= 0 )
        {
          v16 = *v15 + 4;
          if ( v16 < *v15 )
          {
            StdMarshal = -2147024362;
          }
          else
          {
            v17 = v16 + (_DWORD)pUnkOuter;
            v18 = -1;
            if ( v17 >= (unsigned int)pUnkOuter )
              v18 = v17;
            StdMarshal = v17 < (unsigned int)pUnkOuter ? 0x80070216 : 0;
            LODWORD(v7->lpVtbl) = v18;
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return (unsigned int)StdMarshal;
}
