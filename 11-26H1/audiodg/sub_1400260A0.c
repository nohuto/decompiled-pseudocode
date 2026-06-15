/*
 * XREFs of sub_1400260A0 @ 0x1400260A0
 * Callers:
 *     sub_140025F3C @ 0x140025F3C (sub_140025F3C.c)
 *     sub_140025F80 @ 0x140025F80 (sub_140025F80.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400260A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v11 = *(_QWORD *)(a1 + 8);
      if ( v11 )
        result = sub_1400B6010(v11);
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 )
      {
        v10 = 32LL;
        return j_j__o_free(v9, v10);
      }
      break;
    case 2:
      v5 = *(_QWORD *)(a1 + 8);
      if ( v5 )
        result = sub_1400B6010(v5);
      v4 = *(_QWORD *)(a1 + 16);
      goto LABEL_7;
    case 3:
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 )
        result = sub_1400B6010(v2);
      v4 = *(_QWORD *)(a1 + 40);
LABEL_7:
      if ( v4 )
        return sub_1400B6010(v4);
      return result;
    case 4:
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        result = sub_1400B6010(v6);
      v7 = *(__int64 **)(a1 + 16);
      if ( v7 )
      {
        v8 = *v7;
        if ( v8 )
          j_j__o_free(v8, 32LL);
        v9 = *(_QWORD *)(a1 + 16);
        v10 = 40LL;
        return j_j__o_free(v9, v10);
      }
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a1 - 6) > 1 )
        return result;
      v4 = *(_QWORD *)(a1 + 8);
      goto LABEL_7;
  }
  return result;
}
