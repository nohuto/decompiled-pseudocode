/*
 * XREFs of PpmHeteroDistributeUtility @ 0x14025B4D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     PpmParkDistributeUtility @ 0x14025C334 (PpmParkDistributeUtility.c)
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025C98C (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140611DFC (PpmEventTraceHeteroDistributeUtility.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PpmHeteroDistributeUtility()
{
  __int64 result; // rax
  unsigned int v1; // r13d
  __int64 v2; // r14
  unsigned int v3; // r8d
  int v4; // r12d
  __int64 v5; // r9
  _WORD *v6; // rdx
  bool v7; // zf
  unsigned int v8; // ecx
  __int64 v9; // r15
  unsigned int v10; // ebx
  char v11; // di
  char v12; // si
  char *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r12d
  unsigned int v18; // r13d
  __int64 v19; // rdi
  int v20; // r13d
  __int64 v21; // rdi
  unsigned int v22; // r12d
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // bl
  char *v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-C8h]
  __int128 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h]
  char *v34; // [rsp+60h] [rbp-A8h]
  struct _KAFFINITY_EX v35; // [rsp+68h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v36; // [rsp+178h] [rbp+70h] BYREF

  memset_0(&v36.8, 0, sizeof(v36.8));
  v33 = 0LL;
  v32 = 0LL;
  memset_0(&v35.8, 0, sizeof(v35.8));
  v34 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  *(_QWORD *)&v36.Count = 2097153LL;
  memset_0(&v36.8, 0, sizeof(v36.8));
  *(_QWORD *)&v35.Count = 2097153LL;
  result = (__int64)memset_0(&v35.8, 0, sizeof(v35.8));
  v1 = 0;
  v31 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = PpmParkNodes + 1264LL * v1;
      if ( PpmHeteroPolicy == 4 )
        break;
      result = PpmParkDistributeUtility((struct _KAFFINITY_EX *)(v2 + 16), (struct _KAFFINITY_EX *)(v2 + 280), 0, 0LL);
LABEL_4:
      v31 = ++v1;
      if ( v1 >= PpmParkNumNodes )
        return result;
    }
    v3 = 0;
    v4 = *(unsigned __int8 *)(v2 + 10);
    if ( !*(_BYTE *)(v2 + 10) )
      goto LABEL_12;
    v5 = *(unsigned __int8 *)(v2 + 10);
    v6 = (_WORD *)(*(_QWORD *)(v2 + 1256) + 10LL);
    do
    {
      v7 = *v6 == 0;
      v8 = v3 + 1;
      v6 += 312;
      if ( v7 )
        v8 = v3;
      v3 = v8;
      --v5;
    }
    while ( v5 );
    if ( v8 <= 1 )
      goto LABEL_12;
    if ( PpmHeteroParkBias )
    {
      if ( PpmHeteroParkBias == 1 )
        goto LABEL_12;
      if ( PpmHeteroParkBias != 2 )
      {
        if ( PpmHeteroParkBias == 3 )
        {
          v17 = 0;
          v30 = 0;
          v18 = 0;
          v9 = v2 + 280;
          while ( 1 )
          {
            v19 = 624LL * v18 + *(_QWORD *)(v2 + 1256);
            RtlAndAffinityEx((unsigned __int16 *)(v2 + 280), (unsigned __int16 *)(v19 + 24), (__int64)&v36);
            PpmParkDistributeUtility((struct _KAFFINITY_EX *)(v19 + 24), &v36, v17, (__int64)&v30);
            result = *(unsigned __int8 *)(v2 + 10);
            if ( ++v18 >= (unsigned int)result )
              break;
            v17 = v30;
          }
          v1 = v31;
LABEL_13:
          v10 = 1;
          v11 = 0;
          v12 = 0;
          if ( *(_BYTE *)(v2 + 10) > 1u )
          {
            v13 = v34;
            do
            {
              v14 = v10;
              if ( (unsigned int)RtlSubtractAffinityEx(*(_QWORD *)(v2 + 1256) + 24LL + 624LL * v10, v9, &v35) )
              {
                v11 = 0;
                v12 = 1;
                RtlAndAffinityEx(&v35.Count, (unsigned __int16 *)(v2 + 544), (__int64)&v35);
                v30 = 0;
                LOWORD(v33) = 0;
                *((_QWORD *)&v32 + 1) = v35.Bitmap[0];
                *(_QWORD *)&v32 = &v35;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
                {
                  do
                  {
                    v24 = *(_QWORD *)(KeGetPrcb(v30) + 35280);
                    if ( v24 )
                    {
                      v11 = v13[689];
                      *(_BYTE *)(v24 + 239) = v11;
                    }
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) );
                  v14 = v10;
                }
                RtlpXorAffinityEx(
                  &v35,
                  (struct _KAFFINITY_EX *)(624 * v14 + 24 + *(_QWORD *)(v2 + 1256)),
                  &v35,
                  v35.Size);
                *((_QWORD *)&v32 + 1) = v35.Bitmap[0];
                *(_QWORD *)&v32 = &v35;
                LOWORD(v33) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
                {
                  v25 = *(_QWORD *)(KeGetPrcb(v30) + 35280);
                  if ( v25 )
                    *(_BYTE *)(v25 + 239) = 0;
                }
              }
              result = *(unsigned __int8 *)(v2 + 10);
              ++v10;
            }
            while ( v10 < (unsigned int)result );
            v1 = v31;
            if ( v12 )
            {
              v26 = 0;
              if ( !PpmPerfQosEnabled )
              {
                RtlSubtractAffinityEx(*(_QWORD *)(v2 + 1256) + 24LL, v9, &v35);
                *((_QWORD *)&v32 + 1) = v35.Bitmap[0];
                v30 = 0;
                *(_QWORD *)&v32 = &v35;
                LOWORD(v33) = 0;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
                {
                  v27 = v34;
                  do
                  {
                    v28 = *(_QWORD *)(KeGetPrcb(v30) + 35280);
                    if ( v28 )
                    {
                      v26 = v27[688];
                      *(_BYTE *)(v28 + 238) = v26;
                    }
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) );
                  v1 = v31;
                }
                RtlpXorAffinityEx(&v35, (struct _KAFFINITY_EX *)(*(_QWORD *)(v2 + 1256) + 24LL), &v35, v35.Size);
                *((_QWORD *)&v32 + 1) = v35.Bitmap[0];
                *(_QWORD *)&v32 = &v35;
                LOWORD(v33) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
                {
                  v29 = *(_QWORD *)(KeGetPrcb(v30) + 35280);
                  if ( v29 )
                    *(_BYTE *)(v29 + 238) = 0;
                }
              }
              LOBYTE(v16) = v11;
              LOBYTE(v15) = v26;
              result = PpmEventTraceHeteroDistributeUtility(v2, v15, v16);
            }
          }
          goto LABEL_4;
        }
LABEL_12:
        v9 = v2 + 280;
        result = PpmParkDistributeUtility((struct _KAFFINITY_EX *)(v2 + 16), (struct _KAFFINITY_EX *)(v2 + 280), 0, 0LL);
        goto LABEL_13;
      }
      v20 = 0;
      v30 = 0;
      v9 = v2 + 280;
      while ( 1 )
      {
        v21 = 624LL * (unsigned int)--v4 + *(_QWORD *)(v2 + 1256);
        RtlAndAffinityEx((unsigned __int16 *)(v2 + 280), (unsigned __int16 *)(v21 + 24), (__int64)&v36);
        result = PpmParkDistributeUtility((struct _KAFFINITY_EX *)(v21 + 24), &v36, v20, (__int64)&v30);
        if ( !v4 )
          break;
        v20 = v30;
      }
    }
    else
    {
      v9 = v2 + 280;
      v22 = 0;
      do
      {
        v23 = 624LL * v22 + *(_QWORD *)(v2 + 1256);
        RtlAndAffinityEx((unsigned __int16 *)(v2 + 280), (unsigned __int16 *)(v23 + 24), (__int64)&v36);
        PpmParkDistributeUtility((struct _KAFFINITY_EX *)(v23 + 24), &v36, 0, 0LL);
        result = *(unsigned __int8 *)(v2 + 10);
        ++v22;
      }
      while ( v22 < (unsigned int)result );
    }
    v1 = v31;
    goto LABEL_13;
  }
  return result;
}
