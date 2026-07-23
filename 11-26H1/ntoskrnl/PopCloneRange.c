/*
 * XREFs of PopCloneRange @ 0x140C0E3F0
 * Callers:
 *     PopSetRange @ 0x1404A9650 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *result; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 48), a2, a3);
  v8 = v7 + a3;
  v9 = 0LL;
  RtlClearBits((PRTL_BITMAP)(a1 + 32), v7, a3);
  v10 = *(_QWORD **)(a1 + 80);
  while ( 1 )
  {
    v11 = v10;
    if ( v10 == (_QWORD *)(a1 + 80) )
      break;
    v13 = v10;
    v14 = v10;
    v10 = (_QWORD *)*v10;
    v15 = v13[3];
    if ( (v7 < v15 || v7 > v13[4]) && (v8 < v15 || v8 > v13[4]) )
    {
      if ( v7 <= v15 )
      {
        if ( v15 <= v8 )
          goto LABEL_13;
        if ( v7 < v15 )
        {
          v10 = (_QWORD *)v10[1];
          break;
        }
      }
    }
    else
    {
LABEL_13:
      if ( v7 > v15 )
        v7 = v13[3];
      if ( v8 < v14[4] )
        v8 = v14[4];
      --*(_DWORD *)(a1 + 96);
      v16 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v14 )
        goto LABEL_5;
      v17 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v17 != v14 )
        goto LABEL_5;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( v9 )
        ExFreePoolWithTag(v14, 0x70616D48u);
      else
        v9 = v14;
    }
  }
  if ( v9 || (result = (_QWORD *)ExAllocatePool2(0x40uLL), (v9 = result) != 0LL) )
  {
    *((_DWORD *)v9 + 4) = a4;
    v9[3] = v7;
    v9[4] = v8;
    result = (_QWORD *)v10[1];
    if ( (_QWORD *)*result != v10 )
LABEL_5:
      __fastfail(3u);
    *v9 = v10;
    v9[1] = result;
    *result = v9;
    v10[1] = v9;
    ++*(_DWORD *)(a1 + 96);
  }
  else if ( *(int *)(a1 + 204) >= 0 )
  {
    *(_DWORD *)(a1 + 204) = -1073741670;
  }
  return result;
}
