/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x1800573C8
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180057018 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18005780C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  int v4; // ebx
  __int64 v5; // r9
  _QWORD *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-40h]
  struct CDWMDXGIAdapter *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  struct CDWMDXGIAdapter **v22; // [rsp+58h] [rbp-8h] BYREF
  void *ppFactory; // [rsp+98h] [rbp+38h] BYREF
  struct IDXGIAdapter *v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v2 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 253;
    goto LABEL_21;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 259;
    goto LABEL_21;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 262;
    goto LABEL_21;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 265;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F5F94, 1LL, v3, v16, 0LL);
    goto LABEL_22;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v21);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 271;
    goto LABEL_21;
  }
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v25) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v25)(
           v25,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v24);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 279;
      goto LABEL_21;
    }
    v3 = CDWMDXGIAdapter::Create(v24, v2, &v17);
    v4 = v3;
    if ( v3 < 0 )
    {
      v16 = 283;
      goto LABEL_21;
    }
    v6 = (_QWORD *)((char *)this + 56);
    v7 = *((_DWORD *)this + 20);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v4 = -2147024362;
      v9 = 183;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v9, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F5F94, 1LL, v4, 0x11Du, 0LL);
      goto LABEL_22;
    }
    v4 = 0;
    if ( v8 <= *((_DWORD *)this + 19) )
    {
      *(_QWORD *)(*v6 + 8LL * *((unsigned int *)this + 20)) = v17;
      *((_DWORD *)this + 20) = v8;
    }
    else
    {
      v22 = &v17;
      v4 = DynArrayImpl<0>::Grow((__int64)this + 56, 8u, 1, v5, (unsigned __int64 *)&v22);
      if ( v4 < 0 )
      {
        v9 = 194;
        goto LABEL_19;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 20))++) + *v6) = *v22;
    }
    if ( v24 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v24->lpVtbl->Release)(v24);
      v24 = 0LL;
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v25 = 0LL;
    }
    v17 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v11 = v18;
    *((_QWORD *)this + 3) = v18;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = v19;
    *((_QWORD *)this + 4) = v19;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = v20;
    *((_QWORD *)this + 5) = v20;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v21;
    *((_QWORD *)this + 6) = v21;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v15 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  else
  {
    v4 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F5F94, 1LL, -2003304291, 0x12Au, 0LL);
  }
LABEL_22:
  if ( ppFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v24 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v24->lpVtbl->Release)(v24);
  return (unsigned int)v4;
}
