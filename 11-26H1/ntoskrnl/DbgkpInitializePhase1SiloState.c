/*
 * XREFs of DbgkpInitializePhase1SiloState @ 0x14078D0F8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     DbgkInitialize @ 0x140CBBBC0 (DbgkInitialize.c)
 * Callees:
 *     DbgkpCreateNotificationEvent @ 0x14078CE00 (DbgkpCreateNotificationEvent.c)
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
