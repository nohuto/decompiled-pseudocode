/*
 * XREFs of sub_1800104EC @ 0x1800104EC
 * Callers:
 *     sub_180010AC0 @ 0x180010AC0 (sub_180010AC0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000E16C @ 0x18000E16C (sub_18000E16C.c)
 *     sub_18000E1E4 @ 0x18000E1E4 (sub_18000E1E4.c)
 *     sub_180010238 @ 0x180010238 (sub_180010238.c)
 *     sub_18001025C @ 0x18001025C (sub_18001025C.c)
 *     sub_180010FC0 @ 0x180010FC0 (sub_180010FC0.c)
 *     sub_1800110DC @ 0x1800110DC (sub_1800110DC.c)
 */

__int64 __fastcall sub_1800104EC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rsi
  _DWORD *v16; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v5 = sub_180010238(*(_QWORD *)(a2 + 128));
  v6 = sub_18001025C(*(_QWORD *)(v4 + 120)) + v5;
  v7 = sub_18001025C(*(_QWORD *)(a2 + 96)) + v6;
  v8 = sub_18001025C(*(_QWORD *)(a2 + 24)) + v7;
  v9 = sub_180010238(*(_QWORD *)(a2 + 112)) + v8;
  v10 = sub_180010238(*(_QWORD *)(a2 + 88)) + v9;
  v11 = sub_180010238(*(_QWORD *)(a2 + 72)) + v10;
  v12 = sub_180010238(*(_QWORD *)(a2 + 56)) + v11;
  v13 = sub_180010238(*(_QWORD *)(a2 + 48)) + v12;
  v14 = sub_180010238(*(_QWORD *)(a2 + 40)) + v13;
  v15 = (_QWORD *)(a1 + 152);
  v16 = *(_DWORD **)(a1 + 152);
  if ( !v16 || *v16 != 1 || *(_QWORD *)(a1 + 160) < v14 )
  {
    sub_1800110DC(a1 + 152);
    if ( v14 )
    {
      ProcessHeap = GetProcessHeap();
      v18 = HeapAlloc(ProcessHeap, 0, v14 + 4);
      if ( v18 )
      {
        *v18 = 0;
        sub_180010FC0(a1 + 152, v18, v14);
      }
    }
    else
    {
      sub_1800110DC(a1 + 152);
    }
  }
  v19 = *v15 + 4LL;
  v20 = v19 & -(__int64)(*v15 != 0LL);
  v21 = v20 + *(_QWORD *)(a1 + 160);
  result = -v20;
  v23 = v21 & -(__int64)(v20 != 0);
  if ( v20 )
  {
    v24 = sub_18000E1E4(
            v19 & -(__int64)(*v15 != 0LL),
            v21 & -(__int64)((v19 & -(__int64)(*v15 != 0LL)) != 0),
            *(_WORD **)(a2 + 24),
            (_QWORD *)(a1 + 24));
    v25 = sub_18000E16C(v24, v23, *(_BYTE **)(a2 + 40), (_QWORD *)(a1 + 40));
    v26 = sub_18000E16C(v25, v23, *(_BYTE **)(a2 + 48), (_QWORD *)(a1 + 48));
    v27 = sub_18000E16C(v26, v23, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 56));
    v28 = sub_18000E16C(v27, v23, *(_BYTE **)(a2 + 72), (_QWORD *)(a1 + 72));
    v29 = sub_18000E16C(v28, v23, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 128));
    v30 = sub_18000E16C(v29, v23, *(_BYTE **)(a2 + 112), (_QWORD *)(a1 + 112));
    v31 = sub_18000E1E4(v30, v23, *(_WORD **)(a2 + 120), (_QWORD *)(a1 + 120));
    v32 = sub_18000E16C(v31, v23, *(_BYTE **)(a2 + 88), (_QWORD *)(a1 + 88));
    v33 = (void *)sub_18000E1E4(v32, v23, *(_WORD **)(a2 + 96), (_QWORD *)(a1 + 96));
    return (__int64)memset(v33, 0, v23 - (_QWORD)v33);
  }
  return result;
}
