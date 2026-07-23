/*
 * XREFs of NtAcquireProcessActivityReference @ 0x140B293A0
 * Callers:
 *     DifNtAcquireProcessActivityReferenceWrapper @ 0x14066DAE0 (DifNtAcquireProcessActivityReferenceWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x140B294C8 (PspCreateActivityReference.c)
 */

__int64 __fastcall NtAcquireProcessActivityReference(_QWORD *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 result; // rax
  PVOID v8; // rdi
  int v9; // esi
  __int64 ULong64FromUser; // rax
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-18h] BYREF

  v11 = 0LL;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( a3 )
    return 3221225713LL;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x63417350u,
               Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v8 = Object[0];
      v9 = PspCreateActivityReference(Object[0], &v11);
      if ( v9 >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(a1, v11);
        else
          *a1 = v11;
      }
      ObfDereferenceObjectWithTag(v8, 0x63417350u);
      return (unsigned int)v9;
    }
  }
  return result;
}
