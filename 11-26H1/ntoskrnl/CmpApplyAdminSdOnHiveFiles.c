/*
 * XREFs of CmpApplyAdminSdOnHiveFiles @ 0x1406E2028
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ZwSetSecurityObject @ 0x140726B30 (ZwSetSecurityObject.c)
 */

__int64 __fastcall CmpApplyAdminSdOnHiveFiles(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = ZwSetSecurityObject(*(HANDLE *)(BugCheckParameter2 + 1544), 4u, (PSECURITY_DESCRIPTOR)WheapPfaLock.WaitStatus);
  v5 = v4;
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, BugCheckParameter3, v4);
  v6 = *(void **)(BugCheckParameter2 + 1576);
  if ( v6 )
    ZwSetSecurityObject(v6, 4u, (PSECURITY_DESCRIPTOR)WheapPfaLock.WaitStatus);
  v7 = *(void **)(BugCheckParameter2 + 1584);
  if ( v7 )
    ZwSetSecurityObject(v7, 4u, (PSECURITY_DESCRIPTOR)WheapPfaLock.WaitStatus);
  v8 = *(void **)(BugCheckParameter2 + 1552);
  if ( v8 )
    ZwSetSecurityObject(v8, 4u, (PSECURITY_DESCRIPTOR)WheapPfaLock.WaitStatus);
  return v5;
}
