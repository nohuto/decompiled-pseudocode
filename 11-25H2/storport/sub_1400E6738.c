/*
 * XREFs of sub_1400E6738 @ 0x1400E6738
 * Callers:
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

BOOLEAN __fastcall sub_1400E6738(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  union _LARGE_INTEGER v10; // rsi
  union _LARGE_INTEGER v11; // rbx
  union _LARGE_INTEGER v12; // rax
  BOOLEAN result; // al
  struct _KEVENT Event; // [rsp+A8h] [rbp-80h] BYREF
  struct _KDPC Dpc; // [rsp+C8h] [rbp-60h] BYREF
  struct _KTIMER Dst; // [rsp+108h] [rbp-20h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+168h] [rbp+40h] BYREF

  memset_0(&Dst, 0, sizeof(Dst));
  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  KeInitializeTimer(&Dst);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)sub_1400E0040, &Event);
  v2 = *(_DWORD *)(a1 + 1076);
  v3 = v2;
  if ( !v2 )
    v3 = 120000LL;
  v4 = *(_QWORD *)(a1 + 592);
  if ( (*(_DWORD *)(v4 + 96) & 0x40) != 0 )
    v5 = 3 * v3;
  else
    v5 = 2 * v3;
  v6 = *(unsigned __int16 *)(v4 + 386);
  if ( (_WORD)v6 )
    v7 = v6 + v5;
  else
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 96) + 56LL) + v5;
  sub_1400A870C(
    a1,
    1,
    4,
    (__int64)L"Using time-based recovery",
    L"WaitTimeMs",
    v7,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
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
  v8 = -10000 * v7;
  Timeout.QuadPart = -10000000LL;
  KeSetCoalescableTimer(&Dst, (LARGE_INTEGER)v8, 0, 1u, &Dpc);
  while ( v8 )
  {
    v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    if ( !v9 )
      break;
    if ( v9 == 258 )
    {
      v10.QuadPart = -v8;
      v11.QuadPart = -Timeout.QuadPart;
      Timeout = v11;
      v12 = v11;
      if ( v10.QuadPart <= v11.QuadPart )
        break;
      if ( (*(_DWORD *)(a1 + 136) & 0x400LL) != 0 )
      {
        result = KeCancelTimer(&Dst);
        if ( result )
          return result;
        v12 = Timeout;
      }
      v8 = v11.QuadPart - v10.QuadPart;
      Timeout.QuadPart = -v12.QuadPart;
    }
  }
  *(_QWORD *)(a1 + 136) &= ~0x100uLL;
  return sub_1400A870C(
           a1,
           1,
           4,
           (__int64)L"Previous association has been terminated",
           (void *)&dword_140149108,
           0,
           &dword_140149108,
           0,
           &dword_140149108,
           0,
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
}
