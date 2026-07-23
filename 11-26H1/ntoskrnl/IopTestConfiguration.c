/*
 * XREFs of IopTestConfiguration @ 0x1407A5BC4
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x1407A60BC (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpLogDeviceConflictingResource @ 0x1407B54FC (PnpLogDeviceConflictingResource.c)
 *     PnpLookupArbitersNewResources @ 0x140B57BC4 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopTestConfiguration(int a1, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int v7; // esi
  __int64 v8; // rbp
  char v9; // cl
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  v11 = 0LL;
  v12 = 0LL;
  v7 = 0;
  while ( v3 != (__int64 *)a3 )
  {
    if ( *((_BYTE *)v3 + 17) )
    {
      v8 = *(v3 - 8);
      DWORD2(v11) = 0;
      *(_QWORD *)&v12 = 0LL;
      PnpLookupArbitersNewResources(a1, a2, *(v3 - 7), *((_BYTE *)v3 - 72), (__int64)&v12, (__int64)&v11 + 8);
      v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8), 0LL);
      if ( v7 < 0 )
      {
        PnpLogDeviceConflictingResource(v3 - 11, *(_QWORD *)(v8 + 8));
        *((_BYTE *)v3 + 16) |= 2u;
        return (unsigned int)v7;
      }
      v9 = v3[2] & 0xFD;
      *((_BYTE *)v3 + 17) = 0;
      *((_BYTE *)v3 + 16) = v9 | 1;
    }
    else if ( (v3[2] & 2) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    v3 = (__int64 *)*v3;
  }
  return (unsigned int)v7;
}
