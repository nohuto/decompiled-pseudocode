/*
 * XREFs of sub_180095530 @ 0x180095530
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180095530(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  _QWORD *v4; // rdx
  _QWORD *v6; // rbp
  _BYTE *v7; // rsi
  __int64 result; // rax

  v2 = (_BYTE *)(a1 + 68);
  v4 = (_QWORD *)(a1 + 8);
  v6 = (_QWORD *)(a1 + 24);
  v7 = (_BYTE *)(a1 + 68);
  if ( *(_BYTE *)(a1 + 68) )
    goto LABEL_4;
  if ( *v6 != *v4 )
  {
    v7 = (_BYTE *)(a1 + 68);
LABEL_4:
    sub_18003AC0C((_QWORD *)(a1 + 24), v4);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 152LL))(a2, v6);
  }
  if ( *v2 || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
    v2 = v7;
  }
  *v2 = 0;
  return result;
}
