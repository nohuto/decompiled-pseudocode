/*
 * XREFs of sub_1401ADED0 @ 0x1401ADED0
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 *     sub_1401AE30C @ 0x1401AE30C (sub_1401AE30C.c)
 * Callees:
 *     sub_1400159B4 @ 0x1400159B4 (sub_1400159B4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
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
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401ADED0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, char a7, void *Dst)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ecx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  unsigned int LockArray_high; // eax
  char v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v8 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !Dst )
    return 3221225485LL;
  if ( !a1 )
    v9 = *(_QWORD *)(a2 + 24);
  if ( *(int *)(*(_QWORD *)(v9 + 608) + 184LL) >= 0 )
    return 3221225659LL;
  v11 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 1314275652 )
  {
    v12 = v9 + 274;
  }
  else
  {
    v12 = v9 + 482;
    if ( v11 != 1094997074 )
      v12 = 98LL;
  }
  v13 = 316LL;
  v14 = 316LL;
  if ( v11 != 1314275652 )
    v14 = 524LL;
  v15 = (*(_DWORD *)(v14 + v9) + 7) & 0xFFFFFFF8;
  if ( a4 )
  {
    if ( a4 != 1 && a4 != 2 && a4 != 3 && a4 != 5 )
      return 3221225488LL;
    memset_0(Dst, 0, 0x1000uLL);
  }
  v16 = sub_140015A14(*(_QWORD *)(v9 + 8), 0xAu, *(_BYTE *)v12, 0);
  v18 = sub_14002285C(v15 + 1184, v17, (_QWORD *)v9);
  v20 = v18;
  if ( v16 && v18 )
  {
    v8 = v18 + 48;
    sub_140017C40(v18 + 48, v19, 0, 0LL);
    v21 = sub_1400159B4(v8, Dst, 0x1000u);
    if ( v21 >= 0 )
    {
      v22 = v20 + 1184;
      v23 = *(_DWORD *)v9;
      if ( *(_BYTE *)(v16 + 2) == 40 )
      {
        if ( v23 != 1314275652 )
          v13 = 524LL;
        if ( ((*(_DWORD *)(v13 + v9) + 7) & 0xFFFFFFF8) != 0 )
          *(_QWORD *)(v16 + 104) = v22;
      }
      else
      {
        if ( v23 != 1314275652 )
          v13 = 524LL;
        if ( ((*(_DWORD *)(v13 + v9) + 7) & 0xFFFFFFF8) != 0 )
          *(_QWORD *)(v16 + 56) = v22;
      }
      *(_BYTE *)(v8 + 17) |= 8u;
      if ( *(_BYTE *)v12 == 1 )
      {
        v24 = v16 + *(unsigned int *)(v16 + 120);
        *(_DWORD *)(v16 + 20) = 10;
        *(_DWORD *)(v16 + 24) = 322;
        v10 = v16;
        *(_BYTE *)(v16 + 3) = 0;
        if ( *(_DWORD *)v9 == 1094997074 && (*(_BYTE *)(v9 + 111) & 4) != 0 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high), 1u);
          v25 = **(_QWORD **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high);
          *(_DWORD *)(v16 + 44) = HIDWORD(v25);
        }
        else
        {
          LODWORD(v25) = -1;
        }
        *(_DWORD *)(v16 + 32) = v25;
        *(_QWORD *)(v16 + 64) = Dst;
        *(_DWORD *)(v16 + 60) = 4096;
        *(_DWORD *)(v16 + 40) = *(_DWORD *)(v9 + 4124);
        *(_QWORD *)(v16 + 96) = v8;
        *(_QWORD *)(v8 + 168) = v16;
        *(_QWORD *)(v8 + 184) = *(_QWORD *)(v16 + 64);
        *(_QWORD *)(v8 + 176) = *(_QWORD *)(v16 + 96);
        *(_DWORD *)(v24 + 20) = a3;
        *(_BYTE *)(v24 + 56) = v30;
        *(_BYTE *)(v24 + 63) = a7;
        *(_BYTE *)(v24 + 80) = 1;
        *(_WORD *)(v24 + 82) = 1;
        *(_BYTE *)(v24 + 16) = 6;
        *(_DWORD *)(v24 + 58) = 0;
        if ( *(_BYTE *)(v16 + 2) == 40 )
          *(_WORD *)(v16 + 38) = 32;
        else
          *(_BYTE *)(v16 + 9) = 32;
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        sub_14003FC20(v8, (__int64)sub_140038660);
        if ( *(_QWORD *)(v9 + 4960) )
          sub_1400212C0(v9, 0LL, 1LL);
        if ( *(_BYTE *)(v9 + 4370) )
          v26 = sub_140017D90(v9, (_QWORD *)v8);
        else
          v26 = sub_1400184D0(v9, v8);
        v21 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
          v21 = sub_1400229C8(*(_BYTE *)(v16 + 3));
        }
        if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
        {
          sub_14001F93C(v9, *(unsigned int *)(v8 + 748));
          *(_BYTE *)(v8 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(v9 + 4960) )
          sub_140021110(v9, 0LL, 0LL);
      }
      else
      {
        v21 = -1073741637;
      }
    }
  }
  else
  {
    v21 = -1073741801;
    if ( !v18 )
      goto LABEL_46;
  }
  sub_140017A20(v8, 0);
  sub_140016754(v9, v20);
LABEL_46:
  if ( v16 )
  {
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( !v10 )
        v10 = v16;
      *(_QWORD *)(v10 + 80) = 0LL;
      *(_QWORD *)(v10 + 104) = 0LL;
    }
    sub_140039168((void *)v16);
  }
  return (unsigned int)v21;
}
