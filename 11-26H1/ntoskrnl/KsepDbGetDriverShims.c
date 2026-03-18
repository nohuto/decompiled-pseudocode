/*
 * XREFs of KsepDbGetDriverShims @ 0x1409E45DC
 * Callers:
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     KsepDbFreeDriverShims @ 0x1409E3D40 (KsepDbFreeDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     KseShimDatabaseOpen @ 0x1409E63D0 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, int a2, int a3, void **a4, unsigned int *a5)
{
  int v6; // r14d
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  _QWORD *v10; // r13
  unsigned int v11; // ebx
  unsigned int DriverShimsInternal; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-1Ch] BYREF
  void *Src; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v19; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-8h] BYREF
  int v21; // [rsp+A0h] [rbp+40h]
  char *Paged; // [rsp+A0h] [rbp+40h]

  v21 = a1;
  Src = 0LL;
  v6 = a1;
  v19 = 0LL;
  v7 = 0LL;
  v17 = 0;
  v8 = 0;
  v16 = 0;
  v20 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = KseShimDatabaseOpen(&v20);
  v10 = v20;
  v11 = v9;
  if ( v9 >= 0 )
  {
    DriverShimsInternal = KsepDbGetDriverShimsInternal(
                            *v20,
                            (unsigned int)&KsepShimDbLock.152,
                            v6,
                            a2,
                            a3,
                            (__int64)&Src,
                            (__int64)&v17);
    v13 = v17;
    v11 = DriverShimsInternal;
    if ( (int)(DriverShimsInternal + 0x80000000) >= 0 && DriverShimsInternal != -1073741275 )
      goto LABEL_9;
    v14 = v10[7];
    if ( v14 )
    {
      v11 = KsepDbGetDriverShimsInternal(
              v14,
              (unsigned int)&KsepShimDbLock.152,
              v21,
              a2,
              a3,
              (__int64)&v19,
              (__int64)&v16);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741275 )
      {
        v7 = v19;
        v8 = v16;
LABEL_9:
        if ( Src )
          KsepDbFreeDriverShims(Src, v13);
        if ( v7 )
          KsepDbFreeDriverShims(v7, v8);
        goto LABEL_13;
      }
      v7 = v19;
      v8 = v16;
    }
    if ( (_DWORD)v13 )
    {
      if ( v8 )
      {
        Paged = (char *)KsepPoolAllocatePaged();
        if ( !Paged )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
        memmove(Paged, Src, 80 * v13);
        memmove(&Paged[80 * v13], v7, v8);
        *a4 = Paged;
        *a5 = v8 + v13;
      }
      else
      {
        *a4 = Src;
        *a5 = v13;
        Src = 0LL;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = -1073741275;
        goto LABEL_9;
      }
      *a4 = v7;
      v7 = 0LL;
      *a5 = v8;
    }
    v11 = 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( v10 )
    KseShimDatabaseClose(v10);
  return v11;
}
