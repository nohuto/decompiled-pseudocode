/*
 * XREFs of sub_1400A2870 @ 0x1400A2870
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_1400756AC @ 0x1400756AC (sub_1400756AC.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400A2CB8 @ 0x1400A2CB8 (sub_1400A2CB8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A2870(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  EnterCriticalSection(v2);
  v3 = *(_QWORD *)(a1 + 8);
  v14 = v2;
  if ( !*(_DWORD *)(v3 + 56) )
  {
    v4 = -2005139437;
LABEL_3:
    sub_140048108();
    goto LABEL_4;
  }
  sub_1400B6010(*(_QWORD *)(a1 + 8));
  v4 = v8;
  if ( v8 < 0 )
    goto LABEL_3;
  sub_1400756AC(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL), v6, v7);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v10 = *(unsigned int *)(v9 + 164);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 88);
  if ( (v10 & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v9, v10, *(_QWORD *)(v11 + 88));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFE);
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( (v10 & 1) != 0 )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  v4 = 0;
  _InterlockedOr((volatile signed __int32 *)(v12 + 164), 1u);
  v13 = (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_1400A2CB8(v13, v10, a1, 6LL);
LABEL_4:
  sub_140018FF0(&v14);
  return v4;
}
