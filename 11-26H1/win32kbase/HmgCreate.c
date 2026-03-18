/*
 * XREFs of HmgCreate @ 0x14010E70C
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x14010EA14 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     bLoadProcessHandleQuota @ 0x14010EE30 (bLoadProcessHandleQuota.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x140185BD4 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x140185C84 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z @ 0x140191628 (-Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1401938A8 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall HmgCreate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 (*v6)(void); // rax
  __int64 v7; // rcx
  int (*v8)(void); // rax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  __int64 v17; // rcx
  int (*v18)(void); // rax
  unsigned __int8 v19; // r9
  __int64 v20; // rcx
  unsigned int (*v21)(void); // rax
  struct _ENTRY *v22; // rdx
  unsigned int v23; // ecx
  struct Cxx::GdiHandleManager *v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24) + 1176LL);
  if ( v3 )
    LODWORD(v3) = v3();
  *(_DWORD *)(v1 + 1840) = (_DWORD)v3;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    *(_DWORD *)(v1 + 2304) = 10000;
  v5 = 0x10000;
  if ( *(_DWORD *)(v1 + 1840) < 0x10000u )
    v5 = *(_DWORD *)(v1 + 1840);
  v6 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 1592LL);
  if ( v6 )
    v6 = (__int64 (*)(void))v6();
  *(_QWORD *)(v1 + 1832) = v6;
  memset((void *)(v1 + 2128), 0, 0x7CuLL);
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1600LL);
  if ( v8 && v8() >= 0 )
  {
    v11 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 24) + 1608LL);
    if ( v11 )
      LODWORD(v11) = v11();
    if ( !HmgInitializeLookAsideList(0xAu, (unsigned int)v11, v12, 0x40u) )
      return 0LL;
  }
  if ( !HmgInitializeLookAsideList(1u, 0x880u, v9, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0x78u, v13, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, 0x3B8u, v14, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v15, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v16, 0x60u) )
    return 0LL;
  *(_QWORD *)(v1 + 2256) = 0LL;
  *(_QWORD *)(v1 + 2264) = 0LL;
  *(_QWORD *)(v1 + 3736) = 0LL;
  v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 24) + 1616LL);
  if ( v18 )
  {
    if ( v18() >= 0 )
    {
      v21 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24) + 1624LL);
      if ( !v21 || !v21() )
        return 0LL;
    }
  }
  v22 = *(struct _ENTRY **)(v1 + 1856);
  v23 = *(_DWORD *)(v1 + 1840);
  *(_QWORD *)(v1 + 1864) = v22;
  *(_QWORD *)(v1 + 1848) = (char *)v22 + 1572864;
  v24 = Cxx::GdiHandleManager::Create(v23, v22, v5, v19);
  *(_QWORD *)(v1 + 8) = v24;
  if ( !v24 )
    return 0LL;
  v25 = *(_QWORD *)(v1 + 1856);
  *(_QWORD *)(v1 + 3088) = v25 + 1573040;
  *(_QWORD *)(v1 + 3096) = v25 + 1573216;
  *(_QWORD *)(v1 + 3104) = v25 + 1573392;
  HmgrStacksInit();
  v26 = (_DWORD *)Win32AllocPoolImpl(64LL, 8uLL, 0x6C6D6847u);
  *(_QWORD *)(v1 + 2280) = v26;
  if ( !v26 )
    return 0LL;
  *v26 = -100000;
  *(_DWORD *)(*(_QWORD *)(v1 + 2280) + 4LL) = -1;
  *(_QWORD *)(v1 + 2296) = PALLOCNOZ(0x1000u, 0x6D746847u);
  v27 = (_QWORD *)Win32AllocPoolImpl(64LL, 8uLL, 0x6D746847u);
  v28 = *(_QWORD *)(v1 + 2296);
  *(_QWORD *)(v1 + 2288) = v27;
  if ( v28 && v27 && (*v27 = v28, InitializeReferenceTracker()) && InitializeTypeIsolation() )
    return 1LL;
  else
    return 0LL;
}
