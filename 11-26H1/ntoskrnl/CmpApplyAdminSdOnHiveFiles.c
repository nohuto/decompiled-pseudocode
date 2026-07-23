/*
 * XREFs of CmpApplyAdminSdOnHiveFiles @ 0x1406E62A8
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 */

__int64 __fastcall CmpApplyAdminSdOnHiveFiles(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = ZwSetSecurityObject(
         *(HANDLE *)(BugCheckParameter2 + 1544),
         4u,
         *(PSECURITY_DESCRIPTOR *)&WheapPfaLock.Timer.Header.Lock);
  v5 = v4;
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x13uLL, BugCheckParameter2, BugCheckParameter3, v4);
  v6 = *(void **)(BugCheckParameter2 + 1576);
  if ( v6 )
    ZwSetSecurityObject(v6, 4u, *(PSECURITY_DESCRIPTOR *)&WheapPfaLock.Timer.Header.Lock);
  v7 = *(void **)(BugCheckParameter2 + 1584);
  if ( v7 )
    ZwSetSecurityObject(v7, 4u, *(PSECURITY_DESCRIPTOR *)&WheapPfaLock.Timer.Header.Lock);
  v8 = *(void **)(BugCheckParameter2 + 1552);
  if ( v8 )
    ZwSetSecurityObject(v8, 4u, *(PSECURITY_DESCRIPTOR *)&WheapPfaLock.Timer.Header.Lock);
  return v5;
}
