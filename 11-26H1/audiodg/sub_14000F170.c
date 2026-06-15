/*
 * XREFs of sub_14000F170 @ 0x14000F170
 * Callers:
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 * Callees:
 *     sub_140006898 @ 0x140006898 (sub_140006898.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 *     sub_14000FF84 @ 0x14000FF84 (sub_14000FF84.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000F170(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // r15
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v6 = *(__int64 **)(a1 + 104);
  do
  {
    v7 = v6;
    if ( !v6 )
      goto LABEL_3;
    v9 = v6[2];
    v6 = (__int64 *)*v6;
  }
  while ( *(_QWORD *)v9 != a2 );
  if ( !v9 )
  {
LABEL_3:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289827866LL;
  }
  if ( *(_QWORD *)(v9 + 24) )
    sub_1400B6010(*(_QWORD *)(v9 + 40));
  v10 = *(_QWORD *)(a1 + 208);
  if ( *(_DWORD *)v10 > 4u
    && (*(_DWORD *)(v10 + 16) & 0x100LL) != 0
    && (*(_QWORD *)(v10 + 24) & 0x100LL) == *(_QWORD *)(v10 + 24) )
  {
    v13 = a2;
    v14 = v9 + 312;
    sub_140006898(v10, byte_1400D2443, (__int64)v6, v5, &v14, (__int64)&v13);
  }
  sub_14000C3C4((__int64 **)(a1 + 104), v7);
  while ( *(_QWORD *)(v9 + 128) )
  {
    v11 = *(_QWORD *)sub_14000FFB0(v9 + 120, 0LL);
    sub_14000C544((_QWORD *)(v9 + 120), 0LL);
    --*(_DWORD *)(v11 + 12);
    sub_14000FF84(v11);
  }
  while ( *(_QWORD *)(v9 + 160) )
  {
    v12 = *(_QWORD *)sub_14000FFB0(v9 + 152, 0LL);
    sub_14000C544((_QWORD *)(v9 + 152), 0LL);
    --*(_DWORD *)(v12 + 12);
    sub_14000FF84(v12);
  }
  CoDisconnectObject(*(LPUNKNOWN *)v9, 0);
  sub_14000DC7C(v9);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
