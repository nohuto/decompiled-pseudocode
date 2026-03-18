/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1400A2D90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(void *a1, void *a2)
{
  signed int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _ERESOURCE *v11; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v13; // rsi
  unsigned __int64 v14; // rdi
  LARGE_INTEGER v15; // rdx
  LARGE_INTEGER PerformanceCounter; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int128 v20; // [rsp+28h] [rbp-60h] BYREF
  int v21; // [rsp+38h] [rbp-50h]
  __int128 Src; // [rsp+40h] [rbp-48h] BYREF
  __int128 v23; // [rsp+50h] [rbp-38h]
  unsigned __int64 v24; // [rsp+60h] [rbp-28h]

  Src = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v4 = a1 == 0LL ? 0xC000000D : 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    v5 = 0LL;
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v9 & CurrentProcessWin32Process;
    }
    if ( v10 )
      v6 = *(_QWORD *)(v10 + 256);
    if ( v6 )
    {
      v11 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      v5 = *(_QWORD *)(v6 + 24);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v5 )
      goto LABEL_29;
    DCompSessionState = W32GetDCompSessionState(v9);
    v13 = *(struct _ERESOURCE **)(DCompSessionState + 32);
    if ( v13 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v5 = *(_QWORD *)(DCompSessionState + 16);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
      KeLeaveCriticalRegion();
    }
    if ( v5 )
    {
LABEL_29:
      do
      {
        v14 = *(_QWORD *)(v5 + 168);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&Src = v14;
        DWORD2(Src) = *(_DWORD *)(v5 + 184);
        HIDWORD(Src) = *(_DWORD *)(v5 + 176);
        *(LARGE_INTEGER *)&v23 = PerformanceCounter;
        *((_QWORD *)&v23 + 1) = *(_QWORD *)(v5 + 184);
        v17 = -1LL;
        if ( PerformanceCounter.QuadPart >= v14 )
        {
          v18 = PerformanceCounter.QuadPart - v14;
          v17 = v18 / *(_QWORD *)(v5 + 176);
          v15.QuadPart = v18 % *(_QWORD *)(v5 + 176);
        }
        v24 = v14 + *(_QWORD *)(v5 + 176) * (v17 + 2);
      }
      while ( v14 != *(_QWORD *)(v5 + 168) );
      v20 = *(_OWORD *)(v5 + 352);
      v21 = *(_DWORD *)(v5 + 368);
      v4 = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'((PVOID)v5, v15.LowPart);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( v4 >= 0 )
  {
    RtlCopyToUser(a1, &Src, 0x28uLL);
    if ( a2 )
      RtlCopyToUser(a2, &v20, 0x14uLL);
  }
  return (unsigned int)v4;
}
