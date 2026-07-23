/*
 * XREFs of DrvDbDispatchDeviceId @ 0x140975E30
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1408A41B8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbValidateDeviceIdName @ 0x1408A5570 (DrvDbValidateDeviceIdName.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140ADFA38 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140B270A4 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbDispatchDeviceId(__int64 a1, const wchar_t *a2, int a3, int a4, _QWORD *a5)
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
LABEL_15:
          LOBYTE(a4) = *((_BYTE *)a5 + 4);
          return (unsigned int)DrvDbOpenDeviceIdRegKey(v6, (_DWORD)a2, *(_DWORD *)a5, a4, a5[1], (__int64)(a5 + 2));
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
    return (unsigned int)DrvDbValidateDeviceIdName(a1, a2);
  a4 = v8 - 1;
  if ( !a4 )
    goto LABEL_15;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      return (unsigned int)DrvDbDeleteObjectRegKey(v6, 5u, (__int64)a2, 2u);
    v11 = v10 - 1;
    if ( !v11 )
      return (unsigned int)DrvDbGetObjectList(v6, 5, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 2);
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)DrvDbGetDeviceIdMappedPropertyKeys(
                             v6,
                             (int)a2,
                             (void *)*a5,
                             a5[3],
                             *((_DWORD *)a5 + 8),
                             (unsigned int *)a5[5]);
    v13 = v12 - 2;
    if ( !v13 )
      return (unsigned int)DrvDbGetDeviceIdMappedProperty(v6, a2, *a5, a5[2], a5[3], a5[4], *((_DWORD *)a5 + 10), a5[6]);
    if ( v13 == 1 )
      return (unsigned int)DrvDbSetDeviceIdMappedProperty(
                             v6,
                             (_DWORD)a2,
                             *a5,
                             a5[2],
                             *((_DWORD *)a5 + 6),
                             a5[4],
                             *((_DWORD *)a5 + 10));
    return (unsigned int)-1073741811;
  }
  v17 = *(_DWORD *)a5;
  v18 = 0;
  v15 = DrvDbOpenDeviceIdRegKey(v6, (_DWORD)a2, v17, 1, (__int64)(a5 + 1), (__int64)&v18);
  if ( v15 >= 0 )
    *((_BYTE *)v5 + 16) = v18 == 1;
  return (unsigned int)v15;
}
