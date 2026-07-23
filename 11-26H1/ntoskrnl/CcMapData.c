/*
 * XREFs of CcMapData @ 0x1409DFB60
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402C86B0 (CcMapAndRead.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  __int16 v6; // di
  char v9; // bl
  PVOID SharedCacheMap; // rcx
  __int64 *v11; // rsi
  BOOLEAN result; // al
  char v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-28h] BYREF

  v6 = Flags;
  v9 = 0;
  v15[0] = 0LL;
  v14 = 0LL;
  __incgsdword(4 * (Flags & 1) + 35148);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( (Flags & 1) != 0 )
  {
    v11 = (__int64 *)Buffer;
    *Buffer = (PVOID)CcGetVirtualAddress(
                       (__int64)SharedCacheMap,
                       FileOffset->QuadPart,
                       &v14,
                       (struct _KLOCK_ENTRIES *)&v13,
                       (Flags >> 6) & 1,
                       0);
  }
  else
  {
    v11 = (__int64 *)Buffer;
    result = CcPinFileData(
               (__int64)FileObject,
               (__int64 *)FileOffset,
               Length,
               1,
               0,
               Flags,
               (struct _KLOCK_ENTRIES *)&v14,
               Buffer,
               v15);
    if ( !result )
    {
      __incgsdword(0x898Cu);
      return result;
    }
  }
  if ( (v6 & 0x10) == 0 )
  {
    if ( (v6 & 0x100) != 0 )
    {
      v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
      BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    }
    CcMapAndRead(Length, 0, 1, *v11);
    if ( (v6 & 0x100) != 0 )
      BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
  }
  __addgsdword(0x8990u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  *Bcb = (PVOID)(v14 + 1);
  return 1;
}
