/*
 * XREFs of RtlpInternEntryFind @ 0x1409CA648
 * Callers:
 *     RtlInternTableIntern @ 0x1409CA278 (RtlInternTableIntern.c)
 * Callees:
 *     RtlpInternEntryMatch @ 0x1409CAA28 (RtlpInternEntryMatch.c)
 */

__int64 __fastcall RtlpInternEntryFind(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 4);
  v6 = 0LL;
  v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v10 = 0LL;
  v11 = a3 & v9;
  v15 = a3 & v9;
LABEL_2:
  if ( v10 )
    goto LABEL_5;
  if ( v4 >> 5 )
  {
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * (((v4 >> 5) - 1) & (HIBYTE(v15)
                            - 877075889
                            + 442596621 * (unsigned __int8)v11
                            + 37
                            * (BYTE6(v15)
                             + 37
                             * (BYTE5(v15) + 37 * (BYTE4(v15) + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * BYTE1(v15))))))));
LABEL_5:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v11 == (v9 & *(_QWORD *)(v10 + 8)) )
      {
        if ( !v10 )
          return v6;
        if ( (unsigned __int8)RtlpInternEntryMatch(v10, a2, a4) )
        {
          _m_prefetchw((const void *)(v10 + 16));
          v12 = *(_QWORD *)(v10 + 16);
          while ( (unsigned __int64)(v12 + 1) > 1 )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), v12 + 1, v12);
            if ( v13 == v12 )
              return v10;
          }
          if ( v12 )
            __fastfail(0xEu);
          return v6;
        }
        goto LABEL_2;
      }
    }
  }
  return v6;
}
