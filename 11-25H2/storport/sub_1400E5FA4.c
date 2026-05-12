/*
 * XREFs of sub_1400E5FA4 @ 0x1400E5FA4
 * Callers:
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400CA660 @ 0x1400CA660 (sub_1400CA660.c)
 *     sub_1400DE4B4 @ 0x1400DE4B4 (sub_1400DE4B4.c)
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 */

__int64 __fastcall sub_1400E5FA4(char *Context, char a2)
{
  __int64 v3; // r15
  __int64 *v5; // rdi
  unsigned __int16 v6; // bp
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx

  v3 = *((_QWORD *)Context + 16);
  if ( *((_DWORD *)Context + 143) == 2 )
    sub_1400E05A4(Context, 1);
  v5 = (__int64 *)(Context + 136);
  *((_QWORD *)Context + 17) &= ~0x40000000uLL;
  v6 = 0;
  v7 = (__int64 *)(Context + 136);
  if ( Context[742] )
  {
    do
    {
      if ( (int)sub_1400E4E9C((__int64)Context, *(_QWORD *)(*((_QWORD *)Context + 68) + 8LL * v6)) < 0 )
        *v5 |= 0x40000000uLL;
      ++v6;
    }
    while ( v6 < (unsigned __int8)Context[742] );
    v7 = (__int64 *)(Context + 136);
  }
  if ( *((_DWORD *)Context + 143) == 1 )
  {
    v8 = *v5;
    if ( a2 )
    {
      *v5 = v8 | 0x2000;
      sub_1400DE4B4((__int64)Context);
    }
    else
    {
      v9 = v8 | 0x1000;
      *v5 = v9;
      *v7 = v9 | 0x10000;
      sub_1400CA660(v3, (__int64)Context);
      *v7 |= 0x200uLL;
    }
  }
  *v7 &= ~0x400uLL;
  v10 = *v7;
  *((_DWORD *)Context + 268) &= ~0x20u;
  *((_QWORD *)Context + 135) = 0LL;
  *v7 = v10 & 0xFFFFFFFFDFFFF7FFuLL;
  *((_QWORD *)Context + 136) = 0LL;
  KeClearEvent((PRKEVENT)(Context + 184));
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 18), (PIO_WORKITEM_ROUTINE)sub_1400E22C0, DelayedWorkQueue, Context);
  v11 = *((_DWORD *)Context + 269);
  if ( v11 )
  {
    KeClearEvent((PRKEVENT)(Context + 208));
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 19), (PIO_WORKITEM_ROUTINE)sub_1400E2610, CriticalWorkQueue, Context);
    v11 = *((_DWORD *)Context + 269);
  }
  sub_1400A870C(
    (__int64)Context,
    1,
    4,
    (__int64)L"Controller operations started",
    L"Reconnect",
    a2 != 0,
    L"KeepAliveTimeout",
    v11,
    L"CQT",
    *(_WORD *)(*((_QWORD *)Context + 74) + 386LL),
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  return 0LL;
}
