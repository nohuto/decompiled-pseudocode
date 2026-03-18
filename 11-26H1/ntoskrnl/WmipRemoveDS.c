/*
 * XREFs of WmipRemoveDS @ 0x140A0B50C
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipGenerateRegistrationNotification @ 0x140A0CD54 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2LL);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry(&WmipDSChunkInfo, v1);
  }
  return result;
}
