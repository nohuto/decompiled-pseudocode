/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x140976AC0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbValidateDriverInfFileName @ 0x1408A564C (DrvDbValidateDriverInfFileName.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140977F88 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140AFCFE0 (DrvDbGetObjectList.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, const wchar_t *a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v16; // ecx
  int v18; // r8d
  int v19; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    return (unsigned int)-1073741811;
  _mm_lfence();
  v5 = a5;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 392);
  v7 = *(unsigned int *)(v6 + 12);
  if ( (v7 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v7 )
      return (unsigned int)-1073740697;
    if ( a4 == 2 )
    {
      if ( !*((_BYTE *)a5 + 4) )
      {
        if ( (int)v7 < 0 )
          return (unsigned int)DrvDbOpenObjectRegKey(
                                 v6,
                                 0,
                                 2,
                                 (_DWORD)a2,
                                 *a5,
                                 *((_BYTE *)a5 + 4),
                                 *((_QWORD *)a5 + 1),
                                 (__int64)(a5 + 4),
                                 0LL);
        return (unsigned int)-1073741790;
      }
    }
    else if ( a4 != 3 && a4 != 4 )
    {
      if ( a4 == 5 || a4 == 6 || a4 == 8 )
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
    v7 = (unsigned int)v7 >> 30;
    LOBYTE(v7) = v7 & 1;
    goto LABEL_33;
  }
LABEL_3:
  v8 = a4 - 1;
  if ( !v8 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v7, a2);
  v9 = v8 - 1;
  if ( !v9 )
    return (unsigned int)DrvDbOpenObjectRegKey(
                           v6,
                           0,
                           2,
                           (_DWORD)a2,
                           *a5,
                           *((_BYTE *)a5 + 4),
                           *((_QWORD *)a5 + 1),
                           (__int64)(a5 + 4),
                           0LL);
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
      return (unsigned int)DrvDbDeleteObjectRegKey(v6, 2u, (__int64)a2, 0);
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)DrvDbGetObjectList(
                             v6,
                             2,
                             *(_QWORD *)a5,
                             *((_QWORD *)a5 + 1),
                             *((_QWORD *)a5 + 2),
                             a5[6],
                             *((_QWORD *)a5 + 4),
                             0);
    v13 = v12 - 1;
    if ( !v13 )
      return (unsigned int)DrvDbGetDriverPackageMappedPropertyKeys(
                             v6,
                             (__int64)a2,
                             *(void **)a5,
                             *((_QWORD *)a5 + 3),
                             a5[8],
                             *((unsigned int **)a5 + 5));
    v14 = v13 - 2;
    if ( !v14 )
      return (unsigned int)DrvDbGetDriverPackageMappedProperty(
                             v6,
                             (int)a2,
                             *(_QWORD *)a5,
                             *((_QWORD *)a5 + 2),
                             *((HANDLE *)a5 + 3),
                             *((void **)a5 + 4),
                             a5[10],
                             *((_QWORD *)a5 + 6));
    if ( v14 == 1 )
      return (unsigned int)DrvDbSetDriverPackageMappedProperty(
                             v6,
                             (int)a2,
                             *(_QWORD *)a5,
                             *((_QWORD *)a5 + 2),
                             a5[6],
                             *((void **)a5 + 4),
                             a5[10]);
    return (unsigned int)-1073741811;
  }
  v18 = *a5;
  v19 = 0;
  v16 = DrvDbOpenDriverPackageRegKey(v6, (_DWORD)a2, v18, 1, (__int64)(a5 + 2), (__int64)&v19);
  if ( v16 >= 0 )
    *((_BYTE *)v5 + 16) = v19 == 1;
  return (unsigned int)v16;
}
