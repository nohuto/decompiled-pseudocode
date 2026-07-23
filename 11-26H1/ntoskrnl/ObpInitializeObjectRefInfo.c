/*
 * XREFs of ObpInitializeObjectRefInfo @ 0x1407C7D08
 * Callers:
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140475C38 (RtlStringCbCopyA.c)
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpGetObjectRefInfo @ 0x1407C7B64 (ObpGetObjectRefInfo.c)
 */

unsigned __int64 __fastcall ObpInitializeObjectRefInfo(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int *ObjectRefInfo; // r10
  __int64 v4; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  _DWORD *v6; // r10
  __int64 v7; // rax
  char v8; // cl

  result = (unsigned int)(*(_DWORD *)&ObpStackTraceLock.SavedApcStateFill[8] + 1);
  if ( (unsigned int)result <= ObpTracedObjectLimit )
  {
    ObjectRefInfo = ObpGetObjectRefInfo(a1);
    if ( !ObjectRefInfo )
    {
      result = ObpTraceAllocateMemory(9184LL);
      ObjectRefInfo = (unsigned int *)result;
      if ( !result )
        return result;
      v4 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      Flink = ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink;
      *(_QWORD *)(result + 8) = *((_QWORD *)&ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink->Flink + v4);
      *((_QWORD *)&Flink->Flink + v4) = result;
      *(_DWORD *)(result + 36) = 508;
    }
    ++*(_DWORD *)&ObpStackTraceLock.SavedApcStateFill[8];
    *(_QWORD *)ObjectRefInfo = a1;
    RtlStringCbCopyA(
      (NTSTRSAFE_PSTR)ObjectRefInfo + 16,
      0xFuLL,
      (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
    v7 = (unsigned int)v6[9];
    v6[8] = 0;
    memset_0(v6 + 10, 0, 18 * v7);
    result = (unsigned int)ObpTraceFlags;
    v8 = *(_BYTE *)(a1 + 25) | 1;
    *(_BYTE *)(a1 + 25) = v8;
    if ( (result & 0x40) != 0 )
      *(_BYTE *)(a1 + 25) = v8 | 2;
  }
  return result;
}
