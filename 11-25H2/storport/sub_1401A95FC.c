/*
 * XREFs of sub_1401A95FC @ 0x1401A95FC
 * Callers:
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

_DWORD *__fastcall sub_1401A95FC(IRP *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  int v13; // r15d
  _DWORD *Pool2; // rsi
  char v15; // al
  unsigned int v16; // ecx
  char v17; // dl
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  char *v22; // rcx
  char *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-58h]
  int v31; // [rsp+88h] [rbp+10h]

  v7 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v31 = 152;
    v29 = 34LL;
    v9 = 176;
  }
  else
  {
    v9 = 144;
    v29 = 32LL;
    v31 = 144;
    v8 = 128;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 > 0x10 )
  {
    if ( v10 > 0x20 )
    {
      if ( v10 + 39 < 0x28 )
        return 0LL;
      v11 = ((v10 + 38) & 0xFFFFFFF8) + 8;
    }
    else
    {
      v11 = 56;
    }
  }
  else
  {
    v11 = 40;
  }
  v12 = v9 + v11;
  if ( v9 + v11 < v9 )
    return 0LL;
  v13 = 0;
  if ( a6 )
  {
    if ( v12 + 32 >= v12 )
    {
      v12 += 32;
      goto LABEL_16;
    }
    return 0LL;
  }
LABEL_16:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v12, 1766878288LL);
  if ( Pool2 )
  {
    if ( *(_BYTE *)(a2 + 17) )
    {
      v7 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a2 + 17), 1766878288LL);
      if ( !v7 )
      {
        ExFreePoolWithTag(Pool2, 0x69506C50u);
        Pool2 = 0LL;
        v13 = -1073741670;
      }
    }
    if ( v13 >= 0 )
    {
      Pool2[5] = 0;
      Pool2[3] = 1;
      *Pool2 = 2621448;
      Pool2[2] = 1397899864;
      Pool2[4] = v12;
      v15 = *(_BYTE *)(a2 + 18);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          Pool2[6] = 64;
        }
        else if ( v15 == 3 )
        {
          Pool2[6] = 192;
        }
      }
      else
      {
        Pool2[6] = 128;
      }
      if ( !v7 )
        Pool2[6] |= 0x20u;
      Pool2[6] |= a5 | 0x100;
      *((_WORD *)Pool2 + 18) = IoGetIoPriorityHint(a1);
      Pool2[10] = *(_DWORD *)(a2 + 20);
      v16 = (v8 != 128) + 1;
      Pool2[13] = v8;
      Pool2[14] = v16;
      if ( a6 )
      {
        v16 = (v8 != 128) + 2;
        Pool2[14] = v16;
      }
      v17 = *(_BYTE *)(a2 + 18);
      if ( v17 == 1 )
        v18 = *(_DWORD *)(a2 + 36);
      else
        v18 = *(_DWORD *)(a2 + 32);
      Pool2[15] = v18;
      v19 = a4;
      if ( v17 != 1 )
        v19 = a3;
      *((_QWORD *)Pool2 + 8) = v19;
      *((_QWORD *)Pool2 + 10) = a1;
      Pool2[30] = v31;
      if ( v16 >= 2 )
      {
        Pool2[31] = v11 + v31;
        if ( v16 == 3 )
          Pool2[32] = v11 + v31 + 24;
      }
      *(_OWORD *)&Pool2[v29] = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type + *(unsigned int *)(a2 + 24));
      v20 = *(_DWORD *)(a2 + 8);
      v21 = (unsigned int)Pool2[30];
      if ( v20 > 0x10 )
      {
        if ( v20 > 0x20 )
        {
          *(_DWORD *)((char *)Pool2 + v21) = 66;
          v25 = *(_DWORD *)(a2 + 8) + 24;
          *((_BYTE *)Pool2 + v21 + 8) = 0;
          *(_DWORD *)((char *)Pool2 + v21 + 4) = v25;
          *((_BYTE *)Pool2 + v21 + 9) = *(_BYTE *)(a2 + 17);
          *(_DWORD *)((char *)Pool2 + v21 + 12) = *(_DWORD *)(a2 + 8);
          *(_QWORD *)((char *)Pool2 + v21 + 24) = v7;
          v24 = v21 + 32;
        }
        else
        {
          *(_DWORD *)((char *)Pool2 + v21) = 65;
          *(_DWORD *)((char *)Pool2 + v21 + 4) = 48;
          *((_BYTE *)Pool2 + v21 + 8) = 0;
          *((_BYTE *)Pool2 + v21 + 9) = *(_BYTE *)(a2 + 17);
          *((_BYTE *)Pool2 + v21 + 10) = *(_BYTE *)(a2 + 8);
          *(_QWORD *)((char *)Pool2 + v21 + 16) = v7;
          v24 = v21 + 24;
        }
        v23 = (char *)Pool2 + v24;
      }
      else
      {
        v22 = (char *)Pool2 + v21;
        *(_DWORD *)v22 = 64;
        *((_DWORD *)v22 + 1) = 32;
        v22[8] = 0;
        v22[9] = *(_BYTE *)(a2 + 17);
        v22[10] = *(_BYTE *)(a2 + 8);
        *((_QWORD *)v22 + 2) = v7;
        v23 = v22 + 24;
      }
      memmove(v23, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      if ( Pool2[14] >= 2u )
      {
        v26 = (char *)Pool2 + (unsigned int)Pool2[31];
        *(_DWORD *)v26 = 1;
        *((_DWORD *)v26 + 1) = 16;
        *((_DWORD *)v26 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v26 + 2) = a4;
      }
      if ( Pool2[14] == 3 )
      {
        v27 = (unsigned int)Pool2[32];
        *(_DWORD *)((char *)Pool2 + v27) = 160;
        *(_DWORD *)((char *)Pool2 + v27 + 4) = 24;
        *(_QWORD *)((char *)Pool2 + v27 + 8) = a6;
      }
    }
  }
  return Pool2;
}
