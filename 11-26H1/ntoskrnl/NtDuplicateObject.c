/*
 * XREFs of NtDuplicateObject @ 0x140A828E0
 * Callers:
 *     DifNtDuplicateObjectWrapper @ 0x140676770 (DifNtDuplicateObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtDuplicateObject(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        ULONG_PTR a3,
        _QWORD *a4,
        int a5,
        int a6,
        char a7)
{
  struct _KPROCESS *v10; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  int v13; // edi
  unsigned int v14; // r13d
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object[7]; // [rsp+60h] [rbp-38h] BYREF

  v16 = 0LL;
  Object[0] = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 && PreviousMode )
    RtlWriteULong64ToUser(a4, 0LL);
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             64LL,
             PsProcessType,
             PreviousMode,
             0x7544624Fu,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v13 = ObpReferenceObjectByHandleWithTag(a3, 64LL, PsProcessType, PreviousMode, 0x7544624Fu, &v15, 0LL, 0LL);
      v10 = (struct _KPROCESS *)v15;
      if ( v13 < 0 )
        v10 = 0LL;
      v15 = (__int64)v10;
    }
    else
    {
      v13 = 0;
    }
    v14 = ObDuplicateObject((__int64)Object[0], a2, v10, &v16, a5, a6, a7, PreviousMode);
    if ( a4 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a4, v16);
      else
        *a4 = v16;
    }
    ObfDereferenceObjectWithTag(Object[0], 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 >= 0 )
      return v14;
    return (unsigned int)v13;
  }
  return result;
}
