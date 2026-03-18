/*
 * XREFs of inflateReset2 @ 0x1405E8D34
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x1405E6188 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     inflateReset @ 0x1405E8D04 (inflateReset.c)
 *     inflateStateCheck @ 0x1405E8E60 (inflateStateCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall inflateReset2(__int64 a1, unsigned int a2)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi

  if ( (unsigned int)inflateStateCheck() )
    return 4294967294LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v3 >= 0 )
  {
    v6 = (a2 >> 4) + 5;
  }
  else
  {
    if ( v3 < -15 )
      return 4294967294LL;
    v6 = 0;
    a2 = -a2;
  }
  if ( a2 && a2 - 8 > 7 )
    return 4294967294LL;
  if ( *(_QWORD *)(v5 + 64) )
  {
    if ( *(_DWORD *)(v5 + 48) != a2 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 64));
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  *(_DWORD *)(v5 + 16) = v6;
  *(_DWORD *)(v5 + 48) = a2;
  return inflateReset();
}
