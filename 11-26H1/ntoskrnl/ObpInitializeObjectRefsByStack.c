/*
 * XREFs of ObpInitializeObjectRefsByStack @ 0x1407C4D98
 * Callers:
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14047C2C8 (RtlStringCbCopyA.c)
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpCleanupObjectRefsByStack @ 0x1407C483C (ObpCleanupObjectRefsByStack.c)
 *     ObpGetObjectRefsByStack @ 0x140AB6664 (ObpGetObjectRefsByStack.c)
 */

__int64 __fastcall ObpInitializeObjectRefsByStack(__int64 a1)
{
  __int64 result; // rax
  __int64 ObjectRefsByStack; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // r8d
  _QWORD *v9; // rcx
  char v10; // cl

  result = (unsigned int)(LODWORD(stru_140F12D20.Padding[4]) + 1);
  if ( (unsigned int)result <= ObpTracedObjectLimit )
  {
    ObjectRefsByStack = ObpGetObjectRefsByStack();
    v7 = ObjectRefsByStack;
    if ( ObjectRefsByStack )
    {
      ObpCleanupObjectRefsByStack(ObjectRefsByStack, v4, v5, v6);
    }
    else
    {
      result = ObpTraceAllocateMemory(64LL);
      v7 = result;
      if ( !result )
        return result;
      v8 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      v9 = qword_140F13228;
      *(_QWORD *)(result + 8) = *((_QWORD *)qword_140F13228 + v8);
      v9[v8] = result;
    }
    ++LODWORD(stru_140F12D20.Padding[4]);
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)v7 = a1;
    RtlStringCbCopyA(
      (NTSTRSAFE_PSTR)(v7 + 16),
      0xFuLL,
      (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
    result = (unsigned int)ObpTraceFlags;
    v10 = *(_BYTE *)(a1 + 25) | 1;
    *(_BYTE *)(a1 + 25) = v10;
    if ( (result & 0x40) != 0 )
      *(_BYTE *)(a1 + 25) = v10 | 2;
  }
  return result;
}
