/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x14063AE6C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 */

void __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx
  char v7; // bp
  __int64 v8; // rdx
  _QWORD *i; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h]

  v5 = a2 - 16;
  v7 = RtlpHpAcquireLockExclusive((int *)(a1 + 16), 0LL, (__int64)a3, a4);
  v8 = _InterlockedDecrement64((volatile signed __int64 *)(v5 + 48));
  if ( v8 <= 0 )
  {
    if ( v8 )
      __fastfail(0xEu);
    v11 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v11)
                                                            + 37
                                                            * (BYTE6(v11)
                                                             + 37
                                                             * (BYTE5(v11)
                                                              + 37
                                                              * (BYTE4(v11)
                                                               + 37
                                                               * (BYTE3(v11)
                                                                + 374026047
                                                                + 37
                                                                * (BYTE2(v11)
                                                                 + 37
                                                                 * (BYTE1(v11) + 37 * (unsigned int)(unsigned __int8)v11)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( *i == v5 )
      {
        *i = *(_QWORD *)v5;
        --*(_DWORD *)a1;
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    v10 = *a3;
    RtlpHpMetadataFree(v5, &v10);
  }
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 16), 0, v7);
}
