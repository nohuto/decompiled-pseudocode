/*
 * XREFs of sub_1400825E0 @ 0x1400825E0
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14002BB98 @ 0x14002BB98 (sub_14002BB98.c)
 *     sub_14002BCF8 @ 0x14002BCF8 (sub_14002BCF8.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140048510 @ 0x140048510 (sub_140048510.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400825E0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v7; // rcx
  bool v8; // al
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // edx
  int v12; // r9d
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdi
  ULONGLONG TickCount64; // rax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  _BYTE v24[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 506;
LABEL_3:
    sub_14000C2A8(retaddr, v5, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v4);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 784) )
  {
    v4 = -2005139437;
    v5 = 507;
    goto LABEL_3;
  }
  sub_14000C2D0((__int64)v24, a1 + 96);
  v7 = *(_QWORD *)(a1 + 776);
  if ( !v7 )
    goto LABEL_13;
  v8 = sub_140048510(v7);
  v9 = retaddr;
  if ( v8 )
  {
    sub_14004E2C8(
      retaddr,
      515LL,
      (__int64)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      2289827891LL);
    v13 = sub_1400B6010(a1);
    v10 = v13;
    if ( v13 < 0 )
    {
      v12 = v13;
      v11 = 516;
LABEL_11:
      v9 = retaddr;
      goto LABEL_12;
    }
LABEL_13:
    if ( !*(_BYTE *)(a1 + 786) )
    {
      while ( 1 )
      {
        v14 = sub_14000DA4C();
        v16 = sub_14000DF30(0x18uLL, v14, v15);
        if ( v16 )
        {
          TickCount64 = GetTickCount64();
          v18 = qword_1400E7B60 + 1;
          *(_QWORD *)(v16 + 8) = TickCount64 + 10000;
          qword_1400E7B60 = v18;
          *(_QWORD *)(v16 + 16) = v18;
        }
        else
        {
          v16 = 0LL;
        }
        v19 = *(_BYTE *)(a1 + 787) == 0;
        *(_QWORD *)(a1 + 776) = v16;
        if ( v19 )
          break;
        if ( !v16 )
          Sleep(1u);
        if ( !*(_BYTE *)(a1 + 787) )
          break;
        if ( *(_QWORD *)(a1 + 776) )
          goto LABEL_23;
      }
      if ( !*(_QWORD *)(a1 + 776) )
      {
        v10 = -2147024882;
        v11 = 528;
        v12 = -2147024882;
        goto LABEL_11;
      }
LABEL_23:
      **(_QWORD **)(a1 + 776) = sub_14002BB98(a1 + 392);
      if ( **(_QWORD **)(a1 + 776) )
      {
        v23 = *(_DWORD **)(a1 + 1080);
        if ( *v23 > 5u )
        {
          v26 = a1;
          sub_14002BCF8((__int64)v23, byte_1400D28D4, v20, v21, (__int64)&v26);
        }
        v10 = 0;
        *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 16LL);
      }
      else
      {
        v10 = -2147024882;
        sub_14000C2A8(retaddr, 533, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", -2147024882);
        v22 = *(_QWORD *)(a1 + 776);
        if ( v22 )
          sub_14000E63C(v22);
        *(_QWORD *)(a1 + 776) = 0LL;
      }
      goto LABEL_32;
    }
    v10 = -2005139406;
    v11 = 523;
    v12 = -2005139406;
    goto LABEL_11;
  }
  v10 = -2005139409;
  v11 = 512;
  v12 = -2005139409;
LABEL_12:
  sub_14000C2A8(v9, v11, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v12);
LABEL_32:
  sub_140030124((__int64)v24);
  return v10;
}
