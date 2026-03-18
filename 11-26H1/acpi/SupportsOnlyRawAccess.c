/*
 * XREFs of SupportsOnlyRawAccess @ 0x14000CA74
 * Callers:
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SupportsOnlyRawAccess(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // esi
  KIRQL v4; // al
  __int64 i; // rdi

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) == 5 )
  {
    v2 = **(_QWORD **)(a1 + 32);
    if ( *(_WORD *)(v2 + 66) == 131 )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v2 + 96) + 96LL) + 12LL);
      v4 = ExAcquireSpinLockShared(&RSAccessLock);
      for ( i = gpRSAccessHead; i && *(_DWORD *)(i + 8) != v3; i = *(_QWORD *)i )
        ;
      ExReleaseSpinLockShared(&RSAccessLock, v4);
      if ( i && *(_QWORD *)(i + 32) )
        return *(_QWORD *)(i + 16) == 0LL;
    }
  }
  return v1;
}
