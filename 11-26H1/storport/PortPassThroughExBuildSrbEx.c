/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1401B19FC
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r12
  int v8; // r15d
  unsigned int v9; // eax
  int v10; // r13d
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  _DWORD *Pool2; // rsi
  int v15; // eax
  char v16; // al
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v29; // [rsp+78h] [rbp+10h]

  v7 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v29 = 34LL;
    v9 = 176;
    v10 = 152;
  }
  else
  {
    v9 = 144;
    v29 = 32LL;
    v10 = 144;
    v8 = 128;
  }
  v11 = *(_DWORD *)(a2 + 8);
  if ( v11 > 0x10 )
  {
    if ( v11 > 0x20 )
    {
      if ( v11 + 39 < 0x28 )
        return 0LL;
      v12 = ((v11 + 38) & 0xFFFFFFF8) + 8;
    }
    else
    {
      v12 = 56;
    }
  }
  else
  {
    v12 = 40;
  }
  v13 = v9 + v12;
  if ( v9 + v12 >= v9 )
  {
    if ( !a6 )
    {
LABEL_16:
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, v13, 1766878288LL);
      if ( !Pool2 )
        return Pool2;
      v15 = 0;
      if ( *(_BYTE *)(a2 + 17) )
      {
        v7 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a2 + 17), 1766878288LL);
        v15 = 0;
        if ( !v7 )
        {
          ExFreePoolWithTag(Pool2, 0x69506C50u);
          v15 = -1073741670;
          Pool2 = 0LL;
        }
      }
      if ( v15 < 0 )
        return Pool2;
      *Pool2 = 2621448;
      Pool2[2] = 1397899864;
      Pool2[3] = 1;
      Pool2[4] = v13;
      Pool2[5] = 0;
      v16 = *(_BYTE *)(a2 + 18);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          Pool2[6] = 64;
        }
        else if ( v16 == 3 )
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
      Pool2[6] |= 0x2000100u;
      *((_WORD *)Pool2 + 18) = IoGetIoPriorityHint(a1);
      Pool2[10] = *(_DWORD *)(a2 + 20);
      v17 = (v8 != 128) + 1;
      Pool2[13] = v8;
      Pool2[14] = v17;
      if ( a6 )
      {
        v17 = (v8 != 128) + 2;
        Pool2[14] = v17;
      }
      v18 = *(_BYTE *)(a2 + 18) == 1;
      v19 = 36LL;
      if ( *(_BYTE *)(a2 + 18) != 1 )
        v19 = 32LL;
      Pool2[15] = *(_DWORD *)(v19 + a2);
      v20 = a4;
      if ( !v18 )
        v20 = a3;
      *((_QWORD *)Pool2 + 8) = v20;
      *((_QWORD *)Pool2 + 10) = a1;
      Pool2[30] = v10;
      if ( v17 >= 2 )
      {
        Pool2[31] = v12 + v10;
        if ( v17 == 3 )
          Pool2[32] = v12 + v10 + 24;
      }
      *(_OWORD *)&Pool2[v29] = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type + *(unsigned int *)(a2 + 24));
      v21 = *(_DWORD *)(a2 + 8);
      v22 = (unsigned int)Pool2[30];
      if ( v21 > 0x10 )
      {
        if ( v21 > 0x20 )
        {
          *(_DWORD *)((char *)Pool2 + v22) = 66;
          v24 = *(_DWORD *)(a2 + 8) + 24;
          *((_BYTE *)Pool2 + v22 + 8) = 0;
          *(_DWORD *)((char *)Pool2 + v22 + 4) = v24;
          *((_BYTE *)Pool2 + v22 + 9) = *(_BYTE *)(a2 + 17);
          *(_DWORD *)((char *)Pool2 + v22 + 12) = *(_DWORD *)(a2 + 8);
          *(_QWORD *)((char *)Pool2 + v22 + 24) = v7;
          v23 = v22 + 32;
          goto LABEL_44;
        }
        *(_DWORD *)((char *)Pool2 + v22) = 65;
        *(_DWORD *)((char *)Pool2 + v22 + 4) = 48;
      }
      else
      {
        *(_DWORD *)((char *)Pool2 + v22) = 64;
        *(_DWORD *)((char *)Pool2 + v22 + 4) = 32;
      }
      *((_BYTE *)Pool2 + v22 + 8) = 0;
      *((_BYTE *)Pool2 + v22 + 9) = *(_BYTE *)(a2 + 17);
      *((_BYTE *)Pool2 + v22 + 10) = *(_BYTE *)(a2 + 8);
      *(_QWORD *)((char *)Pool2 + v22 + 16) = v7;
      v23 = v22 + 24;
LABEL_44:
      memmove((char *)Pool2 + v23, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      if ( Pool2[14] >= 2u )
      {
        v25 = (unsigned int)Pool2[31];
        *(_DWORD *)((char *)Pool2 + v25) = 1;
        *(_DWORD *)((char *)Pool2 + v25 + 4) = 16;
        *(_DWORD *)((char *)Pool2 + v25 + 8) = *(_DWORD *)(a2 + 36);
        *(_QWORD *)((char *)Pool2 + v25 + 16) = a4;
      }
      if ( Pool2[14] == 3 )
      {
        v26 = (unsigned int)Pool2[32];
        *(_DWORD *)((char *)Pool2 + v26) = 160;
        *(_DWORD *)((char *)Pool2 + v26 + 4) = 24;
        *(_QWORD *)((char *)Pool2 + v26 + 8) = a6;
      }
      return Pool2;
    }
    if ( v13 + 32 >= v13 )
    {
      v13 += 32;
      goto LABEL_16;
    }
  }
  return 0LL;
}
