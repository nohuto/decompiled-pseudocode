/*
 * XREFs of NtFlushVirtualMemory @ 0x140A5CD70
 * Callers:
 *     DifNtFlushVirtualMemoryWrapper @ 0x140678180 (DifNtFlushVirtualMemoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 */

__int64 __fastcall NtFlushVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned int *a4)
{
  char PreviousMode; // bl
  __int64 ULong64FromUser; // rax
  __int64 v10; // rax
  int ULongFromUser; // eax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // al
  __int64 result; // rax
  unsigned int v17; // edi
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  __int128 Src; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
    v10 = RtlReadULong64FromUser(a3);
    RtlWriteULong64ToUser(a3, v10);
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    v12 = RtlReadULong64FromUser(a2);
    v20 = v12;
    v13 = RtlReadULong64FromUser(a3);
    v18 = v13;
  }
  else
  {
    v12 = *a2;
    v20 = *a2;
    v13 = *a3;
    v18 = *a3;
  }
  v14 = v13 + v12;
  if ( v13 + v12 <= v12 )
  {
    if ( v13 )
      return 3221225485LL;
    v15 = v14 < 0x7FFFFFFF0000LL;
  }
  else
  {
    if ( v14 <= 0x7FFFFFFF0000LL )
      goto LABEL_7;
    v15 = 0;
  }
  if ( !v15 )
    return 3221225485LL;
LABEL_7:
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8LL,
             PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v17 = MmFlushVirtualMemory(Object, &v20, &v18, &Src);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    if ( PreviousMode )
      RtlWriteULong64ToUser(a3, v18);
    else
      *a3 = v18;
    if ( PreviousMode )
      RtlWriteULong64ToUser(a2, v20 & 0xFFFFFFFFFFFFF000uLL);
    else
      *a2 = v20 & 0xFFFFFFFFFFFFF000uLL;
    if ( PreviousMode )
      RtlCopyToUser(a4, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a4, &Src, 0x10uLL);
    return v17;
  }
  return result;
}
