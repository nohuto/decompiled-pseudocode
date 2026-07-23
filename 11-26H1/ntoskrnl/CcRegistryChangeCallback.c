/*
 * XREFs of CcRegistryChangeCallback @ 0x1404EDC20
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcOpenRegistryPath @ 0x1405B40DC (CcOpenRegistryPath.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall CcRegistryChangeCallback(char *P)
{
  char *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  char *result; // rax
  void *v7; // rcx
  NTSTATUS v8; // ebx
  int v9; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v1 = P + 56;
  IoStatusBlock = 0LL;
  v3 = MEMORY[0xFFFFF78000000320];
  v4 = MEMORY[0xFFFFF78000000320] - *((_QWORD *)P + 6);
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcRegistryChangeCallback: Something of interest changed (callback:%c), under:\"%wZ\"\n",
    P[72] != 0 ? 70 : 84,
    P + 56);
  if ( !P[72] )
  {
    guard_dispatch_icall_no_overrides(P, v5);
    *((_QWORD *)P + 6) = v3;
    DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Processed \"%wZ\", TickDiff=%I64d\n", v1, v4);
  }
  P[72] = 0;
  if ( *((_QWORD *)P + 4) || (v9 = CcOpenRegistryPath(v1), v9 >= 0) )
  {
    result = P;
    if ( P )
    {
      v7 = (void *)*((_QWORD *)P + 4);
      if ( v7 )
      {
        v8 = ZwNotifyChangeKey(v7, 0LL, (PIO_APC_ROUTINE)P, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
        if ( v8 == 259 )
        {
          DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\"\n", P + 56);
        }
        else if ( v8 >= 0 )
        {
          DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\" (for Immediate Processing)\n", P + 56);
        }
        else
        {
          ZwClose(*((HANDLE *)P + 4));
          *((_QWORD *)P + 4) = 0LL;
          P[72] = 1;
          DbgPrintEx(
            0x7Fu,
            0,
            "CcRegistryChangeCallback: Failed Watch request, status=0x%08x \"%wZ\"\n",
            (unsigned int)v8,
            P + 56);
        }
        result = P;
      }
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcRegistryChangeCallback: Failed to open Key, status=0x%08x \"%wZ\n", (unsigned int)v9, v1);
    ExFreePoolWithTag(P, 0x52576343u);
    result = 0LL;
  }
  if ( !CcRegistryWatchInitComplete && result && !result[72] )
    CcRegistryWatchInitComplete = 1;
  return result;
}
