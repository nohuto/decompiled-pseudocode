/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x1409766E0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1408A4714 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1408A543C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1408A564C (DrvDbValidateDriverInfFileName.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409768C0 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14097690C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, const wchar_t *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v15; // ecx
  int v17; // r8d
  int v18; // [rsp+60h] [rbp+18h] BYREF

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
        {
LABEL_13:
          LOBYTE(a4) = *((_BYTE *)a5 + 4);
          return (unsigned int)DrvDbOpenDriverInfFileRegKey(v6, (_DWORD)a2, *(_DWORD *)a5, a4, a5[1], (__int64)(a5 + 2));
        }
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
LABEL_33:
            if ( (_BYTE)v7 )
              goto LABEL_3;
            return (unsigned int)-1073741790;
          }
          if ( a4 != 9 )
            goto LABEL_3;
        }
      }
    }
    LOBYTE(v7) = (v7 & 0x40000000) != 0;
    goto LABEL_33;
  }
LABEL_3:
  v8 = a4 - 1;
  if ( !v8 )
    return (unsigned int)DrvDbValidateDriverInfFileName(a1, a2);
  a4 = v8 - 1;
  if ( !a4 )
    goto LABEL_13;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      return (unsigned int)DrvDbDeleteObjectRegKey(v6, 3u, (__int64)a2, 0);
    v11 = v10 - 1;
    if ( !v11 )
      return (unsigned int)DrvDbGetObjectList(v6, 3, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)DrvDbGetDriverInfFileMappedPropertyKeys(
                             v6,
                             (int)a2,
                             *a5,
                             a5[3],
                             *((_DWORD *)a5 + 8),
                             (unsigned int *)a5[5]);
    v13 = v12 - 2;
    if ( !v13 )
      return (unsigned int)DrvDbGetDriverInfFileMappedProperty(
                             v6,
                             a2,
                             *a5,
                             a5[2],
                             a5[3],
                             a5[4],
                             *((_DWORD *)a5 + 10),
                             a5[6]);
    if ( v13 == 1 )
      return (unsigned int)DrvDbSetDriverInfFileMappedProperty(
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
  v18 = 0;
  v15 = DrvDbOpenDriverInfFileRegKey(v6, (_DWORD)a2, v17, 1, (__int64)(a5 + 1), (__int64)&v18);
  if ( v15 >= 0 )
    *((_BYTE *)v5 + 16) = v18 == 1;
  return (unsigned int)v15;
}
