/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x1802C8880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoHandle<void *>>::Release(void *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 4);
  if ( !v2 && a1 )
  {
    CAutoHandle<void *>::~CAutoHandle<void *>((void **)a1 + 1);
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
