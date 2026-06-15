/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800D4474
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE390 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x180024BA0 (_freea.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // rsi
  __int64 v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rsp
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rax
  unsigned int v16; // edi
  int v17; // eax
  signed __int64 v18; // rax
  __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // [rsp+0h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 980LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a2 != *((_DWORD *)this + 21) )
  {
    v6 = -2147024809;
    v7 = 981LL;
    goto LABEL_3;
  }
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v9 = (__int64 *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_31;
  v10 = 4LL * *((unsigned int *)this + 21);
  v11 = (v10 + 16) & -(__int64)(v10 < v10 + 16);
  if ( v11 )
  {
    if ( v11 > 0x400 )
    {
      v15 = (struct _RTL_CRITICAL_SECTION *)malloc((v10 + 16) & -(__int64)(v10 < v10 + 16));
      v14 = v15;
      if ( !v15 )
        goto LABEL_19;
      LODWORD(v15->DebugInfo) = 56797;
      goto LABEL_17;
    }
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = (struct _RTL_CRITICAL_SECTION *)Memory;
    if ( &v21 != (__int64 *)-32LL )
    {
      LODWORD(Memory[0]) = 52428;
LABEL_17:
      v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v14 + 16);
    }
  }
  else
  {
    v14 = 0LL;
  }
LABEL_19:
  Memory[1] = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 4LL * *((unsigned int *)this + 21));
    v17 = (*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION *, _QWORD))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            v14,
            *((unsigned int *)this + 21));
    v16 = v17;
    if ( v17 >= 0 )
    {
      if ( (_DWORD)v4 )
      {
        v18 = (char *)v14 - (char *)v3;
        v19 = v4;
        do
        {
          v20 = fminf(*(float *)((char *)v3 + v18), 1.0);
          if ( v20 <= 0.0 )
            v20 = 0.0;
          *v3++ = v20;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        997LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v17);
      if ( v16 != -2147417848 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)v16);
        freea(v14);
        goto LABEL_32;
      }
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v9);
    }
    freea(v14);
LABEL_31:
    v16 = 0;
    goto LABEL_32;
  }
  v16 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL);
LABEL_32:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(Memory);
  return v16;
}
