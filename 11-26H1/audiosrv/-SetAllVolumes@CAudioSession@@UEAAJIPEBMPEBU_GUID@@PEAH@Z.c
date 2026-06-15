/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180081EA0
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180081E30 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800407AC (-ValidateAudioLevel@@YA_NM@Z.c)
 *     WPP_SF_dS @ 0x1800CFB9C (WPP_SF_dS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  unsigned int i; // ecx
  int v11; // ecx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  float v17; // xmm1_4
  int v18; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, a2, *((_QWORD *)this + 82));
  }
  v9 = 0;
  for ( i = 0; i < (unsigned int)v6; i = v11 + 1 )
  {
    if ( !ValidateAudioLevel(a3[i]) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  v13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  if ( (_DWORD)v6 != *((_DWORD *)this + 222) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v14 = 0LL;
    v15 = v6;
    do
    {
      v16 = *((_QWORD *)this + 112);
      v17 = a3[v14];
      if ( *(float *)(v16 + v14 * 4) != v17 )
      {
        *(float *)(v16 + v14 * 4) = v17;
        ++v13;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  LOBYTE(v18) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
    (char *)this + 8,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v18,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
