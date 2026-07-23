/*
 * XREFs of PnpFixupID @ 0x1409B1598
 * Callers:
 *     PnpQueryID @ 0x1409B1418 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 * Callees:
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 */

__int64 __fastcall PnpFixupID(int *a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v7; // r10d
  unsigned __int64 v8; // rdx
  int *v9; // rbx
  int *i; // r9
  __int16 v11; // cx
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  int v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0;
  v16 = 0LL;
  v8 = (unsigned __int64)a1 + 2 * a2;
  v9 = 0LL;
  for ( i = a1; ; i = (int *)((char *)i + 2) )
  {
    if ( (unsigned __int64)i >= v8 )
      goto LABEL_9;
    v11 = *(_WORD *)i;
    if ( !*(_WORD *)i )
      break;
    if ( v11 == 32 )
    {
      *(_WORD *)i = 95;
    }
    else
    {
      if ( v11 == 44 || (unsigned __int16)(v11 - 32) > 0x5Fu )
      {
        v12 = a5;
        if ( !a5 )
          return 0LL;
        LODWORD(v16) = 2359330;
        v13 = L"invalid character";
        v15 = 2;
        goto LABEL_26;
      }
      if ( v11 == 92 )
      {
        v17 = ++v7;
        if ( v7 > a4 )
        {
          v12 = a5;
          if ( !a5 )
            return 0LL;
          LODWORD(v16) = 2621478;
          v13 = L"too many separators";
          v15 = 4;
          i = &v17;
LABEL_26:
          *((_QWORD *)&v16 + 1) = v13;
          PnpLogEvent(v12, &v16, 3221487672LL, i, v15);
          return 0LL;
        }
      }
    }
LABEL_8:
    ;
  }
  if ( a3 && (!v9 || i != (int *)((char *)v9 + 2)) )
  {
    v9 = i;
    goto LABEL_8;
  }
  if ( a4 != -1 && v7 != a4 )
  {
LABEL_9:
    v12 = a5;
    if ( a5 )
    {
      LODWORD(v16) = 7471216;
      v13 = L"not terminated, too long or invalid number of separators";
      v15 = 0;
      i = 0LL;
      goto LABEL_26;
    }
    return 0LL;
  }
  return (unsigned int)(((char *)i - (char *)a1) >> 1) + 1;
}
