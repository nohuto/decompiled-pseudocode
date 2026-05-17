/*
 * XREFs of RtlpHpLfhContextTlsCleanup @ 0x180097710
 * Callers:
 *     RtlpHpSegTlsCleanup @ 0x1800976A0 (RtlpHpSegTlsCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180096160 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800973B4 (RtlpHpLfhContextLockExtension.c)
 */

struct _TEB *__fastcall RtlpHpLfhContextTlsCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _TEB *result; // rax
  struct _TEB *v6; // rsi
  _WORD *v7; // rdi
  __int64 v8; // rbp
  unsigned __int8 v9; // [rsp+4Ch] [rbp+14h]

  v9 = BYTE4(a2);
  RtlpHpLfhContextMetadataFree(a1, a1 + ((unsigned __int64)WORD1(a2) << 6), 1);
  result = (struct _TEB *)(a1 + ((unsigned __int64)v9 << 8) + 1472);
  v6 = (struct _TEB *)(a1 + ((unsigned __int16)a2 << 6));
  if ( v6 != result )
  {
    v7 = (_WORD *)(a1 + ((unsigned __int16)a2 << 6));
    v8 = 128LL;
    do
    {
      if ( *v7 )
      {
        v4 = a1 + ((unsigned __int64)(unsigned __int16)*v7 << 6);
        if ( *(_WORD *)(v4 + 4) )
          RtlpHpLfhPrivateSlotShutdown(a1, v4, a2, 0);
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    RtlpHpLfhContextLockExtension(a1, v4);
    v6->NtTib.ExceptionList = *(_EXCEPTION_REGISTRATION_RECORD **)(a1 + 136);
    *(_QWORD *)(a1 + 136) = v6;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
  }
  return result;
}
