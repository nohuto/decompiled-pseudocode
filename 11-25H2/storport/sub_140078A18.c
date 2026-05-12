/*
 * XREFs of sub_140078A18 @ 0x140078A18
 * Callers:
 *     sub_140042620 @ 0x140042620 (sub_140042620.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400766D8 @ 0x1400766D8 (sub_1400766D8.c)
 *     sub_140077720 @ 0x140077720 (sub_140077720.c)
 *     sub_1400778B0 @ 0x1400778B0 (sub_1400778B0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140078A18(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int16 *v13; // rcx
  __int16 v14; // r9
  __int16 v15; // r10
  __int64 v16; // r8
  const wchar_t *v17; // r8
  _DWORD *v18; // rcx
  __int128 v20; // [rsp+B8h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-48h] BYREF
  char v24; // [rsp+F8h] [rbp-40h]
  __int128 v25; // [rsp+100h] [rbp-38h] BYREF
  int v26; // [rsp+110h] [rbp-28h]
  char v27; // [rsp+114h] [rbp-24h]
  __int128 v28; // [rsp+118h] [rbp-20h] BYREF
  __int128 v29; // [rsp+128h] [rbp-10h]
  __int64 v30; // [rsp+138h] [rbp+0h]
  char v31; // [rsp+140h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = -1073741436;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  if ( *(_DWORD *)(a1 + 160) )
  {
    v5 = *(_QWORD **)(a1 + 144);
    if ( v5 != (_QWORD *)(a1 + 144) )
    {
      do
      {
        v6 = v5 - 8;
        if ( a2 )
          v7 = sub_140077720(v6);
        else
          v7 = sub_1400778B0((__int64)v6);
        v4 = v7;
        if ( v7 == 259 )
        {
          v8 = *(_QWORD *)(a1 + 6144);
          if ( a2 )
            ++*(_DWORD *)(v8 + 4);
          else
            ++*(_DWORD *)(v8 + 12);
        }
        else if ( v7 != -1073741823 )
        {
          goto LABEL_15;
        }
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != (_QWORD *)(a1 + 144) );
      if ( v4 == 259 || v4 == -1073741823 )
        goto LABEL_21;
LABEL_15:
      if ( v4 != -1073741436 )
      {
        v9 = *(_DWORD **)(a1 + 6144);
        if ( a2 )
        {
          if ( v9[1] )
            *v9 |= 0x10u;
        }
        else if ( v9[3] )
        {
          *v9 |= 8u;
        }
      }
    }
  }
LABEL_21:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( byte_140168DAA && v4 != 259 && v4 != -1073741436 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v20 = 0LL;
    v26 = 0;
    v28 = 0LL;
    v27 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v11 = *(_OWORD *)(a1 + 5064);
    v31 = 0;
    v23 = 0LL;
    v22 = v11;
    v24 = 0;
    v25 = 0LL;
    sub_1400403EC(v10, (__int64)&v20);
    v13 = *(__int16 **)(a1 + 6000);
    if ( v13 )
    {
      v28 = *(_OWORD *)(v13 + 12);
      v29 = *(_OWORD *)(v13 + 20);
      v30 = *((_QWORD *)v13 + 7);
      v23 = *((_QWORD *)v13 + 8);
      v25 = *(_OWORD *)(v13 + 2);
      v26 = *((_DWORD *)v13 + 5);
    }
    if ( (byte_1401694F4 & 1) != 0 )
    {
      if ( v13 )
      {
        v14 = v13[1];
        v15 = *v13;
      }
      else
      {
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
      }
      v16 = *(_QWORD *)(a1 + 6160);
      if ( !v16 || (v17 = *(const wchar_t **)(v16 + 24)) == 0LL )
        v17 = (const wchar_t *)&unk_140149394;
      v18 = *(_DWORD **)(a1 + 6144);
      sub_1400766D8(
        (__int64)v18,
        v12,
        (__int64)v17,
        *(_DWORD *)(a1 + 56),
        (__int64)&v22,
        *((const wchar_t **)&v20 + 1),
        (const char *)&v25,
        v17,
        v15,
        v14,
        (const char *)&v28,
        (const char *)&v23,
        a2,
        *v18,
        *(_DWORD *)(a1 + 160),
        v18[1],
        v18[3],
        v18[2],
        v18[4],
        v18[5],
        v18[6],
        v4);
    }
  }
  return v4;
}
