/*
 * XREFs of sub_140191720 @ 0x140191720
 * Callers:
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     sub_140066D1C @ 0x140066D1C (sub_140066D1C.c)
 *     sub_140070678 @ 0x140070678 (sub_140070678.c)
 *     sub_1400CC090 @ 0x1400CC090 (sub_1400CC090.c)
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 *     sub_140126F74 @ 0x140126F74 (sub_140126F74.c)
 */

void __fastcall sub_140191720(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 168)
    && (*(_BYTE *)(a1 + 144) & 0x40) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
      sub_1400DA194(v6, v5, a3);
    else
      sub_1400D9E8C(v6, v5, a3);
  }
  sub_140126F74(a1);
  v7 = *(void **)(*(_QWORD *)(a1 + 160) + 32LL);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) = 0LL;
  }
  sub_1400CC090(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  sub_1400D7168(a1, 3);
  do
  {
    if ( !*(_DWORD *)(a1 + 1080) && !*(_DWORD *)(a1 + 1084) )
      break;
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    ++v3;
  }
  while ( v3 < 0x258 );
  v8 = *(_QWORD *)(a1 + 992);
  if ( v8 )
  {
    sub_140070678(v8);
    ExFreePoolWithTag(**(PVOID **)(a1 + 992), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 992), 0x57526152u);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  sub_140066D1C(*(char **)(a1 + 1416));
  *(_QWORD *)(a1 + 1416) = 0LL;
}
