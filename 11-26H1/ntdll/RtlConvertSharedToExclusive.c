/*
 * XREFs of RtlConvertSharedToExclusive @ 0x1800FDA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x1800CC470 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800CC6B0 (RtlReleaseResource.c)
 */

char __fastcall RtlConvertSharedToExclusive(unsigned __int64 a1)
{
  struct _TEB *v1; // rax

  LODWORD(v1) = *(_DWORD *)(a1 + 68);
  if ( (int)v1 >= 0 )
  {
    while ( (_DWORD)v1 == 1 )
    {
      LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 1);
      if ( (_DWORD)v1 == 1 )
      {
        v1 = NtCurrentTeb();
        *(_QWORD *)(a1 + 72) = v1->ClientId.UniqueThread;
        return (char)v1;
      }
    }
    RtlReleaseResource(a1);
    LOBYTE(v1) = RtlAcquireResourceExclusive(a1, 1);
  }
  return (char)v1;
}
