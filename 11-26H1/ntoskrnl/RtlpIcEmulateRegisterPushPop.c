/*
 * XREFs of RtlpIcEmulateRegisterPushPop @ 0x140C5D310
 * Callers:
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 * Callees:
 *     RtlpIcAccessMemory @ 0x140C5C198 (RtlpIcAccessMemory.c)
 *     RtlpIcGetRegisterAddressByIndex @ 0x140C5D4A0 (RtlpIcGetRegisterAddressByIndex.c)
 */

__int64 __fastcall RtlpIcEmulateRegisterPushPop(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE *RegisterAddressByIndex; // rax
  __int64 v7; // r10
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // esi
  volatile void *v12; // r8

  if ( a2 )
  {
    RegisterAddressByIndex = (_BYTE *)RtlpIcGetRegisterAddressByIndex(a1, a2, a3 & 7, *(_BYTE *)(a1 + 25) & 1, 1);
    v8 = *(_BYTE *)(v7 + 1) >> 3;
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL);
    v10 = v9 - v8;
    v11 = a3 & 8;
    v12 = (volatile void *)(v9 - v8);
    if ( v11 )
      v12 = *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL);
    result = RtlpIcAccessMemory(a2, RegisterAddressByIndex, v12, *(_BYTE *)(a2 + 16), 0, v8, v11 == 0);
    if ( (int)result >= 0 )
    {
      if ( v11 )
        v10 = v8 + v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) = v10;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1) != 16 )
      *(_BYTE *)(a1 + 1) = 64;
    return 0LL;
  }
  return result;
}
