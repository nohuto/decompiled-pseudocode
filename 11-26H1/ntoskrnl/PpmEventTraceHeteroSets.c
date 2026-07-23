/*
 * XREFs of PpmEventTraceHeteroSets @ 0x1404B7270
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14025CAB4 (PpmParkEvaluateRestriction.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KiQueryRestrictionAffinity @ 0x1404B76B4 (KiQueryRestrictionAffinity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmEventTraceHeteroSets(int a1)
{
  const EVENT_DESCRIPTOR *v1; // rsi
  unsigned int v2; // ebx
  const EVENT_DESCRIPTOR *v3; // rax
  unsigned int v4; // ecx
  int *v5; // r8
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r10
  __int64 v10; // r11
  char v11; // al
  char v12; // al
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  int i; // r10d
  int v19; // r11d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // r13d
  __int64 v28; // r14
  int v29; // eax
  int v30; // ebx
  int j; // ecx
  __int64 v32; // rax
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v36; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-B4h]
  unsigned int v38; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ACh] BYREF
  int v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+64h] [rbp-A4h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  int v43; // [rsp+70h] [rbp-98h]
  __int16 v44; // [rsp+74h] [rbp-94h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  int *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  char *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  char *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  _QWORD *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  _QWORD *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  _QWORD *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  _QWORD *v69; // [rsp+148h] [rbp+40h]
  __int64 v70; // [rsp+150h] [rbp+48h]
  int *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  _QWORD v73[14]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v74[14]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v75[14]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v76[14]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v77; // [rsp+328h] [rbp+220h] BYREF
  int v78; // [rsp+330h] [rbp+228h]
  __int16 v79; // [rsp+334h] [rbp+22Ch]
  __int64 v80; // [rsp+338h] [rbp+230h] BYREF
  int v81; // [rsp+340h] [rbp+238h]
  __int16 v82; // [rsp+344h] [rbp+23Ch]

  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_MULTI_CORE_HETERO_SET_RUNDOWN;
  v41 = a1;
  v39 = 0;
  v35 = 0;
  v2 = *(_DWORD *)(PpmHeteroCapability + 4);
  v3 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  if ( a1 )
    v1 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  v34 = 0;
  v40 = 0;
  v36 = 0;
  v37 = v2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v1);
    if ( (_BYTE)v3 )
    {
      v38 = 0;
      if ( KeNumberNodes )
      {
        v4 = 0;
        do
        {
          v5 = KiDynamicHeteroCpuPolicy;
          v6 = 0;
          v7 = 0LL;
          v8 = KeNodeBlock[v4];
          v42 = 0LL;
          v43 = 0;
          v44 = 0;
          v77 = 0LL;
          v78 = 0;
          v79 = 0;
          v80 = 0LL;
          v81 = 0;
          v82 = 0;
          v47 = v8;
          do
          {
            v9 = (unsigned int)(2 * v6);
            v10 = 2LL;
            do
            {
              v11 = *(_BYTE *)v5++;
              *((_BYTE *)&v42 + v9) = v11;
              *((_BYTE *)&v77 + v9) = *((_BYTE *)&stru_140FC11F0.StackBase + v7);
              v12 = *((_BYTE *)&stru_140FC11F0.CycleTime + v7++);
              *((_BYTE *)&v80 + v9) = v12;
              v9 = (unsigned int)(v9 + 1);
              --v10;
            }
            while ( v10 );
            ++v6;
          }
          while ( v6 < 7 );
          v13 = 0;
          while ( v13 < *(_DWORD *)(v8 + 48) )
          {
            v14 = v13++;
            v15 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v14);
            v46 = v15;
            v36 = 0;
            if ( v2 )
            {
              v16 = 0;
              v45 = v15 + 136;
              do
              {
                memset_0(v75, 0, sizeof(v75));
                memset_0(v73, 0, sizeof(v73));
                memset_0(v74, 0, sizeof(v74));
                memset_0(v76, 0, sizeof(v76));
                v17 = 0;
                KiQueryRestrictionAffinity(v15, v16, v76);
                for ( i = 0; i < 7; ++i )
                {
                  v19 = 0;
                  do
                  {
                    v20 = *(unsigned __int8 *)(v15 + 185) * (2 * i + v19++);
                    v21 = v17++;
                    v22 = 3LL * (v16 + v20);
                    v23 = *(_QWORD *)(v15 + 192);
                    v24 = *(_QWORD *)(v23 + 8 * v22 + 16);
                    v25 = v24 & *(_QWORD *)(v23 + 8 * v22 + 8);
                    v26 = v25 & *(_QWORD *)(v23 + 8 * v22);
                    v75[v21] = v24;
                    v73[v21] = v26;
                    v74[v21] = v25;
                  }
                  while ( v19 < 2 );
                }
                v27 = v41;
                v28 = v45;
                v29 = 0;
                v34 = 0;
                v30 = 0;
                do
                {
                  v35 = 0;
                  for ( j = 0; j < 2; v35 = j )
                  {
                    v32 = (unsigned int)(j + 2 * v29);
                    *(_QWORD *)&UserData.Size = 4LL;
                    v39 = *((unsigned __int8 *)&v42 + v32);
                    v49 = v28;
                    UserData.Ptr = (ULONGLONG)&v38;
                    v51 = (int *)&v36;
                    v53 = &v34;
                    v55 = &v35;
                    v57 = &v39;
                    v50 = 2LL;
                    v59 = (char *)&v77 + (unsigned int)v32;
                    v52 = 4LL;
                    v61 = (char *)&v80 + (unsigned int)v32;
                    v54 = 1LL;
                    v56 = 1LL;
                    v58 = 1LL;
                    v60 = 1LL;
                    v63 = &v73[v30];
                    v62 = 1LL;
                    v65 = &v74[v30];
                    v64 = 8LL;
                    v67 = &v75[v30];
                    v66 = 8LL;
                    v69 = &v76[v30];
                    v71 = &v40;
                    v68 = 8LL;
                    v70 = 8LL;
                    v40 = v27;
                    v72 = 4LL;
                    EtwWriteEx(PpmEtwHandle, v1, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
                    ++v30;
                    v29 = v34;
                    j = v35 + 1;
                  }
                  v29 = v34 + 1;
                  v34 = v29;
                }
                while ( v29 < 7 );
                v15 = v46;
                v16 = v36 + 1;
                v36 = v16;
              }
              while ( v16 < v37 );
              v8 = v47;
              v2 = v37;
            }
          }
          LOBYTE(v3) = KeNumberNodes;
          v4 = v38 + 1;
          v38 = v4;
        }
        while ( v4 < (unsigned __int16)KeNumberNodes );
      }
    }
  }
  return (char)v3;
}
