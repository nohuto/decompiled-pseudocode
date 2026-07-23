/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157E60
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180070BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 */

void __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *i; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h]

  v4 = a2 - 16;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v9 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v9)
                                                            + 37
                                                            * (BYTE6(v9)
                                                             + 37
                                                             * (BYTE5(v9)
                                                              + 37
                                                              * (BYTE4(v9)
                                                               + 37
                                                               * (BYTE3(v9)
                                                                + 374026047
                                                                + 37
                                                                * (BYTE2(v9)
                                                                 + 37
                                                                 * (BYTE1(v9) + 37 * (unsigned int)(unsigned __int8)v9)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( *i == v4 )
      {
        *i = *(_QWORD *)v4;
        --*(_DWORD *)a1;
        *(_QWORD *)v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v8 = *a3;
    RtlpHpMetadataFree(v4, &v8);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
