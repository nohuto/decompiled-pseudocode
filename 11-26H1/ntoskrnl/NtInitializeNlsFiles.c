/*
 * XREFs of NtInitializeNlsFiles @ 0x140AD4080
 * Callers:
 *     DifNtInitializeNlsFilesWrapper @ 0x140679FF0 (DifNtInitializeNlsFilesWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x140723690 (ZwQueryDefaultLocale.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     MmMapViewOfSection @ 0x1409C1F50 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD41DC (ExpGetGlobalLocaleSection.c)
 */

__int64 __fastcall NtInitializeNlsFiles(_QWORD *a1, unsigned int *a2)
{
  __int64 ULong64FromUser; // rax
  int ULongFromUser; // eax
  __int64 result; // rax
  int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h] BYREF
  __int64 v11; // [rsp+70h] [rbp-18h] BYREF
  int v12; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  ULong64FromUser = RtlReadULong64FromUser(a1);
  RtlWriteULong64ToUser(a1, ULong64FromUser);
  ULongFromUser = RtlReadULongFromUser(a2);
  RtlWriteULongToUser(a2, ULongFromUser);
  result = ZwQueryDefaultLocale(0LL, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( (int)result >= 0 )
    {
      v10 = 0LL;
      v9 = 0LL;
      v11 = 0LL;
      v7 = MmMapViewOfSection(
             (__int64)Object,
             (__int64)KeGetCurrentThread()->ApcState.Process,
             &v10,
             0LL,
             0LL,
             (__int64)&v9,
             &v11,
             1,
             0x400000,
             2);
      ObfDereferenceObject(Object);
      if ( v7 >= 0 )
      {
        RtlWriteULong64ToUser(a1, v10);
        RtlWriteULongToUser(a2, v12);
      }
      return (unsigned int)v7;
    }
  }
  return result;
}
