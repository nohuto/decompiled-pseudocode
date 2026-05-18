/*
 * XREFs of sub_180099624 @ 0x180099624
 * Callers:
 *     sub_18009A398 @ 0x18009A398 (sub_18009A398.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18009980C @ 0x18009980C (sub_18009980C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180099624(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, &v8, 0LL);
    v6 = v8;
    v5 = (_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v8;
    if ( v6 == 2 )
    {
      *(_OWORD *)(a1 + 40) = v9;
    }
    else if ( v6 != 5 )
    {
      goto LABEL_8;
    }
    sub_18009980C(a1);
    goto LABEL_8;
  }
  v5 = (_DWORD *)(a1 + 36);
LABEL_8:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *v5;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 40);
  return result;
}
