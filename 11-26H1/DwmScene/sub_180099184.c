/*
 * XREFs of sub_180099184 @ 0x180099184
 * Callers:
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099184(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)a1 = *a2;
    v6 = a2[1];
    *(_QWORD *)(a1 + 8) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, a1 + 16);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 4;
  if ( !v7 )
    a3 = 4;
  *(_DWORD *)(a1 + 32) = a3;
  if ( v7 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  *(_DWORD *)(a1 + 36) = v8;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 49) = 0;
  *(_WORD *)(a1 + 53) = 0;
  *(_BYTE *)(a1 + 55) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v9 = a2[1];
  if ( v9 )
    sub_180010EC8(v9);
  return a1;
}
