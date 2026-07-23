/*
 * XREFs of CcPinRead @ 0x140A82A20
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcAllocateObcb @ 0x14078CCA0 (CcAllocateObcb.c)
 *     CcUnpinData @ 0x140A4E110 (CcUnpinData.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  struct _KLOCK_ENTRIES *v10; // rdi
  _DWORD *SharedCacheMap; // r13
  PVOID *v12; // r15
  __int64 v13; // rax
  BOOLEAN v14; // bl
  PVOID Obcb; // [rsp+58h] [rbp-50h] BYREF
  void *v17; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_ENTRIES *v18; // [rsp+68h] [rbp-40h]
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+C0h] [rbp+18h]

  v17 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v10 = (struct _KLOCK_ENTRIES *)&Obcb;
  __incgsdword(4 * (Flags & 1) + 35160);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v12 = Buffer;
  v13 = v19;
  do
  {
    if ( Obcb )
    {
      if ( v10 == (struct _KLOCK_ENTRIES *)&Obcb )
      {
        Obcb = CcAllocateObcb(FileOffset, Length, (__int64)Obcb);
        v10 = (struct _KLOCK_ENTRIES *)((char *)Obcb + 16);
        v18 = (struct _KLOCK_ENTRIES *)((char *)Obcb + 16);
        *v12 = v17;
        v13 = v19;
      }
      Length += QuadPart - v13;
      v21 = Length;
      QuadPart = v13;
      v10 = (struct _KLOCK_ENTRIES *)((char *)v10 + 8);
      v18 = v10;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             Length,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             Flags,
                             v10,
                             &v17,
                             &v19) )
    {
      __incgsdword(0x8994u);
      v14 = 0;
      goto LABEL_12;
    }
    v13 = v19;
  }
  while ( v19 - QuadPart < Length );
  *Bcb = Obcb;
  if ( v10 == (struct _KLOCK_ENTRIES *)&Obcb )
    *v12 = v17;
  v14 = 1;
LABEL_12:
  __addgsdword(0x8998u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( !v14 && Obcb )
    CcUnpinData(Obcb);
  return v14;
}
