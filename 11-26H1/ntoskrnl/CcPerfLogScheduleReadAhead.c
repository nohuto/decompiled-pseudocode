/*
 * XREFs of CcPerfLogScheduleReadAhead @ 0x140489DDC
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CcPerfLogScheduleReadAhead(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5, char a6, int a7)
{
  __int64 v10; // rbx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  _QWORD v15[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-31h] BYREF
  int v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+64h] [rbp-15h]
  int v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  char v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+84h] [rbp+Bh]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]

  v10 = 0LL;
  v12 = 0LL;
  memset_0(v16, 0, 0x48uLL);
  if ( a2 )
  {
    v10 = a2[6];
    v12 = *(_QWORD *)(a2[5] + 8LL);
    v16[1] = a2[3];
  }
  v16[2] = *a3;
  v18 = a5;
  v16[0] = a1;
  v17 = a4;
  v13 = v25 & 0xFFFFFFFE | (a7 == 1);
  v25 = v13;
  if ( v10 )
  {
    v19 = *(_DWORD *)(v10 + 52);
    v20 = *(_QWORD *)(v10 + 56);
    v21 = *(_QWORD *)(v10 + 64);
    v25 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)v10 >> 15)) & 2;
    v23 = *(_DWORD *)(v10 + 48);
  }
  if ( v12 )
    v24 = *(_DWORD *)(v12 + 152);
  v22 = a6;
  v15[1] = 72LL;
  v15[0] = v16;
  return EtwTraceKernelEvent((int)v15, 1, 0x80020000, 5644, 5249282);
}
