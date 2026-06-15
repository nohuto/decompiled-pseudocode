/*
 * XREFs of sub_1400A2AB0 @ 0x1400A2AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400757EC @ 0x1400757EC (sub_1400757EC.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400A2CB8 @ 0x1400A2CB8 (sub_1400A2CB8.c)
 */

__int64 __fastcall sub_1400A2AB0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  EnterCriticalSection(v2);
  v4 = *(_QWORD *)(a1 + 8);
  v13 = v2;
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 56) )
  {
    v5 = -2005139437;
LABEL_9:
    sub_140048108();
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v7 = *(unsigned int *)(v6 + 164);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 88);
  if ( (v7 & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v6, v7, *(_QWORD *)(v8 + 88));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFE);
    v5 = -2005139387;
    goto LABEL_9;
  }
  if ( (v7 & 1) == 0 )
  {
    v5 = -2005139433;
    goto LABEL_9;
  }
  _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFC);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1);
  sub_1400757EC(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL), v7, v3);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_1400A2CB8(v11, v10, a1, 7LL);
LABEL_12:
  sub_140018FF0(&v13);
  return v5;
}
