/*
 * XREFs of ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400FEAA0
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        struct DirectComposition::CConnection **a2)
{
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edi

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 3221225473LL;
  if ( !*CurrentProcessWin32Process )
    return 3221225473LL;
  v5 = CurrentProcessWin32Process[32];
  if ( !v5 )
    return 3221225473LL;
  v6 = *(struct _ERESOURCE **)(v5 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  v7 = *(_QWORD *)(v5 + 24);
  if ( v7 && a1 == *(struct HDCOMPOSITIONCONNECTION__ **)(v5 + 16) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v8 = 0;
    *a2 = *(struct DirectComposition::CConnection **)(v5 + 24);
  }
  else
  {
    v8 = -1073741790;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
  KeLeaveCriticalRegion();
  return v8;
}
