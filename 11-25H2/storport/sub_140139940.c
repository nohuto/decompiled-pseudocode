/*
 * XREFs of sub_140139940 @ 0x140139940
 * Callers:
 *     <none>
 * Callees:
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 *     sub_14013C148 @ 0x14013C148 (sub_14013C148.c)
 *     sub_14013C188 @ 0x14013C188 (sub_14013C188.c)
 */

__int64 __fastcall sub_140139940(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  result = sub_14013C148(a3, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 12);
    if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a3 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v7 + *(_QWORD *)a3) = -14;
    ++*(_DWORD *)(a3 + 12);
    result = sub_14013BDC4(a3, "MaxComPacketSize", 16LL);
    if ( (int)result >= 0 )
    {
      result = sub_14013BE4C(a3, *a4);
      if ( (int)result >= 0 )
      {
        v8 = *(unsigned int *)(a3 + 12);
        if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
          return 3221225507LL;
        *(_BYTE *)(v8 + *(_QWORD *)a3) = -13;
        v9 = (unsigned int)++*(_DWORD *)(a3 + 12);
        if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a3 + 8) )
          return 3221225507LL;
        *(_BYTE *)(v9 + *(_QWORD *)a3) = -14;
        ++*(_DWORD *)(a3 + 12);
        result = sub_14013BDC4(a3, "MaxResponseComPacketSize", 24LL);
        if ( (int)result >= 0 )
        {
          result = sub_14013BE4C(a3, *a4);
          if ( (int)result >= 0 )
          {
            v10 = *(unsigned int *)(a3 + 12);
            if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a3 + 8) )
              return 3221225507LL;
            *(_BYTE *)(v10 + *(_QWORD *)a3) = -13;
            v11 = (unsigned int)++*(_DWORD *)(a3 + 12);
            if ( (unsigned int)(v11 + 1) > *(_DWORD *)(a3 + 8) )
              return 3221225507LL;
            *(_BYTE *)(v11 + *(_QWORD *)a3) = -14;
            ++*(_DWORD *)(a3 + 12);
            result = sub_14013BDC4(a3, "MaxPacketSize", 13LL);
            if ( (int)result >= 0 )
            {
              result = sub_14013BE4C(a3, *a4 - 20LL);
              if ( (int)result >= 0 )
              {
                v12 = *(unsigned int *)(a3 + 12);
                if ( (unsigned int)(v12 + 1) > *(_DWORD *)(a3 + 8) )
                  return 3221225507LL;
                *(_BYTE *)(v12 + *(_QWORD *)a3) = -13;
                v13 = (unsigned int)++*(_DWORD *)(a3 + 12);
                if ( (unsigned int)(v13 + 1) > *(_DWORD *)(a3 + 8) )
                  return 3221225507LL;
                *(_BYTE *)(v13 + *(_QWORD *)a3) = -14;
                ++*(_DWORD *)(a3 + 12);
                result = sub_14013BDC4(a3, "MaxIndTokenSize", 15LL);
                if ( (int)result >= 0 )
                {
                  result = sub_14013BE4C(a3, *a4 - 56LL);
                  if ( (int)result >= 0 )
                  {
                    v14 = *(unsigned int *)(a3 + 12);
                    if ( (unsigned int)(v14 + 1) > *(_DWORD *)(a3 + 8) )
                      return 3221225507LL;
                    *(_BYTE *)(v14 + *(_QWORD *)a3) = -13;
                    ++*(_DWORD *)(a3 + 12);
                    return sub_14013C188(a3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
