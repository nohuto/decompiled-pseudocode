/*
 * XREFs of StorPortPauseDevice @ 0x14000F1B0
 * Callers:
 *     sub_1401B76C0 @ 0x1401B76C0 (sub_1401B76C0.c)
 * Callees:
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140071D0C @ 0x140071D0C (sub_140071D0C.c)
 */

char __fastcall StorPortPauseDevice(__int64 a1, unsigned __int8 a2, int *a3, unsigned __int8 a4, unsigned int a5)
{
  int *v5; // rsi
  int **v6; // rax
  int *v7; // r10
  unsigned int v8; // r12d
  int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r15d
  int v13; // ecx
  int *v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // r11
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r14
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v22; // [rsp+80h] [rbp+8h]

  HIBYTE(v22) = 0;
  v5 = 0LL;
  v6 = *(int ***)(a1 - 16);
  v7 = 0LL;
  v8 = a2;
  v9 = a1;
  v10 = a4;
  LODWORD(v11) = 1314275652;
  v12 = (unsigned __int8)a3;
  if ( v6 && *v6 )
  {
    v13 = **v6;
    if ( ((_BYTE)v6[31] & 1) != 0 )
    {
      if ( v13 == 1314275652 )
        v7 = *v6;
    }
    else if ( v13 == 1094997074 )
    {
      v5 = *v6;
    }
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v14 = v5;
    a3 = v5;
    if ( !v5 )
    {
      v14 = v7;
      a3 = v7;
    }
    if ( v14 )
    {
      if ( *v14 != 1314275652 )
      {
        v15 = v14[1233];
        if ( v15 )
        {
          v16 = *((_QWORD *)v14 + 617);
          if ( v16 )
          {
            v11 = v16 + 48LL * (_InterlockedIncrement(v14 + 1232) % v15);
            *(_DWORD *)v11 = 16;
            *(_QWORD *)(v11 + 40) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v11 + 8) = retaddr;
            *(_QWORD *)(v11 + 16) = a3;
            *(_QWORD *)(v11 + 24) = a5;
            *(_QWORD *)(v11 + 32) = v10 | ((v12 | (v8 << 8)) << 8);
          }
        }
      }
    }
  }
  if ( v5 )
  {
    v17 = v5[14];
  }
  else if ( v7 )
  {
    v17 = v7[14];
  }
  else
  {
    v17 = 255;
  }
  if ( (byte_1401694F0 & 4) != 0 )
    sub_140071D0C(v17, v11, (_BYTE)a3, v9, a5, v17, v8, v12, v10);
  if ( !v5 )
    return 0;
  LOBYTE(v22) = v8;
  BYTE1(v22) = v12;
  BYTE2(v22) = v10;
  v18 = sub_14001F350(v5, v22);
  v19 = v18;
  if ( !v18 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x20) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_140067F78(off_140168120->AttachedDevice, 16LL, &unk_140149070, v8, v12, v10);
    }
    return 0;
  }
  ++*(_DWORD *)(v18 + 2272);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x20) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140067F78(off_140168120->AttachedDevice, 17LL, &unk_140149070, v8, v12, v10);
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 1440), 134684676, 134684677) != 134684677
    || v19 == -1424 )
  {
    _InterlockedIncrement(&dword_1401688B8);
    if ( (qword_140168458 & 0x800) != 0 )
      sub_14000FB90((_DWORD)v5, 22, (_DWORD)retaddr, 594, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v19 + 1456) = 5;
  *(_DWORD *)(v19 + 1460) = v22;
  *(_DWORD *)(v19 + 1464) = a5;
  sub_14000F4A0(v19);
  sub_14000F5E0(v5 + 252);
  return 1;
}
