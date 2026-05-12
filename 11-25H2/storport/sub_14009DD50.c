/*
 * XREFs of sub_14009DD50 @ 0x14009DD50
 * Callers:
 *     sub_140030CD0 @ 0x140030CD0 (sub_140030CD0.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 */

__int64 __fastcall sub_14009DD50(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rsi
  __int64 v6; // rsi
  _WORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  void *v10; // r14
  __int64 v11; // rcx
  unsigned int LockArray_high; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  char v16; // al
  PIRP v17; // rax
  IRP *v18; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK v20; // [rsp+20h] [rbp-18h] BYREF

  v20 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *(_DWORD **)(a1 + 24);
  if ( *v5 == 1314275652 )
  {
    v6 = (__int64)v5 + 274;
  }
  else if ( *v5 == 1094997074 )
  {
    v6 = (__int64)v5 + 482;
  }
  else
  {
    v6 = 98LL;
  }
  v7 = (_WORD *)sub_140015A14(*(_QWORD *)(a1 + 8), 0x10u, *(_BYTE *)v6, 0);
  if ( !v7 )
    return 3221225495LL;
  v8 = (_QWORD *)sub_1400143E0(64LL, 8LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = v8;
  if ( !v8 )
  {
LABEL_25:
    ExFreePoolWithTag(v7, 0x72536152u);
    return 3221225495LL;
  }
  *v8 = a2;
  if ( *(_BYTE *)v6 == 1 )
  {
    v11 = *((unsigned int *)v7 + 13);
    *((_DWORD *)v7 + 5) = 16;
    *((_BYTE *)v7 + v11 + 8) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)v7 + v11 + 9) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)v7 + v11 + 10) = *(_BYTE *)(a1 + 106);
    *((_DWORD *)v7 + 6) = 524562;
    v9 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v9 == 1094997074 && (*(_BYTE *)(v9 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high));
      v13 = **(_QWORD **)(*(_QWORD *)(v9 + 6168) + 8LL * LockArray_high);
      *((_DWORD *)v7 + 11) = HIDWORD(v13);
    }
    else
    {
      LODWORD(v13) = -1;
    }
    *((_DWORD *)v7 + 8) = v13;
    v14 = 10;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 8) = v10;
    *((_DWORD *)v7 + 15) = 8;
    if ( *(_BYTE *)(a1 + 3368) )
    {
      if ( *(_DWORD *)(a1 + 3388) < 0xAu )
        v14 = *(_DWORD *)(a1 + 3388);
    }
    *((_DWORD *)v7 + 10) = v14;
    v7[19] = 33;
  }
  else
  {
    *v7 = 88;
    v15 = 10;
    *((_BYTE *)v7 + 2) = 16;
    *((_BYTE *)v7 + 5) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)v7 + 6) = *(_BYTE *)(a1 + 105);
    v16 = *(_BYTE *)(a1 + 106);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_BYTE *)v7 + 7) = v16;
    *((_DWORD *)v7 + 3) = 524562;
    *((_BYTE *)v7 + 8) = -1;
    *((_QWORD *)v7 + 3) = v10;
    *((_DWORD *)v7 + 4) = 8;
    if ( *(_BYTE *)(a1 + 3368) && *(_DWORD *)(a1 + 3388) < 0xAu )
      v15 = *(_DWORD *)(a1 + 3388);
    *((_DWORD *)v7 + 5) = v15;
    *((_BYTE *)v7 + 9) = 33;
  }
  v17 = sub_140014B7C(*(_QWORD *)(a1 + 8), (ULONG_PTR)v7, v9, &v20);
  v18 = v17;
  if ( !v17 )
  {
    ExFreePoolWithTag(v10, 0x72536152u);
    goto LABEL_25;
  }
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_14009DFB0;
  CurrentStackLocation[-1].Context = v7;
  CurrentStackLocation[-1].Control = -32;
  sub_1400066C0(a1, (__int64)v18, 1);
  v18->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v18);
  return 259LL;
}
