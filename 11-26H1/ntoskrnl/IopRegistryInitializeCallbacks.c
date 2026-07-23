/*
 * XREFs of IopRegistryInitializeCallbacks @ 0x14079DFB0
 * Callers:
 *     IoInitSystem @ 0x140CC0C78 (IoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140B2FBEC (IopRegistryOpenDeepestPath.c)
 */

__int64 __fastcall IopRegistryInitializeCallbacks(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  wchar_t **v3; // rbx
  wchar_t *v4; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v7; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  v3 = &IopRegistryRegisteredCallbacks;
  v7 = 0;
  if ( off_140E00F30 )
  {
    v4 = 0LL;
    do
    {
      if ( v3[6] && (int)guard_dispatch_icall_no_overrides((__int64)v3, a2) < 0 )
      {
        *((_DWORD *)v3 + 2) = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, *v3);
        v3[11] = v4;
        v3[10] = (wchar_t *)IopRegistryCallback;
        v3[8] = 0LL;
        if ( (int)IopRegistryOpenDeepestPath(&DestinationString, v3 + 4, &v7) >= 0 )
        {
          ZwNotifyChangeKey(
            v3[4],
            0LL,
            (PIO_APC_ROUTINE)(v3 + 8),
            (PVOID)1,
            (PIO_STATUS_BLOCK)v3 + 6,
            *((_DWORD *)v3 + 2),
            1u,
            0LL,
            0,
            1u);
          if ( v7 )
            *((_DWORD *)v3 + 10) |= 1u;
        }
      }
      v4 = (wchar_t *)++v2;
      v3 = &(&IopRegistryRegisteredCallbacks)[14 * v2];
    }
    while ( v3[2] );
  }
  return 0LL;
}
