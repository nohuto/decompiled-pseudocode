/*
 * XREFs of sub_1400B620C @ 0x1400B620C
 * Callers:
 *     sub_1400AFCB4 @ 0x1400AFCB4 (sub_1400AFCB4.c)
 * Callees:
 *     sub_1400AA7B0 @ 0x1400AA7B0 (sub_1400AA7B0.c)
 *     sub_1400B1218 @ 0x1400B1218 (sub_1400B1218.c)
 *     sub_1400B25F4 @ 0x1400B25F4 (sub_1400B25F4.c)
 *     sub_1400B2878 @ 0x1400B2878 (sub_1400B2878.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400B620C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int16 v5; // si
  unsigned __int8 i; // di
  __int64 v7; // r15
  const char *v8; // r12
  __int64 v9; // rsi
  unsigned __int16 v10; // r11
  __int64 v11; // r9
  __int64 v12; // [rsp+68h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+110h] [rbp-80h] BYREF
  _BYTE Dst[176]; // [rsp+130h] [rbp-60h] BYREF
  unsigned __int16 v16; // [rsp+1F8h] [rbp+68h]
  unsigned __int16 v17; // [rsp+1FAh] [rbp+6Ah]

  result = 0LL;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 608);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(v3 + 112) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 104), &LockHandle);
    v4 = *(_QWORD *)(v2 + 608);
    v16 = *(_WORD *)(v4 + 112) - 1;
    if ( v16 >= 0xAu )
      v16 = 10;
    v5 = 0;
    for ( i = 0; i < 0xAu; ++i )
    {
      memset_0(Dst, 0, 0x68uLL);
      if ( sub_1400B1218(v4 + 104LL * i + 1264, (__int64)Dst) )
        break;
      ++v5;
    }
    v17 = v5;
    if ( (byte_140168DB8 != 1 || dword_140168DBC) && dword_140168DC0 < (unsigned int)dword_140168488 && dword_140168DBC )
      sub_1400B25F4(v2);
    else
      sub_1400B2878(v2);
    if ( (byte_1401694FA & 0x20) != 0 )
    {
      v7 = *(_QWORD *)(v2 + 608);
      v8 = (const char *)&dword_140149108;
      v9 = *(_QWORD *)(v2 + 16);
      if ( *(_QWORD *)(v9 + 752) )
        v8 = *(const char **)(v9 + 752);
      v12 = v2 + 160;
      v2 = a1;
      v11 = *(_QWORD *)(v9 + 128);
      v10 = *(_WORD *)(v7 + 198);
      sub_1400AA7B0(
        v9,
        104 * (unsigned int)v17,
        v7 + 224,
        *(_DWORD *)(v11 + 56),
        v11 + 1032,
        *(const wchar_t **)(v11 + 1016),
        *(const char **)(v9 + 792),
        *(_WORD *)(v9 + 4),
        *(_DWORD *)(a1 + 56),
        *(_BYTE *)(v9 + 744),
        v8,
        (const char *)(v9 + 800),
        (const char *)(v9 + 841),
        v12,
        (*(_BYTE *)(v9 + 136) & 2) != 0 ? 20 : 17,
        *(_DWORD *)(v7 + 112),
        *(_DWORD *)(v7 + 116),
        *(_DWORD *)(v7 + 204),
        *(_DWORD *)(v7 + 208),
        *(_WORD *)(v7 + 194),
        *(_BYTE *)(v7 + 120),
        *(_WORD *)(v7 + 122),
        v10 >> 1,
        (v10 >> 9) & 7,
        *(_DWORD *)(v7 + 184),
        *(_DWORD *)(v7 + 188),
        *(_DWORD *)(v7 + 192),
        *(_DWORD *)(v7 + 196),
        *(_DWORD *)(v7 + 200),
        *(_QWORD *)(v7 + 216),
        104 * v16,
        v7 + 224,
        104 * v17,
        v7 + 1264);
    }
    memset_0((void *)(*(_QWORD *)(v2 + 608) + 112LL), 0, 0x480uLL);
    memset_0((void *)(*(_QWORD *)(v2 + 608) + 1264LL), 0, 0x410uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
