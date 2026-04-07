/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180066DB8
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180066930 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800671E0 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // r14d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-40h]
  struct CDWMDXGIAdapter *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  void *ppFactory; // [rsp+98h] [rbp+38h] BYREF
  struct IDXGIAdapter *v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v2 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 253;
    goto LABEL_18;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 259;
    goto LABEL_18;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 262;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800FAC18, 1LL, v3, v15, 0LL);
    goto LABEL_19;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 265;
    goto LABEL_18;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = 271;
    goto LABEL_18;
  }
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v23) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v23)(
           v23,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v22);
    v4 = v3;
    if ( v3 < 0 )
    {
      v15 = 279;
      goto LABEL_18;
    }
    v3 = CDWMDXGIAdapter::Create(v22, v2, &v16);
    v4 = v3;
    if ( v3 < 0 )
    {
      v15 = 283;
      goto LABEL_18;
    }
    v5 = *((_DWORD *)this + 20);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v4 = -2147024362;
      v14 = 179;
      v7 = -2147024362;
LABEL_48:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v14, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800FAC18, 1LL, v7, 0x11Du, 0LL);
      goto LABEL_19;
    }
    v7 = 0;
    if ( v6 <= *((_DWORD *)this + 19) )
    {
      *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v16;
      *((_DWORD *)this + 20) = v6;
    }
    else
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, &v16);
      v4 = v7;
      if ( v7 < 0 )
      {
        v14 = 190;
        goto LABEL_48;
      }
    }
    v4 = v7;
    if ( v22 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v22->lpVtbl->Release)(v22);
      v22 = 0LL;
    }
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v23 = 0LL;
    }
    v16 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v9 = v17;
    *((_QWORD *)this + 3) = v17;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = v18;
    *((_QWORD *)this + 4) = v18;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = v19;
    *((_QWORD *)this + 5) = v19;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = v20;
    *((_QWORD *)this + 6) = v20;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    v4 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800FAC18, 1LL, -2003304291, 0x12Au, 0LL);
  }
LABEL_19:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v22 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v22->lpVtbl->Release)(v22);
  return v4;
}
