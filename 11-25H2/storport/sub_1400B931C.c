/*
 * XREFs of sub_1400B931C @ 0x1400B931C
 * Callers:
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 * Callees:
 *     sub_140055B14 @ 0x140055B14 (sub_140055B14.c)
 *     sub_1400ACE54 @ 0x1400ACE54 (sub_1400ACE54.c)
 *     sub_1400B34DC @ 0x1400B34DC (sub_1400B34DC.c)
 *     sub_1400B37EC @ 0x1400B37EC (sub_1400B37EC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400B931C(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  unsigned __int8 v4; // dl
  char v5; // al
  char v6; // dl
  unsigned __int16 v7; // r8
  __int16 v8; // r9
  unsigned __int8 v9; // r10
  __int64 v10; // r14
  const wchar_t *v11; // rsi
  int v12; // [rsp+80h] [rbp-138h]
  int v13; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  unsigned __int16 v15; // [rsp+188h] [rbp-30h]
  unsigned __int16 v16; // [rsp+18Ah] [rbp-2Eh]

  result = 0LL;
  v2 = (_WORD *)(a1 + 2480);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 2480) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2472), &LockHandle);
    v15 = *v2 - 1;
    if ( v15 >= 0xAu )
      v15 = 10;
    v4 = 0;
    do
    {
      v5 = sub_140055B14((_BYTE *)(a1 + 8 * (v4 + 4LL * v4 + 367)));
      if ( v5 == (_BYTE)v8 )
        break;
      v7 += v8;
      v4 = v8 + v6;
    }
    while ( v4 < v9 );
    v16 = v7;
    if ( byte_140168DB8 == (_BYTE)v8 && !dword_140168DBC || dword_140168DC0 >= (unsigned int)dword_140168488 )
      goto LABEL_18;
    if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
      dword_140168DBC = -1;
    if ( *(_BYTE *)(a1 + 2124) )
      dword_140168DBC = -1;
    if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
      dword_140168DBC = -1;
    if ( dword_140168DBC )
      sub_1400B34DC(a1);
    else
LABEL_18:
      sub_1400B37EC(a1);
    if ( (byte_1401694F4 & 8) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = (const wchar_t *)&unk_140149394;
      if ( *(_QWORD *)(v10 + 5080) )
        v11 = *(const wchar_t **)(v10 + 5080);
      sub_1400ACE54(
        40 * (unsigned int)v15,
        a1 + 2536,
        40 * (unsigned int)v16,
        *(_DWORD *)(v10 + 56),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a1 + 2104,
        v10 + 5064,
        *(_DWORD *)(a1 + 3432),
        *(const wchar_t **)(v10 + 4720),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v11,
        v12,
        v13,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 2484),
        *(_DWORD *)(a1 + 2488),
        *(_DWORD *)(a1 + 2492),
        *(_DWORD *)(a1 + 2264),
        *(_DWORD *)(a1 + 1400),
        *(_DWORD *)(a1 + 2508),
        *(_DWORD *)(a1 + 2512),
        *(_BYTE *)(a1 + 2501),
        *(_BYTE *)(a1 + 2496),
        *(_BYTE *)(a1 + 2497),
        *(_BYTE *)(a1 + 2498),
        *(_BYTE *)(a1 + 2499),
        *(_BYTE *)(a1 + 2500),
        *(_DWORD *)(a1 + 2504),
        *(_DWORD *)(a1 + 2516),
        *(_QWORD *)(a1 + 2520),
        40 * v15,
        a1 + 2536,
        40 * v16,
        a1 + 2936);
    }
    memset_0(v2, 0, 0x1C8uLL);
    memset_0((void *)(a1 + 2936), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
