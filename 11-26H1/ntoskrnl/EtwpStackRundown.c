/*
 * XREFs of EtwpStackRundown @ 0x14046AEBC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     EtwpTraceCachedStack @ 0x14046AFE0 (EtwpTraceCachedStack.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  KIRQL CurrentIrql; // bp
  volatile signed __int32 *j; // r8
  _SLIST_ENTRY **v11; // r14
  _SLIST_ENTRY *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int128 i; // [rsp+30h] [rbp-58h]

  v3 = 0LL;
  v6 = a1;
  v13 = 0LL;
  for ( i = 0LL; (unsigned int)v3 < *(_DWORD *)(v6 + 8); v3 = (unsigned int)(v3 + 1) )
  {
    v7 = (volatile signed __int32 *)(v6 + 8 * (v3 + 2 * (v3 + 2)));
    if ( *(volatile signed __int32 **)v7 != v7 )
    {
      v8 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)v7 + 2);
      for ( j = *(volatile signed __int32 **)v7; j != v7; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        *((_QWORD *)&v13 + v8) = j;
        v8 = (unsigned int)(v8 + 1);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 2, CurrentIrql);
      if ( (_DWORD)v8 )
      {
        v11 = (_SLIST_ENTRY **)&v13;
        do
        {
          v12 = *v11;
          EtwpTraceCachedStack(a2, a3, 6180LL, *v11, v13, *((_QWORD *)&v13 + 1), i, *((_QWORD *)&i + 1));
          EtwpDereferenceStackEntry(v12, (_SLIST_HEADER *)v6);
          ++v11;
          --v8;
        }
        while ( v8 );
      }
    }
  }
}
