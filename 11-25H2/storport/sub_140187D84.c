/*
 * XREFs of sub_140187D84 @ 0x140187D84
 * Callers:
 *     sub_1400C1594 @ 0x1400C1594 (sub_1400C1594.c)
 *     sub_1400C18E0 @ 0x1400C18E0 (sub_1400C18E0.c)
 *     sub_1400C1AB0 @ 0x1400C1AB0 (sub_1400C1AB0.c)
 *     sub_1400C1C80 @ 0x1400C1C80 (sub_1400C1C80.c)
 *     sub_1400C5068 @ 0x1400C5068 (sub_1400C5068.c)
 *     sub_1400C5164 @ 0x1400C5164 (sub_1400C5164.c)
 *     sub_140185324 @ 0x140185324 (sub_140185324.c)
 *     sub_140185514 @ 0x140185514 (sub_140185514.c)
 *     sub_140185648 @ 0x140185648 (sub_140185648.c)
 *     sub_14018576C @ 0x14018576C (sub_14018576C.c)
 *     sub_140185CF0 @ 0x140185CF0 (sub_140185CF0.c)
 *     sub_140185F6C @ 0x140185F6C (sub_140185F6C.c)
 *     sub_140186130 @ 0x140186130 (sub_140186130.c)
 *     sub_1401867AC @ 0x1401867AC (sub_1401867AC.c)
 *     sub_140186AFC @ 0x140186AFC (sub_140186AFC.c)
 *     sub_140186D04 @ 0x140186D04 (sub_140186D04.c)
 *     sub_1401870D8 @ 0x1401870D8 (sub_1401870D8.c)
 *     sub_1401873E4 @ 0x1401873E4 (sub_1401873E4.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 *     sub_1401879D4 @ 0x1401879D4 (sub_1401879D4.c)
 *     sub_140187B58 @ 0x140187B58 (sub_140187B58.c)
 *     sub_140187C38 @ 0x140187C38 (sub_140187C38.c)
 *     sub_140188328 @ 0x140188328 (sub_140188328.c)
 *     sub_14018852C @ 0x14018852C (sub_14018852C.c)
 *     sub_140188720 @ 0x140188720 (sub_140188720.c)
 *     sub_140188988 @ 0x140188988 (sub_140188988.c)
 *     sub_140188B8C @ 0x140188B8C (sub_140188B8C.c)
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 *     sub_1401891B4 @ 0x1401891B4 (sub_1401891B4.c)
 *     sub_1401896FC @ 0x1401896FC (sub_1401896FC.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
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
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_1400540D4 @ 0x1400540D4 (sub_1400540D4.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 */

__int64 __fastcall sub_140187D84(
        __int64 a1,
        void *a2,
        __int64 a3,
        ULONG a4,
        _OWORD *a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        unsigned int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v12; // ecx
  __int64 v14; // r14
  __int64 v15; // r15
  int v16; // esi
  union _LARGE_INTEGER v17; // rdx
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // esi
  union _LARGE_INTEGER v28; // r13
  unsigned int LockArray_high; // eax
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  NTSTATUS v35; // eax
  bool v36; // zf
  __int64 v37; // rax
  int v39; // eax
  void *v40; // rcx
  KIRQL v41; // bl
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  __int64 v43; // [rsp+38h] [rbp-80h]
  union _LARGE_INTEGER v44; // [rsp+40h] [rbp-78h] BYREF
  __int64 v45; // [rsp+48h] [rbp-70h]
  struct _KEVENT Event; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v47; // [rsp+C0h] [rbp+8h]
  char v51; // [rsp+E8h] [rbp+30h]

  v44.QuadPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = *(_DWORD *)a1;
  v45 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( v12 == 1314275652 )
  {
    v17.QuadPart = a1 + 176;
  }
  else
  {
    v17.QuadPart = a1 + 384;
    if ( v12 != 1094997074 )
      v17.QuadPart = 0LL;
  }
  v18 = *(_QWORD *)(a1 + 608);
  Timeout = v17;
  if ( *(int *)(v18 + 184) >= 0 || !v17.QuadPart || *(_BYTE *)(v17.QuadPart + 98) != 1 )
    return 3221225659LL;
  v19 = a7 & 1;
  v47 = a9;
  if ( (a7 & 0x10) != 0 )
  {
    v51 = 1;
    if ( !a9 )
      v47 = *(_DWORD *)(a1 + 4124);
  }
  else
  {
    v51 = 0;
  }
  if ( ((_BYTE)v19 || (a7 & 2) != 0) && (!a2 || !a4) )
    return 3221225485LL;
  v20 = 316LL;
  if ( v12 != 1314275652 )
    v20 = 524LL;
  v21 = (*(_DWORD *)(v20 + a1) + 7) & 0xFFFFFFF8;
  v22 = sub_140015A14(*(_QWORD *)(a1 + 8), 0xAu, 1, 0);
  v24 = sub_14002285C(v21 + 1184, v23, (_QWORD *)a1);
  v43 = v24;
  v26 = v24;
  if ( !v22 || !v24 )
  {
    v27 = -1073741801;
    goto LABEL_86;
  }
  v14 = v24 + 48;
  sub_140017C40(v24 + 48, v25, 0, 0LL);
  if ( (_BYTE)v19 || (a7 & 2) != 0 )
  {
    if ( a3 )
    {
      *(_BYTE *)(v14 + 16) &= ~1u;
      *(_QWORD *)(v14 + 104) = a3;
      goto LABEL_26;
    }
    v27 = sub_1400159B4(v14, a2, a4);
    if ( v27 >= 0 )
    {
LABEL_26:
      v16 = v19 << 6;
      if ( (a7 & 2) != 0 )
        v16 |= 0x80u;
      goto LABEL_28;
    }
LABEL_86:
    v28 = Timeout;
    goto LABEL_48;
  }
LABEL_28:
  if ( !a8 )
  {
    v16 |= 0x102u;
    if ( *(_BYTE *)(v22 + 2) == 40 )
      *(_WORD *)(v22 + 38) = 32;
    else
      *(_BYTE *)(v22 + 9) = 32;
  }
  sub_1400161E0((int *)a1, v22, v26 + 1184);
  if ( a8 )
    *(_BYTE *)(v14 + 17) |= 8u;
  v28 = Timeout;
  if ( *(_BYTE *)(Timeout.QuadPart + 98) == 1 )
  {
    v15 = v22 + *(unsigned int *)(v22 + 120);
    *(_DWORD *)(v22 + 20) = 10;
    *(_DWORD *)(v22 + 24) = v16;
    *(_BYTE *)(v22 + 3) = 0;
    v36 = *(_DWORD *)a1 == 1094997074;
    v45 = v22;
    if ( v36 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high));
      v30 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
      *(_DWORD *)(v22 + 44) = HIDWORD(v30);
    }
    else
    {
      LODWORD(v30) = -1;
    }
    *(_DWORD *)(v22 + 32) = v30;
    *(_QWORD *)(v22 + 64) = a2;
    *(_DWORD *)(v22 + 60) = a4;
    v31 = *(_DWORD *)(a1 + 4124);
    *(_QWORD *)(v22 + 96) = v14;
    if ( v47 > v31 )
      v31 = v47;
    *(_DWORD *)(v22 + 40) = v31;
    *(_QWORD *)(v14 + 168) = v22;
    *(_QWORD *)(v14 + 184) = *(_QWORD *)(v22 + 64);
    *(_QWORD *)(v14 + 176) = *(_QWORD *)(v22 + 96);
    *(_WORD *)(v15 + 82) = a7;
    *(_DWORD *)v15 = 67;
    *(_DWORD *)(v15 + 4) = 100;
    *(_BYTE *)(v15 + 80) = 1;
    v32 = a5[1];
    *(_OWORD *)(v15 + 16) = *a5;
    v33 = a5[2];
    *(_OWORD *)(v15 + 32) = v32;
    v34 = a5[3];
    *(_OWORD *)(v15 + 48) = v33;
    *(_OWORD *)(v15 + 64) = v34;
  }
  KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
  sub_14003FC20(v14, (__int64)sub_140038660);
  if ( !a8 )
    goto LABEL_91;
  sub_1400099A0(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  sub_1400540D4(*(_QWORD *)(a1 + 960), &Event);
  Timeout.QuadPart = -1200000000LL;
  v35 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
  v36 = v35 == 0;
  if ( v35 >= 0 )
    v36 = (unsigned int)sub_1400A6008(a1, 0x1D4C0u) == 0;
  if ( v36 )
  {
LABEL_91:
    if ( *(_QWORD *)(a1 + 4960) )
      sub_1400212C0(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4370) )
      v39 = sub_140017D90(a1, (_QWORD *)v14);
    else
      v39 = sub_1400184D0(a1, v14);
    v27 = v39;
    if ( v39 >= 0 )
    {
      v40 = (void *)(v14 + 664);
      if ( v51 )
      {
        v44.QuadPart = -10000000LL * v47;
        v27 = KeWaitForSingleObject(v40, Executive, 0, 0, &v44);
      }
      else
      {
        KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
      }
      if ( v27 == 258 )
        v27 = -1073741643;
      else
        v27 = sub_1400229C8(*(_BYTE *)(v22 + 3));
    }
    if ( a8 )
    {
      v41 = KfRaiseIrql(2u);
      sub_140066768(a1);
      KeLowerIrql(v41);
    }
    if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
    {
      sub_14001F93C(a1, *(unsigned int *)(v14 + 748));
      *(_BYTE *)(v14 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 4960) )
      sub_140021110(a1, 0LL, 0LL);
    if ( v27 >= 0 && a10 )
    {
      v26 = v43;
      if ( v15 )
        *a10 = *(_DWORD *)(v15 + 96);
      goto LABEL_48;
    }
  }
  else
  {
    v27 = -1073741823;
  }
  v26 = v43;
LABEL_48:
  if ( a11 && v15 )
    *a11 = *(unsigned __int16 *)(v15 + 86);
  if ( v51 && v27 == -1073741643 )
    sub_14005E1B0(a1);
  if ( v26 )
  {
    sub_140017A20(v14, 0);
    sub_140016754(a1, v26);
  }
  if ( v22 )
  {
    if ( (*(_BYTE *)(v28.QuadPart + 98) & 1) != 0 )
    {
      v37 = v45;
      if ( !v45 )
        v37 = v22;
      *(_QWORD *)(v37 + 80) = 0LL;
      *(_QWORD *)(v37 + 104) = 0LL;
    }
    sub_140039168((void *)v22);
  }
  return (unsigned int)v27;
}
