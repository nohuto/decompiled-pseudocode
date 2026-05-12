/*
 * XREFs of sub_140124E74 @ 0x140124E74
 * Callers:
 *     sub_140088700 @ 0x140088700 (sub_140088700.c)
 * Callees:
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_140088944 @ 0x140088944 (sub_140088944.c)
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_140125CA0 @ 0x140125CA0 (sub_140125CA0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140124E74(union _SLIST_HEADER *SystemArgument2, __int64 a2, __int64 a3, _BYTE *a4)
{
  bool v6; // r15
  int v7; // ebx
  int v8; // r12d
  __int64 result; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  PHYSICAL_ADDRESS *v18; // rdi
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // r9
  LONGLONG QuadPart; // rcx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+54h] [rbp-1Ch]
  _DWORD *v27; // [rsp+58h] [rbp-18h] BYREF
  void *Dst[2]; // [rsp+60h] [rbp-10h] BYREF
  char v29; // [rsp+C0h] [rbp+50h] BYREF
  _BYTE *v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  v27 = 0LL;
  LOBYTE(v8) = 0;
  v29 = 0;
  *(_OWORD *)Dst = 0LL;
  result = sub_140088878(a3, 0, &v27, &v29);
  if ( (int)result < 0 )
    return result;
  v11 = v27;
  v12 = v27[2];
  v26 = v12;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      sub_140125CA0(SystemArgument2, v27, &v25);
      goto LABEL_35;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( a2 )
        v7 = *(_DWORD *)(a2 + 56);
      else
        v7 = v27[3];
      goto LABEL_35;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 17 )
            return 3221225474LL;
          if ( (*(_DWORD *)(SystemArgument2[37].Alignment + 96) & 0x200) == 0 )
            return 3221225488LL;
        }
        else
        {
          v8 = v27[9];
        }
        goto LABEL_35;
      }
      if ( a2 )
      {
        v7 = *(_DWORD *)(a2 + 56);
      }
      else
      {
        v7 = v27[3];
        v6 = v7 == 0;
        if ( !v7 )
          v7 = 0;
      }
      v8 = v27[9];
    }
    else if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v27[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
  }
  else
  {
    if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v27[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
    sub_140125CA0(SystemArgument2, v27, &v25);
  }
  if ( v6 )
    return 3221225485LL;
LABEL_35:
  if ( v11[5] < 0x1000u )
    return 3221225485LL;
  v18 = sub_1401225EC(SystemArgument2);
  if ( v18 )
  {
    v20 = sub_1400E736C((__int64)SystemArgument2, 0x1000u, v19, Dst, &Dst[1], 0);
    if ( v20 >= 0 )
    {
      memset_0(Dst[0], 0, 0x1000uLL);
      *(_DWORD *)(v18->QuadPart + 4256) |= 1u;
      *(_DWORD *)(v18->QuadPart + 4256) |= 0x20u;
      *(_DWORD *)(v18->QuadPart + 4256) |= 2u;
      *(_DWORD *)(v18->QuadPart + 4256) &= ~0x40u;
      *(_WORD *)(v18->QuadPart + 4252) = 0;
      *(_QWORD *)(v18->QuadPart + 4184) = a3;
      *(_QWORD *)(v18->QuadPart + 4192) = sub_140123DD0;
      *(_QWORD *)(v18->QuadPart + 4200) = v18;
      QuadPart = v18->QuadPart;
      if ( a2 )
        *(_QWORD *)(QuadPart + 4216) = a2;
      else
        *(_QWORD *)(QuadPart + 4224) = SystemArgument2[8].Alignment;
      v23 = v26;
      *(void **)(v18->QuadPart + 4160) = Dst[0];
      *(void **)(v18->QuadPart + 4168) = Dst[1];
      *(_DWORD *)(v18->QuadPart + 4248) = 4096;
      sub_1400BC9C0((__int64)SystemArgument2, v18->QuadPart + 4096, v23, v21, v24, v8, (__int64)Dst[1], v7, v25);
      if ( !v29 )
      {
LABEL_45:
        v20 = sub_140122670((__int64)SystemArgument2, v18);
        if ( v20 >= 0 )
        {
          *v30 = 0;
          return 259LL;
        }
        goto LABEL_47;
      }
      v20 = sub_140088944(a3);
      if ( v20 >= 0 )
      {
        *(_DWORD *)(v18->QuadPart + 4256) |= 0x400u;
        goto LABEL_45;
      }
    }
LABEL_47:
    _interlockedbittestandreset((volatile signed __int32 *)(v18->QuadPart + 4256), 3u);
    sub_140122C20(SystemArgument2, (__int64)v18);
    goto LABEL_48;
  }
  v20 = -1073741670;
LABEL_48:
  if ( Dst[0] )
    sub_1400F5FEC((__int64)SystemArgument2, 0x1000u, v19, (__int64)Dst[0], (__int64)Dst[1]);
  return (unsigned int)v20;
}
