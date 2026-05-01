/*
 * XREFs of ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1804D1C78
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804CFDF0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(
        struct IAppLayoutOperation *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  __int64 v6; // rax
  void (__fastcall *v7)(struct IAppLayoutOperation *, __int64 *); // rbx
  unsigned int i; // r14d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int128 *); // rdi
  unsigned int j; // edi
  __int64 v12; // rax
  int (__fastcall *v13)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _GUID v19; // xmm0
  struct _GUID v20; // xmm1
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  v22 = 0;
  *a2 = (struct _GUID)xmmword_180787938;
  *a3 = (struct _GUID)xmmword_180787938;
  if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v22) >= 0 )
  {
    v6 = *(_QWORD *)a1;
    v23 = 0LL;
    v7 = *(void (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v6 + 72);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
    v7(a1, &v23);
    if ( v23 )
    {
      LODWORD(v21) = 0;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v21);
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned int)v21 )
          goto LABEL_9;
        v9 = v23;
        *(_QWORD *)&v24 = 0LL;
        v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int128 *))(*(_QWORD *)v23 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
        if ( v10(v9, i, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v24) >= 0
          && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 32LL))(v24) == 2 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
      }
      *a2 = (struct _GUID)xmmword_180787978;
      *a3 = (struct _GUID)xmmword_180787968;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
    }
LABEL_9:
    for ( j = 0; ; ++j )
    {
      v12 = *(_QWORD *)&a2->Data1 - 0x45DC9D952C60FCF9LL;
      if ( *(_QWORD *)&a2->Data1 == 0x45DC9D952C60FCF9LL )
        v12 = *(_QWORD *)a2->Data4 + 0x3BEB2695C954FD7FLL;
      if ( v12 || j >= v22 )
      {
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
        return;
      }
      v21 = 0LL;
      v13 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
      if ( v13(a1, j, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v21) >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21) - 1;
        if ( !v14 )
          goto LABEL_27;
        v15 = v14 - 1;
        if ( !v15 )
          goto LABEL_26;
        v16 = v15 - 1;
        if ( !v16 || (v17 = v16 - 1) == 0 )
        {
          *a2 = (struct _GUID)xmmword_1807879A8;
          *a3 = (struct _GUID)xmmword_1807879A8;
          goto LABEL_29;
        }
        v18 = v17 - 3;
        if ( !v18 )
        {
LABEL_26:
          *a2 = (struct _GUID)xmmword_1807879B8;
          goto LABEL_29;
        }
        if ( v18 == 3 )
        {
LABEL_27:
          v19 = (struct _GUID)xmmword_180787958;
          v20 = (struct _GUID)xmmword_1807879C8;
          goto LABEL_28;
        }
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 80LL))(v21) )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 88LL))(v21) )
          {
            v25 = 0LL;
            v24 = 0LL;
            (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v21 + 56LL))(v21, 1LL, &v25);
            (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v21 + 72LL))(v21, 1LL, &v24);
            if ( !Geometry::operator==(&v25, &v24) )
            {
              v19 = (struct _GUID)xmmword_180787998;
              v20 = (struct _GUID)xmmword_180787988;
LABEL_28:
              *a2 = v19;
              *a3 = v20;
            }
          }
        }
      }
LABEL_29:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
    }
  }
}
