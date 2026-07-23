/*
 * XREFs of SshpSessionManagerInitialize @ 0x140CDD984
 * Callers:
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SshpSessionManagerTraceSystemStart @ 0x1407E9E44 (SshpSessionManagerTraceSystemStart.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize(&qword_140F0A858);
  memset_0(&qword_140F0A860, 0, 0x468uLL);
  byte_140F0A8AA = 6;
  qword_140F0A878 = (__int64)SshpSessionManagerFlushControlEventBufferWorker;
  qword_140F0A880 = 0LL;
  qword_140F0A868 = 0LL;
  dword_140F0A888 = 0;
  LOWORD(word_140F0A8A8.Header.Lock) = 0;
  qword_140F0A8B8 = (__int64)&qword_140F0A8B0;
  qword_140F0A8B0 = (__int64)&qword_140F0A8B0;
  dword_140F0A8AC = 1;
  return SshpSessionManagerTraceSystemStart();
}
