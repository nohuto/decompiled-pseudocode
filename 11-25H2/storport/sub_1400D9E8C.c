/*
 * XREFs of sub_1400D9E8C @ 0x1400D9E8C
 * Callers:
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 * Callees:
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140087860 @ 0x140087860 (sub_140087860.c)
 *     sub_14008797C @ 0x14008797C (sub_14008797C.c)
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 */

__int64 sub_1400D9E8C(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // r12
  unsigned int v16; // ecx
  __int64 v17; // rsi
  char v18; // r11
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r15d
  unsigned int v23; // ebp
  unsigned int v26; // [rsp+90h] [rbp+18h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp+20h] BYREF
  va_list Intervala; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Intervala, a3);
  Interval.QuadPart = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 128LL);
    v7 = *(_DWORD *)v3;
  }
  if ( v7 != 1314275652 )
    return 3221225485LL;
  if ( !*(_QWORD *)(v3 + 400) || !*(_QWORD *)(v3 + 408) )
    return 0LL;
  v9 = 0LL;
  Interval.QuadPart = -1000LL;
  v26 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)v3;
  v12 = 316LL;
  v13 = 524LL;
  if ( *(_DWORD *)v3 != 1314275652 )
    v12 = 524LL;
  v14 = (*(_DWORD *)(v12 + v3) + 7) & 0xFFFFFFF8;
  if ( v11 == 1314275652 )
  {
    v15 = v3 + 274;
  }
  else
  {
    v15 = v3 + 482;
    if ( v11 != 1094997074 )
      v15 = 98LL;
  }
  while ( 1 )
  {
    if ( !v9 )
      v9 = sub_140015A14(*(_QWORD *)(v3 + 8), 0x25u, *(_BYTE *)v15, 0);
    if ( !v10 )
      v10 = sub_140087860(v14 + 1184, v13, (_QWORD *)v3);
    if ( v9 && v10 )
    {
      v17 = v10 + 48;
      sub_140017C40(v10 + 48, v13, 0, 0LL);
      *(_QWORD *)(v10 + 216) = v9;
      *(_QWORD *)(v10 + 224) = *(_QWORD *)(v9 + 48);
      if ( *(_BYTE *)v15 == 1 )
      {
        v4 = v9;
        v5 = v9 + *(unsigned int *)(v9 + 52);
        v6 = v9 + *(unsigned int *)(v9 + 120);
        *(_QWORD *)(v9 + 64) = 0LL;
        *(_QWORD *)(v9 + 96) = v17;
        *(_DWORD *)(v9 + 20) = 37;
        *(_DWORD *)(v9 + 24) = 256;
        *(_DWORD *)(v9 + 40) = 10;
        *(_DWORD *)(v9 + 60) = 0;
        *(_DWORD *)v6 = 98;
        *(_DWORD *)(v6 + 4) = 16;
        *(_DWORD *)(v6 + 12) = a2;
        *(_BYTE *)(v6 + 8) = 0;
        *(_QWORD *)(v10 + 232) = *(_QWORD *)(v9 + 64);
      }
      sub_1400161E0((int *)v3, v9, v10 + 1184);
      if ( **(_DWORD **)(a1 + 64) != 1314278989 )
      {
        if ( *(_BYTE *)v15 == 1 )
        {
          *(_DWORD *)(v6 + 16) = 1;
          *(_WORD *)(v5 + 8) = 0;
          *(_BYTE *)(v5 + 10) = v18;
        }
        else
        {
          *(_WORD *)(v9 + 5) = 0;
          *(_DWORD *)(v9 + 64) = 1;
          *(_BYTE *)(v9 + 7) = v18;
        }
      }
      KeInitializeEvent((PRKEVENT)(v10 + 712), NotificationEvent, 0);
      v20 = v10 + 48;
      *(_QWORD *)(v10 + 704) = sub_140038660;
      if ( (*(_DWORD *)(v3 + 144) & 0x1000LL) != 0 )
        v21 = sub_1400D3FBC((_DWORD *)v3, v20);
      else
        v21 = sub_1400CD684((_DWORD *)v3, v20, v19);
      v22 = v21;
      if ( v21 >= 0 )
        KeWaitForSingleObject((PVOID)(v10 + 712), Executive, 0, 0, 0LL);
      v23 = 0;
      if ( v22 == 258 )
        v23 = -1073741643;
      goto LABEL_36;
    }
    v16 = v26++;
    if ( v16 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)Intervala);
  }
  v17 = 0LL;
  v23 = -1073741801;
  if ( !v10 )
    goto LABEL_37;
LABEL_36:
  sub_140017A20(v17, 0);
  sub_14008797C(v3);
LABEL_37:
  if ( v9 )
  {
    if ( *(_BYTE *)v15 == 1 )
    {
      if ( !v4 )
        v4 = v9;
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x72536152u);
  }
  return v23;
}
