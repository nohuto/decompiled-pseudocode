/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157F90
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18008D258 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 */

struct _TEB *__fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *i; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h]

  v4 = a2 - 16;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), a2);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v10 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v10)
                                                            + 37
                                                            * (BYTE6(v10)
                                                             + 37
                                                             * (BYTE5(v10)
                                                              + 37
                                                              * (BYTE4(v10)
                                                               + 37
                                                               * (BYTE3(v10)
                                                                + 374026047
                                                                + 37
                                                                * (BYTE2(v10)
                                                                 + 37
                                                                 * (BYTE1(v10) + 37 * (unsigned int)(unsigned __int8)v10)))))))));
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
    v9 = *a3;
    RtlpHpMetadataFree(v4, &v9);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
