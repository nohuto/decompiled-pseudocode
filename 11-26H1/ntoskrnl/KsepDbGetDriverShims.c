/*
 * XREFs of KsepDbGetDriverShims @ 0x1409D8DF4
 * Callers:
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     KseShimDatabaseClose @ 0x1409D5D2C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 */

__int64 __fastcall KsepDbGetDriverShims(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int *a5)
{
  int v6; // r14d
  _KTHREAD *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  LIST_ENTRY *v13; // r13
  unsigned int v14; // ebx
  unsigned int DriverShimsInternal; // eax
  __int64 v16; // r14
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v19; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-1Ch] BYREF
  void *Src; // [rsp+48h] [rbp-18h] BYREF
  _KTHREAD *v22; // [rsp+50h] [rbp-10h] BYREF
  LIST_ENTRY *v23; // [rsp+58h] [rbp-8h] BYREF
  int v24; // [rsp+A0h] [rbp+40h]
  _KTHREAD *Paged; // [rsp+A0h] [rbp+40h]
  int v26; // [rsp+A8h] [rbp+48h]
  int v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  v26 = a2;
  v24 = a1;
  Src = 0LL;
  v6 = a1;
  v22 = 0LL;
  v7 = 0LL;
  v20 = 0;
  v8 = 0;
  v19 = 0;
  v23 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  a4->Thread = 0LL;
  *a5 = 0;
  v9 = KseShimDatabaseOpen(&v23, a2, a3, a4);
  v13 = v23;
  v14 = v9;
  if ( v9 >= 0 )
  {
    DriverShimsInternal = KsepDbGetDriverShimsInternal(
                            v23->Flink,
                            (unsigned int)&KsepShimDbLock.FirstArgument,
                            v6,
                            v26,
                            v27,
                            (__int64)&Src,
                            (__int64)&v20);
    v16 = v20;
    v14 = DriverShimsInternal;
    if ( (int)(DriverShimsInternal + 0x80000000) >= 0 && DriverShimsInternal != -1073741275 )
      goto LABEL_9;
    Blink = v13[3].Blink;
    if ( Blink )
    {
      v14 = KsepDbGetDriverShimsInternal(
              (_DWORD)Blink,
              (unsigned int)&KsepShimDbLock.FirstArgument,
              v24,
              v26,
              v27,
              (__int64)&v22,
              (__int64)&v19);
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741275 )
      {
        v7 = v22;
        v8 = v19;
LABEL_9:
        if ( Src )
          KsepDbFreeDriverShims(Src, (unsigned int)v16);
        if ( v7 )
          KsepDbFreeDriverShims(v7, v8);
        goto LABEL_13;
      }
      v7 = v22;
      v8 = v19;
    }
    if ( (_DWORD)v16 )
    {
      if ( v8 )
      {
        Paged = (_KTHREAD *)KsepPoolAllocatePaged();
        if ( !Paged )
        {
          v14 = -1073741801;
          goto LABEL_9;
        }
        memmove(Paged, Src, 80 * v16);
        memmove((char *)Paged + 80 * v16, v7, v8);
        a4->Thread = Paged;
        *a5 = v8 + v16;
      }
      else
      {
        a4->Thread = (_KTHREAD *)Src;
        *a5 = v16;
        Src = 0LL;
      }
    }
    else
    {
      if ( !v8 )
      {
        v14 = -1073741275;
        goto LABEL_9;
      }
      a4->Thread = v7;
      v7 = 0LL;
      *a5 = v8;
    }
    v14 = 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( v13 )
    KseShimDatabaseClose((__int64)v13, v10, v11, v12);
  return v14;
}
