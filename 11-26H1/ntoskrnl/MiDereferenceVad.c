/*
 * XREFs of MiDereferenceVad @ 0x140414DB0
 * Callers:
 *     MiUnlockAndDereferenceNestedVad @ 0x140414D68 (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDereferenceVad(ULONG_PTR BugCheckParameter2)
{
  signed __int32 v1; // eax
  unsigned int v2; // edx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  v2 = 0;
  if ( v1 == -1 )
    KeBugCheckEx(0x1Au, 0x41203uLL, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v2) = v1 == 0;
  return v2;
}
