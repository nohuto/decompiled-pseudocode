/*
 * XREFs of PpmParkInitParkNode @ 0x140612C58
 * Callers:
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417E30 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkDetectComplexAndModulePresence @ 0x140612628 (PpmParkDetectComplexAndModulePresence.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x1407CC980 (PpmIdleInitializeConcurrency.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmParkInitParkNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r12
  _DWORD *v4; // r15
  __int64 v5; // rbp
  unsigned __int8 v7; // si
  unsigned __int8 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int8 v11; // dl
  char v12; // al
  __int64 v13; // rax
  _WORD *v14; // rbx
  __int64 v15; // rax
  unsigned __int8 v16; // r15
  __int64 v17; // r14
  unsigned __int8 v18; // cl
  __int64 v19; // r13
  __int16 v20; // ax
  _WORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // cl
  unsigned __int16 v24; // bx
  unsigned __int8 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  int v30; // r14d
  __int64 v31; // rdx
  unsigned __int8 i; // si
  __int64 v33; // r10
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r9
  __int64 Pool2; // rax
  unsigned __int16 *v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+80h] [rbp+8h] BYREF
  __int64 v43; // [rsp+88h] [rbp+10h]
  _DWORD *v44; // [rsp+90h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v3 = 0LL;
  *(_QWORD *)(a1 + 280) = 2097153LL;
  v4 = a3;
  *(_DWORD *)((char *)&v41 + 2) = 0;
  v5 = a2;
  HIWORD(v41) = 0;
  LODWORD(v42) = 0;
  memset_0((void *)(a1 + 288), 0, 0x100uLL);
  *(_QWORD *)(a1 + 544) = 2097153LL;
  memset_0((void *)(a1 + 552), 0, 0x100uLL);
  *(_QWORD *)(a1 + 808) = 2097153LL;
  memset_0((void *)(a1 + 816), 0, 0x100uLL);
  v7 = 3;
  v8 = 0;
  if ( (unsigned __int8)PpmMaxCoreClasses < 3u || (v7 = PpmMaxCoreClasses) != 0 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(a1 + 1256);
      *(_QWORD *)(v10 + v9 + 24) = 2097153LL;
      memset_0((void *)(v9 + v10 + 32), 0, 0x100uLL);
      *(_QWORD *)(v10 + v9 + 288) = 2097153LL;
      memset_0((void *)(v9 + v10 + 296), 0, 0x100uLL);
      if ( !PpmHeteroIsMultiClassParkingEnabled() )
      {
        v12 = v11;
        if ( v11 )
          v12 = 1;
        v11 = v12;
      }
      v13 = *(_QWORD *)(a1 + 24);
      v14 = (_WORD *)(*(_QWORD *)(a1 + 1256) + 624LL * v11);
      LOWORD(v41) = 0;
      v40 = v13;
      v39 = (unsigned __int16 *)(a1 + 16);
      while ( !(unsigned int)KeEnumerateNextProcessor(&v42, &v39) )
      {
        if ( *(_BYTE *)(KeGetPrcb(v42) + 35352) == v8 )
        {
          ++*v14;
          KeAddProcessorAffinityEx(v14 + 12, v42);
        }
      }
      ++v8;
      v9 += 624LL;
    }
    while ( v8 < v7 );
    v5 = v43;
    if ( v7 )
    {
      v15 = v7;
      v16 = 1;
      v42 = v7;
      do
      {
        v17 = *(_QWORD *)(a1 + 1256);
        if ( !*(_WORD *)(v17 + v3) )
        {
          v18 = v16;
          if ( v16 < v7 )
          {
            do
            {
              v19 = 624LL * v18;
              v20 = *(_WORD *)(v17 + v19);
              if ( v20 )
                break;
              ++v18;
            }
            while ( v18 < v7 );
            *(_WORD *)(v17 + v3) = v20;
            RtlpCopyAffinityEx(
              (struct _KAFFINITY_EX *)(v3 + v17 + 24),
              *(_WORD *)(v3 + v17 + 24 + 2),
              (struct _KAFFINITY_EX *)(v17 + v19 + 24));
            *(_WORD *)(v17 + v19) = 0;
            *(_WORD *)(v17 + v19 + 24) = 1;
            *(_WORD *)(v17 + v19 + 26) = 32;
            *(_DWORD *)(v17 + v19 + 28) = 0;
            memset_0((void *)(v19 + v17 + 32), 0, 0x100uLL);
            v15 = v42;
          }
        }
        v3 += 624LL;
        ++v16;
        v42 = --v15;
      }
      while ( v15 );
      v21 = *(_WORD **)(a1 + 1256);
      v5 = v43;
      v22 = v7;
      do
      {
        if ( *v21 )
          ++*(_BYTE *)(a1 + 10);
        v21 += 312;
        --v22;
      }
      while ( v22 );
    }
    v4 = v44;
  }
  if ( !*(_QWORD *)(a1 + 1240) && (PpmHeteroHgsContainmentState & 2) != 0 )
    PpmHeteroHgsRegisterContainmentGroups(a1, v5);
  v23 = *(_BYTE *)(a1 + 10);
  *(_BYTE *)(a1 + 1153) = v23 > 1u;
  if ( v23 <= 1u )
    *(_BYTE *)(a1 + 1152) |= 4u;
  v24 = 0;
  v25 = 0;
  if ( v23 )
  {
    do
    {
      v26 = *(_QWORD *)(a1 + 1256);
      v27 = v25++;
      v28 = 624 * v27;
      LOWORD(v27) = *(_WORD *)(624 * v27 + v26);
      v24 += v27;
      *(_WORD *)(v28 + v26 + 6) = v27;
      *(_WORD *)(v28 + v26 + 8) = v27;
      *(_WORD *)(v28 + v26 + 10) = v27;
    }
    while ( v25 < *(_BYTE *)(a1 + 10) );
  }
  *v4 += 3 * (v24 + 1);
  if ( v5 )
    v29 = *(_QWORD *)(v5 + 1072);
  else
    v29 = 0LL;
  v30 = PpmIdleInitializeConcurrency(*(unsigned __int16 *)(a1 + 4), a1 + 16, a1 + 1072, v29, v39, v40, v41);
  if ( v30 >= 0 )
  {
    if ( v5 )
      v31 = *(_QWORD *)(v5 + 1248);
    else
      v31 = 0LL;
    PpmParkDetectComplexAndModulePresence(a1, v31);
    if ( *(_BYTE *)(a1 + 1153) )
    {
      for ( i = 0; i < *(_BYTE *)(a1 + 10); ++i )
      {
        v33 = *(_QWORD *)(a1 + 1256);
        v34 = 624LL * i;
        v35 = *(unsigned __int16 *)(v33 + v34);
        if ( (_WORD)v35 )
        {
          *v4 += 3 * (v35 + 1);
          if ( v5 && i < *(_BYTE *)(v5 + 10) )
            v36 = *(_QWORD *)(*(_QWORD *)(v5 + 1256) + v34 + 552);
          else
            v36 = 0LL;
          v30 = PpmIdleInitializeConcurrency(
                  *(unsigned __int16 *)(a1 + 4),
                  v33 + 24 + v34,
                  v34 + v33 + 552,
                  v36,
                  v39,
                  v40,
                  v41);
          if ( v30 < 0 )
            return (unsigned int)v30;
        }
      }
    }
    *(_WORD *)(a1 + 8) = v24;
    *(_WORD *)(a1 + 1138) = v24;
    *(_WORD *)(a1 + 1142) = v24;
    *(_DWORD *)(a1 + 1192) = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_QWORD *)(a1 + 1216) = Pool2;
      *(_DWORD *)(a1 + 1192) = 2;
    }
  }
  return (unsigned int)v30;
}
