/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800027F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180002CB0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003270 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ??0CAppMemoryReport@System@Windows@@QEAA@XZ @ 0x180003400 (--0CAppMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppMemoryReport@System@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800034B4 (-InternalRelease@-$ComPtr@UIAppMemoryReport@System@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001281C (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  int v7; // eax
  ModernResourceManagerProxy *v8; // rsi
  signed int v9; // ebx
  NTSTATUS v10; // eax
  ModernResourceManagerProxy *v11; // rsi
  NTSTATUS v12; // eax
  bool v13; // zf
  signed int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __m128i v17; // xmm1
  signed int v18; // eax
  __int64 v19; // rsi
  unsigned __int64 v20; // xmm1_8
  unsigned __int64 v21; // rsi
  Windows::System::CAppMemoryReport *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  struct Windows::System::IAppMemoryReport *v25; // rcx
  signed int v27; // eax
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::System::IAppMemoryReport *v29; // [rsp+50h] [rbp-B8h] BYREF
  Windows::System::CAppMemoryReport *v30; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v31[4]; // [rsp+60h] [rbp-A8h]
  __int128 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __m128i ProcessInformation; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-48h]
  _OWORD SystemInformation[4]; // [rsp+D8h] [rbp-30h] BYREF

  v29 = 0LL;
  LODWORD(v30) = 0;
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  *(_OWORD *)v31 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v37 = 0LL;
  v38 = 0LL;
  ProcessInformation = 0LL;
  v35 = 0LL;
  v7 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasePriority|0x40,
         &ProcessInformation,
         0x28u,
         0LL);
  if ( v7 < 0 )
  {
    v18 = RtlNtStatusToDosError(v7);
    v9 = v18;
    if ( v18 <= 0 )
      goto LABEL_20;
    goto LABEL_32;
  }
  if ( (int)Windows::System::CMemoryManager::Init() < 0 )
  {
    v5 = v36;
    v6 = v36;
    goto LABEL_15;
  }
  v8 = Windows::System::CMemoryManager::s_pProxy;
  v28 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v8 + 26) = GetCurrentThreadId();
  v9 = ModernResourceManagerProxy::RegisterWithServer(v8);
  if ( v9 >= 0 )
  {
    LODWORD(v28) = 24;
    v10 = NtQueryWnfStateData((char *)v8 + 48, 0LL, 0LL, (char *)&v28 + 4, &v32, &v28);
    if ( v10 >= 0 )
    {
      v5 = *((_QWORD *)&v32 + 1);
      *((_DWORD *)v8 + 26) = 0;
      RtlReleaseSRWLockExclusive((char *)v8 + 96);
      goto LABEL_6;
    }
    v27 = RtlNtStatusToDosError(v10);
    v9 = v27;
    if ( v27 > 0 )
      v9 = (unsigned __int16)v27 | 0x80070000;
  }
  *((_DWORD *)v8 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v8 + 96);
  if ( v9 < 0 )
    goto LABEL_26;
LABEL_6:
  v11 = Windows::System::CMemoryManager::s_pProxy;
  v28 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v11 + 26) = GetCurrentThreadId();
  v9 = ModernResourceManagerProxy::RegisterWithServer(v11);
  if ( v9 >= 0 )
  {
    LODWORD(v28) = 24;
    v12 = NtQueryWnfStateData((char *)v11 + 48, 0LL, 0LL, (char *)&v28 + 4, &v32, &v28);
    if ( v12 >= 0 )
    {
      v6 = v33;
      v13 = v33 == 0;
      *((_DWORD *)v11 + 26) = 0;
      if ( v13 )
        v6 = *((_QWORD *)&v32 + 1);
      RtlReleaseSRWLockExclusive((char *)v11 + 96);
      goto LABEL_15;
    }
    v14 = RtlNtStatusToDosError(v12);
    v9 = v14;
    if ( v14 > 0 )
      v9 = (unsigned __int16)v14 | 0x80070000;
  }
  *((_DWORD *)v11 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v11 + 96);
  if ( v9 < 0 )
    goto LABEL_26;
LABEL_15:
  if ( ((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v15 = DWORD2(SystemInformation[0]);
    v16 = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, &v37, 0x20u, (PULONG)&v30);
    if ( v16 >= 0 )
    {
      v5 = v15 * v38;
      goto LABEL_18;
    }
    v18 = RtlNtStatusToDosError(v16);
    v9 = v18;
    if ( v18 <= 0 )
    {
LABEL_20:
      if ( v9 < 0 )
        goto LABEL_26;
      v17 = 0LL;
      goto LABEL_22;
    }
LABEL_32:
    v9 = (unsigned __int16)v18 | 0x80070000;
    goto LABEL_20;
  }
LABEL_18:
  v4 = v6;
  v3 = v5;
  v17 = ProcessInformation;
  *(_OWORD *)v31 = v35;
LABEL_22:
  v19 = v17.m128i_i64[0];
  v20 = _mm_srli_si128(v17, 8).m128i_u64[0];
  v21 = v20 + v19;
  Microsoft::WRL::ComPtr<Windows::System::IAppMemoryReport>::InternalRelease(&v29);
  v29 = 0LL;
  v22 = (Windows::System::CAppMemoryReport *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v22;
  if ( v22 )
  {
    v23 = Windows::System::CAppMemoryReport::CAppMemoryReport(v22);
    v30 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, ULONG *, unsigned __int64, __int64, __int64))(*(_QWORD *)v23 + 88LL))(
           v23,
           v20,
           *(ULONG **)v31,
           v21,
           v3,
           v4);
    v24 = *(_QWORD *)v23;
    if ( v9 < 0 )
    {
      (*(void (__fastcall **)(__int64))(v24 + 16))(v23);
      Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v30);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct Windows::System::IAppMemoryReport **))v24)(
             v23,
             &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
             &v29);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v9 >= 0 )
      {
        *a2 = v29;
        v29 = 0LL;
      }
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v30);
    v9 = -2147024882;
  }
LABEL_26:
  v25 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v9;
}
