/*
 * XREFs of MiDbgCopyMemory @ 0x1406FD730
 * Callers:
 *     MmDbgCopyMemory @ 0x1406FEF24 (MmDbgCopyMemory.c)
 * Callees:
 *     MiDbgCopyMemoryInLiveSystem @ 0x1406FD7DC (MiDbgCopyMemoryInLiveSystem.c)
 *     MiDbgCopyMemoryInternal @ 0x1406FD8F0 (MiDbgCopyMemoryInternal.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiDbgCopyMemory(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v10; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-C0h]
  int v12; // [rsp+30h] [rbp-B8h]
  int v13; // [rsp+34h] [rbp-B4h]
  __int64 v14; // [rsp+38h] [rbp-B0h]
  __int64 v15; // [rsp+40h] [rbp-A8h]
  __int64 v16; // [rsp+58h] [rbp-90h]

  memset_0(&v10, 0, 0x90uLL);
  if ( !a3 )
    return 3221225713LL;
  v10 = a5;
  v14 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( (a5 & 2) != 0 )
    v16 = a1;
  else
    v15 = a1;
  if ( (a5 & 4) != 0 )
    return MiDbgCopyMemoryInternal(&v10);
  else
    return MiDbgCopyMemoryInLiveSystem(&v10);
}
