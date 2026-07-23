/*
 * XREFs of KdpPullRemoteFile @ 0x140C198F8
 * Callers:
 *     KdPullRemoteFile @ 0x140C193B8 (KdPullRemoteFile.c)
 *     KdPullRemoteFileEx @ 0x140C19420 (KdPullRemoteFileEx.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x140C19480 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140C196D0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140C19AD0 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdpPullRemoteFile(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *Pool2; // rsi
  int RemoteFile; // edi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 i; // rbp
  int v16; // r9d
  __int64 v17; // r14
  __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 0x2000uLL, 0x6F49644Bu);
  if ( !Pool2 )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v20, (__int64 *)&v19, a1);
  if ( RemoteFile >= 0 )
  {
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v13 = *a1;
    v14 = v19;
    v18 = v19;
    *((_WORD *)Pool2 + (v13 >> 1)) = 0;
    DbgPrintEx(
      0,
      0,
      "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
      KeGetCurrentThread(),
      (const wchar_t *)Pool2,
      v18);
    if ( a3 && v14 >= a3 )
      v14 = a3;
    RemoteFile = guard_dispatch_icall_no_overrides(a7, a2);
    if ( RemoteFile >= 0 )
    {
      for ( i = 0LL; v14; v14 -= v17 )
      {
        LODWORD(v19) = 0;
        v16 = v14;
        if ( v14 > 0x2000 )
          v16 = 0x2000;
        RemoteFile = KdpReadRemoteFile(v20, i, (_DWORD)Pool2, v16, (__int64)&v19);
        if ( RemoteFile < 0 )
          break;
        v17 = (unsigned int)v19;
        if ( !(_DWORD)v19 )
          break;
        RemoteFile = guard_dispatch_icall_no_overrides(a7, i);
        if ( RemoteFile < 0 )
          break;
        i += v17;
      }
    }
  }
  if ( v20 )
    KdpCloseRemoteFile(v20);
  guard_dispatch_icall_no_overrides(a7, (unsigned int)RemoteFile);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)RemoteFile;
}
