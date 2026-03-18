/*
 * XREFs of DbgkpInitializePhase1SiloState @ 0x14078A5C8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     DbgkInitialize @ 0x140CB5B80 (DbgkInitialize.c)
 * Callees:
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 */

__int64 __fastcall DbgkpInitializePhase1SiloState(__int64 a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ecx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v4.Length = 4718662LL;
  v4.Buffer = L"\\KernelObjects\\SystemErrorPortReady";
  v1 = DbgkpCreateNotificationEvent(&v4, a1 + 24);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
