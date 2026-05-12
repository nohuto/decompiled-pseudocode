/*
 * XREFs of sub_140191238 @ 0x140191238
 * Callers:
 *     sub_140193A88 @ 0x140193A88 (sub_140193A88.c)
 * Callees:
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_140191238(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  _DWORD *v8; // rcx
  int v10; // edx
  unsigned int v11; // eax
  PHYSICAL_ADDRESS *v12; // rdi
  __int64 v13; // r8
  int v14; // r15d
  unsigned int v15; // r8d
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a2[23];
  v16 = 0LL;
  if ( a3 )
    *a3 = 1;
  v8 = (_DWORD *)a2[3];
  a2[7] = 0LL;
  if ( !v8 )
    return 3221225485LL;
  v10 = v8[1];
  if ( v10 )
  {
    if ( v10 == 1 )
      return 0LL;
    else
      return 3221225659LL;
  }
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < 0x28 )
  {
    if ( v11 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *v8 = 40;
      v8[1] = 40;
      a2[7] = 8LL;
    }
    return v4;
  }
  v12 = sub_1401225EC(*(union _SLIST_HEADER **)(a1 + 1136));
  if ( !v12 )
  {
    v14 = -1073741670;
LABEL_22:
    if ( (_QWORD)v16 )
      sub_1400F5FEC(*(_QWORD *)(a1 + 1136), 0x200u, v13, v16, *((__int64 *)&v16 + 1));
    return (unsigned int)v14;
  }
  v14 = sub_1400E736C(*(_QWORD *)(a1 + 1136), 0x200u, v13, (void **)&v16, (_QWORD *)&v16 + 1, 0);
  if ( v14 < 0 )
    goto LABEL_21;
  LOBYTE(v15) = 2;
  *(_DWORD *)(v12->QuadPart + 4256) |= 1u;
  *(_DWORD *)(v12->QuadPart + 4256) |= 0x20u;
  *(_DWORD *)(v12->QuadPart + 4256) |= 2u;
  *(_DWORD *)(v12->QuadPart + 4256) &= ~0x40u;
  *(_WORD *)(v12->QuadPart + 4252) = 0;
  *(_QWORD *)(v12->QuadPart + 4184) = a2;
  *(_QWORD *)(v12->QuadPart + 4224) = a1;
  *(_QWORD *)(v12->QuadPart + 4192) = sub_1400D9540;
  *(_QWORD *)(v12->QuadPart + 4200) = v12;
  *(_OWORD *)(v12->QuadPart + 4160) = v16;
  *(_DWORD *)(v12->QuadPart + 4248) = 512;
  sub_1400BC8A4(
    *(_QWORD *)(a1 + 1136),
    v12->QuadPart + 4096,
    v15,
    0x200u,
    *((__int64 *)&v16 + 1),
    -1,
    0LL,
    0,
    v12->QuadPart,
    v12[1].QuadPart);
  v14 = sub_140122670(*(_QWORD *)(a1 + 1136), v12);
  if ( v14 < 0 )
  {
LABEL_21:
    _interlockedbittestandreset((volatile signed __int32 *)(v12->QuadPart + 4256), 3u);
    sub_140122C20(*(union _SLIST_HEADER **)(a1 + 1136), (__int64)v12);
    goto LABEL_22;
  }
  if ( a3 )
    *a3 = 0;
  return 259LL;
}
