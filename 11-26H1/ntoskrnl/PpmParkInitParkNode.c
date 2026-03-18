/*
 * XREFs of PpmParkInitParkNode @ 0x14060F9F4
 * Callers:
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x1404205F0 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060B540 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkDetectComplexAndModulePresence @ 0x14060F3C4 (PpmParkDetectComplexAndModulePresence.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x1407C98E0 (PpmIdleInitializeConcurrency.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmParkInitParkNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  __int64 v4; // r14
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int8 v11; // dl
  char v12; // al
  unsigned __int16 *v13; // rax
  _WORD *v14; // rbx
  unsigned __int8 v15; // bp
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r8
  unsigned __int8 v19; // dl
  __int64 v20; // r12
  _WORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // cl
  unsigned __int16 v24; // bx
  unsigned __int8 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  int v30; // ebp
  __int64 v31; // rdx
  unsigned __int8 i; // si
  __int64 v33; // r10
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r9
  __int64 Pool2; // rax
  unsigned __int16 *v39[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v40; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+32h] [rbp-46h]
  __int16 v42; // [rsp+36h] [rbp-42h]
  unsigned int v43; // [rsp+80h] [rbp+8h] BYREF
  __int64 v44; // [rsp+88h] [rbp+10h]
  _DWORD *v45; // [rsp+90h] [rbp+18h]

  v45 = a3;
  v44 = a2;
  *(_QWORD *)(a1 + 280) = 2097153LL;
  v3 = a3;
  v41 = 0;
  v4 = a2;
  v42 = 0;
  v43 = 0;
  v6 = 3;
  memset_0((void *)(a1 + 288), 0, 0x100uLL);
  *(_QWORD *)(a1 + 544) = 2097153LL;
  memset_0((void *)(a1 + 552), 0, 0x100uLL);
  *(_QWORD *)(a1 + 808) = 2097153LL;
  memset_0((void *)(a1 + 816), 0, 0x100uLL);
  v7 = 0;
  if ( (unsigned __int8)PpmMaxCoreClasses < 3u || (v6 = PpmMaxCoreClasses) != 0 )
  {
    v8 = a1 + 16;
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
      v13 = *(unsigned __int16 **)(v8 + 8);
      v14 = (_WORD *)(*(_QWORD *)(a1 + 1256) + 624LL * v11);
      v40 = 0;
      v39[1] = v13;
      v39[0] = (unsigned __int16 *)v8;
      if ( !(unsigned int)KeEnumerateNextProcessor(&v43, v39) )
      {
        do
        {
          if ( *(_BYTE *)(KeGetPrcb(v43) + 35352) == v7 )
          {
            ++*v14;
            KeAddProcessorAffinityEx(v14 + 12, v43);
          }
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v43, v39) );
        v8 = a1 + 16;
      }
      v9 += 624LL;
      ++v7;
    }
    while ( v7 < v6 );
    v4 = v44;
    if ( v6 )
    {
      v15 = 1;
      v16 = v6;
      v17 = 0LL;
      do
      {
        v18 = *(_QWORD *)(a1 + 1256);
        if ( !*(_WORD *)(v18 + v17) )
        {
          v19 = v15;
          if ( v15 < v6 )
          {
            do
            {
              v20 = v18 + 624LL * v19;
              if ( *(_WORD *)v20 )
                break;
              ++v19;
            }
            while ( v19 < v6 );
            if ( v20 )
            {
              *(_WORD *)(v18 + v17) = *(_WORD *)v20;
              RtlpCopyAffinityEx(
                (struct _KAFFINITY_EX *)(v17 + v18 + 24),
                *(_WORD *)(v17 + v18 + 24 + 2),
                (struct _KAFFINITY_EX *)(v20 + 24));
              *(_WORD *)v20 = 0;
              *(_QWORD *)(v20 + 24) = 2097153LL;
              memset_0((void *)(v20 + 32), 0, 0x100uLL);
            }
          }
        }
        ++v15;
        v17 += 624LL;
        --v16;
      }
      while ( v16 );
      v21 = *(_WORD **)(a1 + 1256);
      v4 = v44;
      v22 = v6;
      do
      {
        if ( *v21 )
          ++*(_BYTE *)(a1 + 10);
        v21 += 312;
        --v22;
      }
      while ( v22 );
    }
    v3 = v45;
  }
  if ( !*(_QWORD *)(a1 + 1240) && (PpmHeteroHgsContainmentState & 2) != 0 )
    PpmHeteroHgsRegisterContainmentGroups(a1, v4);
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
  *v3 += 3 * (v24 + 1);
  if ( v4 )
    v29 = *(_QWORD *)(v4 + 1072);
  else
    v29 = 0LL;
  v30 = PpmIdleInitializeConcurrency(*(unsigned __int16 *)(a1 + 4), a1 + 16, a1 + 1072, v29);
  if ( v30 >= 0 )
  {
    if ( v4 )
      v31 = *(_QWORD *)(v4 + 1248);
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
          *v3 += 3 * (v35 + 1);
          if ( v4 && i < *(_BYTE *)(v4 + 10) )
            v36 = *(_QWORD *)(*(_QWORD *)(v4 + 1256) + v34 + 552);
          else
            v36 = 0LL;
          v30 = PpmIdleInitializeConcurrency(*(unsigned __int16 *)(a1 + 4), v33 + 24 + v34, v34 + v33 + 552, v36);
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
