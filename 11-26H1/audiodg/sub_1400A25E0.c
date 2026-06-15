/*
 * XREFs of sub_1400A25E0 @ 0x1400A25E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_14009D660 @ 0x14009D660 (sub_14009D660.c)
 *     sub_1400A2CB8 @ 0x1400A2CB8 (sub_1400A2CB8.c)
 */

__int64 __fastcall sub_1400A25E0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  v3 = 0;
  EnterCriticalSection(v2);
  v4 = *(_QWORD *)(a1 + 8);
  v12 = v2;
  if ( !*(_DWORD *)(v4 + 56) )
  {
    v3 = -2005139437;
LABEL_9:
    sub_140048108();
    goto LABEL_12;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v6 = *(unsigned int *)(v5 + 164);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  if ( (v6 & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v5, v6, *(_QWORD *)(v7 + 88));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v8 + 164), 0xFFFFFFFE);
    v3 = -2005139387;
    goto LABEL_9;
  }
  if ( (v6 & 1) != 0 )
  {
    v3 = -2005139434;
    goto LABEL_9;
  }
  _InterlockedExchange64((volatile __int64 *)(v8 + 24), 0LL);
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 16LL), 0LL);
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 152LL), 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = 0LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1);
  sub_14009D660(*(_QWORD *)(a1 + 8));
  if ( (byte_1400E8401 & 4) != 0 )
    sub_1400A2CB8(v10, v9, a1, 8LL);
LABEL_12:
  sub_140018FF0(&v12);
  return v3;
}
