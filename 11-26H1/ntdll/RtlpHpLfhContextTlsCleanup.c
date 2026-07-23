/*
 * XREFs of RtlpHpLfhContextTlsCleanup @ 0x1800645D0
 * Callers:
 *     RtlpHpSegTlsCleanup @ 0x180064560 (RtlpHpSegTlsCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180063B00 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockExtension @ 0x180071B4C (RtlpHpLfhContextLockExtension.c)
 */

void __fastcall RtlpHpLfhContextTlsCleanup(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rsi
  _RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int8 v8; // [rsp+4Ch] [rbp+14h]

  v8 = BYTE4(a2);
  RtlpHpLfhContextMetadataFree(a1, (unsigned __int64)&a1[8 * (unsigned __int64)WORD1(a2)], 1);
  v4 = &a1[8 * (unsigned __int16)a2];
  if ( v4 != &a1[32 * (unsigned __int64)v8 + 184] )
  {
    v5 = &a1[8 * (unsigned __int16)a2];
    v6 = 128LL;
    do
    {
      if ( v5->0 )
      {
        v7 = (__int64)&a1[8 * (unsigned __int64)LOWORD(v5->Value)];
        if ( *(_WORD *)(v7 + 4) )
          RtlpHpLfhPrivateSlotShutdown((__int64)a1, v7, a2, 0);
      }
      v5 = (_RTL_SRWLOCK *)((char *)v5 + 2);
      --v6;
    }
    while ( v6 );
    RtlpHpLfhContextLockExtension(a1);
    v4->0 = a1[17].0;
    a1[17].Value = (unsigned __int64)v4;
    RtlReleaseSRWLockExclusive(a1 + 16);
  }
}
