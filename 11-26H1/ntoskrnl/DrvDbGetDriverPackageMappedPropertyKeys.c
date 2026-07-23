/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1408A4140 (DrvDbGetCompositeMappedPropertyKeys.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x140977F88 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140B2B98C (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  unsigned int v7; // r13d
  int v8; // r15d
  __int64 v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  int CompositeMappedPropertyKeys; // ebx
  __int64 v13; // r9
  __int64 v14; // rax
  void *v15; // rax
  __int64 i; // r15
  int v17; // r8d
  int DriverPackageMappedProperty; // eax
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 j; // r15
  HANDLE v24; // rdx
  __int16 *v25; // r8
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  HANDLE v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ecx
  unsigned int *v36; // [rsp+28h] [rbp-38h]
  __int64 v37; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  __int64 v39; // [rsp+50h] [rbp-10h]

  v6 = a6;
  v7 = a5;
  v8 = a2;
  v36 = a6;
  v9 = a4;
  Handle = 0LL;
  v37 = 0LL;
  v10 = 0;
  LODWORD(a6) = 0;
  v11 = a5;
  *v6 = 0;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (__int64)&off_140E0A3E0, 0x10u, a4, v7, v36);
  if ( CompositeMappedPropertyKeys < 0 )
    return (unsigned int)CompositeMappedPropertyKeys;
  v14 = *v6;
  if ( (_DWORD)v14 )
  {
    if ( v13 )
      v9 = v13 + 20 * v14;
    if ( (unsigned int)v14 <= v7 )
      v11 -= v14;
    else
      v11 = 0;
  }
  v15 = a3;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDriverPackageRegKey(a1, v8, 1, 0, (__int64)&Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_53;
    v15 = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v17 = (int)Handle;
    if ( v15 )
      v17 = (int)v15;
    DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                    a1,
                                    a2,
                                    v17,
                                    (int)off_14000F838[i],
                                    (char *)&v37 + 4,
                                    0LL,
                                    0,
                                    (__int64)&v37);
    CompositeMappedPropertyKeys = DriverPackageMappedProperty;
    if ( DriverPackageMappedProperty != -1073741275 )
    {
      if ( DriverPackageMappedProperty && DriverPackageMappedProperty != -1073741789 )
        break;
      if ( v9 && v10 < v11 )
      {
        v19 = off_14000F838[i];
        v20 = v10++;
        v21 = 5 * v20;
        *(_OWORD *)(v9 + 4 * v21) = *(_OWORD *)v19;
        *(_DWORD *)(v9 + 4 * v21 + 16) = *((_DWORD *)v19 + 4);
      }
      v22 = *v6 + 1;
      if ( v22 < *v6 )
      {
        CompositeMappedPropertyKeys = -1073741675;
        *v6 = 0;
        break;
      }
      *v6 = v22;
      CompositeMappedPropertyKeys = 0;
    }
    v15 = a3;
  }
  for ( j = 0LL; (unsigned int)j < 0x2A; j = (unsigned int)(j + 1) )
  {
    v24 = Handle;
    v25 = (&off_14000FAF0)[5 * j];
    if ( a3 )
      v24 = a3;
    v39 = 5 * j;
    a5 = 0;
    v26 = PnpCtxRegQueryValue(&a5, v24, v25, 0LL, 0LL, &a5);
    CompositeMappedPropertyKeys = v26;
    if ( v26 == -1073741772 )
    {
      v27 = v39;
      v28 = (__int64)*(&off_14000FAE0 + v39);
      if ( *(_DWORD *)(v28 + 16) != 7 )
        goto LABEL_48;
      v29 = *(_QWORD *)v28 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v28 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v29 = *(_QWORD *)(v28 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v29 )
        goto LABEL_48;
      v30 = Handle;
      if ( a3 )
        v30 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v30, &a6) < 0 || (_DWORD)a6 != 218103811 )
        goto LABEL_48;
    }
    else
    {
      if ( v26 && v26 != -1073741789 )
        break;
      v27 = v39;
    }
    if ( v9 && v10 < v11 )
    {
      v31 = (__int64)*(&off_14000FAE0 + v27);
      v32 = v10++;
      v33 = 5 * v32;
      *(_OWORD *)(v9 + 4 * v33) = *(_OWORD *)v31;
      *(_DWORD *)(v9 + 4 * v33 + 16) = *(_DWORD *)(v31 + 16);
    }
    v34 = *v6 + 1;
    if ( v34 < *v6 )
    {
      CompositeMappedPropertyKeys = -1073741675;
      *v6 = 0;
      goto LABEL_53;
    }
    *v6 = v34;
LABEL_48:
    CompositeMappedPropertyKeys = 0;
  }
  if ( CompositeMappedPropertyKeys >= 0 && v7 < *v6 )
    CompositeMappedPropertyKeys = -1073741789;
LABEL_53:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CompositeMappedPropertyKeys;
}
