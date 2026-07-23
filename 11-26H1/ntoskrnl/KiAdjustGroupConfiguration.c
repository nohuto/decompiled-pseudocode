/*
 * XREFs of KiAdjustGroupConfiguration @ 0x1405F1640
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405F1B14 (KiAllocateProcessorNumber.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int16 *v6; // rdx
  unsigned __int16 i; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // ecx
  __int16 v14; // cx
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  char v20; // al
  _QWORD *Pool2; // rbx
  __int64 v22; // rdi
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 *v27; // rdx
  __int64 v28; // rcx
  char v29; // r14
  unsigned __int16 j; // bp
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int16 v33; // cx
  __int64 v34; // r8
  __int16 v35; // dx
  unsigned __int16 v36; // ax
  unsigned int v37; // r9d
  unsigned int v38; // edx
  __int64 *v39; // r8
  __int64 v40; // rdx
  _DWORD v41[32]; // [rsp+20h] [rbp-138h] BYREF
  _DWORD Src[32]; // [rsp+A0h] [rbp-B8h] BYREF

  memset_0(v41, 0, sizeof(v41));
  if ( (*(_BYTE *)(a1 + 5) & 4) == 0 )
  {
    if ( KiMaximumGroups )
    {
      v2 = (unsigned __int16)KiMaximumGroups;
      v3 = v41;
      v4 = KiMaximumGroupSize;
      while ( v2 )
      {
        *v3++ = v4;
        --v2;
      }
    }
    if ( KiSubNodeCount )
    {
      v5 = (unsigned __int16)KiSubNodeCount;
      v6 = (unsigned __int16 *)(KiSubNodeConfigBlock + 6);
      do
      {
        if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
          v41[*v6] -= *((unsigned __int8 *)v6 - 2);
        v6 += 12;
        --v5;
      }
      while ( v5 );
    }
    for ( i = 0; ; ++i )
    {
      v8 = (unsigned __int16)KiSubNodeCount;
      if ( i >= (unsigned __int16)KiSubNodeCount )
        break;
      v9 = KiSubNodeConfigBlock + 24LL * i;
      if ( (*(_BYTE *)(v9 + 5) & 7) == 3 && !*(_QWORD *)(v9 + 16) )
      {
        v10 = *(unsigned __int8 *)(a1 + 4);
        v11 = KiSubNodeConfigBlock + 24LL * i;
        v12 = *(unsigned __int8 *)(v9 + 4);
        if ( (unsigned __int8)v12 > (unsigned __int8)v10 )
          v11 = a1;
        v13 = *(unsigned __int8 *)(v9 + 4) - v10;
        if ( (unsigned __int8)v12 <= (unsigned __int8)v10 )
          v13 = *(unsigned __int8 *)(a1 + 4) - v12;
        if ( v41[*(unsigned __int16 *)(v11 + 6)] >= v13 )
        {
          v14 = *(_WORD *)(v9 + 6);
          *(_WORD *)(v9 + 6) = *(_WORD *)(a1 + 6);
          *(_BYTE *)(a1 + 5) |= 2u;
          *(_WORD *)(a1 + 6) = v14;
          *(_BYTE *)(v9 + 5) &= ~2u;
          return;
        }
      }
    }
    if ( KiMaximumGroups )
    {
      v15 = (unsigned __int16)KiMaximumGroups;
      v16 = Src;
      v17 = KiMaximumGroupSize;
      while ( v15 )
      {
        *v16++ = v17;
        --v15;
      }
    }
    if ( (_WORD)v8 )
    {
      v18 = v8;
      v19 = (_QWORD *)(KiSubNodeConfigBlock + 16);
      do
      {
        v20 = *((_BYTE *)v19 - 11);
        if ( (v20 & 1) != 0 && ((v20 & 4) != 0 || *v19) )
          Src[*((unsigned __int16 *)v19 - 5)] -= *((unsigned __int8 *)v19 - 12);
        v19 += 3;
        --v18;
      }
      while ( v18 );
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      LOWORD(v22) = 0;
      if ( KiSubNodeCount )
      {
        v23 = (unsigned __int16)KiSubNodeCount;
        v24 = (_QWORD *)(KiSubNodeConfigBlock + 16);
        do
        {
          if ( (*((_BYTE *)v24 - 11) & 5) == 1 && !*v24 )
          {
            v25 = (unsigned __int16)v22;
            LOWORD(v22) = v22 + 1;
            Pool2[v25] = v24 - 2;
          }
          v24 += 3;
          --v23;
        }
        while ( v23 );
      }
      v26 = (unsigned __int16)v22;
      qsort(Pool2, (unsigned __int16)v22, 8uLL, KiCompareSubNodeConfigurationCapacity);
      if ( (_WORD)v22 )
      {
        v27 = Pool2;
        do
        {
          v28 = *v27++;
          *(_WORD *)(v28 + 8) = *(_WORD *)(v28 + 6);
          --v26;
        }
        while ( v26 );
      }
      v29 = 0;
      for ( j = 0; j < (unsigned __int16)KiActiveGroups; ++j )
      {
        if ( KiMaximumGroups )
          memmove(v41, Src, 4LL * (unsigned __int16)KiMaximumGroups);
        v31 = *(unsigned __int8 *)(a1 + 4);
        v32 = v41[j];
        if ( v32 >= v31 )
        {
          *(_WORD *)(a1 + 6) = j;
          v41[j] = v32 - v31;
          v33 = 0;
          if ( (_WORD)v22 )
          {
            while ( 1 )
            {
              v34 = Pool2[v33];
              if ( v34 != a1 )
              {
                v35 = KiMaximumGroups;
                v36 = 0;
                if ( KiMaximumGroups )
                {
                  v37 = *(unsigned __int8 *)(v34 + 4);
                  do
                  {
                    v38 = v41[v36];
                    if ( v38 >= v37 )
                    {
                      *(_WORD *)(v34 + 6) = v36;
                      v41[v36] = v38 - v37;
                    }
                    v35 = KiMaximumGroups;
                    ++v36;
                  }
                  while ( v36 < (unsigned __int16)KiMaximumGroups );
                }
                if ( v36 == v35 )
                  break;
              }
              if ( ++v33 >= (unsigned __int16)v22 )
                goto LABEL_57;
            }
          }
          else
          {
LABEL_57:
            if ( v33 == (_WORD)v22 )
            {
              v29 = 1;
              break;
            }
          }
        }
      }
      if ( (_WORD)v22 )
      {
        v39 = Pool2;
        v22 = (unsigned __int16)v22;
        do
        {
          v40 = *v39;
          if ( v29 )
            *(_BYTE *)(v40 + 5) = (*(_WORD *)(v40 + 6) < (unsigned __int16)KiActiveGroups ? 2 : 0) | *(_BYTE *)(v40 + 5) & 0xFD;
          else
            *(_WORD *)(v40 + 6) = *(_WORD *)(v40 + 8);
          ++v39;
          *(_WORD *)(v40 + 8) = 0;
          --v22;
        }
        while ( v22 );
      }
      ExFreePoolWithTag(Pool2, 0);
    }
  }
}
