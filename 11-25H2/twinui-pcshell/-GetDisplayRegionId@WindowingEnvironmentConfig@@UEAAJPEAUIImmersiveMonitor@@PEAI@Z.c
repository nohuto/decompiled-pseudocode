/*
 * XREFs of ?GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z @ 0x1802240E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::GetDisplayRegionId(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        unsigned int *a3)
{
  int v6; // eax
  const char *v7; // r9
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  char v11; // cl
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    if ( !a3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v13);
    *a3 = 0;
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), &SRWLock);
    v15 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v8 = (__int64 *)*((_QWORD *)this + 9);
    v9 = (__int64 *)v8[1];
    v10 = v8;
    while ( !*((_BYTE *)v9 + 25) )
    {
      if ( *((_DWORD *)v9 + 7) >= v15 )
      {
        v10 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    if ( *((_BYTE *)v10 + 25) || v15 < *((_DWORD *)v10 + 7) )
    {
      v10 = (__int64 *)*((_QWORD *)this + 9);
    }
    else if ( v10 != v8 )
    {
      v11 = 0;
LABEL_17:
      if ( v11 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x145,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)0x80070057LL,
          v13);
      *a3 = *((_DWORD *)v10 + 8);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 0LL;
    }
    v11 = 1;
    goto LABEL_17;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14B,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v7);
  }
  return result;
}
