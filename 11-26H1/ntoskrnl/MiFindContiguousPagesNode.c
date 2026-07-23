/*
 * XREFs of MiFindContiguousPagesNode @ 0x14028FA50
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiDeleteCachedKernelStack @ 0x14028F3BC (MiDeleteCachedKernelStack.c)
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A8BB0 (MiDeleteCachedKernelShadowStack.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFindContiguousPagesNode(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rsi
  unsigned int v4; // r14d
  ULONG *v5; // r11
  int v6; // r13d
  _DWORD *v7; // r10
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // edi
  char v12; // cl
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // eax
  bool v16; // zf
  char v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r10
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // rsi
  volatile __int64 *v34; // rbx
  unsigned int v35; // ebx
  ULONG *v36; // rsi
  int v37; // r12d
  __int64 v38; // r13
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  __int16 v44; // dx
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // r13
  unsigned int v51; // ecx
  unsigned __int8 CurrentIrql; // r15
  __int64 v53; // rdx
  int v54; // [rsp+30h] [rbp-99h] BYREF
  int v55; // [rsp+34h] [rbp-95h] BYREF
  unsigned __int64 v56; // [rsp+38h] [rbp-91h]
  int v57; // [rsp+40h] [rbp-89h]
  ULONG *v58; // [rsp+48h] [rbp-81h]
  __int64 v59; // [rsp+50h] [rbp-79h]
  __int64 v60; // [rsp+58h] [rbp-71h]
  _DWORD *v61; // [rsp+60h] [rbp-69h]
  __int64 v62; // [rsp+68h] [rbp-61h]
  unsigned int v63; // [rsp+70h] [rbp-59h]
  __int64 v64; // [rsp+78h] [rbp-51h]
  __int64 v65; // [rsp+80h] [rbp-49h]
  unsigned __int64 v66; // [rsp+88h] [rbp-41h]
  _QWORD v67[2]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-29h]
  int v69; // [rsp+A8h] [rbp-21h]
  int v70; // [rsp+ACh] [rbp-1Dh]
  __int64 v71; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-11h]
  __int64 v73; // [rsp+C0h] [rbp-9h]
  __int64 v74; // [rsp+C8h] [rbp-1h]
  int v77; // [rsp+140h] [rbp+77h]
  int v78; // [rsp+148h] [rbp+7Fh]

  v2 = *a1;
  v3 = a1;
  v59 = v2;
  v4 = 0;
  v57 = 0;
  v5 = *(ULONG **)v2;
  v6 = *(_DWORD *)(v2 + 60);
  v65 = *(_QWORD *)(v2 + 80);
  a1[8] = *(_QWORD *)(v2 + 16);
  v7 = (_DWORD *)a1[30];
  v8 = a1[31];
  v58 = v5;
  v77 = v6;
  v9 = *v7;
  v61 = v7;
  v62 = v8;
  while ( 1 )
  {
LABEL_2:
    if ( !v9 )
      return 3221225473LL;
    v10 = (unsigned int)(v9 - 1);
    v78 = v10;
    v11 = *(_DWORD *)(v8 + 8 * v10);
    v12 = *(_BYTE *)(v8 + 8 * v10 + 4);
    v10 *= 2LL;
    v63 = v11;
    v13 = *(_QWORD *)&v7[2 * v10 + 4];
    v3[5] = v13;
    v14 = v13 + *(_QWORD *)&v7[2 * v10 + 6];
    v3[6] = v14;
    if ( v3[7] >= v14 )
      return 3221225473LL;
    v15 = *(_DWORD *)(v2 + 52);
    if ( v15 >= 0 )
    {
      v16 = v11 == v15;
      v9 = v78;
      if ( !v16 )
        continue;
    }
    v17 = *((_BYTE *)v3 + 104);
    if ( v17 == -1 )
      break;
    v16 = v12 == v17;
    v9 = v78;
    if ( v16 )
      break;
  }
  while ( 2 )
  {
    v18 = v3[8];
    if ( v14 - 1 > v18 )
    {
      v14 = v18 + 1;
      v3[6] = v18 + 1;
    }
    v19 = v3[7];
    if ( v13 < v19 )
    {
      v3[5] = v19;
      v13 = v19;
    }
    v20 = v3[11];
    if ( v20 )
    {
      v21 = ~(v20 - 1);
      v13 = v21 & (v20 + v13 - 1);
      v3[5] = v13;
      v14 &= v21;
      v3[6] = v14;
    }
    while ( 1 )
    {
      v9 = v78;
      v7 = v61;
      v8 = v62;
      if ( v13 >= v14 )
        goto LABEL_44;
      if ( !*((_BYTE *)v3 + 96) )
      {
        v9 = v78;
        if ( v3[10] > v14 - v13 )
          goto LABEL_44;
      }
      v22 = v3[9];
      if ( !v22 )
        break;
      v30 = ~(v22 - 1);
      if ( (((v14 - 1) ^ (v14 - v3[10])) & v30) == 0 )
        break;
      if ( (v14 & v30) != v14 )
      {
        v3[6] = v14 & v30;
        v14 &= v30;
      }
      if ( (v13 & v30) != v13 )
      {
        v9 = v78;
        v8 = v62;
        v13 = v30 & (v22 + v13 - 1);
        v7 = v61;
        v3[5] = v13;
        if ( !v13 )
        {
          v2 = v59;
          goto LABEL_2;
        }
      }
    }
    if ( !*(_QWORD *)(56320LL * v11 + *((_QWORD *)v5 + 2) + 13888) )
    {
      v7 = v61;
      v9 = v78;
      v8 = v62;
      if ( (MiFlags & 0x30) != 0 )
        goto LABEL_44;
    }
    v16 = *((_BYTE *)v3 + 96) == 0;
    v23 = v3[10];
    v56 = v23;
    if ( !v16 )
    {
      if ( v23 > v3[6] - v3[5] )
        v23 = v3[6] - v3[5];
      v56 = v23;
    }
    v24 = v3[6];
    v25 = 0LL;
    v55 = 0;
    v26 = v24 - v23;
    v64 = v24;
    if ( v65 )
    {
      v51 = *(_DWORD *)(v65 + 4);
      if ( v51 )
      {
        while ( v4 < v51 )
        {
          if ( v26 >= *(_QWORD *)(v65 + 8LL * v4 + 24) )
          {
            if ( v26 == *(_QWORD *)(v65 + 8LL * v4 + 24) )
            {
              v25 = v3[9];
              v57 = v4 + 1;
            }
            break;
          }
          v57 = ++v4;
        }
      }
    }
    v27 = 48 * v26 - 0x220000000000LL;
    if ( !*((_BYTE *)v3 + 96) )
    {
      if ( v25 )
        goto LABEL_25;
      v28 = MiPfnsWorthTrying((_DWORD)v5, 48 * (int)v26, v3[10], v6, (__int64)&v55);
      v5 = v58;
      v25 = v28;
    }
    if ( v25 )
      goto LABEL_25;
    if ( (v55 & 1) != 0 )
    {
      _InterlockedIncrement(dword_140EF91D8);
      if ( (byte_140E2D809 & 1) == 0 )
      {
        if ( v5 == &MiSystemPartition )
        {
          v31 = KeNumberProcessors_0;
          v32 = 0;
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            v33 = (__int64)v58;
            do
            {
              v34 = (volatile __int64 *)(KeGetPrcb(v32) + 34608);
              if ( *v34 )
              {
                v53 = _InterlockedExchange64(v34, 0LL);
                if ( v53 )
                  MiDeleteCachedKernelStack(v33, v53);
              }
              if ( *((_QWORD *)v34 + 1) && _InterlockedExchange64(v34 + 1, 0LL) )
                MiDeleteCachedKernelShadowStack(v33);
              ++v32;
            }
            while ( v32 < v31 );
            v11 = v63;
            v3 = a1;
            v5 = v58;
          }
          v23 = v56;
        }
        v35 = 0;
        if ( KeNumberNodes )
        {
          v36 = v58;
          do
          {
            v37 = 0;
            v38 = *((_QWORD *)v36 + 2) + 56320LL * v35;
            do
            {
              if ( (unsigned int)v37 >= 3 )
                break;
              MiPruneCachedStackList(v36, v38 + ((unsigned __int64)(unsigned int)v37++ << 6) + 14240, 0LL, 0LL);
            }
            while ( v37 < 8 );
            ++v35;
          }
          while ( v35 < (unsigned __int16)KeNumberNodes );
          v3 = a1;
          v23 = v56;
          v5 = v58;
        }
      }
    }
    v68 = v23;
    v25 = v23;
    v72 = 0LL;
    v39 = v26;
    v55 = 0;
    v60 = *(_QWORD *)(v59 + 72);
    v74 = v60;
    v67[1] = v3 + 14;
    v69 = v77;
    v70 = *((_DWORD *)v3 + 3);
    v73 = v3[8];
    v67[0] = v5;
    v71 = -1LL;
    v54 = 0;
    v40 = 48 * v26 - 0x220000000000LL;
    v66 = v40 + 48 * v56;
    while ( 1 )
    {
      v41 = MiTradePage(v67, v39, &v55);
      v42 = v41;
      if ( !v41 )
        break;
      v43 = v68 - v41;
      v68 -= v41;
      if ( !v68 )
      {
        _InterlockedIncrement(&dword_140EF90E8);
        v25 = 0LL;
        goto LABEL_77;
      }
      v44 = v77;
LABEL_66:
      v71 = -1LL;
      v39 += v42;
      v40 += 48 * v42;
      if ( v40 >= v66 )
        goto LABEL_76;
    }
    v42 = 1LL;
    if ( v72 > 1 )
    {
      if ( v39 == (v39 & ~(v72 - 1)) )
        v42 = v72;
      else
        v42 = (~(v72 - 1) & (v39 + v72 - 1)) - v39;
    }
    if ( !v54 )
    {
      if ( v72 )
        v25 = v64 - (v39 & ~(v72 - 1));
      v54 = 1;
    }
    v44 = v77;
    if ( (v77 & 0x2000) != 0 )
    {
      if ( v42 >= v64 - v39 )
        goto LABEL_77;
      v43 = v68;
      goto LABEL_66;
    }
    v43 = v68;
LABEL_76:
    if ( (v44 & 0x2000) != 0 )
    {
LABEL_77:
      v48 = v60;
      goto LABEL_78;
    }
    _InterlockedIncrement(&dword_140EF91CC);
    v50 = v56 - v43;
    v48 = v60;
    _InterlockedExchange64(&qword_140EF91D0, (__int64)(v40 + 0x220000000000LL) / 48);
    if ( v60 )
      *(_DWORD *)(v60 + 40) += -4096 * v50;
    if ( v50 )
    {
      do
      {
        v40 -= 48LL;
        MiReleaseFreshPage(v40);
        --v50;
      }
      while ( v50 );
      goto LABEL_77;
    }
LABEL_78:
    if ( v48 )
    {
      v46 = *((_DWORD *)v3 + 9);
      v47 = *(_DWORD *)(v48 + 40) >> 12;
      if ( v47 != v46 )
      {
        v3[10] = (unsigned int)(v46 - v47);
        goto LABEL_80;
      }
    }
    else if ( v25 )
    {
LABEL_80:
      if ( ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FF) != *(_WORD *)v58 )
        goto LABEL_83;
      if ( !MiIsPageOnBadList(48 * v26 - 0x220000000000LL) )
      {
        *((_BYTE *)v3 + 10) = 1;
LABEL_83:
        v6 = v77;
LABEL_84:
        v23 = v56;
        goto LABEL_25;
      }
      if ( *((_BYTE *)v3 + 8) == 2 )
      {
        CurrentIrql = 17;
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v49) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v49);
        }
        v54 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
      }
      v6 = v77;
      if ( !MiIsPageOnBadList(v27) )
      {
        *((_BYTE *)v3 + 10) = 1;
LABEL_109:
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql >= 2u )
          goto LABEL_84;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v23 = v56;
LABEL_25:
        if ( (v55 & 2) != 0 )
          *((_DWORD *)v3 + 8) |= 1u;
        v29 = v3[6];
        v13 = v3[5];
        if ( v25 >= v29 - v13 || !*((_BYTE *)v3 + 96) && v29 - v13 - v25 < v23 )
          v3[8] = v29 + ~v25;
        v5 = v58;
        v14 = v29 - v25;
        v4 = v57;
        v3[6] = v14;
        continue;
      }
      if ( (v77 & 0x10000000) == 0 )
        goto LABEL_109;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v5 = v58;
      v7 = v61;
      v9 = 0;
      v8 = v62;
      v4 = v57;
      *((_BYTE *)v3 + 9) = 0;
LABEL_44:
      v2 = v59;
      goto LABEL_2;
    }
    break;
  }
  *a2 = v26;
  return 0LL;
}
