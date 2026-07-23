/*
 * XREFs of MiComputeIdealLargePage @ 0x1404F1BFC
 * Callers:
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiGetVadPte @ 0x140716D14 (MiGetVadPte.c)
 */

void __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v7; // r10
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int64 VadPte; // rdi
  __int64 v12; // r11
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 valid; // r10
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  _QWORD *i; // rdx
  _QWORD *v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+30h] [rbp-38h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h] BYREF
  char v33; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  v7 = (v4 >> 17) & 3;
  v8 = MiVadPageSizes[v7];
  if ( v8 >= 0x10 && ((v4 & 0x1C) == 8 || (v4 & 0x200000) != 0) )
  {
    v29 = MiVadPageIndices[v7];
    v9 = -1LL;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    VadPte = MiGetVadPte(a1);
    v13 = v8;
    if ( v8 == 16 )
      v13 = 1LL;
    v14 = v13 * (512 - ((VadPte >> 3) & 0x1FF));
    v30 = MiGetVadPte(v12);
    v31 = MiGetVadPte(v15);
    if ( VadPte != v30 || a3 < v14 )
    {
      v33 = MiLockWorkingSetShared((__int64)p_Blink, v16, v17);
      valid = MiLockLowestValidPageTableEx((__int64)p_Blink, VadPte, &v32, 0);
      if ( valid == ((VadPte >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        LOWORD(v19) = VadPte;
        v20 = (_QWORD *)VadPte;
        v21 = VadPte;
        while ( ((unsigned __int16)v19 & 0xFFF) != 0 && v20 != (_QWORD *)v30 )
        {
          v22 = 128LL;
          if ( v8 != 16 )
            v22 = 8LL;
          v19 = (_QWORD *)(v21 - v22);
          v20 = v19;
          v21 -= v22;
          if ( (*v19 & 1) != 0 )
          {
            v9 = ((*v19 >> 12) & 0xFFFFFFFFFFLL) + v13 * ((__int64)(VadPte - (_QWORD)v19) >> 3);
            if ( v9 != -1 )
              goto LABEL_27;
            break;
          }
        }
        if ( a3 < v14 )
        {
          for ( i = (_QWORD *)(VadPte + 8 * (a3 / v13)); ; i = &v24[v25] )
          {
            v24 = i;
            if ( ((unsigned __int16)i & 0xFFF) == 0 || (unsigned __int64)i >= v31 )
              break;
            if ( (*i & 1) != 0 )
            {
              v26 = v13 * ((__int64)((__int64)i - VadPte) >> 3);
              v27 = (*i >> 12) & 0xFFFFFFFFFFLL;
              if ( v27 < v26 )
                v9 = -1LL;
              else
                v9 = v27 - v26;
              break;
            }
            v25 = 16LL;
            if ( v8 != 16 )
              v25 = 1LL;
          }
        }
      }
LABEL_27:
      MiUnlockPageTableInternal((__int64)p_Blink, valid);
      LOBYTE(v28) = v33;
      MiUnlockWorkingSetShared((__int64)p_Blink, v28);
      if ( v9 != -1 )
      {
        *(_DWORD *)(a4 + 48) = v29;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
}
