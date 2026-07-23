/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x1800D4150
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x1800A0CF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagQueryTags @ 0x1800EA838 (RtlpHpTagQueryTags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rcx

  v3 = *(_DWORD *)(a1 + 12);
  result = 0LL;
  v6 = a3 & (-1LL << (v3 & 0x1F));
LABEL_2:
  if ( result )
    goto LABEL_5;
  if ( v3 >> 5 )
  {
    result = *(_QWORD *)(a1 + 16)
           + 8LL
           * (((v3 >> 5) - 1) & (HIBYTE(v6)
                               - 877075889
                               + 442596621 * (unsigned __int8)v6
                               + 37
                               * (BYTE6(v6)
                                + 37
                                * (BYTE5(v6)
                                 + 37
                                 * (BYTE4(v6)
                                  + 37
                                  * ((((unsigned int)a3 & (-1 << (v3 & 0x1F))) >> 24) + 37
                                                                                      * (BYTE2(v6) + 37 * BYTE1(v6))))))));
LABEL_5:
    while ( 1 )
    {
      result = *(_QWORD *)result;
      if ( (result & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (v3 & 0x1F)) & *(_QWORD *)(result + 8)) )
      {
        if ( !result )
          return 0LL;
        v7 = *a2 - *(_QWORD *)(result + 16);
        if ( *a2 == *(_QWORD *)(result + 16) )
          v7 = a2[1] - *(_QWORD *)(result + 24);
        if ( v7 )
          goto LABEL_2;
        return result;
      }
    }
  }
  return 0LL;
}
