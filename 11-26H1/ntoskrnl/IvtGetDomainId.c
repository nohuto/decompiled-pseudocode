/*
 * XREFs of IvtGetDomainId @ 0x1405A8F60
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A8660 (IvtConfigureAts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetDomainId(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !*(_BYTE *)(a1 + 320) )
    return (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                                    + 8LL * (unsigned int)(2 * (**(_DWORD **)(a2 + 72) >> 8)))
                                        + 16LL * (unsigned __int8)**(_DWORD **)(a2 + 72)
                                        + 8) >> 8);
  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0x10000LL;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 32) )
    {
      v4 = *(_QWORD *)(v2 + 64);
      if ( (*(_QWORD *)v4 & 1) != 0 )
      {
        v5 = *(_QWORD *)v4 & 0x1C0LL;
        if ( ((v5 - 64) & 0xFFFFFFFFFFFFFF3FuLL) == 0 && v5 != 192 )
          return (unsigned __int16)*(_DWORD *)(v4 + 8);
      }
    }
  }
  return v3;
}
