/*
 * XREFs of ?GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z @ 0x180214200
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::GetDisplayRegionId(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 *v7; // r10
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  char v10; // r8
  const char *v11; // r9
  char v12; // r11
  __int64 *v13; // rax
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    if ( !a3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v15);
    *a3 = 0;
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), &SRWLock);
    v17 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v7 = (__int64 *)*((_QWORD *)this + 9);
    v8 = (__int64 *)v7[1];
    v9 = v7;
    v10 = 1;
    v11 = (const char *)v17;
    if ( !*((_BYTE *)v8 + 25) )
    {
      do
      {
        if ( *((_DWORD *)v8 + 7) >= v17 )
        {
          v12 = 0;
          v9 = v8;
        }
        else
        {
          v12 = 1;
        }
        v13 = v8 + 2;
        if ( !v12 )
          v13 = v8;
        v8 = (__int64 *)*v13;
      }
      while ( !*(_BYTE *)(*v13 + 25) );
    }
    if ( *((_BYTE *)v9 + 25) || v17 < *((_DWORD *)v9 + 7) )
    {
      v9 = (__int64 *)*((_QWORD *)this + 9);
    }
    else if ( v9 != v7 )
    {
      v10 = 0;
    }
    if ( v10 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v15);
    *a3 = *((_DWORD *)v9 + 8);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14B,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
