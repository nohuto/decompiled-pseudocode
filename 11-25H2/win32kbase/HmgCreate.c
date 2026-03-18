/*
 * XREFs of HmgCreate @ 0x140028D7C
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     bLoadProcessHandleQuota @ 0x140029204 (bLoadProcessHandleQuota.c)
 *     Win32CreateSection @ 0x1400293C0 (Win32CreateSection.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x140029424 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1400298A4 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140029A54 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x140029AEC (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x140029C78 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1401A0388 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall HmgCreate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 (*v2)(void); // rax
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 (*v5)(void); // rax
  int (*v6)(void); // rax
  unsigned int v7; // r8d
  __int64 (*v8)(void); // rax
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  int v14; // r8d
  _QWORD *v15; // rsi
  void *v16; // rcx
  struct _ENTRY **v17; // r14
  __int64 CurrentProcess; // r15
  struct _ENTRY *v20; // rdx
  unsigned int v21; // ecx
  struct GdiHandleManager *v22; // rax
  struct _ENTRY *v23; // rcx
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned int i; // edi
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v30[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+50h] BYREF
  int v35; // [rsp+CCh] [rbp+54h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1176LL);
  if ( v2 )
    LODWORD(v2) = v2();
  *(_DWORD *)(v1 + 1752) = (_DWORD)v2;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    *(_DWORD *)(v1 + 2216) = 10000;
  v3 = *(_DWORD *)(v1 + 1752);
  v4 = 0x10000LL;
  if ( v3 < 0x10000 )
    v4 = v3;
  v5 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1632LL);
  if ( v5 )
    v5 = (__int64 (*)(void))v5();
  *(_QWORD *)(v1 + 1744) = v5;
  memset((void *)(v1 + 2040), 0, 0x7CuLL);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1640LL);
  if ( v6 && v6() >= 0 )
  {
    v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1648LL);
    if ( v8 )
      LODWORD(v8) = v8();
    if ( !HmgInitializeLookAsideList(0xAu, (unsigned int)v8, v9, 0x40u) )
      return 0LL;
  }
  if ( !HmgInitializeLookAsideList(1u, 0x850u, v7, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0x70u, v10, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, 0x3B8u, v11, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v12, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v13, 0x60u) )
    return 0LL;
  *(_QWORD *)(v1 + 2168) = 0LL;
  v15 = (_QWORD *)(v1 + 2184);
  *(_QWORD *)(v1 + 2176) = 0LL;
  v35 = 0;
  v34 = 1573528;
  if ( (int)Win32CreateSection((int)v1 + 2184, 6, v14, (unsigned int)&v34) < 0 )
    return 0LL;
  v16 = (void *)*v15;
  v17 = (struct _ENTRY **)(v1 + 1768);
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(v16, (PVOID *)(v1 + 1768), &ViewSize) < 0 )
    return 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v30[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(*v15, CurrentProcess, &v31, 0LL, 4096LL, v30, &v29, 2, 0x400000, 4) < 0 )
    return 0LL;
  RegionSize = 24 * v4;
  BaseAddress = (PVOID)v31;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v31 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess, v31);
  v20 = *v17;
  v21 = *(_DWORD *)(v1 + 1752);
  *(_QWORD *)(v1 + 1776) = *v17;
  *(_QWORD *)(v1 + 1760) = (char *)v20 + 1572864;
  v22 = GdiHandleManager::Create(v21, v20, v4);
  *(_QWORD *)(v1 + 5672) = v22;
  if ( v22 )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      LODWORD(v31) = 0;
      if ( !HmgpAcquireHandleIndex((struct Gre::Base::SESSION_GLOBALS *)v1, 0LL, (unsigned int *)&v31) )
      {
        GdiHandleManager::Destroy(*(PVOID *)(v1 + 5672));
        *(_QWORD *)(v1 + 5672) = 0LL;
        break;
      }
    }
  }
  if ( !*(_QWORD *)(v1 + 5672) )
    return 0LL;
  v23 = *v17;
  *(_QWORD *)(v1 + 3008) = (char *)*v17 + 1573040;
  *(_QWORD *)(v1 + 3016) = (char *)v23 + 1573216;
  *(_QWORD *)(v1 + 3024) = (char *)v23 + 1573392;
  HmgrStacksInit();
  v24 = (_DWORD *)Win32AllocPoolImpl(64LL, 8uLL, 0x6C6D6847u);
  *(_QWORD *)(v1 + 2192) = v24;
  if ( !v24 )
    return 0LL;
  *v24 = -100000;
  *(_DWORD *)(*(_QWORD *)(v1 + 2192) + 4LL) = -1;
  *(_QWORD *)(v1 + 2208) = PALLOCNOZ(4096LL, 1836345415LL);
  v25 = (_QWORD *)Win32AllocPoolImpl(64LL, 8uLL, 0x6D746847u);
  v26 = *(_QWORD *)(v1 + 2208);
  *(_QWORD *)(v1 + 2200) = v25;
  if ( v26 && v25 && (*v25 = v26, InitializeReferenceTracker()) && InitializeTypeIsolation() )
    return 1LL;
  else
    return 0LL;
}
