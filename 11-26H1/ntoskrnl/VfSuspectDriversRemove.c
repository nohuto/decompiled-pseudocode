/*
 * XREFs of VfSuspectDriversRemove @ 0x140C3EDD4
 * Callers:
 *     VfRemoveVerifierEntry @ 0x140C3FB00 (VfRemoveVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x140C2644C (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall VfSuspectDriversRemove(PCUNICODE_STRING String2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  void *v4; // rcx
  _QWORD *v6; // rdx
  void **v7; // rax

  v2 = 0;
  VfDriverLock(String2);
  v3 = ViSuspectDriversLookupEntry(String2);
  v4 = (void *)v3;
  if ( v3 )
  {
    if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 || *(_DWORD *)(v3 + 16) == *(_DWORD *)(v3 + 20) )
    {
      v6 = *(_QWORD **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *(void ***)(v3 + 8), *v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      ExFreePoolWithTag(v4, 0x44536656u);
    }
    else
    {
      v2 = -1073741554;
    }
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
