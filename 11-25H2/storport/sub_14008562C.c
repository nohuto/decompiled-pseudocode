/*
 * XREFs of sub_14008562C @ 0x14008562C
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_140138EF0 @ 0x140138EF0 (sub_140138EF0.c)
 * Callees:
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_1400158F0 @ 0x1400158F0 (sub_1400158F0.c)
 *     sub_1400159B4 @ 0x1400159B4 (sub_1400159B4.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 */

__int64 __fastcall sub_14008562C(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  IRP *v6; // r14
  ULONG_PTR v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  void *v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  ULONG v17; // eax
  struct _IO_STATUS_BLOCK v19; // [rsp+30h] [rbp-38h] BYREF
  ULONG v20; // [rsp+80h] [rbp+18h]

  v4 = a1;
  v19 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  if ( !byte_140168788 )
    return (unsigned int)-1073741637;
  *(_BYTE *)(a2 + 3) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = a2;
    v10 = *(void **)(a2 + 64);
    v20 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) = 0;
  }
  else
  {
    v10 = *(void **)(a2 + 24);
    v20 = *(_DWORD *)(a2 + 16);
  }
  if ( v8 )
  {
    v11 = sub_140014B7C(*(_QWORD *)(v8 + 8), a2, a3, &v19);
    v6 = v11;
    if ( !v11 )
      return (unsigned int)-1073741801;
    Status = sub_140018E30(*(PDEVICE_OBJECT *)(v8 + 8), v11);
    if ( Status >= 0 )
    {
      Status = v6->IoStatus.Status;
      if ( Status >= 0 )
        Status = sub_1400158F0(*(_BYTE *)(a2 + 3));
    }
  }
  else
  {
    v13 = 316LL;
    if ( *(_DWORD *)v4 != 1314275652 )
      v13 = 524LL;
    v14 = sub_14002285C(((*(_DWORD *)(v13 + v4) + 7) & 0xFFFFFFF8) + 1184, 0LL, (_QWORD *)v4);
    v5 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v9 = v14 + 48;
    sub_140017C40(v14 + 48, v15, 0, 0LL);
    *(_QWORD *)(v9 + 176) = 0LL;
    *(_QWORD *)(v9 + 168) = a2;
    *(_QWORD *)(v9 + 184) = v10;
    Status = sub_1400159B4(v9, v10, v20);
    if ( Status < 0 )
    {
LABEL_41:
      sub_140017A20(v9, 0);
      sub_140016754(v4, v5);
      return (unsigned int)Status;
    }
    if ( v7 )
      *(_QWORD *)(v7 + 96) = v9;
    else
      *(_QWORD *)(a2 + 48) = v9;
    sub_1400161E0((int *)v4, a2, v5 + 1184);
    KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
    *(_QWORD *)(v9 + 656) = sub_140038660;
    if ( *(_QWORD *)(v4 + 4960) )
      sub_1400212C0(v4, 0LL, 1LL);
    if ( *(_BYTE *)(v4 + 4370) )
      v16 = sub_140017D90(v4, (_QWORD *)v9);
    else
      v16 = sub_1400184D0(v4, v9);
    Status = v16;
    if ( v16 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
      Status = sub_1400229C8(*(_BYTE *)(a2 + 3));
    }
    if ( *(_QWORD *)(v4 + 4960) )
    {
      if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
      {
        sub_14001F93C(v4, *(unsigned int *)(v9 + 748));
        *(_BYTE *)(v9 + 17) &= ~1u;
      }
      sub_140021110(v4, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v17 = *(_DWORD *)(v7 + 60);
    *(_QWORD *)(v7 + 64) = v10;
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v10;
  }
  if ( Status == -2147483643 && v17 <= v20 )
    Status = 0;
  if ( v6 )
    sub_1400158A4(v6);
  if ( v5 )
    goto LABEL_41;
  return (unsigned int)Status;
}
