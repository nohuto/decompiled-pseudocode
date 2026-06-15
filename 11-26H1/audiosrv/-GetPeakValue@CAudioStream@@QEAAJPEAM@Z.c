/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18002492C
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800247D0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
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
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rsp
  _QWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // r14d
  float *v12; // rax
  __int64 v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm0_4
  unsigned int v17; // ebx
  _DWORD *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-20h] BYREF
  _QWORD Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    v17 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return v17;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[0] = v4;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 23) )
  {
LABEL_17:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  v5 = 4LL * *((unsigned int *)this + 21);
  v6 = (v5 + 16) & -(__int64)(v5 < v5 + 16);
  if ( v6 )
  {
    if ( v6 > 0x400 )
    {
      v18 = malloc((v5 + 16) & -(__int64)(v5 < v5 + 16));
      v9 = v18;
      if ( v18 )
      {
        *v18 = 56797;
        goto LABEL_9;
      }
    }
    else
    {
      v7 = v6 + 15;
      if ( v6 + 15 < v6 )
        v7 = 0xFFFFFFFFFFFFFF0LL;
      v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Memory;
      if ( &v19 != (__int64 *)-32LL )
      {
        LODWORD(Memory[0]) = 52428;
LABEL_9:
        v9 += 2;
      }
    }
  }
  else
  {
    v9 = 0LL;
  }
  Memory[1] = v9;
  if ( !v9 )
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v17;
  }
  memset_0(v9, 0, 4LL * *((unsigned int *)this + 21));
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
          *((_QWORD *)this + 23),
          v9,
          *((unsigned int *)this + 21));
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( *((_DWORD *)this + 21) )
    {
      v12 = (float *)v9;
      v13 = *((unsigned int *)this + 21);
      v14 = *a2;
      do
      {
        v15 = fmaxf(*v12, v14);
        v14 = v15;
        ++v12;
        --v13;
      }
      while ( v13 );
      *a2 = v15;
    }
    goto LABEL_16;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x3AB,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v10,
    Memory[0]);
  if ( v11 == -2147417848 )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 184);
LABEL_16:
    freea(v9);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v11);
  freea(v9);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
