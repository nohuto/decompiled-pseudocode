/*
 * XREFs of CmGetKeyFlags @ 0x140AEE0F8
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x140A624B0 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKeyFlags(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 PrevElement; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 184) & 0xF;
  v8 = 0LL;
  if ( a2 )
  {
    v5 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v5, &v8);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 7 )
        return *(unsigned int *)(v7 + 88);
    }
  }
  return v3;
}
