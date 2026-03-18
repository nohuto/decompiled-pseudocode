/*
 * XREFs of ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x14015FC94
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReclaimSessionGlobalConnection(
        struct DirectComposition::CConnection **a1)
{
  unsigned int v2; // ebx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rax

  v2 = 0;
  DCompSessionState = W32GetDCompSessionState();
  v4 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v4 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(v4);
    v5 = *(_QWORD *)(DCompSessionState + 16);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 148) )
      {
        v2 = -1073741790;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        *a1 = *(struct DirectComposition::CConnection **)(DCompSessionState + 16);
      }
    }
    else
    {
      *a1 = 0LL;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
