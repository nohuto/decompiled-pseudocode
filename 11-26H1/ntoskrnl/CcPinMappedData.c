/*
 * XREFs of CcPinMappedData @ 0x140A622F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedStarveExclusive @ 0x14025F880 (ExAcquireSharedStarveExclusive.c)
 *     CcDecrementVacbActiveCount @ 0x1402BF9B0 (CcDecrementVacbActiveCount.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcAllocateObcb @ 0x14078CCA0 (CcAllocateObcb.c)
 *     CcUnpinData @ 0x140A4E110 (CcUnpinData.c)
 */

BOOLEAN __stdcall CcPinMappedData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb)
{
  struct _KLOCK_ENTRIES *v9; // r12
  __int64 *v10; // rbx
  _DWORD *SharedCacheMap; // r13
  __int64 v12; // rax
  BOOLEAN v13; // di
  PVOID Obcb; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_ENTRIES *v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+C0h] [rbp+18h]

  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v9 = (struct _KLOCK_ENTRIES *)&Obcb;
  v10 = (__int64 *)Bcb;
  if ( ((unsigned __int8)*Bcb & 1) == 0 )
    return 1;
  *Bcb = (char *)*Bcb - 1;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  __incgsdword(0x8954u);
  if ( *(_WORD *)*v10 != 765 )
  {
    v12 = v19;
    while ( 1 )
    {
      if ( Obcb )
      {
        if ( v9 == (struct _KLOCK_ENTRIES *)&Obcb )
        {
          Obcb = CcAllocateObcb(FileOffset, Length, (__int64)Obcb);
          v9 = (struct _KLOCK_ENTRIES *)((char *)Obcb + 16);
          v17 = (struct _KLOCK_ENTRIES *)((char *)Obcb + 16);
          v12 = v19;
        }
        Length += QuadPart - v12;
        v20 = Length;
        QuadPart = v12;
        v9 = (struct _KLOCK_ENTRIES *)((char *)v9 + 8);
        v17 = v9;
      }
      if ( !(unsigned __int8)CcPinFileData(
                               (__int64)FileObject,
                               &QuadPart,
                               Length,
                               (SharedCacheMap[38] & 0x200) == 0,
                               0,
                               Flags,
                               v9,
                               &v18,
                               &v19) )
        goto LABEL_10;
      v12 = v19;
      if ( v19 - QuadPart >= Length )
      {
        CcDecrementVacbActiveCount(*v10);
        *v10 = (__int64)Obcb;
        goto LABEL_8;
      }
    }
  }
  if ( !ExAcquireSharedStarveExclusive((PERESOURCE)(*v10 + 72), Flags & 1) )
  {
LABEL_10:
    v13 = 0;
    goto LABEL_14;
  }
LABEL_8:
  v13 = 1;
LABEL_14:
  if ( !v13 )
  {
    ++*v10;
    if ( Obcb )
      CcUnpinData(Obcb);
  }
  return v13;
}
