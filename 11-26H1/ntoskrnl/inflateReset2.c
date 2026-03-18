/*
 * XREFs of inflateReset2 @ 0x140627624
 * Callers:
 *     RtlDecompressBufferDeflateInternal @ 0x140624CE8 (RtlDecompressBufferDeflateInternal.c)
 * Callees:
 *     inflateReset @ 0x1406275F4 (inflateReset.c)
 *     inflateStateCheck @ 0x140627754 (inflateStateCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall inflateReset2(__int64 a1, unsigned int a2)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // rdx

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
  v7 = *(_QWORD *)(v5 + 64);
  if ( v7 )
  {
    if ( *(_DWORD *)(v5 + 48) != a2 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 64), v7);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  *(_DWORD *)(v5 + 16) = v6;
  *(_DWORD *)(v5 + 48) = a2;
  return inflateReset();
}
