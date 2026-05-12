/*
 * XREFs of sub_140179544 @ 0x140179544
 * Callers:
 *     sub_140179A60 @ 0x140179A60 (sub_140179A60.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140179544(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rdi
  __int64 v8; // r14
  unsigned __int16 v9; // bx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  int v12; // ebx
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edi
  unsigned __int16 v17; // r13
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _BYTE *v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v31; // rbp
  int v32; // eax
  _QWORD *v33; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  _QWORD *v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+50h] [rbp-58h]
  char v40; // [rsp+B8h] [rbp+10h]
  __int64 v41; // [rsp+C0h] [rbp+18h]

  v41 = a3;
  v5 = (_QWORD *)(a2 + 24);
  v6 = *(_QWORD **)(a2 + 24);
  v35 = 0LL;
  v36 = 0LL;
  v8 = a1;
  *a5 = 0LL;
  v9 = 0;
  v40 = 0;
  v37 = 0LL;
  v10 = 0;
  if ( v6 == (_QWORD *)(a2 + 24) )
  {
LABEL_8:
    *(_DWORD *)(a3 + 72) = v9 << 16;
    if ( (unsigned int)sub_1400567A0() )
    {
      v11 = 24;
      v10 = 16 * v9 + (a4 != 0 ? 16 : 24);
      if ( v10 > 0x18 )
        v11 = 16 * v9 + (a4 != 0 ? 16 : 24);
    }
    else if ( 16 * ((unsigned __int64)v9 + 1) <= 0x18 )
    {
      v11 = 24;
    }
    else
    {
      v11 = 16 * (v9 + 1);
    }
    v38 = sub_1400143E0(64LL, v11, 1145266514LL, *(_QWORD *)(v8 + 8));
    v13 = (_DWORD *)v38;
    if ( !v38 )
      return (unsigned int)-1073741670;
    if ( (unsigned int)sub_1400567A0() && !a4 )
    {
      v36 = v38;
      v15 = 1196246085;
      *(_WORD *)(v38 + 12) = v9;
      v14 = 28;
      *(_WORD *)(v38 + 14) = 1;
      *(_DWORD *)(v38 + 16) = 16;
    }
    else
    {
      v10 = 32;
      v35 = v38;
      v14 = 32;
      *(_DWORD *)(v38 + 12) = v9;
      v15 = 1196246089;
    }
    v16 = 0;
    v17 = 0;
    *(_DWORD *)v38 = v14;
    *(_DWORD *)(v38 + 4) = v10;
    *(_DWORD *)(v38 + 8) = v15;
    sub_1400567A0();
    v18 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      v19 = v41;
      do
      {
        if ( v18[6] == v19 )
        {
          v20 = (_BYTE *)v18[5];
          if ( (unsigned int)sub_1400567A0() )
          {
            v22 = v35 + 16;
            if ( !a4 )
              v22 = v36 + 24;
            v21 = v16 + v22;
          }
          else
          {
            v21 = v35 + 16 * (v17 + 1LL);
          }
          *(_WORD *)v21 = 1;
          ++v17;
          *(_DWORD *)(v21 + 4) = 4;
          *(_BYTE *)(v21 + 8) = v20[82];
          *(_BYTE *)(v21 + 9) = v20[83];
          *(_BYTE *)(v21 + 10) = v20[84];
          v23 = (unsigned int)sub_1400567A0() == 0;
          v19 = v41;
          if ( !v23 )
            v16 += 16;
        }
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v5 );
      v13 = (_DWORD *)v38;
      v8 = a1;
    }
    v25 = (_QWORD *)sub_140015A14(*(_QWORD *)(v8 + 8), 0x2Au, *(_BYTE *)(v8 + 482), 0);
    if ( !v25 )
    {
      v12 = -1073741670;
      goto LABEL_41;
    }
    v26 = 316LL;
    if ( *(_DWORD *)v8 != 1314275652 )
      v26 = 524LL;
    v27 = sub_14002285C(((*(_DWORD *)(v26 + v8) + 7) & 0xFFFFFFF8) + 1184, v24, (_QWORD *)v8);
    v29 = v27;
    if ( v27 )
    {
      v31 = v27 + 48;
      sub_140017C40(v27 + 48, v28, 0, 0LL);
      *(_BYTE *)(v31 + 17) |= 8u;
      *(_QWORD *)(v31 + 176) = 0LL;
      *(_QWORD *)(v31 + 184) = v13;
      *(_QWORD *)(v31 + 168) = v25;
      if ( *(_BYTE *)(v8 + 482) == 1 )
      {
        *((_DWORD *)v25 + 15) = v11;
        *((_DWORD *)v25 + 6) = 256;
        v25[12] = v31;
        v25[10] = 0LL;
        *((_DWORD *)v25 + 5) = 42;
        v25[8] = v13;
        *((_DWORD *)v25 + 10) = 10;
        v40 = 1;
        v37 = v25;
        if ( !*(_BYTE *)(v8 + 4370) )
          *((_DWORD *)v25 + 6) = 192;
      }
      else
      {
        *((_DWORD *)v25 + 4) = v11;
        *((_DWORD *)v25 + 3) = 256;
        v25[6] = v31;
        *((_BYTE *)v25 + 2) = 42;
        v25[3] = v13;
        *(_WORD *)v25 = 88;
        *((_DWORD *)v25 + 5) = 10;
        if ( !*(_BYTE *)(v8 + 4370) )
          *((_DWORD *)v25 + 3) = 192;
      }
      sub_1400161E0((int *)v8, (__int64)v25, v29 + 1184);
      KeInitializeEvent((PRKEVENT)(v31 + 664), NotificationEvent, 0);
      sub_14003FC20(v31, (__int64)sub_140038660);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x43u, (__int64)&unk_14014A2D8, v31, v25);
      }
      if ( *(_BYTE *)(v8 + 4370) )
        v32 = sub_140017D90(v8, (_QWORD *)v31);
      else
        v32 = sub_1400184D0(v8, v31);
      v12 = v32;
      if ( v32 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v31 + 664), Executive, 0, 0, 0LL);
        v12 = sub_1400229C8(*((_BYTE *)v25 + 3));
      }
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)v25 + 3);
        sub_140067F28((__int64)off_140168120->AttachedDevice, 0x44u, (__int64)&unk_14014A2D8, v12, Timeout);
      }
      if ( v12 >= 0 )
      {
        if ( *v13 >= 0x18u && v13[2] == 1297105993 )
        {
          *a5 = v13;
          v13 = 0LL;
        }
        else
        {
          v12 = -1073739509;
        }
      }
      sub_140017A20(v31, 0);
      sub_140016754(v8, v29);
      if ( v40 == 1 )
      {
        v33 = v37;
        if ( !v37 )
          v33 = v25;
        v33[10] = 0LL;
        v33[13] = 0LL;
LABEL_40:
        sub_140039168(v25);
        if ( !v13 )
          return (unsigned int)v12;
LABEL_41:
        ExFreePoolWithTag(v13, 0x44436152u);
        return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    v25[6] = 0LL;
    v25[7] = 0LL;
    goto LABEL_40;
  }
  do
  {
    if ( v6[6] == a3 )
    {
      ++v9;
      if ( (unsigned int)sub_1400567A0() && v9 == 0xFFFF )
        return (unsigned int)-1073741637;
      a3 = v41;
    }
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != v5 );
  if ( v9 <= 4u )
    goto LABEL_8;
  return (unsigned int)-1073741637;
}
