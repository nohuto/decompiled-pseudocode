/*
 * XREFs of RtlReserveChunkLZNT1 @ 0x14080FDB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlDescribeChunkLZNT1 @ 0x14080FCD0 (RtlDescribeChunkLZNT1.c)
 */

__int64 __fastcall RtlReserveChunkLZNT1(__int16 **a1, unsigned __int64 a2, __int16 **a3, unsigned int a4)
{
  __int16 *v4; // r14
  __int64 v6; // rsi
  int v9; // eax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  int v12; // r9d
  __int16 *v13; // rdx
  size_t v14; // r9
  char *v15; // rax
  __int16 *v17; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[6]; // [rsp+28h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = a4;
  v17 = *a1;
  v4 = v17;
  v18[0] = 0LL;
  v19 = 0;
  v9 = RtlDescribeChunkLZNT1(&v17, a2, (__int64)v18, &v19);
  v10 = v4;
  while ( 1 )
  {
    v11 = v9;
    if ( v9 < 0 )
      break;
    if ( v10 == v4 )
      v10 = v17;
    v9 = RtlDescribeChunkLZNT1(&v17, a2, (__int64)v18, &v19);
  }
  if ( v9 == -2147483622 )
  {
    v12 = (_DWORD)v17 - (_DWORD)v10;
    *a3 = v4;
    v13 = *a1;
    v14 = (unsigned int)(v12 + 2);
    v11 = -1073741789;
    if ( (unsigned __int64)*a1 <= a2 - v6 )
    {
      if ( (_DWORD)v6 == 4096 )
      {
        LODWORD(v6) = 4098;
        if ( (unsigned __int64)v13 + v14 + 4098 <= a2 )
        {
          memmove(v13 + 2049, v10, (unsigned int)v14);
          **a1 = 0x3FFF;
          ++*a3;
LABEL_16:
          v11 = 0;
        }
      }
      else
      {
        v15 = (char *)v13 + v14;
        if ( (_DWORD)v6 )
        {
          if ( (unsigned __int64)&v15[v6] <= a2 )
          {
            memmove((char *)v13 + v6, v10, v14);
            goto LABEL_16;
          }
        }
        else
        {
          LODWORD(v6) = 6;
          if ( (unsigned __int64)(v15 + 6) <= a2 )
          {
            memmove(v13 + 3, v10, v14);
            **a1 = -20477;
            (*a1)[1] = 2;
            (*a1)[2] = 4092;
            goto LABEL_16;
          }
        }
      }
      *a1 = (__int16 *)((char *)*a1 + (unsigned int)v6);
    }
  }
  return v11;
}
