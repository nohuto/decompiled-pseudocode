/*
 * XREFs of sub_140087860 @ 0x140087860
 * Callers:
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140087860(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 result; // rax
  _QWORD v16[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = a3[50];
  v4 = a1;
  v6 = a3[173];
  v7 = a3[174];
  v8 = (*(_DWORD *)(v3 + 184) & 0x80u) != 0 ? 0x28 : 0;
  v16[0] = v6;
  v9 = v8 + 184;
  v18 = v7;
  v10 = v9 + v4;
  if ( sub_1400179D0((__int64)a3) )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v14 + 8) + 272LL))(
               v14,
               v16,
               &v18,
               v10,
               0,
               0LL,
               0x80000000,
               &v17);
  else
    result = MmAllocateContiguousNodeMemory(v10, v11, v12, v13);
  if ( result )
  {
    *(_QWORD *)(result + 840) = 0LL;
    *(_QWORD *)(result + 808) = result + v4;
    *(_DWORD *)(result + 792) = v9;
    *(_QWORD *)(result + 24) = v17;
    *(_DWORD *)(result + 16) = v10;
  }
  return result;
}
