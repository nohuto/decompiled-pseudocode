/*
 * XREFs of PopSetupSleepNotifies @ 0x140C0C700
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     PopMoveList @ 0x140C0C7E8 (PopMoveList.c)
 */

__int64 __fastcall PopSetupSleepNotifies(__int64 a1)
{
  int i; // r11d
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 result; // rax

  for ( i = 4; i >= 0; i = v8 - 1 )
  {
    v3 = a1 + 88 + 72LL * i;
    v4 = a1 + 72 + 72LL * i;
    PopMoveList(v4, v3);
    PopMoveList(v4, a1 + 120 + 8 * v5);
    PopMoveList(v4, a1 + 104 + 8 * v6);
    v9 = *(_QWORD **)(v7 - 16);
    while ( v9 != (_QWORD *)v4 )
    {
      v10 = v9;
      v11 = v9;
      v9 = (_QWORD *)*v9;
      *((_DWORD *)v10 + 25) = *((_DWORD *)v10 + 24);
      v12 = *((_DWORD *)v10 + 22);
      *((_DWORD *)v10 + 23) = v12;
      if ( !v12 )
      {
        if ( (_QWORD *)v9[1] != v10
          || (v13 = (_QWORD *)v10[1], (_QWORD *)*v13 != v10)
          || (*v13 = v9, v9[1] = v13, v14 = *(_QWORD **)(v7 + 8), *v14 != v3) )
        {
          __fastfail(3u);
        }
        *v11 = v7;
        v10[1] = v14;
        *v14 = v10;
        *(_QWORD *)(v7 + 8) = v10;
      }
    }
    result = *(unsigned int *)(v7 - 24);
    *(_DWORD *)(v7 - 20) = result;
  }
  return result;
}
