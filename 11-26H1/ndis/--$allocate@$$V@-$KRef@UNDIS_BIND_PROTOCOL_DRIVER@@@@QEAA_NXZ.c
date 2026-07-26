/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x140161F40
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x140161DD0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(__int64 *a1)
{
  _QWORD *PoolWithTag; // rax
  __int64 v3; // rdi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x44745042u);
  v3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_WORD *)PoolWithTag = 0;
    PoolWithTag[2] = PoolWithTag + 1;
    PoolWithTag[1] = PoolWithTag + 1;
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 8) = 0;
    PoolWithTag[5] = 0LL;
    *((_OWORD *)PoolWithTag + 3) = 0LL;
    *((_DWORD *)PoolWithTag + 16) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( *a1 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
    *a1 = 0LL;
  }
  if ( !v3 )
    return 0;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
  *a1 = v3;
  return 1;
}
