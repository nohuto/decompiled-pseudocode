/*
 * XREFs of IopDumpCallAddPagesCallbacks @ 0x1405C8C08
 * Callers:
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     IoSetBugCheckProgressFlag @ 0x140532C30 (IoSetBugCheckProgressFlag.c)
 *     IopAddPageDumpRange @ 0x1405C8740 (IopAddPageDumpRange.c)
 *     IopLogCallbackError @ 0x1405C9AA4 (IopLogCallbackError.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E71B4 (KeValidateBugCheckCallbackRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopDumpCallAddPagesCallbacks(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  int v4; // esi
  int v5; // eax
  __int128 v7; // [rsp+40h] [rbp-58h] BYREF
  __int128 v8; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v10; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+20h]

  v1 = &retaddr;
  v7 = 0LL;
  v8 = 0LL;
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v11 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( (__int64 *)v3 != &KeBugCheckAddRemovePagesCallbackListHead )
  {
    v12 = v3;
    LOBYTE(v1) = KeValidateBugCheckCallbackRecord(v3, 4LL, &v11);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&v7 = 0LL;
      HIDWORD(v7) = a1;
      v4 = 0;
      do
      {
        v8 = 0uLL;
        DWORD2(v7) = 0;
        v10 = 0;
        guard_dispatch_icall_no_overrides(4LL, v3);
        if ( v4 >= 0 )
        {
          if ( *((_QWORD *)&v8 + 1) )
          {
            v5 = IopAddPageDumpRange((__int64)&v7, &v10);
            v4 = v5;
            if ( v5 < 0 )
              IopLogCallbackError(17235969LL, (unsigned int)v5, v3);
          }
        }
      }
      while ( v10 );
      if ( v4 < 0 )
      {
        *(_BYTE *)(v3 + 45) = 3;
        LOBYTE(v1) = 4;
      }
      else
      {
        LOBYTE(v1) = 3;
      }
      *(_BYTE *)(v3 + 44) = (_BYTE)v1;
    }
    else if ( !v11 )
    {
      return (char)v1;
    }
    v3 = *(_QWORD *)v3;
  }
  return (char)v1;
}
