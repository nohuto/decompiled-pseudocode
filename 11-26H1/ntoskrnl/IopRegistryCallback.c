/*
 * XREFs of IopRegistryCallback @ 0x140B2FA90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140B2FBEC (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // r15
  __int64 v3; // rdx
  wchar_t **v4; // rbp
  wchar_t **v5; // rbx
  wchar_t **v6; // r14
  __int64 v7; // rdx
  bool v8; // zf
  NTSTATUS result; // eax
  __int64 v10; // rcx
  UNICODE_STRING v11; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+90h] [rbp+8h] BYREF
  wchar_t *v13; // [rsp+98h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v13 = 0LL;
  v2 = 14LL * a1;
  v11 = 0LL;
  v12 = 0;
  RtlInitUnicodeString(&v11, (&IopRegistryRegisteredCallbacks)[v2]);
  v4 = &(&IopRegistryRegisteredCallbacks)[v2];
  v4[11] = v1;
  v4[10] = (wchar_t *)IopRegistryCallback;
  v4[8] = 0LL;
  v5 = &(&IopRegistryRegisteredCallbacks)[v2];
  v6 = &(&IopRegistryRegisteredCallbacks)[v2];
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) == 0
    || (guard_dispatch_icall_no_overrides((__int64)v6[3], v3),
        result = ZwNotifyChangeKey(
                   v5[4],
                   0LL,
                   (PIO_APC_ROUTINE)(v4 + 8),
                   (PVOID)1,
                   (PIO_STATUS_BLOCK)&(&IopRegistryRegisteredCallbacks)[v2 + 6],
                   *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2),
                   1u,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
    if ( (int)IopRegistryOpenDeepestPath(&v11, &v13, &v12) < 0 )
      goto LABEL_7;
    ZwClose(v5[4]);
    v8 = v12 == 1;
    v5[4] = v13;
    if ( v8 )
    {
      v10 = (__int64)v6[3];
      *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
      guard_dispatch_icall_no_overrides(v10, v7);
    }
    result = ZwNotifyChangeKey(
               v5[4],
               0LL,
               (PIO_APC_ROUTINE)(v4 + 8),
               (PVOID)1,
               (PIO_STATUS_BLOCK)&(&IopRegistryRegisteredCallbacks)[v2 + 6],
               *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2),
               1u,
               0LL,
               0,
               1u);
    if ( result < 0 )
    {
LABEL_7:
      result = ZwClose(v5[4]);
      *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2) = 0;
    }
  }
  return result;
}
