/*
 * XREFs of DrvDbDispatchDriverFile @ 0x140B57EB0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1408A45F4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbOpenDriverFileRegKey @ 0x1408A4CF0 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1408A5308 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1408A564C (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B64C8C (DrvDbGetDriverFileMappedProperty.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, const wchar_t *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r10
  int v7; // r8d
  int v8; // ecx
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v17; // r8d
  int v19; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    return (unsigned int)-1073741811;
  _mm_lfence();
  v5 = a5;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 392);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v7 & 0x10000000) == 0 )
  {
    if ( !v7 )
      return (unsigned int)-1073740697;
    a1 = (unsigned int)(a4 - 2);
    if ( a4 == 2 )
    {
      if ( !*((_BYTE *)a5 + 4) )
      {
        if ( v7 < 0 )
          return (unsigned int)DrvDbOpenDriverFileRegKey(
                                 v6,
                                 (int)a2,
                                 *(_DWORD *)a5,
                                 *((_BYTE *)a5 + 4),
                                 a5[1],
                                 (__int64)(a5 + 2));
        return (unsigned int)-1073741790;
      }
    }
    else
    {
      a1 = (unsigned int)(a4 - 3);
      if ( a4 != 3 )
      {
        a1 = (unsigned int)(a4 - 4);
        if ( a4 != 4 )
        {
          a1 = (unsigned int)(a4 - 5);
          if ( a4 == 5 || (a1 = (unsigned int)(a4 - 6), a4 == 6) || (a1 = (unsigned int)(a4 - 8), a4 == 8) )
          {
            v7 = (unsigned int)v7 >> 31;
            goto LABEL_24;
          }
          if ( a4 != 9 )
            goto LABEL_12;
        }
      }
    }
    LOBYTE(v7) = (v7 & 0x40000000) != 0;
LABEL_24:
    if ( (_BYTE)v7 )
      goto LABEL_12;
    return (unsigned int)-1073741790;
  }
LABEL_12:
  v9 = a4 - 1;
  if ( !v9 )
    return (unsigned int)DrvDbValidateDriverInfFileName(a1, a2);
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbOpenDriverFileRegKey(
                           v6,
                           (int)a2,
                           *(_DWORD *)a5,
                           *((_BYTE *)a5 + 4),
                           a5[1],
                           (__int64)(a5 + 2));
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)DrvDbDeleteObjectRegKey(v6, 4u, (__int64)a2, 0);
    v13 = v12 - 1;
    if ( !v13 )
      return (unsigned int)DrvDbGetObjectList(
                             (__int64 *)v6,
                             4u,
                             *a5,
                             a5[1],
                             a5[2],
                             *((_DWORD *)a5 + 6),
                             (_DWORD *)a5[4],
                             0);
    v14 = v13 - 1;
    if ( !v14 )
      return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                             v6,
                             (int)a2,
                             *a5,
                             a5[3],
                             *((_DWORD *)a5 + 8),
                             (unsigned int *)a5[5]);
    v15 = v14 - 2;
    if ( !v15 )
      return (unsigned int)DrvDbGetDriverFileMappedProperty(
                             v6,
                             a2,
                             *a5,
                             a5[2],
                             a5[3],
                             a5[4],
                             *((_DWORD *)a5 + 10),
                             a5[6]);
    if ( v15 == 1 )
      return (unsigned int)DrvDbSetDriverFileMappedProperty(
                             v6,
                             (int)a2,
                             (HANDLE)*a5,
                             a5[2],
                             *((_DWORD *)a5 + 6),
                             (int *)a5[4],
                             *((_DWORD *)a5 + 10));
    return (unsigned int)-1073741811;
  }
  v17 = *(_DWORD *)a5;
  v19 = 0;
  v8 = DrvDbOpenDriverFileRegKey(v6, (int)a2, v17, 1, (__int64)(a5 + 1), (__int64)&v19);
  if ( v8 >= 0 )
    *((_BYTE *)v5 + 16) = v19 == 1;
  return (unsigned int)v8;
}
