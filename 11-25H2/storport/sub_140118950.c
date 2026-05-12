/*
 * XREFs of sub_140118950 @ 0x140118950
 * Callers:
 *     sub_140101670 @ 0x140101670 (sub_140101670.c)
 * Callees:
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_140115540 @ 0x140115540 (sub_140115540.c)
 *     sub_1401155A0 @ 0x1401155A0 (sub_1401155A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 *     sub_1401206E0 @ 0x1401206E0 (sub_1401206E0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140118950(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  ULONG CurrentProcessorNumber; // eax
  volatile signed __int32 *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  unsigned __int64 v23; // r14
  unsigned __int8 v24; // r12
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // r10
  unsigned int v30; // r13d
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  char v35; // al
  unsigned __int64 v36; // r11
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // r13
  char v40; // al
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rdi
  char v44; // r12
  KIRQL v45; // r15
  int v46; // r9d
  PSLIST_ENTRY v47; // rax
  __int64 v48; // rax
  __int64 v49; // r10
  __int64 v50; // r8
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v55; // rcx
  __int64 v56; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v57; // rcx
  __int64 v58; // rcx
  int v60; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+B0h] [rbp+8h]
  unsigned int v62; // [rsp+B8h] [rbp+10h]
  __int64 v63; // [rsp+B8h] [rbp+10h]
  __int64 v64; // [rsp+C0h] [rbp+18h]
  __int64 v65; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v66; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 184);
  v64 = v2;
  v5 = 259;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = CurrentProcessorNumber;
  if ( *(_BYTE *)v8 )
    goto LABEL_28;
  v7 = *(volatile signed __int32 **)(*(_QWORD *)(v8 + 24) + 8LL * CurrentProcessorNumber);
  if ( _InterlockedIncrement(v7) != 1 )
    goto LABEL_28;
  if ( KeGetCurrentIrql() >= 2u || (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) & 6) != 0 )
  {
    v10 = 1;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v17 = *(_QWORD *)(v16 + 160);
    if ( *(_BYTE *)v17 == 1 )
    {
      PoFxActivateComponent(**(_QWORD **)(v17 + 8), 0LL, 2LL);
      v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 160) + 8LL) + 64LL) == 1;
    }
    v18 = *(_QWORD *)(a1 + 128);
    if ( !v18 )
      goto LABEL_25;
    if ( !*(_QWORD *)(v18 + 8) )
      goto LABEL_25;
    v19 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v18 + 40);
    if ( !v19 || !ExAcquireRundownProtectionCacheAware(v19) )
      goto LABEL_25;
    v15 = 2LL;
  }
  else
  {
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v12 = *(_QWORD *)(v11 + 160);
    if ( *(_BYTE *)v12 == 1 )
    {
      PoFxActivateComponent(**(_QWORD **)(v12 + 8), 0LL, 1LL);
      v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 160) + 8LL) + 64LL) == 1;
    }
    v13 = *(_QWORD *)(a1 + 128);
    if ( !v13 )
      goto LABEL_25;
    if ( !*(_QWORD *)(v13 + 8) )
      goto LABEL_25;
    v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v13 + 40);
    if ( !v14 || !ExAcquireRundownProtectionCacheAware(v14) )
      goto LABEL_25;
    v15 = 5LL;
    if ( !*(_DWORD *)(a1 + 264) )
      v15 = 1LL;
  }
  PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, v15);
  v20 = *(_QWORD *)(a1 + 128);
  v21 = *(_QWORD *)(v20 + 8);
  v10 = *(_BYTE *)(v21 + 64) == 1;
  if ( v20 )
  {
    if ( v21 )
    {
      v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v20 + 40);
      if ( v22 )
        ExReleaseRundownProtectionCacheAware(v22);
    }
  }
LABEL_25:
  if ( !v10 )
  {
    sub_140117A50(a1, a2, v9);
    return v5;
  }
  v2 = v64;
LABEL_28:
  LOBYTE(v7) = 1;
  if ( (unsigned __int8)sub_1401206E0(*(_QWORD *)(a1 + 256), a2, (_DWORD)v7, v9, *(_QWORD *)(a1 + 16)) )
    return v5;
  v23 = *(unsigned int *)(v2 + 8);
  v24 = *(_BYTE *)v2 == 3;
  v25 = *(_QWORD *)(v2 + 24);
  if ( (_DWORD)v23 )
  {
    v26 = *(unsigned int *)(a1 + 64);
    if ( (unsigned int)v23 % (unsigned int)v26
      || (v66 = v25 / v26, v27 = v25 / v26, v25 % v26)
      || (v28 = *(_QWORD *)(a1 + 424), v62 = (unsigned int)v23 / (unsigned int)v26, v27 >= v28)
      || v28 - v27 < (unsigned int)v23 / (unsigned int)v26 )
    {
      v5 = -1073741811;
      goto LABEL_67;
    }
    v29 = *(_QWORD **)(a1 + 16);
    v30 = *(_DWORD *)(v29[16] + 200LL);
    if ( (unsigned int)v23 <= v30 )
    {
      v31 = *(_DWORD *)(a1 + 420);
      if ( !v31 )
      {
LABEL_43:
        if ( (v29[17] & 0x100000000LL) == 0 )
        {
          v38 = sub_1401155A0((__int64)v29, v9);
          v39 = v38;
          if ( !v38 )
          {
            v5 = -1073741670;
            goto LABEL_67;
          }
          *(_QWORD *)(v38 + 40) = a2;
          v40 = *(_BYTE *)(v38 + 126);
          *(_QWORD *)(v39 + 104) = v27;
          *(_QWORD *)(v39 + 96) = v25;
          *(_BYTE *)(v39 + 126) = v24 | v40 & 0xFE;
          *(_DWORD *)(v39 + 112) = v62;
          *(_QWORD *)(v39 + 64) = 0LL;
          *(_QWORD *)(v39 + 72) = 0LL;
          *(_QWORD *)(v39 + 32) = a1;
          *(_DWORD *)(v39 + 116) = v23;
          *(_QWORD *)(v39 + 56) = *(_QWORD *)(v64 + 24);
          v41 = *(_QWORD *)(v64 + 8);
          *(_QWORD *)(v64 + 24) = v39;
          *(_QWORD *)(v39 + 48) = v41;
          *(_QWORD *)(v39 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL)
                                + *(unsigned int *)(*(_QWORD *)(a2 + 8) + 44LL);
          *(_QWORD *)(v64 + 8) = 0xFEDCBA9000000000uLL;
          v42 = *(unsigned __int16 *)(v39 + 124);
          v43 = *(_QWORD *)(v39 + 16);
          v65 = *(_QWORD *)(a2 + 8);
          v63 = *(_QWORD *)(v39 + 80);
          v61 = *(_QWORD *)(a1 + 16);
          v44 = v24 ^ 1;
          v45 = KfRaiseIrql(2u);
          v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, char, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 128) + 1144LL) + 8LL) + 112LL))(
                 *(_QWORD *)(*(_QWORD *)(v61 + 128) + 1144LL),
                 *(_QWORD *)(*(_QWORD *)(v61 + 128) + 8LL),
                 v65,
                 v63,
                 v23,
                 sub_1401172A0,
                 v39,
                 v44,
                 v43,
                 v42);
          if ( v5 == -1073741789 )
          {
            LOBYTE(v60) = v44;
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 128) + 1144LL) + 8LL) + 88LL))(
                   *(_QWORD *)(*(_QWORD *)(v61 + 128) + 1144LL),
                   *(_QWORD *)(*(_QWORD *)(v61 + 128) + 8LL),
                   v65,
                   v63,
                   v23,
                   sub_1401172A0,
                   v39,
                   v60);
          }
          if ( v45 < 2u )
            KeLowerIrql(v45);
          if ( (v5 & 0x80000000) == 0 )
            return 259;
          sub_140115540(*(_QWORD *)(a1 + 16), v39, 1);
LABEL_62:
          if ( v5 != -2147483631 )
          {
            if ( v5 == 259 )
              return v5;
            goto LABEL_67;
          }
          return 259;
        }
        v46 = 0;
        if ( ((v23
             + ((*(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + *(_DWORD *)(*(_QWORD *)(a2 + 8) + 44LL)) & 0xFFF)
             + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
        {
          v47 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v29[110] + 8 * v9));
          v46 = (int)v47;
          if ( !v47 )
          {
            v48 = sub_1401147F0(*(_QWORD *)(a1 + 16), v9);
            v46 = v48;
            if ( !v48 )
            {
              sub_140118560(a1, a2, v9);
              return 259;
            }
          }
        }
        v49 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v49 + 136) & 2) != 0 )
          v50 = *(_QWORD *)(v49 + 728) + 192 * v9;
        else
          LODWORD(v50) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v49 + 872) + 2 * v9) + *(_DWORD *)(v49 + 728) - 192;
        v51 = sub_14011F570(a1, a2, v50, v46, v9, 0, v23, v25, v66, v62, v24, 0LL);
LABEL_61:
        v5 = v51;
        goto LABEL_62;
      }
      if ( (unsigned int)v23 <= v31 )
      {
        v32 = v31 - 1;
        v33 = v31;
        v34 = (v31 - 1) & (unsigned int)v23;
        v35 = *(_BYTE *)(a1 + 419);
        v36 = v34 + v33 + (v32 & (unsigned int)v25) - 1LL;
        v37 = v35 ? (v36 >> v35) + (v23 >> v35) : (unsigned int)(v36 / v33) + (unsigned int)(v23 / v33);
        if ( v37 <= 1 )
        {
          v27 = v25 / v26;
          goto LABEL_43;
        }
      }
    }
    v51 = sub_14011EBD0(a1, a2, v24, v23, v25, v30, v9, 0LL, 0LL, 0LL);
    goto LABEL_61;
  }
  v5 = 0;
LABEL_67:
  v52 = *(_QWORD *)(a1 + 128);
  if ( !*(_BYTE *)v52
    && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v52 + 24) + 8 * v9), 0xFFFFFFFF) == 1 )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v54 = *(_QWORD *)(a1 + 128);
    if ( v54 )
    {
      if ( *(_QWORD *)(v54 + 8) )
      {
        v55 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v54 + 40);
        if ( v55 )
        {
          if ( ExAcquireRundownProtectionCacheAware(v55) )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
            v56 = *(_QWORD *)(a1 + 128);
            if ( v56 )
            {
              if ( *(_QWORD *)(v56 + 8) )
              {
                v57 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v56 + 40);
                if ( v57 )
                  ExReleaseRundownProtectionCacheAware(v57);
              }
            }
          }
        }
      }
    }
    v58 = *(_QWORD *)(v53 + 160);
    if ( *(_BYTE *)v58 == 1 )
      PoFxIdleComponent(**(_QWORD **)(v58 + 8), 0LL, 2LL);
  }
  return v5;
}
