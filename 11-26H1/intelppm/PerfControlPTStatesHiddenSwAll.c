/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x14000E930
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChangeHidden @ 0x14000E804 (InvokePTStateChangeHidden.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  _QWORD *v13; // r8
  __int64 v14; // [rsp+30h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    return;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 32LL * (unsigned int)*a2;
  v14 = *a2;
  v8 = *(_QWORD *)(v6 + 56);
  v9 = v8 + v7;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 40) != v10 )
  {
    if ( v10 == 1 )
    {
      if ( *(_DWORD *)(v6 + 72) )
      {
        v12 = *(_DWORD *)(v6 + 68);
LABEL_9:
        v13 = (_QWORD *)(v8 + 32LL * v12);
        if ( v13 )
          InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 84LL), v6, v13, SHIDWORD(v5));
      }
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 68);
      if ( v11 )
      {
        v12 = v11 - 1;
        goto LABEL_9;
      }
    }
  }
  InvokePTStateChangeHidden(*(unsigned int *)(*(_QWORD *)a1 + 84LL), v6, (_QWORD *)v9, SHIDWORD(v14));
  *(_DWORD *)(a1 + 48) = v5;
  *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 44) = *(unsigned __int8 *)(v9 + 24);
}
