/*
 * XREFs of sub_1400605C0 @ 0x1400605C0
 * Callers:
 *     sub_14005E41C @ 0x14005E41C (sub_14005E41C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400159B4 @ 0x1400159B4 (sub_1400159B4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 */

__int64 __fastcall sub_1400605C0(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  unsigned int *v6; // r14
  int v7; // ecx
  char *v8; // r15
  void *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  ULONG v12; // ebp
  unsigned int v13; // ebx
  unsigned int *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  __int64 v21; // r15
  unsigned int LockArray_high; // eax
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edx
  char *v26; // rcx
  __int64 v27; // rax
  __int16 v28; // ax
  int v29; // eax
  __int64 v31; // [rsp+80h] [rbp+8h]
  unsigned int v35; // [rsp+A0h] [rbp+28h]

  v6 = 0LL;
  v7 = *(_DWORD *)a1;
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 == 1314275652 )
  {
    v10 = a1 + 274;
  }
  else
  {
    v10 = a1 + 482;
    if ( v7 != 1094997074 )
      v10 = 98LL;
  }
  v11 = 316LL;
  if ( v7 != 1314275652 )
    v11 = 524LL;
  v12 = a5 << 9;
  v35 = a5 << 9;
  v13 = (*(_DWORD *)(v11 + a1) + 7) & 0xFFFFFFF8;
  v14 = (unsigned int *)sub_140015A14(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)v10, 0);
  v16 = sub_14002285C(v13 + 1184, v15, (_QWORD *)a1);
  v31 = v16;
  if ( v14 && v16 )
  {
    v17 = v16 + 48;
    sub_140017C40(v16 + 48, 1LL, 0, 0LL);
    v18 = sub_1400159B4(v17, a4, v12);
    if ( v18 >= 0 )
    {
      if ( a3 == -94 )
      {
        v19 = 64;
      }
      else
      {
        v19 = 0;
        if ( a3 == -75 )
          v19 = 128;
      }
      v20 = v19 | 0x102;
      v9 = (void *)sub_1400143E0(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      if ( v9 )
      {
        if ( *(_BYTE *)v10 == 1 )
        {
          v14[5] = 0;
          v6 = v14;
          v21 = v14[13];
          v14[6] = v20;
          if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high), 1u);
            v23 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
            v14[11] = HIDWORD(v23);
          }
          else
          {
            LODWORD(v23) = -1;
          }
          v14[8] = v23;
          *((_QWORD *)v14 + 8) = a4;
          v14[15] = v35;
          *((_WORD *)v14 + 18) = IoGetIoPriorityHint(a2);
          v24 = *(_DWORD *)(a1 + 4124);
          *((_QWORD *)v14 + 10) = a2;
          v14[10] = v24;
          *((_QWORD *)v14 + 12) = v17;
          if ( *(_WORD *)(a1 + 5576) == 1 )
          {
            *((_BYTE *)v14 + v21 + 8) = *(_BYTE *)(a1 + 5584);
            *((_BYTE *)v14 + v21 + 9) = *(_BYTE *)(a1 + 5585);
            *((_BYTE *)v14 + v21 + 10) = *(_BYTE *)(a1 + 5586);
          }
          v25 = v35;
          *(_QWORD *)(v17 + 168) = v14;
          *(_QWORD *)(v17 + 184) = *((_QWORD *)v14 + 8);
          *(_QWORD *)(v17 + 176) = *((_QWORD *)v14 + 12);
          v8 = (char *)v14 + v14[30];
          *(_DWORD *)v8 = 64;
          v26 = v8 + 24;
          *((_DWORD *)v8 + 1) = 32;
          *(_WORD *)(v8 + 9) = 3327;
          *((_QWORD *)v8 + 2) = v9;
        }
        else
        {
          v25 = v35;
          *((_QWORD *)v14 + 3) = a4;
          *(_WORD *)v14 = 88;
          *((_BYTE *)v14 + 2) = 0;
          v14[3] = v20;
          *((_BYTE *)v14 + 8) = -1;
          v14[4] = v35;
          v14[5] = *(_DWORD *)(a1 + 4124);
          *((_BYTE *)v14 + 11) = -1;
          *((_QWORD *)v14 + 4) = v9;
          *((_QWORD *)v14 + 6) = v17;
          if ( *(_WORD *)(a1 + 5576) == 1 )
          {
            *((_BYTE *)v14 + 5) = *(_BYTE *)(a1 + 5584);
            *((_BYTE *)v14 + 6) = *(_BYTE *)(a1 + 5585);
            *((_BYTE *)v14 + 7) = *(_BYTE *)(a1 + 5586);
          }
          v26 = (char *)(v14 + 18);
          *(_QWORD *)(v17 + 168) = v14;
          v27 = *((_QWORD *)v14 + 3);
          *(_QWORD *)(v17 + 176) = a2;
          *(_QWORD *)(v17 + 184) = v27;
          *((_BYTE *)v14 + 10) = 12;
        }
        if ( *((_BYTE *)v14 + 2) == 40 )
          *((_WORD *)v14 + 19) = 32;
        else
          *((_BYTE *)v14 + 9) = 32;
        *v26 = a3;
        v26[1] = *(_BYTE *)(a1 + 5568);
        v28 = __ROR2__(*(_WORD *)(a1 + 5570), 8);
        *(_DWORD *)(v26 + 6) = _byteswap_ulong(v25);
        *((_WORD *)v26 + 1) = v28;
        sub_1400161E0((int *)a1, (__int64)v14, v31 + 1184);
        KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
        *(_QWORD *)(v17 + 656) = sub_140038660;
        if ( *(_QWORD *)(a1 + 4960) )
          sub_1400212C0(a1, 0LL, 1LL);
        if ( *(_BYTE *)v10 == 1 )
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x10) != 0
            && BYTE1(off_140168120->Timer) >= 4u )
          {
            sub_1400681AC(off_140168120->AttachedDevice, 65LL, &unk_14014A2D8, v17, v6, *((_QWORD *)v6 + 13));
          }
        }
        else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
               && (HIDWORD(off_140168120->Timer) & 0x10) != 0
               && BYTE1(off_140168120->Timer) >= 4u )
        {
          sub_1400681AC(off_140168120->AttachedDevice, 66LL, &unk_14014A2D8, v17, v14, *((_QWORD *)v14 + 7));
        }
        if ( *(_BYTE *)(a1 + 4370) )
          v29 = sub_140017D90(a1, (_QWORD *)v17);
        else
          v29 = sub_1400184D0(a1, v17);
        v18 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
          v18 = sub_1400229C8(*((_BYTE *)v14 + 3));
        }
        if ( (*(_BYTE *)(v17 + 17) & 1) != 0 )
        {
          sub_14001F93C(a1, *(unsigned int *)(v17 + 748));
          *(_BYTE *)(v17 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4960) )
          sub_140021110(a1, 0LL, 0LL);
      }
      else
      {
        v18 = -1073741801;
      }
    }
  }
  else
  {
    v18 = -1073741801;
    v17 = 0LL;
    if ( !v16 )
      goto LABEL_53;
  }
  sub_140017A20(v17, 0);
  sub_140016754(a1, v31);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4E536152u);
LABEL_53:
  if ( v14 )
  {
    if ( *(_BYTE *)v10 == 1 )
    {
      if ( !v6 )
        v6 = v14;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
      if ( v8 )
        *((_QWORD *)v8 + 2) = 0LL;
    }
    else
    {
      *((_QWORD *)v14 + 6) = 0LL;
      *((_QWORD *)v14 + 7) = 0LL;
      *((_QWORD *)v14 + 4) = 0LL;
    }
    ExFreePoolWithTag(v14, 0x72536152u);
  }
  return (unsigned int)v18;
}
