/*
 * XREFs of NtAllocateReserveObject @ 0x140B07F50
 * Callers:
 *     DifNtAllocateReserveObjectWrapper @ 0x14066B230 (DifNtAllocateReserveObjectWrapper.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtAllocateReserveObject(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 result; // rax
  _DWORD *v8; // rbx
  int inserted; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v11; // [rsp+20h] [rbp-68h]
  void *v12; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF

  v3 = a3;
  v13 = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( (unsigned int)v3 > 1 )
    return 3221225485LL;
  result = ObCreateObjectEx(
             PreviousMode,
             (_DWORD *)stru_140FC01F0.SchedulerApc.Reserved[v3],
             a2,
             PreviousMode,
             v11,
             *((_DWORD *)&ExpPlatformBinaryLock.UserAffinityPrimaryGroup + 2 * v3),
             0,
             0,
             &v12,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = v12;
    memset_0(v12, 0, *((_QWORD *)&ExpPlatformBinaryLock.UserAffinityPrimaryGroup + v3));
    if ( (_DWORD)v3 == 1 )
    {
      v8[6] = 4;
      *((_QWORD *)v8 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v8 + 9) = v8;
      *((_BYTE *)v8 + 80) = 0;
    }
    inserted = ObInsertObjectEx((char *)v8, 0LL, 0xF0003u, 0, 0, 0LL, &v13);
    LODWORD(v12) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v13);
      else
        *a1 = v13;
    }
    return (unsigned int)inserted;
  }
  return result;
}
