/*
 * XREFs of PiIommuUnblockDevice @ 0x14077C00C
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407B7ACC (PnpIommuBlockUnblockDevice.c)
 *     PiDmaGuardProcessPreStart @ 0x1409B2AD4 (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     PpvDmaReleaseInactiveDmaAdapter @ 0x1405DF928 (PpvDmaReleaseInactiveDmaAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1, char a2)
{
  __int64 *v2; // rdi
  _BYTE *v4; // rbx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 720);
  v4 = v2 + 2;
  if ( !a2 && ((*v4 & 1) != 0 && (*(_BYTE *)(*v2 + 4) & 1) == 0 || (*((_BYTE *)v2 + 17) & 1) != 0) )
    return 0LL;
  if ( PipDmaGuardTestMode )
  {
    *v4 |= 2u;
    return 0LL;
  }
  PpvDmaReleaseInactiveDmaAdapter();
  result = guard_dispatch_icall_no_overrides(*v2, *(_QWORD *)(a1 + 32));
  if ( (_DWORD)result == -1070268391 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
      return 0LL;
  }
  else if ( (int)result >= 0 )
  {
    *v4 |= 2u;
  }
  return result;
}
