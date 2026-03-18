/*
 * XREFs of ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BDC4C
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1400B6700 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400C71A0 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionBeginFrame @ 0x1401978D0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        struct DirectComposition::CConnection **a2)
{
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v5 = 0;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process && (v6 = CurrentProcessWin32Process[32]) != 0 )
  {
    v7 = *(struct _ERESOURCE **)(v6 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v7, 1u);
    v8 = *(_QWORD *)(v6 + 24);
    if ( v8 && a1 == *(struct HDCOMPOSITIONCONNECTION__ **)(v6 + 16) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a2 = *(struct DirectComposition::CConnection **)(v6 + 24);
    }
    else
    {
      v5 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
