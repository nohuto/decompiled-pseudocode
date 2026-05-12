/*
 * XREFs of sub_140001010 @ 0x140001010
 * Callers:
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     sub_14000172C @ 0x14000172C (sub_14000172C.c)
 *     sub_1400017E0 @ 0x1400017E0 (sub_1400017E0.c)
 *     sub_1400019C0 @ 0x1400019C0 (sub_1400019C0.c)
 *     sub_140001BFC @ 0x140001BFC (sub_140001BFC.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140016930 @ 0x140016930 (sub_140016930.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_140001010(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned __int8 a5, int a6)
{
  int v7; // eax
  unsigned __int64 v10; // rdx
  __int64 v12; // r13
  unsigned int v13; // ecx
  __int64 v14; // rbp
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  ULONG MaximumProcessorCount; // ebx
  bool v22; // cc
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int j; // esi
  __int64 Pool2; // rbx
  unsigned int v28; // ecx
  union _SLIST_HEADER *v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // eax
  __int64 i; // rsi
  PVOID *v36; // rax
  union _SLIST_HEADER *v37; // rcx
  __int64 v38; // [rsp+90h] [rbp+8h]
  unsigned int v40; // [rsp+B8h] [rbp+30h]

  v7 = 16;
  *(_DWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 152) = a4;
  if ( a2 <= 0x10 )
    v7 = a2;
  *(_DWORD *)(a1 + 180) = a6;
  v10 = qword_140168818;
  *(_DWORD *)(a1 + 140) = v7;
  *(_BYTE *)(a1 + 184) = a5 == 0;
  *(_DWORD *)(a1 + 160) = 0;
  v12 = a3;
  *(_DWORD *)(a1 + 148) = a3;
  *(_DWORD *)(a1 + 188) = 0;
  v13 = 64;
  v14 = *(_QWORD *)(a4 + 64);
  v38 = v14;
  if ( !v10 )
  {
    v15 = 256;
LABEL_5:
    v16 = v15;
    goto LABEL_6;
  }
  if ( v10 < 0x40000000 )
  {
LABEL_62:
    v15 = v13;
  }
  else if ( v10 >= 0x80000000 )
  {
    if ( v10 >= 0x200000000LL )
    {
      v33 = 0x400000000LL;
      v15 = 512;
      if ( v10 >= 0x400000000LL )
      {
        do
        {
          if ( v10 < v33 )
            break;
          v13 = *(_DWORD *)(a1 + 144);
          v15 *= 2;
          v33 *= 2LL;
          if ( v15 >= v13 )
            goto LABEL_62;
        }
        while ( v33 <= 0x800000000000LL );
      }
    }
    else
    {
      v15 = 256;
    }
  }
  else
  {
    v15 = 128;
  }
  v16 = *(_DWORD *)(a1 + 144);
  if ( *(unsigned int *)(a1 + 148) * (unsigned __int64)v16 > v10 / 0x2710 )
    goto LABEL_5;
LABEL_6:
  if ( (*(_BYTE *)(v14 + 112) & 2) != 0 && v16 > 0x40 )
    v16 = 64;
  v17 = sub_1400019C0(v14, 0LL);
  v18 = v17 + a2 - 1 - (v17 + a2 - 1) % v17;
  v20 = v18 % v17;
  v19 = v18 / v17;
  if ( v16 > v18 / v17 )
  {
    v18 = *(_DWORD *)(a1 + 140);
    if ( v19 < v18 )
      v19 = *(_DWORD *)(a1 + 140);
    v16 = v19;
  }
  if ( v16 > dword_140168438 )
    v16 = dword_140168438;
  if ( (byte_1401694F0 & 0x10) != 0 )
    sub_140001BFC(v18, v20, v17, *(_QWORD *)(v14 + 48), *(_DWORD *)(v14 + 56), v16, a2, v12);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount > 0x10 )
  {
    if ( MaximumProcessorCount > 0x40 )
    {
      v34 = 32;
      if ( MaximumProcessorCount <= 0x100 )
        v34 = 16;
      *(_DWORD *)(a1 + 128) = v34;
    }
    else
    {
      *(_DWORD *)(a1 + 128) = 8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 128) = 0;
    InitializeSListHead((PSLIST_HEADER)(a1 + 64));
  }
  v22 = *(_DWORD *)(v14 + 968) <= 1u;
  *(_DWORD *)(a1 + 132) = MaximumProcessorCount;
  if ( v22 )
  {
    v23 = *(unsigned int *)(a1 + 128);
    if ( (_DWORD)v23 )
    {
      v32 = sub_1400143E0(64LL, 8 * v23, 1397907794LL, a4);
      *(_QWORD *)(a1 + 64) = v32;
      if ( !v32 )
        *(_DWORD *)(a1 + 128) = 0;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 128); i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)(8 * i + *(_QWORD *)(a1 + 64)) = sub_1400143E0(72LL, 16LL, 1397907794LL, a4);
        v36 = *(PVOID **)(a1 + 64);
        v37 = (union _SLIST_HEADER *)v36[i];
        if ( !v37 )
        {
          if ( (_DWORD)i )
          {
            if ( (_DWORD)i != 1 )
            {
              *(_DWORD *)(a1 + 128) = i;
              break;
            }
            ExFreePoolWithTag(*v36, 0x53526152u);
          }
          ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x53526152u);
          *(_DWORD *)(a1 + 128) = 0;
          InitializeSListHead((PSLIST_HEADER)(a1 + 64));
          break;
        }
        InitializeSListHead(v37);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 128) = 0;
  }
  v24 = sub_14000172C(a1);
  v40 = v24;
  for ( j = 0; j < v16; ++j )
  {
    if ( *(_BYTE *)(a1 + 184) )
    {
      Pool2 = ExAllocatePool2(64LL, v12, 1397907794LL);
      if ( !Pool2 )
        sub_14008D9B8(a4, 64, v12, 1397907794, 0x80000000);
      v14 = v38;
    }
    else
    {
      Pool2 = sub_1400017E0((unsigned int)v12, v25, v14, v24);
    }
    if ( !Pool2 )
    {
      ++*(_DWORD *)(a1 + 160);
      break;
    }
    v28 = *(_DWORD *)(a1 + 128);
    if ( v28 )
      v29 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64) + 8LL * (j % v28));
    else
      v29 = (union _SLIST_HEADER *)(a1 + 64);
    ExpInterlockedPushEntrySList(v29, (PSLIST_ENTRY)Pool2);
    *(_DWORD *)(Pool2 + 48) = 523124044;
    *(_DWORD *)(Pool2 + 792) = a6;
    if ( a6 )
      v30 = Pool2 + (unsigned int)(v12 - a6);
    else
      v30 = 0LL;
    *(_QWORD *)(Pool2 + 808) = v30;
    if ( *(_BYTE *)(a1 + 184) )
      *(_QWORD *)(Pool2 + 840) = 0LL;
    v24 = v40;
    *(_QWORD *)(Pool2 + 32) = a1;
  }
  if ( j >= *(_DWORD *)(a1 + 140) )
  {
    *(_QWORD *)(a1 + 48) = v14;
    *(_DWORD *)(a1 + 136) = j;
    if ( (qword_140168890 & 6) != 2 )
    {
      if ( (qword_140168890 & 6) == 4 )
      {
        *(_BYTE *)(v14 + 112) &= ~4u;
        return 0LL;
      }
      if ( *(_DWORD *)(a1 + 144) > 0x20u )
        return 0LL;
    }
    *(_BYTE *)(v14 + 112) |= 4u;
    return 0LL;
  }
  sub_140016930(a1, a4, a5);
  return 3221225495LL;
}
