/*
 * XREFs of PpmHeteroDetectHgsCores @ 0x1404C87C4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmHeteroDetectHgsCores(__int64 a1)
{
  char v2; // bl
  unsigned __int64 v3; // r14
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  unsigned int v10; // r15d
  unsigned __int64 v11; // r12
  char v12; // r13
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // r10
  unsigned __int8 v20; // al
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  bool v23; // zf
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int8 v27; // al
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rcx
  _DWORD *v35; // r9
  __int64 v36; // rdx
  int i; // eax
  char v38; // r8
  __int64 v39; // rsi
  __int64 Prcb; // rax
  __int64 v41; // r9
  unsigned int v42; // edx
  char v43; // r8
  bool v44; // r10
  bool v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int128 v48; // [rsp+20h] [rbp-20h] BYREF
  __int64 v49; // [rsp+30h] [rbp-10h]
  unsigned int v50; // [rsp+88h] [rbp+48h] BYREF
  int v51; // [rsp+90h] [rbp+50h]

  v49 = 0LL;
  v48 = 0LL;
  v50 = 0;
  v2 = 0;
  if ( !PpmHeteroHgsEnabled )
    return v2;
  v3 = qword_140E0B638[0];
  *(_QWORD *)&v48 = PpmCheckRegistered;
  v2 = 1;
  v4 = 0;
  v5 = -1;
  LOWORD(v6) = 0;
LABEL_3:
  v51 = 0;
  while ( 1 )
  {
    if ( v3 )
    {
      _BitScanForward64(&v7, v3);
      v3 &= ~(1LL << v7);
      v50 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
            + 64 * (unsigned __int16)v6
            + (unsigned __int8)v7);
      v8 = *(_BYTE *)(KeGetPrcb(v50) + 35352);
      v9 = v8;
      if ( v8 <= v4 )
        v9 = v4;
      v4 = v9;
      if ( v8 >= v5 )
        v8 = v5;
      v5 = v8;
      goto LABEL_3;
    }
    v6 = (unsigned __int16)(v6 + 1);
    if ( (unsigned int)v6 >= LOWORD(PpmCheckRegistered[0]) )
      break;
    v3 = PpmCheckRegistered[v6 + 1];
  }
  if ( !PpmHeteroHgsPopulated )
  {
    if ( v4 != v5 )
    {
      *((_QWORD *)&v48 + 1) = qword_140E0B638[0];
      LOWORD(v49) = 0;
      for ( i = KeEnumerateNextProcessor(&v50, (unsigned __int16 **)&v48);
            !i;
            i = KeEnumerateNextProcessor(&v50, (unsigned __int16 **)&v48) )
      {
        v39 = v50;
        Prcb = KeGetPrcb(v50);
        v41 = PpmHeteroCapability;
        v42 = 0;
        v43 = *(_BYTE *)(Prcb + 35352);
        *(_BYTE *)(v39 + *(_QWORD *)(a1 + 8)) = v43;
        if ( *(_DWORD *)(v41 + 4) )
        {
          v44 = v43 == (char)v5;
          v45 = v43 != (char)v5;
          do
          {
            v46 = v42;
            v47 = v42 + *(_DWORD *)(a1 + 4) * (_DWORD)v39;
            ++v42;
            *(_BYTE *)(a1 + 4 * v47 + 25) = v45;
            *(_BYTE *)(a1 + 4 * v47 + 24) = v44;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v46) = 257;
          }
          while ( v42 < *(_DWORD *)(v41 + 4) );
        }
      }
    }
    return v2;
  }
  v10 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return v2;
  do
  {
    v11 = qword_140E0B638[0];
    v12 = 1;
    v13 = 0;
    LOBYTE(v50) = 0;
    v14 = 0;
    LOBYTE(v51) = 0;
    LOWORD(v15) = 0;
    while ( 1 )
    {
      while ( v11 )
      {
        _BitScanForward64(&v16, v11);
        v11 &= ~(1LL << v16);
        v17 = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                        + 64 * (unsigned __int16)v15
                        + (unsigned __int8)v16));
        v18 = *(_QWORD *)(v17 + 35424);
        v19 = *(_DWORD **)(v17 + 35456);
        v20 = v50;
        if ( *(_BYTE *)(v18 + 4LL * v10 + 5) > (unsigned __int8)v50 )
          v20 = *(_BYTE *)(v18 + 4LL * v10 + 5);
        v21 = *(_BYTE *)(v18 + 4LL * v10 + 4);
        LOBYTE(v50) = v20;
        v13 = v20;
        v22 = v51;
        if ( v21 > (unsigned __int8)v51 )
          v22 = v21;
        v14 = v22;
        LOBYTE(v51) = v22;
        if ( PpmHeteroHgsParkingHintEnabled )
        {
          if ( PpmHeteroHgsVendor == 2 )
          {
            if ( *(_BYTE *)(v18 + 4LL * v10 + 6) )
            {
              v23 = *(_BYTE *)(v18 + 4LL * v10 + 7) == 0;
LABEL_24:
              if ( !v23 )
                v12 = 0;
            }
          }
          else if ( PpmHeteroHgsVendor == 3 && *v19 != 2 )
          {
            v23 = *v19 == 1;
            goto LABEL_24;
          }
        }
      }
      v15 = (unsigned __int16)(v15 + 1);
      if ( (unsigned int)v15 >= LOWORD(PpmCheckRegistered[0]) )
        break;
      v11 = PpmCheckRegistered[v15 + 1];
    }
    v25 = *(_QWORD *)(a1 + 16);
    LOWORD(v26) = 0;
    v27 = v13;
    if ( *(_BYTE *)(v25 + 2LL * v10) < v13 )
      v27 = *(_BYTE *)(v25 + 2LL * v10);
    v28 = *(_BYTE *)(v25 + 2LL * v10 + 1);
    *(_BYTE *)(v25 + 2LL * v10) = v27;
    v29 = v14;
    if ( v28 < v14 )
      v29 = v28;
    *(_BYTE *)(v25 + 2LL * v10 + 1) = v29;
    v30 = qword_140E0B638[0];
LABEL_36:
    v50 = 0;
    while ( 1 )
    {
      if ( v30 )
      {
        _BitScanForward64(&v31, v30);
        v30 &= ~(1LL << v31);
        v50 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
              + 64 * (unsigned __int16)v26
              + (unsigned __int8)v31);
        v32 = KeGetPrcb(v50);
        v33 = v50;
        v34 = *(_QWORD *)(v32 + 35424);
        v35 = *(_DWORD **)(v32 + 35456);
        v36 = v10 + *(_DWORD *)(a1 + 4) * v50;
        if ( PpmHeteroHgsEePerfHintsIndependentEnabled )
        {
          if ( !v12 )
          {
            v38 = PpmHeteroHgsVendor;
            if ( PpmHeteroHgsVendor == 2 && !*(_BYTE *)(v34 + 4LL * v10 + 7) || *v35 == 2 || *v35 == 1 )
              *(_BYTE *)(a1 + 4 * v36 + 26) = 1;
            if ( v38 == 2 && !*(_BYTE *)(v34 + 4LL * v10 + 6) || *v35 == 2 || *v35 == 1 )
              *(_BYTE *)(a1 + 4 * v36 + 27) = 1;
          }
        }
        else if ( !v12
               && (PpmHeteroHgsVendor == 2 && (!*(_BYTE *)(v34 + 4LL * v10 + 7) || !*(_BYTE *)(v34 + 4LL * v10 + 6))
                || *v35 == 2
                || *v35 == 1) )
        {
          *(_WORD *)(a1 + 4 * v36 + 26) = 257;
        }
        *(_BYTE *)(a1 + 4 * v36 + 25) = *(_BYTE *)(v34 + 4LL * v10 + 4);
        *(_BYTE *)(a1 + 4 * v36 + 24) = *(_BYTE *)(v34 + 4LL * v10 + 5);
        *(_BYTE *)(v33 + *(_QWORD *)(a1 + 8)) = *(_BYTE *)(v32 + 35352);
        goto LABEL_36;
      }
      v26 = (unsigned __int16)(v26 + 1);
      if ( (unsigned int)v26 >= LOWORD(PpmCheckRegistered[0]) )
        break;
      v30 = PpmCheckRegistered[v26 + 1];
    }
    ++v10;
  }
  while ( v10 < *(_DWORD *)(a1 + 4) );
  return v2;
}
