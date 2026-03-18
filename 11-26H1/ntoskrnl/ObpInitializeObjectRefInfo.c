/*
 * XREFs of ObpInitializeObjectRefInfo @ 0x1407C4CA8
 * Callers:
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14047C2C8 (RtlStringCbCopyA.c)
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpGetObjectRefInfo @ 0x1407C4B04 (ObpGetObjectRefInfo.c)
 */

__int64 __fastcall ObpInitializeObjectRefInfo(__int64 a1)
{
  __int64 result; // rax
  unsigned int *ObjectRefInfo; // r10
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _DWORD *v6; // r10
  __int64 v7; // rax
  char v8; // cl

  result = (unsigned int)(LODWORD(stru_140F12D20.Padding[4]) + 1);
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
      v5 = qword_140F13228;
      *(_QWORD *)(result + 8) = *((_QWORD *)qword_140F13228 + v4);
      v5[v4] = result;
      *(_DWORD *)(result + 36) = 508;
    }
    ++LODWORD(stru_140F12D20.Padding[4]);
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
