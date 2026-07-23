/*
 * XREFs of EtwpCovSampContextRemoveAndFreeModule @ 0x140A329F4
 * Callers:
 *     EtwpCovSampContextCleanup @ 0x140B229A0 (EtwpCovSampContextCleanup.c)
 * Callees:
 *     EtwpCovSampModuleCleanup @ 0x140A32AA4 (EtwpCovSampModuleCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampContextRemoveAndFreeModule(__int64 a1, __int64 *a2)
{
  __int64 v2; // r11
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 *i; // rcx
  _QWORD *j; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h]
  __int64 v12; // [rsp+38h] [rbp+10h]

  v2 = *a2;
  a2[8] = 0LL;
  if ( v2 )
  {
    v11 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
    for ( i = (__int64 *)(*(_QWORD *)(a1 + 1200)
                        + 8LL
                        * (((*(_DWORD *)(a1 + 1196) >> 5) - 1) & (HIBYTE(v11)
                                                                - 877075889
                                                                + 442596621 * (unsigned __int8)v11
                                                                + 37
                                                                * (BYTE6(v11)
                                                                 + 37
                                                                 * (BYTE5(v11)
                                                                  + 37
                                                                  * (BYTE4(v11)
                                                                   + 37
                                                                   * (BYTE3(v11)
                                                                    + 37 * (BYTE2(v11) + 37 * (unsigned int)BYTE1(v11)))))))));
          (*i & 1) == 0;
          i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)(a1 + 1192);
        break;
      }
    }
    *a2 = 0LL;
  }
  v5 = a2 + 2;
  if ( a2[2] )
  {
    v12 = a2[3] & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F));
    for ( j = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 1212) >> 5) - 1) & (HIBYTE(v12)
                                                               - 877075889
                                                               + 442596621 * (unsigned __int8)v12
                                                               + 37
                                                               * (BYTE6(v12)
                                                                + 37
                                                                * (BYTE5(v12)
                                                                 + 37
                                                                 * (BYTE4(v12)
                                                                  + 37
                                                                  * (BYTE3(v12)
                                                                   + 37 * (BYTE2(v12) + 37 * (unsigned int)BYTE1(v12)))))))));
          (*j & 1) == 0;
          j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v5 )
      {
        *j = *v5;
        --*(_DWORD *)(a1 + 1208);
        break;
      }
    }
    *v5 = 0LL;
  }
  v6 = a2 + 9;
  v7 = a2[9];
  if ( *(__int64 **)(v7 + 8) != a2 + 9 || (v8 = (_QWORD *)a2[10], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  a2[10] = (__int64)(a2 + 9);
  *v6 = v6;
  --*(_DWORD *)(a1 + 1240);
  EtwpCovSampModuleCleanup(a2);
  ExFreePoolWithTag(a2, 0x56777445u);
}
