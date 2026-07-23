/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x140913860
 * Callers:
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateGuidFilterData @ 0x140913B50 (EtwpUpdateGuidFilterData.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5)
{
  int v5; // eax
  __int64 v10; // r8
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v15; // r11
  char *v16; // r10
  int v17; // r15d
  unsigned __int8 v18; // si
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  unsigned __int8 v23; // al
  __int64 i; // rdx
  __int64 v25; // rax
  __int64 v26; // r11
  char *v27; // r10
  int v28; // r15d
  unsigned __int8 v29; // si
  __int64 v30; // r14
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int128 v35; // [rsp+30h] [rbp-91h]
  __int128 v36; // [rsp+30h] [rbp-91h]
  __int128 v37; // [rsp+40h] [rbp-81h]
  __int128 v38; // [rsp+40h] [rbp-81h]
  int v39; // [rsp+50h] [rbp-71h] BYREF
  __int64 v40; // [rsp+58h] [rbp-69h] BYREF
  __int64 v41; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+70h] [rbp-51h] BYREF
  __int64 *v43; // [rsp+90h] [rbp-31h]
  __int64 v44; // [rsp+98h] [rbp-29h]
  __int64 *v45; // [rsp+A0h] [rbp-21h]
  __int64 v46; // [rsp+A8h] [rbp-19h]
  ULONG_PTR v47; // [rsp+B0h] [rbp-11h]
  __int64 v48; // [rsp+B8h] [rbp-9h]
  int *v49; // [rsp+C0h] [rbp-1h]
  __int64 v50; // [rsp+C8h] [rbp+7h]

  v5 = *(_DWORD *)(a2 + 72);
  v10 = 1LL;
  if ( v5 == 1 )
  {
    v11 = *(_BYTE *)(a2 + 112);
    *(_BYTE *)(BugCheckParameter2 + 91) ^= (v11 ^ *(_BYTE *)(BugCheckParameter2 + 91)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 91) = v11 & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 88) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 90) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 80) = a3;
  }
  else if ( !v5 && *(_WORD *)(BugCheckParameter2 + 88) == *(_WORD *)(a2 + 104) )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) &= ~1u;
  }
  v12 = 0LL;
  v13 = 16LL;
  while ( (unsigned int)v12 < 0x10 )
  {
    if ( *(_WORD *)(32LL * (unsigned int)v12 + BugCheckParameter2 + 134) == *(_WORD *)(a2 + 78) )
    {
      v32 = 32 * ((unsigned int)v12 + 4LL);
      if ( *(_DWORD *)(v32 + BugCheckParameter2) )
      {
        v15 = -1LL;
        v16 = (char *)(BugCheckParameter2 + 132);
        *(_OWORD *)(v32 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
        v35 = 0LL;
        v17 = 0;
        v18 = 0;
        v19 = 0LL;
        *(_OWORD *)(v32 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
        *((_QWORD *)&v37 + 1) = -1LL;
        do
        {
          if ( *((_DWORD *)v16 - 1) )
          {
            v23 = v18;
            LODWORD(v35) = 1;
            if ( v18 <= (unsigned __int8)*v16 )
              v23 = *v16;
            v15 &= *(_QWORD *)(v16 + 20);
            v19 |= *(_QWORD *)(v16 + 12);
            v18 = v23;
            v17 |= *((_DWORD *)v16 + 1);
            *((_QWORD *)&v37 + 1) = v15;
          }
          v16 += 32;
          --v13;
        }
        while ( v13 );
        BYTE4(v35) = v18;
        LOWORD(v10) = 1 << v12;
        DWORD2(v35) = v17;
        *(_QWORD *)&v37 = v19;
        *(_OWORD *)(BugCheckParameter2 + 96) = v35;
        *(_OWORD *)(BugCheckParameter2 + 112) = v37;
        *a5 = 1 << v12;
        LOBYTE(v10) = *(_DWORD *)(a2 + 72) == 0;
        EtwpUpdateGuidFilterData(BugCheckParameter2, v12, v10, a4);
        if ( !*(_DWORD *)(a2 + 72) )
          EtwpUnreferenceGuidEntry((__int64 *)BugCheckParameter2, v20, v21, v22);
        return 0LL;
      }
    }
    v12 = (unsigned int)(v12 + 1);
  }
  if ( !*(_DWORD *)(a2 + 72) )
    return 3221226021LL;
  for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
  {
    v25 = 32 * ((unsigned int)i + 4LL);
    if ( !*(_DWORD *)(v25 + BugCheckParameter2) )
    {
      v26 = -1LL;
      v27 = (char *)(BugCheckParameter2 + 132);
      *(_OWORD *)(v25 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
      v36 = 0LL;
      v28 = 0;
      v29 = 0;
      v30 = 0LL;
      *(_OWORD *)(v25 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
      *((_QWORD *)&v38 + 1) = -1LL;
      do
      {
        if ( *((_DWORD *)v27 - 1) )
        {
          v31 = v29;
          LODWORD(v36) = 1;
          if ( v29 <= (unsigned __int8)*v27 )
            v31 = *v27;
          v26 &= *(_QWORD *)(v27 + 20);
          v30 |= *(_QWORD *)(v27 + 12);
          v29 = v31;
          v28 |= *((_DWORD *)v27 + 1);
          *((_QWORD *)&v38 + 1) = v26;
        }
        v27 += 32;
        --v13;
      }
      while ( v13 );
      BYTE4(v36) = v29;
      LOWORD(v10) = 1 << i;
      DWORD2(v36) = v28;
      *(_QWORD *)&v38 = v30;
      *(_OWORD *)(BugCheckParameter2 + 96) = v36;
      *(_OWORD *)(BugCheckParameter2 + 112) = v38;
      *a5 = 1 << i;
      LOBYTE(v10) = *(_DWORD *)(a2 + 72) == 0;
      EtwpUpdateGuidFilterData(BugCheckParameter2, i, v10, a4);
      EtwpReferenceGuidEntry(BugCheckParameter2);
      return 0LL;
    }
  }
  if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x200000000000LL) )
  {
    v48 = v34;
    v43 = &v40;
    v39 = v34;
    v41 = 2164260864LL;
    v40 = v33;
    v45 = &v41;
    v44 = 8LL;
    v47 = BugCheckParameter2 + 40;
    v49 = &v39;
    v46 = 8LL;
    v50 = 4LL;
    tlgWriteAgg((__int64)&dword_140E08F78, (unsigned __int8 *)&byte_1400555BD, v33, 6u, &v42);
  }
  return 3221225626LL;
}
