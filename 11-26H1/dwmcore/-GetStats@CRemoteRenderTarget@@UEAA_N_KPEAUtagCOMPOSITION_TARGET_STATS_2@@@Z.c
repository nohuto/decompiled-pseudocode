/*
 * XREFs of ?GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180255000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x180254FD0 (-GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRemoteRenderTarget::GetStats(
        CRemoteRenderTarget *this,
        __int64 a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  CRemoteRenderTarget *v3; // rsi
  __int64 v5; // rcx
  int v8; // ebp
  int v9; // edx
  unsigned __int64 PresentTime; // rax
  unsigned int v11; // edx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+24h] [rbp-74h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+58h] [rbp-40h]

  v3 = (CRemoteRenderTarget *)((char *)this - 160);
  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5);
  *((_QWORD *)a3 + 1) = CRemoteRenderTarget::GetPresentTime(v3);
  *((_QWORD *)a3 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 168LL))(*((_QWORD *)this + 4));
  memset_0(&v17, 0, 0x50uLL);
  if ( v8 && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 176LL))(*((_QWORD *)this + 4), &v17) >= 0 )
  {
    v9 = 8;
    if ( (unsigned int)(v8 - v17) < 8 )
      v9 = v8 - v17;
    *(_DWORD *)a3 = v9;
    PresentTime = CRemoteRenderTarget::GetPresentTime(v3);
    v12 = v11 + v20;
    *((_QWORD *)a3 + 1) = PresentTime;
    *((_DWORD *)a3 + 7) = v12;
    *((_DWORD *)a3 + 8) = v12;
    *((_DWORD *)a3 + 6) = v11 + v8;
    LODWORD(PresentTime) = v18;
    *((_DWORD *)a3 + 15) = v18;
    *((_DWORD *)a3 + 16) = PresentTime;
    v13 = *((_QWORD *)a3 + 2) * v11;
    *((_QWORD *)a3 + 9) = v19;
    v14 = v21 + v13;
    v15 = v22;
    *((_QWORD *)a3 + 5) = v14;
    *((_QWORD *)a3 + 6) = v14;
    *((_DWORD *)a3 + 14) = v16;
    *((_QWORD *)a3 + 10) = v15;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_QWORD *)a3 + 7) = 0LL;
    *((_DWORD *)a3 + 16) = 0;
    *((_QWORD *)a3 + 9) = 0LL;
  }
  return 1;
}
