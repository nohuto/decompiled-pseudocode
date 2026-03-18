/*
 * XREFs of ?CleanupRemoteTextures@CConnection@DirectComposition@@AEAAXXZ @ 0x1401BDEB4
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::CleanupRemoteTextures(DirectComposition::CConnection *this)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 19853));
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)this + 2206, &RestartKey);
    if ( !v2 )
      break;
    v6 = (char *)*((_QWORD *)v2 + 1);
    if ( !v6 )
      break;
    GreDeleteFastMutex(v6, v3, v4, v5);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 19853));
  KeLeaveCriticalRegion();
}
