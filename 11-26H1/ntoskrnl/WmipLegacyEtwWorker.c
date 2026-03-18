/*
 * XREFs of WmipLegacyEtwWorker @ 0x140B22A20
 * Callers:
 *     WmipProcessSynchronousEtw @ 0x140B52BBC (WmipProcessSynchronousEtw.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipProcessLegacyEtwRegister @ 0x140823C4C (WmipProcessLegacyEtwRegister.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0FB50 (WmipReferenceEntry.c)
 *     WmipProcessLegacyEtwUnregister @ 0x140A84E68 (WmipProcessLegacyEtwUnregister.c)
 *     WmipProcessLegacyEtwCallback @ 0x140B22B78 (WmipProcessLegacyEtwCallback.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipLegacyEtwWorker(ULONG_PTR a1)
{
  __int64 v2; // rdx
  void **v3; // rsi
  void ***v4; // rbx
  void **v5; // rax
  int v6; // ecx
  int v7; // ecx

  WmipReferenceEntry(a1);
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = (void **)(v2 + 24);
  if ( !v2 )
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          WmipProcessLegacyEtwCallback(v4, a1);
      }
      else
      {
        WmipProcessLegacyEtwUnregister(a1);
      }
    }
    else
    {
      WmipProcessLegacyEtwRegister(a1, (__int64)v4);
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  return WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
}
