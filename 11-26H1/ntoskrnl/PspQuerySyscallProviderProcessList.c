/*
 * XREFs of PspQuerySyscallProviderProcessList @ 0x1407F3524
 * Callers:
 *     PsQuerySyscallProviderInformation @ 0x1407F2F20 (PsQuerySyscallProviderInformation.c)
 * Callees:
 *     PspGetNextSyscallProviderProcess @ 0x1407F3310 (PspGetNextSyscallProviderProcess.c)
 */

__int64 __fastcall PspQuerySyscallProviderProcessList(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v8; // rdx
  __int64 i; // rbp
  __int64 NextSyscallProviderProcess; // rax

  v4 = *a2;
  v5 = 0LL;
  v8 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextSyscallProviderProcess = PspGetNextSyscallProviderProcess(a1, v8, a3, a4);
    if ( !NextSyscallProviderProcess )
      break;
    if ( (*(_DWORD *)(NextSyscallProviderProcess + 500) & 0x40000008) == 0 )
    {
      if ( v5 < v4 )
        *(_QWORD *)(a3 + 8 * v5) = *(_QWORD *)(NextSyscallProviderProcess + 464);
      ++v5;
    }
    v8 = (_QWORD *)NextSyscallProviderProcess;
  }
  *a2 = v5;
  return v4 < v5 ? 0x80000005 : 0;
}
