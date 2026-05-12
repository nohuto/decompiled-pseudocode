/*
 * XREFs of sub_1400DA194 @ 0x1400DA194
 * Callers:
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 * Callees:
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_14007B208 @ 0x14007B208 (sub_14007B208.c)
 *     sub_140087860 @ 0x140087860 (sub_140087860.c)
 *     sub_14008797C @ 0x14008797C (sub_14008797C.c)
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 */

__int64 sub_1400DA194(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rbp
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r11
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  int v27; // r14d
  unsigned int v28; // esi
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+20h] BYREF
  va_list Intervala; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Intervala, a3);
  Interval.QuadPart = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 128LL);
    v7 = *(_DWORD *)v3;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 1314275652LL;
  if ( v7 != 1314275652 || *(_BYTE *)(v3 + 274) != 1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(v3 + 400) || !*(_QWORD *)(v3 + 408) )
    return 0LL;
  v10 = 0LL;
  Interval.QuadPart = -1000LL;
  v11 = 0;
  v12 = 316LL;
  if ( *(_DWORD *)v3 != 1314275652 )
    v12 = 524LL;
  v13 = (*(_DWORD *)(v12 + v3) + 7) & 0xFFFFFFF8;
  while ( 1 )
  {
    if ( !v4 )
      v4 = sub_14007B208(*(_QWORD *)(v3 + 8), 37);
    if ( !v10 )
      v10 = sub_140087860(v13 + 1184, v9, (_QWORD *)v3);
    if ( v4 && v10 )
    {
      v15 = v10 + 48;
      sub_140017C40(v10 + 48, v9, 0, 0LL);
      *(_QWORD *)(v10 + 216) = v4;
      v16 = *(_BYTE *)(v4 + 2);
      *(_QWORD *)(v4 + 96) = v10 + 48;
      *(_DWORD *)(v4 + 24) = 256;
      *(_DWORD *)(v4 + 40) = 10;
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_DWORD *)(v4 + 60) = 0;
      if ( v16 == 40 && (v17 = *(_DWORD *)(v4 + 56)) != 0 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = *(unsigned int *)(v4 + 4LL * v18 + 120);
          if ( (unsigned int)v19 >= 0x80 && (unsigned int)v19 < *(_DWORD *)(v4 + 16) )
          {
            v20 = v4 + v19;
            if ( *(_DWORD *)(v4 + v19) == 98 )
              break;
          }
          if ( ++v18 >= v17 )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        v20 = 0LL;
      }
      *(_DWORD *)(v20 + 12) = a2;
      *(_BYTE *)(v20 + 8) = 0;
      *(_QWORD *)(v10 + 232) = *(_QWORD *)(v4 + 64);
      sub_1400161E0((int *)v3, v4, v10 + 1184);
      if ( **(_DWORD **)(a1 + 64) == 1314278989 )
      {
        *(_WORD *)(v21 + 2) = *(_WORD *)(v3 + 56);
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 1648LL) + 64LL;
        v22 = *(_DWORD *)(v8 + 56);
      }
      else
      {
        *(_DWORD *)(v20 + 16) = 1;
        v23 = *(_WORD *)(v3 + 56);
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_WORD *)(v21 + 2) = v23;
        v22 = 0;
      }
      *(_DWORD *)(v21 + 16) = v22;
      KeInitializeEvent((PRKEVENT)(v10 + 712), NotificationEvent, 0);
      v25 = v10 + 48;
      *(_QWORD *)(v10 + 704) = sub_140038660;
      if ( (*(_DWORD *)(v3 + 144) & 0x1000LL) != 0 )
        v26 = sub_1400D3FBC((_DWORD *)v3, v25);
      else
        v26 = sub_1400CD684((_DWORD *)v3, v25, v24);
      v27 = v26;
      if ( v26 >= 0 )
        KeWaitForSingleObject((PVOID)(v10 + 712), Executive, 0, 0, 0LL);
      v28 = 0;
      if ( v27 == 258 )
        v28 = -1073741643;
      goto LABEL_39;
    }
    v14 = v11++;
    if ( v14 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)Intervala);
  }
  v15 = 0LL;
  v28 = -1073741801;
  if ( !v10 )
    goto LABEL_40;
LABEL_39:
  sub_140017A20(v15, 0);
  sub_14008797C(v3);
LABEL_40:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    ExFreePoolWithTag((PVOID)v4, 0x72536152u);
  }
  return v28;
}
