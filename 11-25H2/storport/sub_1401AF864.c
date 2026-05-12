/*
 * XREFs of sub_1401AF864 @ 0x1401AF864
 * Callers:
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_1401AF864(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 *v3; // rbp
  unsigned int v4; // edi
  __int64 v6; // rax
  void *v7; // r14
  __int64 v8; // rdx
  unsigned __int8 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  int v17; // r9d
  __int64 v19; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0LL;
  v4 = 0;
  v20 = 0;
  if ( v2 && v2 != -72 && *(_QWORD *)(v2 + 64) )
  {
    v6 = sub_1400143E0(64LL, 24LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v7 = (void *)v6;
    if ( v6 )
    {
      *(_DWORD *)v6 = 24;
      *(_DWORD *)(v6 + 4) = 24;
      *(_DWORD *)(v6 + 8) = 1179468873;
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(v2 + 64);
      v9 = (unsigned __int8 *)sub_140015A14(*(_QWORD *)(a1 + 8), 0x2Bu, *(_BYTE *)(v2 + 170), 0);
      if ( !v9 )
      {
        v4 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(v7, 0x44436152u);
        return v4;
      }
      v10 = 316LL;
      if ( *(_DWORD *)a1 != 1314275652 )
        v10 = 524LL;
      v11 = sub_14002285C(((*(_DWORD *)(v10 + a1) + 7) & 0xFFFFFFF8) + 1184, v8, (_QWORD *)a1);
      v21 = v11;
      v13 = v11;
      if ( v11 )
      {
        v14 = v11 + 48;
        sub_140017C40(v11 + 48, v12, 0, 0LL);
        *(_QWORD *)(v14 + 184) = v7;
        *(_QWORD *)(v14 + 176) = 0LL;
        v15 = v13 + 1184;
        *(_QWORD *)(v14 + 168) = v9;
        if ( *(_BYTE *)(v2 + 170) == 1 )
        {
          *((_DWORD *)v9 + 5) = 43;
          v3 = v9;
          *((_QWORD *)v9 + 8) = v7;
          *((_DWORD *)v9 + 15) = 24;
          *((_QWORD *)v9 + 10) = 0LL;
          *((_QWORD *)v9 + 12) = v14;
          *((_QWORD *)v9 + 13) = v15;
          *((_DWORD *)v9 + 10) = 10;
          *((_DWORD *)v9 + 6) = 256;
          v20 = 1;
          if ( !*(_BYTE *)(a1 + 4370) )
            *((_DWORD *)v9 + 6) = 128;
        }
        else
        {
          v9[2] = 43;
          *((_QWORD *)v9 + 3) = v7;
          *((_DWORD *)v9 + 4) = 24;
          *(_WORD *)v9 = 88;
          *((_QWORD *)v9 + 6) = v14;
          *((_QWORD *)v9 + 7) = v15;
          *((_DWORD *)v9 + 5) = 10;
          *((_DWORD *)v9 + 3) = 256;
          if ( !*(_BYTE *)(a1 + 4370) )
            *((_DWORD *)v9 + 3) = 128;
        }
        KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
        sub_14003FC20(v14, (__int64)sub_140038660);
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x100) != 0
          && BYTE1(off_140168120->Timer) )
        {
          sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x45u, (__int64)&unk_14014A2D8, v14, v9);
        }
        if ( *(_BYTE *)(a1 + 4370) )
          v16 = sub_140017D90(a1, (_QWORD *)v14);
        else
          v16 = sub_1400184D0(a1, v14);
        v17 = v16;
        if ( v16 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
          v17 = sub_1400229C8(v9[3]);
        }
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x100) != 0
          && BYTE1(off_140168120->Timer) )
        {
          LODWORD(v19) = v9[3];
          sub_140067F28((__int64)off_140168120->AttachedDevice, 0x46u, (__int64)&unk_14014A2D8, v17, v19);
        }
        *(_QWORD *)(v2 + 64) = 0LL;
        sub_140017A20(v14, 0);
        sub_140016754(a1, v21);
        v4 = 0;
        if ( v20 == 1 )
        {
          if ( !v3 )
            v3 = v9;
          *((_QWORD *)v3 + 10) = 0LL;
          *((_QWORD *)v3 + 13) = 0LL;
          goto LABEL_36;
        }
      }
      else
      {
        v4 = -1073741670;
      }
      *((_QWORD *)v9 + 6) = 0LL;
      *((_QWORD *)v9 + 7) = 0LL;
LABEL_36:
      sub_140039168(v9);
      goto LABEL_37;
    }
    return (unsigned int)-1073741670;
  }
  return v4;
}
