/*
 * XREFs of CmpRealignLogBuffers @ 0x140864520
 * Callers:
 *     CmpRmReDoPhase @ 0x140864830 (CmpRmReDoPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRealignLogBuffers(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 == 1 || *(_DWORD *)(a1 + 12) == 2 )
  {
    v9 = *(unsigned __int16 *)(a1 + 32);
    v5 = a1 + 64;
    *(_WORD *)(a1 + 34) = v9;
    *(_QWORD *)(a1 + 56) = v5 + v9;
    result = (unsigned int)(*(_DWORD *)(a1 + 4) - v9 - 64);
    *(_DWORD *)(a1 + 52) = result;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 12) == 3 || *(_DWORD *)(a1 + 12) == 4 || *(_DWORD *)(a1 + 12) == 5 )
  {
    v6 = *(unsigned __int16 *)(a1 + 32);
    v7 = a1 + 80;
    *(_WORD *)(a1 + 34) = v6;
    *(_QWORD *)(a1 + 40) = v7;
    v8 = v6 + v7;
    result = *(unsigned __int16 *)(a1 + 48);
    *(_WORD *)(a1 + 50) = result;
    *(_QWORD *)(a1 + 56) = v8;
    if ( v1 != 5 )
    {
      result += v8;
      *(_QWORD *)(a1 + 72) = result;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) == 6 || *(_DWORD *)(a1 + 12) == 7 )
    {
      *(_QWORD *)(a1 + 40) = a1 + 56;
      result = *(unsigned __int16 *)(a1 + 32);
      *(_WORD *)(a1 + 34) = result;
      return result;
    }
    result = (unsigned int)(*(_DWORD *)(a1 + 12) - 8);
    if ( *(_DWORD *)(a1 + 12) == 8 || *(_DWORD *)(a1 + 12) == 10 )
    {
      v4 = *(unsigned __int16 *)(a1 + 32);
      v5 = a1 + 64;
      *(_WORD *)(a1 + 34) = v4;
      result = v5 + v4;
      *(_QWORD *)(a1 + 56) = result;
LABEL_15:
      *(_QWORD *)(a1 + 40) = v5;
    }
  }
  return result;
}
