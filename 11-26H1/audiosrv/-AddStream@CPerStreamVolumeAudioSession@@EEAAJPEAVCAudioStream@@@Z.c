/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180023680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180021320 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180022550 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023F90 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180024214 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     _freea @ 0x180024BA0 (_freea.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800713F4 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     _alloca_probe @ 0x180162680 (_alloca_probe.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // xmm6_4
  bool v6; // r15
  struct AudioSrvTelemetryProvider *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  void **p_Memory; // rbx
  void **v15; // r12
  unsigned int *v16; // r15
  __int64 v17; // r12
  unsigned int v18; // edx
  unsigned int i; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // edi
  char *v24; // r13
  unsigned __int64 v25; // rax
  void *v26; // rax
  void *v27; // rcx
  _QWORD *v28; // r9
  unsigned int v29; // r8d
  __int64 v30; // rax
  size_t v31; // rcx
  void **v32; // rax
  __int64 v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rax
  void *v36; // rsp
  float v37; // xmm1_4
  float *v38; // rax
  __int64 v39; // rcx
  unsigned int j; // edx
  _BYTE v41[32]; // [rsp+0h] [rbp-30h] BYREF
  void **Memory; // [rsp+30h] [rbp+0h] BYREF
  __int64 v43; // [rsp+38h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+40h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+58h]

  *((_QWORD *)a2 + 8) = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v5 = *((_DWORD *)this + 194);
  v6 = *((_DWORD *)this + 195) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  LODWORD(Memory) = 1065353216;
  v43 = 0LL;
  v7 = AudioSrvTelemetryProvider::Instance();
  GetPolicyVolumeForAudioStream(
    (__int64)g_PolicyManager,
    (__int64 *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)),
    *((unsigned int **)v7 + 1),
    (float *)&Memory,
    &v43,
    0);
  v8 = CAudioStream::SetPolicyVolume(a2, *(float *)&Memory, v43, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA07,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v8);
    *((_QWORD *)a2 + 8) = 0LL;
    return v9;
  }
  *((_BYTE *)a2 + 528) = v6;
  EnterCriticalSection(v4);
  v44 = v4;
  v10 = 4LL * *((unsigned int *)this + 222);
  v11 = v10 + 16;
  if ( (-(__int64)(v10 < v10 + 16) & (v10 + 16)) == 0 )
  {
    p_Memory = 0LL;
    goto LABEL_12;
  }
  if ( v11 <= v10 )
  {
    v11 = 0LL;
LABEL_7:
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    p_Memory = (void **)&Memory;
    if ( v41 != (_BYTE *)-48LL )
    {
      LODWORD(Memory) = 52428;
LABEL_11:
      p_Memory += 2;
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( v11 <= 0x400 )
    goto LABEL_7;
  v34 = malloc(v11);
  p_Memory = (void **)v34;
  if ( v34 )
  {
    *v34 = 56797;
    goto LABEL_11;
  }
LABEL_12:
  Memory = p_Memory;
  if ( !p_Memory )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      LeaveCriticalSection(v4);
    goto LABEL_55;
  }
  v15 = (void **)((char *)this + 896);
  memcpy_0(p_Memory, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
  v16 = (unsigned int *)((char *)a2 + 80);
  if ( *((_QWORD *)this + 112) )
  {
    if ( *((_DWORD *)this + 222) >= *v16 )
      goto LABEL_15;
    v24 = (char *)this + 896;
  }
  else
  {
    v24 = (char *)this + 896;
  }
  v25 = 4LL * *v16;
  if ( !is_mul_ok(*v16, 4uLL) )
    v25 = -1LL;
  v26 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
  v27 = *v15;
  *v15 = v26;
  v28 = (_QWORD *)((char *)this + 896);
  if ( v27 )
  {
    operator delete(v27);
    v28 = v24;
  }
  if ( !*v15 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA21,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      LeaveCriticalSection(v4);
    freea(p_Memory);
    goto LABEL_55;
  }
  v29 = 0;
  if ( *((_DWORD *)this + 222) )
  {
    do
    {
      *(_DWORD *)(*v28 + 4LL * v29) = *((_DWORD *)p_Memory + v29);
      ++v29;
    }
    while ( v29 < *((_DWORD *)this + 222) );
    v16 = (unsigned int *)((char *)a2 + 80);
    v28 = (_QWORD *)((char *)this + 896);
  }
  v30 = *v16;
  if ( v29 < (unsigned int)v30 )
  {
    do
    {
      *(_DWORD *)(*v28 + 4LL * v29++) = 1065353216;
      v30 = *v16;
    }
    while ( v29 < (unsigned int)v30 );
    v16 = (unsigned int *)((char *)a2 + 80);
  }
  *((_DWORD *)this + 222) = v30;
  v31 = 4 * v30 + 16;
  if ( (-(__int64)(4 * v30 < v31) & v31) != 0 )
  {
    if ( v31 <= 4 * v30 )
    {
      v31 = 0LL;
    }
    else if ( v31 > 0x400 )
    {
      v32 = (void **)malloc(v31);
      if ( !v32 )
      {
LABEL_68:
        v16 = (unsigned int *)((char *)a2 + 80);
        goto LABEL_70;
      }
      *(_DWORD *)v32 = 56797;
LABEL_67:
      v32 += 2;
      goto LABEL_68;
    }
    v35 = v31 + 15;
    if ( v31 + 15 < v31 )
      v35 = 0xFFFFFFFFFFFFFF0LL;
    v36 = alloca(v35 & 0xFFFFFFFFFFFFFFF0uLL);
    v32 = (void **)&Memory;
    if ( v41 == (_BYTE *)-48LL )
      goto LABEL_68;
    LODWORD(Memory) = 52428;
    goto LABEL_67;
  }
  v32 = 0LL;
LABEL_70:
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, v32);
  p_Memory = Memory;
  if ( !Memory )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA37,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v44);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, 0LL);
LABEL_55:
    *((_QWORD *)a2 + 8) = 0LL;
    return 2147942414LL;
  }
  memcpy_0(Memory, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
LABEL_15:
  v17 = *((unsigned int *)this + 222);
  if ( v4 )
    LeaveCriticalSection(v4);
  v18 = 0;
  for ( i = *v16; v18 < *v16; i = *v16 )
    *(_DWORD *)(*((_QWORD *)a2 + 64) + 4LL * v18++) = v5;
  if ( (unsigned int)v17 < i )
  {
    v37 = 0.0;
    if ( (_DWORD)v17 )
    {
      v38 = (float *)p_Memory;
      v39 = v17;
      do
      {
        v37 = fmaxf(v37, *v38++);
        --v39;
      }
      while ( v39 );
    }
    for ( j = 0; j < *((_DWORD *)a2 + 20); ++j )
      *(float *)(*((_QWORD *)a2 + 64) + 4LL * j) = v37 * *(float *)(*((_QWORD *)a2 + 64) + 4LL * j);
  }
  else
  {
    v20 = 0;
    if ( i )
    {
      do
      {
        *(float *)(*((_QWORD *)a2 + 64) + 4LL * v20) = *((float *)p_Memory + v20)
                                                     * *(float *)(*((_QWORD *)a2 + 64) + 4LL * v20);
        ++v20;
      }
      while ( v20 < *((_DWORD *)a2 + 20) );
    }
  }
  *((_QWORD *)a2 + 65) = 0LL;
  v21 = CAudioStream::RecalculateVolume(a2, 0, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v21);
    v33 = 2628LL;
  }
  else
  {
    v22 = CAudioSession::AddStream(this, a2);
    if ( v22 >= 0 )
    {
      if ( p_Memory )
      {
        if ( *((_DWORD *)p_Memory - 4) == 56797 )
          free(p_Memory - 2);
      }
      return 0LL;
    }
    v33 = 2630LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v33,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v22);
  if ( p_Memory )
    freea(p_Memory);
  *((_QWORD *)a2 + 8) = 0LL;
  return (unsigned int)v22;
}
