/*
 * XREFs of HalacpiIrqTranslateResourceRequirementsIsa @ 0x140788D40
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140430260 (HalpIsInterruptTypeSecondary.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourceRequirementsIsa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v9; // esi
  __int64 Pool2; // rax
  _OWORD *v11; // rax
  unsigned int v13; // ebp
  char *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int UserAffinity_high; // r13d
  char v19; // r12
  unsigned int i; // r14d
  char *v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _BYTE *v26; // r8
  unsigned int v27; // r10d
  unsigned int *v28; // r9
  __int64 v29; // r14
  unsigned int v30; // edx
  unsigned int v31; // r11d
  __int64 v32; // r15
  _DWORD *v33; // r10
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // [rsp+78h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v37 = 0;
  v9 = 0;
  if ( v5 + 0x100000 <= 0xFFFFE )
    goto LABEL_2;
  v13 = *(_DWORD *)(a2 + 12);
  if ( v13 + 0x100000 <= 0xFFFFE )
    return 3221225473LL;
  if ( HalpIsInterruptTypeSecondary(0, v5) && HalpIsInterruptTypeSecondary(0, v13) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(0x100uLL);
    *a5 = Pool2;
    if ( Pool2 )
    {
      *a4 = 1;
      v11 = (_OWORD *)*a5;
      *v11 = *(_OWORD *)a2;
      v11[1] = *(_OWORD *)(a2 + 16);
      return 0LL;
    }
    return 3221225626LL;
  }
  v14 = (char *)ExAllocatePool2(0x100uLL);
  if ( !v14 )
    return 3221225626LL;
  v15 = *(_DWORD *)(a2 + 8);
  if ( v15 > 2 || *(_DWORD *)(a2 + 12) < 2u )
  {
    v9 = 1;
    *(_OWORD *)v14 = *(_OWORD *)a2;
    *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
  }
  else
  {
    if ( v15 < 2 )
    {
      v9 = 1;
      *(_OWORD *)v14 = *(_OWORD *)a2;
      *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
      *((_DWORD *)v14 + 2) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v14 + 3) = 1;
    }
    if ( *(_DWORD *)(a2 + 12) > 2u )
    {
      v16 = 32LL * v9++;
      *(_OWORD *)&v14[v16] = *(_OWORD *)a2;
      *(_OWORD *)&v14[v16 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v14[v16 + 12] = *(_DWORD *)(a2 + 12);
      *(_DWORD *)&v14[v16 + 8] = 3;
    }
    if ( *(_DWORD *)(a2 + 8) > 9u || *(_DWORD *)(a2 + 12) < 9u )
    {
      v17 = 32LL * v9++;
      *(_OWORD *)&v14[v17] = *(_OWORD *)a2;
      *(_OWORD *)&v14[v17 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v14[v17 + 8] = 9;
      *(_DWORD *)&v14[v17 + 12] = 9;
    }
  }
  UserAffinity_high = HIWORD(HalpDeviceBlockUnblockPushLock.UserAffinity);
  v19 = 0;
  for ( i = 0; i < v9; ++i )
  {
    v21 = &v14[32 * i];
    v22 = *((_DWORD *)v21 + 3);
    if ( v22 >= 0x10 || (v23 = *((_DWORD *)v21 + 2), v23 >= 0x10) )
    {
      v6 = -1073741823;
      goto LABEL_52;
    }
    if ( v23 <= UserAffinity_high && v22 >= UserAffinity_high )
    {
      if ( v19 )
      {
        v6 = -1073741595;
        goto LABEL_52;
      }
      v19 = 1;
      if ( v23 < UserAffinity_high )
      {
        v24 = 32LL * v9++;
        *(_DWORD *)&v14[v24 + 8] = v23;
        *(_DWORD *)&v14[v24 + 12] = UserAffinity_high - 1;
      }
      if ( *((_DWORD *)v21 + 3) > UserAffinity_high )
      {
        v25 = 32LL * v9++;
        *(_DWORD *)&v14[v25 + 8] = UserAffinity_high + 1;
        *(_DWORD *)&v14[v25 + 12] = *((_DWORD *)v21 + 3);
      }
      memmove(&v14[32 * i], v21 + 32, 32LL * (v9 - i));
      --v9;
    }
  }
  v26 = (_BYTE *)ExAllocatePool2(0x100uLL);
  if ( v26 )
  {
    v27 = 0;
    if ( v9 )
    {
      v28 = (unsigned int *)(v14 + 12);
      v29 = v9;
      do
      {
        v30 = *(v28 - 1);
        v31 = *v28;
        do
        {
          v32 = v30;
          if ( v30 < v31 )
          {
            v33 = (_DWORD *)HalpPicVectorRedirect + v30;
            do
            {
              v34 = v30 + 1;
              if ( *v33 + 1 != *((_DWORD *)HalpPicVectorRedirect + v34) )
                break;
              ++v33;
              ++v30;
            }
            while ( (unsigned int)v34 < v31 );
            v27 = v37;
          }
          v35 = 32LL * v27;
          *(_OWORD *)&v26[v35] = *(_OWORD *)a2;
          *(_OWORD *)&v26[v35 + 16] = *(_OWORD *)(a2 + 16);
          if ( v27 )
            v26[v35] = 8;
          ++v27;
          *(_DWORD *)&v26[v35 + 8] = *((_DWORD *)HalpPicVectorRedirect + v32);
          v36 = v30++;
          v37 = v27;
          *(_DWORD *)&v26[v35 + 12] = *((_DWORD *)HalpPicVectorRedirect + v36);
        }
        while ( v30 <= v31 );
        v28 += 8;
        --v29;
      }
      while ( v29 );
    }
    *a4 = v27;
    if ( v27 )
      *a5 = (__int64)v26;
    else
      ExFreePoolWithTag(v26, 0);
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_52:
  ExFreePoolWithTag(v14, 0);
  return v6;
}
