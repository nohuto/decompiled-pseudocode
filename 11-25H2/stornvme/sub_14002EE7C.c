/*
 * XREFs of sub_14002EE7C @ 0x14002EE7C
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_14002EBF8 @ 0x14002EBF8 (sub_14002EBF8.c)
 *     sub_140031390 @ 0x140031390 (sub_140031390.c)
 *     sub_1400314C4 @ 0x1400314C4 (sub_1400314C4.c)
 *     sub_1400318DC @ 0x1400318DC (sub_1400318DC.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14002EE7C(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  int v4; // r8d
  __int64 v5; // r10
  char *v6; // rax
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  int v36; // r8d
  unsigned int v37; // r12d
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  int v43; // r15d
  int v44; // r8d
  int v45; // r8d
  int v46; // r8d
  char v47; // cl
  int v48; // r8d
  int v49; // r8d
  int v50; // r8d
  int v51; // r8d
  int v52; // edx
  int v53; // r8d
  int v54; // r8d
  __int64 v55; // rsi
  unsigned int v56; // r14d
  int v57; // r8d
  int v58; // r8d
  int v59; // r8d
  int v60; // r8d
  int v61; // r8d
  int v62; // r8d
  int v63; // r8d
  int v64; // r8d
  int v65; // r8d
  int v66; // r8d
  int v67; // r8d
  int v68; // r8d
  int v69; // r8d
  int v70; // r8d
  int v71; // r8d
  int v72; // r8d
  int v73; // r8d
  char v75[4]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v76; // [rsp+5Ch] [rbp-5h] BYREF
  unsigned int v77; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v78; // [rsp+64h] [rbp+3h] BYREF
  __int64 v79; // [rsp+68h] [rbp+7h] BYREF
  char v80[32]; // [rsp+70h] [rbp+Fh] BYREF

  LOBYTE(v1) = 0;
  v75[0] = 0;
  strcpy(v80, "VEN_vvvv&DEV_dddd&REV_rr");
  v77 = 512;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 100) = -1;
    *(_DWORD *)(a1 + 104) = -1;
    *(_DWORD *)(a1 + 116) = -1;
    v3 = *(_DWORD *)(a1 + 56) & 0xF863E028;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 16711680;
    *(_DWORD *)(a1 + 56) = v3 | 8;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 60) = 134219551LL;
    *(_QWORD *)(a1 + 76) = 0x4000LL;
    *(_QWORD *)(a1 + 108) = 0LL;
    *(_DWORD *)(a1 + 124) = 0;
    *(_DWORD *)(a1 + 128) = 1;
    *(_DWORD *)(a1 + 88) = 50;
    *(_DWORD *)(a1 + 92) = 3000;
    *(_DWORD *)(a1 + 96) = 1000;
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = 100;
    *(_DWORD *)(a1 + 132) = -694967296;
    *(_DWORD *)(a1 + 136) = 600000000;
    *(_WORD *)(a1 + 140) = 0;
    *(_BYTE *)(a1 + 142) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 156) = 20000;
    v1 = StorPortAllocateRegistryBuffer(a1, &v77);
    v79 = v1;
    if ( v1 )
    {
      sub_1400318DC(&v80[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      sub_1400318DC(&v80[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      sub_1400318DC(&v80[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      v6 = v80;
      v7 = 0;
      v8 = 29;
      while ( *v6 )
      {
        ++v7;
        ++v6;
        if ( v7 >= 0x1D )
          goto LABEL_8;
      }
      v8 = v7;
LABEL_8:
      v78 = v77;
      if ( (v77 & 3) != 0 )
      {
        if ( v77 )
          sub_140032C80(v5, 0LL, v77);
      }
      else if ( v77 >> 2 )
      {
        sub_140032C80(v5, 0LL, 4LL * (v77 >> 2));
      }
      v76 = 0;
      LOBYTE(v1) = sub_1400314C4(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v4,
                     (unsigned int)&v79,
                     (__int64)&v77,
                     (__int64)&v78,
                     (__int64)v80,
                     v8,
                     (__int64)&v76);
      v75[0] = v1;
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v76;
        if ( v76 )
        {
          if ( v76 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 32) = v1;
        }
      }
      if ( v79 )
      {
        v78 = v77;
        if ( (v77 & 3) != 0 )
        {
          if ( v77 )
            sub_140032C80(v79, 0LL, v77);
        }
        else if ( v77 >> 2 )
        {
          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
        }
        v76 = 0;
        LOBYTE(v1) = sub_1400314C4(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v9,
                       (unsigned int)&v79,
                       (__int64)&v77,
                       (__int64)&v78,
                       (__int64)v80,
                       v8,
                       (__int64)&v76);
        v75[0] = v1;
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v76;
          if ( v76 )
            *(_DWORD *)(a1 + 36) = v76;
        }
        if ( v79 )
        {
          v78 = v77;
          if ( (v77 & 3) != 0 )
          {
            if ( v77 )
              sub_140032C80(v79, 0LL, v77);
          }
          else if ( v77 >> 2 )
          {
            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
          }
          v76 = 0;
          LOBYTE(v1) = sub_1400314C4(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v10,
                         (unsigned int)&v79,
                         (__int64)&v77,
                         (__int64)&v78,
                         (__int64)v80,
                         v8,
                         (__int64)&v76);
          v75[0] = v1;
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v76;
            if ( v76 )
              *(_WORD *)(a1 + 40) = v76;
          }
          if ( v79 )
          {
            v78 = v77;
            if ( (v77 & 3) != 0 )
            {
              if ( v77 )
                sub_140032C80(v79, 0LL, v77);
            }
            else if ( v77 >> 2 )
            {
              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
            }
            v76 = 0;
            LOBYTE(v1) = sub_1400314C4(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v11,
                           (unsigned int)&v79,
                           (__int64)&v77,
                           (__int64)&v78,
                           (__int64)v80,
                           v8,
                           (__int64)&v76);
            v75[0] = v1;
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v76;
              if ( v76 )
                *(_WORD *)(a1 + 42) = v76;
            }
            if ( v79 )
            {
              v78 = v77;
              if ( (v77 & 3) != 0 )
              {
                if ( v77 )
                  sub_140032C80(v79, 0LL, v77);
              }
              else if ( v77 >> 2 )
              {
                sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
              }
              v76 = 0;
              LOBYTE(v1) = sub_1400314C4(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v12,
                             (unsigned int)&v79,
                             (__int64)&v77,
                             (__int64)&v78,
                             (__int64)v80,
                             v8,
                             (__int64)&v76);
              v75[0] = v1;
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v76;
                if ( v76 )
                  *(_BYTE *)(a1 + 44) = v76;
              }
              if ( v79 )
              {
                v78 = v77;
                if ( (v77 & 3) != 0 )
                {
                  if ( v77 )
                    sub_140032C80(v79, 0LL, v77);
                }
                else if ( v77 >> 2 )
                {
                  sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                }
                v76 = 0;
                LOBYTE(v1) = sub_1400314C4(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v13,
                               (unsigned int)&v79,
                               (__int64)&v77,
                               (__int64)&v78,
                               (__int64)v80,
                               v8,
                               (__int64)&v76);
                v75[0] = v1;
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v76;
                  if ( v76 )
                    *(_BYTE *)(a1 + 45) = v76;
                }
                if ( v79 )
                {
                  v78 = v77;
                  if ( (v77 & 3) != 0 )
                  {
                    if ( v77 )
                      sub_140032C80(v79, 0LL, v77);
                  }
                  else if ( v77 >> 2 )
                  {
                    sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                  }
                  v76 = 0;
                  LOBYTE(v1) = sub_1400314C4(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v14,
                                 (unsigned int)&v79,
                                 (__int64)&v77,
                                 (__int64)&v78,
                                 (__int64)v80,
                                 v8,
                                 (__int64)&v76);
                  v75[0] = v1;
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v76;
                    if ( v76 )
                      *(_BYTE *)(a1 + 46) = v76;
                  }
                  if ( v79 )
                  {
                    v78 = v77;
                    if ( (v77 & 3) != 0 )
                    {
                      if ( v77 )
                        sub_140032C80(v79, 0LL, v77);
                    }
                    else if ( v77 >> 2 )
                    {
                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                    }
                    v76 = 0;
                    LOBYTE(v1) = sub_1400314C4(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v15,
                                   (unsigned int)&v79,
                                   (__int64)&v77,
                                   (__int64)&v78,
                                   (__int64)v80,
                                   v8,
                                   (__int64)&v76);
                    v75[0] = v1;
                    if ( (_BYTE)v1 == 1 && v76 )
                      *(_DWORD *)(a1 + 56) |= 2u;
                    if ( v79 )
                    {
                      v78 = v77;
                      if ( (v77 & 3) != 0 )
                      {
                        if ( v77 )
                          sub_140032C80(v79, 0LL, v77);
                      }
                      else if ( v77 >> 2 )
                      {
                        sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                      }
                      v76 = 0;
                      LOBYTE(v1) = sub_1400314C4(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v16,
                                     (unsigned int)&v79,
                                     (__int64)&v77,
                                     (__int64)&v78,
                                     (__int64)v80,
                                     v8,
                                     (__int64)&v76);
                      v75[0] = v1;
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v76;
                        if ( v76 )
                        {
                          if ( v76 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 47) = v1;
                        }
                      }
                      if ( v79 )
                      {
                        v78 = v77;
                        if ( (v77 & 3) != 0 )
                        {
                          if ( v77 )
                            sub_140032C80(v79, 0LL, v77);
                        }
                        else if ( v77 >> 2 )
                        {
                          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                        }
                        v76 = 0;
                        LOBYTE(v1) = sub_1400314C4(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v17,
                                       (unsigned int)&v79,
                                       (__int64)&v77,
                                       (__int64)&v78,
                                       (__int64)v80,
                                       v8,
                                       (__int64)&v76);
                        v75[0] = v1;
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v76;
                          if ( v76 )
                            *(_DWORD *)(a1 + 48) = v76;
                        }
                        if ( v79 )
                        {
                          v78 = v77;
                          if ( (v77 & 3) != 0 )
                          {
                            if ( v77 )
                              sub_140032C80(v79, 0LL, v77);
                          }
                          else if ( v77 >> 2 )
                          {
                            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                          }
                          v76 = 0;
                          LOBYTE(v1) = sub_1400314C4(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v18,
                                         (unsigned int)&v79,
                                         (__int64)&v77,
                                         (__int64)&v78,
                                         (__int64)v80,
                                         v8,
                                         (__int64)&v76);
                          v75[0] = v1;
                          if ( (_BYTE)v1 == 1 && v76 )
                            *(_DWORD *)(a1 + 56) |= 1u;
                          if ( v79 )
                          {
                            v78 = v77;
                            if ( (v77 & 3) != 0 )
                            {
                              if ( v77 )
                                sub_140032C80(v79, 0LL, v77);
                            }
                            else if ( v77 >> 2 )
                            {
                              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                            }
                            v76 = 0;
                            LOBYTE(v1) = sub_1400314C4(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v19,
                                           (unsigned int)&v79,
                                           (__int64)&v77,
                                           (__int64)&v78,
                                           (__int64)v80,
                                           v8,
                                           (__int64)&v76);
                            v75[0] = v1;
                            if ( (_BYTE)v1 == 1 && v76 )
                              *(_DWORD *)(a1 + 56) |= 4u;
                            if ( v79 )
                            {
                              v78 = v77;
                              if ( (v77 & 3) != 0 )
                              {
                                if ( v77 )
                                  sub_140032C80(v79, 0LL, v77);
                              }
                              else if ( v77 >> 2 )
                              {
                                sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                              }
                              v76 = 0;
                              LOBYTE(v1) = sub_1400314C4(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v20,
                                             (unsigned int)&v79,
                                             (__int64)&v77,
                                             (__int64)&v78,
                                             (__int64)v80,
                                             v8,
                                             (__int64)&v76);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v76;
                                if ( v76 )
                                {
                                  LODWORD(v1) = v76 & 0x1F;
                                  *(_DWORD *)(a1 + 60) = v1;
                                }
                              }
                              v21 = v79;
                              if ( v79 )
                              {
                                v75[0] = 0;
                                if ( !(unsigned int)StorPortExtendedFunction(97LL, a1, 0LL, v75) && v75[0] )
                                {
                                  *(_DWORD *)(a1 + 80) = 2;
LABEL_141:
                                  v78 = v77;
                                  if ( (v77 & 3) != 0 )
                                  {
                                    if ( v77 )
                                      sub_140032C80(v21, 0LL, v77);
                                  }
                                  else if ( v77 >> 2 )
                                  {
                                    sub_140032C80(v21, 0LL, 4LL * (v77 >> 2));
                                  }
                                  v76 = 0;
                                  v75[0] = sub_1400314C4(
                                             a1,
                                             (unsigned int)"DiagnosticFlags",
                                             v22,
                                             (unsigned int)&v79,
                                             (__int64)&v77,
                                             (__int64)&v78,
                                             (__int64)v80,
                                             v8,
                                             (__int64)&v76);
                                  if ( v75[0] == 1 && v76 )
                                    *(_DWORD *)(a1 + 108) = v76;
                                  LODWORD(v1) = *(_DWORD *)(a1 + 108);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 112) = 0x100000;
                                  if ( v79 )
                                  {
                                    v78 = v77;
                                    if ( (v77 & 3) != 0 )
                                    {
                                      if ( v77 )
                                        sub_140032C80(v79, 0LL, v77);
                                    }
                                    else if ( v77 >> 2 )
                                    {
                                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                    }
                                    v76 = 0;
                                    v75[0] = sub_1400314C4(
                                               a1,
                                               (unsigned int)"LogSize",
                                               v23,
                                               (unsigned int)&v79,
                                               (__int64)&v77,
                                               (__int64)&v78,
                                               (__int64)v80,
                                               v8,
                                               (__int64)&v76);
                                    if ( v75[0] == 1 && v76 )
                                      *(_DWORD *)(a1 + 112) = v76 << 10;
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 112);
                                    v25 = v79;
                                    *(_DWORD *)(a1 + 3796) = *(_DWORD *)(a1 + 112) / 0x18u;
                                    if ( v25 )
                                    {
                                      v78 = v77;
                                      if ( (v77 & 3) != 0 )
                                      {
                                        if ( v77 )
                                          sub_140032C80(v25, 0LL, v77);
                                      }
                                      else if ( v77 >> 2 )
                                      {
                                        sub_140032C80(v25, 0LL, 4LL * (v77 >> 2));
                                      }
                                      v76 = 0;
                                      LOBYTE(v1) = sub_1400314C4(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v24,
                                                     (unsigned int)&v79,
                                                     (__int64)&v77,
                                                     (__int64)&v78,
                                                     (__int64)v80,
                                                     v8,
                                                     (__int64)&v76);
                                      v75[0] = v1;
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v76;
                                        if ( v76 )
                                        {
                                          LODWORD(v1) = v76 << 10;
                                          if ( ((v76 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 52) = v1;
                                        }
                                      }
                                      if ( v79 )
                                      {
                                        v78 = v77;
                                        if ( (v77 & 3) != 0 )
                                        {
                                          if ( v77 )
                                            sub_140032C80(v79, 0LL, v77);
                                        }
                                        else if ( v77 >> 2 )
                                        {
                                          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                        }
                                        v76 = 0;
                                        LOBYTE(v1) = sub_1400314C4(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v26,
                                                       (unsigned int)&v79,
                                                       (__int64)&v77,
                                                       (__int64)&v78,
                                                       (__int64)v80,
                                                       v8,
                                                       (__int64)&v76);
                                        v75[0] = v1;
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v76;
                                          *(_DWORD *)(a1 + 84) = v76;
                                        }
                                        if ( v79 )
                                        {
                                          v78 = v77;
                                          if ( (v77 & 3) != 0 )
                                          {
                                            if ( v77 )
                                              sub_140032C80(v79, 0LL, v77);
                                          }
                                          else if ( v77 >> 2 )
                                          {
                                            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                          }
                                          v76 = 0;
                                          LOBYTE(v1) = sub_1400314C4(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v27,
                                                         (unsigned int)&v79,
                                                         (__int64)&v77,
                                                         (__int64)&v78,
                                                         (__int64)v80,
                                                         v8,
                                                         (__int64)&v76);
                                          v75[0] = v1;
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v76;
                                            *(_DWORD *)(a1 + 88) = v76;
                                          }
                                          if ( v79 )
                                          {
                                            v78 = v77;
                                            if ( (v77 & 3) != 0 )
                                            {
                                              if ( v77 )
                                                sub_140032C80(v79, 0LL, v77);
                                            }
                                            else if ( v77 >> 2 )
                                            {
                                              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                            }
                                            v76 = 0;
                                            LOBYTE(v1) = sub_1400314C4(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v28,
                                                           (unsigned int)&v79,
                                                           (__int64)&v77,
                                                           (__int64)&v78,
                                                           (__int64)v80,
                                                           v8,
                                                           (__int64)&v76);
                                            v75[0] = v1;
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v76;
                                              *(_DWORD *)(a1 + 92) = v76;
                                            }
                                            if ( v79 )
                                            {
                                              v78 = v77;
                                              if ( (v77 & 3) != 0 )
                                              {
                                                if ( v77 )
                                                  sub_140032C80(v79, 0LL, v77);
                                              }
                                              else if ( v77 >> 2 )
                                              {
                                                sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                              }
                                              v76 = 0;
                                              LOBYTE(v1) = sub_1400314C4(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v29,
                                                             (unsigned int)&v79,
                                                             (__int64)&v77,
                                                             (__int64)&v78,
                                                             (__int64)v80,
                                                             v8,
                                                             (__int64)&v76);
                                              v75[0] = v1;
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v76;
                                                *(_DWORD *)(a1 + 96) = v76;
                                              }
                                              if ( v79 )
                                              {
                                                v78 = v77;
                                                if ( (v77 & 3) != 0 )
                                                {
                                                  if ( v77 )
                                                    sub_140032C80(v79, 0LL, v77);
                                                }
                                                else if ( v77 >> 2 )
                                                {
                                                  sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                }
                                                v76 = 0;
                                                LOBYTE(v1) = sub_1400314C4(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v30,
                                                               (unsigned int)&v79,
                                                               (__int64)&v77,
                                                               (__int64)&v78,
                                                               (__int64)v80,
                                                               v8,
                                                               (__int64)&v76);
                                                v75[0] = v1;
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v76;
                                                  *(_DWORD *)(a1 + 100) = v76;
                                                }
                                                if ( v79 )
                                                {
                                                  v78 = v77;
                                                  if ( (v77 & 3) != 0 )
                                                  {
                                                    if ( v77 )
                                                      sub_140032C80(v79, 0LL, v77);
                                                  }
                                                  else if ( v77 >> 2 )
                                                  {
                                                    sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                  }
                                                  v76 = 0;
                                                  LOBYTE(v1) = sub_1400314C4(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v31,
                                                                 (unsigned int)&v79,
                                                                 (__int64)&v77,
                                                                 (__int64)&v78,
                                                                 (__int64)v80,
                                                                 v8,
                                                                 (__int64)&v76);
                                                  v75[0] = v1;
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v76;
                                                    *(_DWORD *)(a1 + 104) = v76;
                                                  }
                                                  if ( v79 )
                                                  {
                                                    v78 = v77;
                                                    if ( (v77 & 3) != 0 )
                                                    {
                                                      if ( v77 )
                                                        sub_140032C80(v79, 0LL, v77);
                                                    }
                                                    else if ( v77 >> 2 )
                                                    {
                                                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                    }
                                                    v76 = 0;
                                                    LOBYTE(v1) = sub_1400314C4(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v32,
                                                                   (unsigned int)&v79,
                                                                   (__int64)&v77,
                                                                   (__int64)&v78,
                                                                   (__int64)v80,
                                                                   v8,
                                                                   (__int64)&v76);
                                                    v75[0] = v1;
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v76;
                                                      *(_DWORD *)(a1 + 116) = v76;
                                                    }
                                                    if ( v79 )
                                                    {
                                                      v78 = v77;
                                                      if ( (v77 & 3) != 0 )
                                                      {
                                                        if ( v77 )
                                                          sub_140032C80(v79, 0LL, v77);
                                                      }
                                                      else if ( v77 >> 2 )
                                                      {
                                                        sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                      }
                                                      v76 = 0;
                                                      LOBYTE(v1) = sub_1400314C4(
                                                                     a1,
                                                                     (unsigned int)"BypassSgl",
                                                                     v33,
                                                                     (unsigned int)&v79,
                                                                     (__int64)&v77,
                                                                     (__int64)&v78,
                                                                     (__int64)v80,
                                                                     v8,
                                                                     (__int64)&v76);
                                                      v75[0] = v1;
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = 8 * (v76 & 1);
                                                        *(_DWORD *)(a1 + 56) = v1 | *(_DWORD *)(a1 + 56) & 0xFFFFFFF7;
                                                      }
                                                      if ( v79 )
                                                      {
                                                        v78 = v77;
                                                        if ( (v77 & 3) != 0 )
                                                        {
                                                          if ( v77 )
                                                            sub_140032C80(v79, 0LL, v77);
                                                        }
                                                        else if ( v77 >> 2 )
                                                        {
                                                          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                        }
                                                        v76 = 0;
                                                        LOBYTE(v1) = sub_1400314C4(
                                                                       a1,
                                                                       (unsigned int)"TestMdlDataBufferOffsetInBytes",
                                                                       v34,
                                                                       (unsigned int)&v79,
                                                                       (__int64)&v77,
                                                                       (__int64)&v78,
                                                                       (__int64)v80,
                                                                       v8,
                                                                       (__int64)&v76);
                                                        v75[0] = v1;
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v76;
                                                          *(_DWORD *)(a1 + 120) = v76;
                                                        }
                                                        if ( v79 )
                                                        {
                                                          v78 = v77;
                                                          if ( (v77 & 3) != 0 )
                                                          {
                                                            if ( v77 )
                                                              sub_140032C80(v79, 0LL, v77);
                                                          }
                                                          else if ( v77 >> 2 )
                                                          {
                                                            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                          }
                                                          LOBYTE(v1) = sub_1400314C4(
                                                                         a1,
                                                                         (unsigned int)"UseDumpPointers",
                                                                         v35,
                                                                         (unsigned int)&v79,
                                                                         (__int64)&v77,
                                                                         (__int64)&v78,
                                                                         (__int64)v80,
                                                                         v8,
                                                                         0LL);
                                                          v75[0] = v1;
                                                          v37 = 16;
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 56) |= 0x10u;
                                                          if ( v79 )
                                                          {
                                                            v78 = v77;
                                                            if ( (v77 & 3) != 0 )
                                                            {
                                                              if ( v77 )
                                                                sub_140032C80(v79, 0LL, v77);
                                                            }
                                                            else if ( v77 >> 2 )
                                                            {
                                                              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                            }
                                                            v76 = 0;
                                                            LOBYTE(v1) = sub_1400314C4(
                                                                           a1,
                                                                           (unsigned int)"ReservedQueuePairCount",
                                                                           v36,
                                                                           (unsigned int)&v79,
                                                                           (__int64)&v77,
                                                                           (__int64)&v78,
                                                                           (__int64)v80,
                                                                           v8,
                                                                           (__int64)&v76);
                                                            v75[0] = v1;
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v76 - 1;
                                                              if ( v76 - 1 <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 124) = v76;
                                                            }
                                                            if ( v79 )
                                                            {
                                                              v78 = v77;
                                                              if ( (v77 & 3) != 0 )
                                                              {
                                                                if ( v77 )
                                                                  sub_140032C80(v79, 0LL, v77);
                                                              }
                                                              else if ( v77 >> 2 )
                                                              {
                                                                sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                              }
                                                              v76 = 0;
                                                              LOBYTE(v1) = sub_1400314C4(
                                                                             a1,
                                                                             (unsigned int)"NvmeTestSwitch",
                                                                             v38,
                                                                             (unsigned int)&v79,
                                                                             (__int64)&v77,
                                                                             (__int64)&v78,
                                                                             (__int64)v80,
                                                                             v8,
                                                                             (__int64)&v76);
                                                              v75[0] = v1;
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = v76;
                                                                if ( v76 )
                                                                  *(_DWORD *)(a1 + 128) = v76;
                                                              }
                                                              if ( v79 )
                                                              {
                                                                v78 = v77;
                                                                if ( (v77 & 3) != 0 )
                                                                {
                                                                  if ( v77 )
                                                                    sub_140032C80(v79, 0LL, v77);
                                                                }
                                                                else if ( v77 >> 2 )
                                                                {
                                                                  sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                }
                                                                v76 = 0;
                                                                LOBYTE(v1) = sub_1400314C4(
                                                                               a1,
                                                                               (unsigned int)"IoQueuePercentageInPollingMode",
                                                                               v39,
                                                                               (unsigned int)&v79,
                                                                               (__int64)&v77,
                                                                               (__int64)&v78,
                                                                               (__int64)v80,
                                                                               v8,
                                                                               (__int64)&v76);
                                                                v75[0] = v1;
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( v76 <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = v76;
                                                                    *(_DWORD *)(a1 + 64) = (unsigned __int16)v76;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 64) = 100;
                                                                  }
                                                                }
                                                                if ( v79 )
                                                                {
                                                                  v78 = v77;
                                                                  if ( (v77 & 3) != 0 )
                                                                  {
                                                                    if ( v77 )
                                                                      sub_140032C80(v79, 0LL, v77);
                                                                  }
                                                                  else if ( v77 >> 2 )
                                                                  {
                                                                    sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                  }
                                                                  v76 = 0;
                                                                  LOBYTE(v1) = sub_1400314C4(
                                                                                 a1,
                                                                                 (unsigned int)"IoPollingInterval",
                                                                                 v40,
                                                                                 (unsigned int)&v79,
                                                                                 (__int64)&v77,
                                                                                 (__int64)&v78,
                                                                                 (__int64)v80,
                                                                                 v8,
                                                                                 (__int64)&v76);
                                                                  v75[0] = v1;
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( v76 < 0x186A0 )
                                                                      LODWORD(v1) = v76;
                                                                    *(_DWORD *)(a1 + 68) = v1;
                                                                  }
                                                                  if ( v79 )
                                                                  {
                                                                    v78 = v77;
                                                                    if ( (v77 & 3) != 0 )
                                                                    {
                                                                      if ( v77 )
                                                                        sub_140032C80(v79, 0LL, v77);
                                                                    }
                                                                    else if ( v77 >> 2 )
                                                                    {
                                                                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                    }
                                                                    v76 = 0;
                                                                    LOBYTE(v1) = sub_1400314C4(
                                                                                   a1,
                                                                                   (unsigned int)"IoCompletionCapInDPC",
                                                                                   v41,
                                                                                   (unsigned int)&v79,
                                                                                   (__int64)&v77,
                                                                                   (__int64)&v78,
                                                                                   (__int64)v80,
                                                                                   v8,
                                                                                   (__int64)&v76);
                                                                    v75[0] = v1;
                                                                    v43 = 128;
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = v76;
                                                                      if ( v76 )
                                                                      {
                                                                        if ( v76 > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 72) = v1;
                                                                      }
                                                                    }
                                                                    if ( v79 )
                                                                    {
                                                                      v78 = v77;
                                                                      if ( (v77 & 3) != 0 )
                                                                      {
                                                                        if ( v77 )
                                                                          sub_140032C80(v79, 0LL, v77);
                                                                      }
                                                                      else if ( v77 >> 2 )
                                                                      {
                                                                        sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                      }
                                                                      v76 = 0;
                                                                      LOBYTE(v1) = sub_1400314C4(
                                                                                     a1,
                                                                                     (unsigned int)"IoPollingSize",
                                                                                     v42,
                                                                                     (unsigned int)&v79,
                                                                                     (__int64)&v77,
                                                                                     (__int64)&v78,
                                                                                     (__int64)v80,
                                                                                     v8,
                                                                                     (__int64)&v76);
                                                                      v75[0] = v1;
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = v76;
                                                                        if ( v76 )
                                                                          *(_DWORD *)(a1 + 76) = v76;
                                                                      }
                                                                      if ( v79 )
                                                                      {
                                                                        v78 = v77;
                                                                        if ( (v77 & 3) != 0 )
                                                                        {
                                                                          if ( v77 )
                                                                            sub_140032C80(v79, 0LL, v77);
                                                                        }
                                                                        else if ( v77 >> 2 )
                                                                        {
                                                                          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                        }
                                                                        v76 = 0;
                                                                        LOBYTE(v1) = sub_1400314C4(
                                                                                       a1,
                                                                                       (unsigned int)"ErrorEtwThrottleInterval",
                                                                                       v44,
                                                                                       (unsigned int)&v79,
                                                                                       (__int64)&v77,
                                                                                       (__int64)&v78,
                                                                                       (__int64)v80,
                                                                                       v8,
                                                                                       (__int64)&v76);
                                                                        v75[0] = v1;
                                                                        if ( (_BYTE)v1 == 1 )
                                                                        {
                                                                          LODWORD(v1) = v76;
                                                                          if ( v76 )
                                                                          {
                                                                            if ( v76 > 0xD693A400 )
                                                                              LODWORD(v1) = -694967296;
                                                                            *(_DWORD *)(a1 + 132) = v1;
                                                                          }
                                                                        }
                                                                        if ( v79 )
                                                                        {
                                                                          v78 = v77;
                                                                          if ( (v77 & 3) != 0 )
                                                                          {
                                                                            if ( v77 )
                                                                              sub_140032C80(v79, 0LL, v77);
                                                                          }
                                                                          else if ( v77 >> 2 )
                                                                          {
                                                                            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                          }
                                                                          v76 = 0;
                                                                          LOBYTE(v1) = sub_1400314C4(
                                                                                         a1,
                                                                                         (unsigned int)"ResetEnableMask",
                                                                                         v45,
                                                                                         (unsigned int)&v79,
                                                                                         (__int64)&v77,
                                                                                         (__int64)&v78,
                                                                                         (__int64)v80,
                                                                                         v8,
                                                                                         (__int64)&v76);
                                                                          v75[0] = v1;
                                                                          if ( (_BYTE)v1 == 1 )
                                                                          {
                                                                            v47 = v76;
                                                                            if ( v76 )
                                                                            {
                                                                              if ( (v76 & 1) != 0 )
                                                                                *(_DWORD *)(a1 + 56) |= 0x40u;
                                                                              if ( (v47 & 2) != 0 )
                                                                                *(_DWORD *)(a1 + 56) |= 0x800u;
                                                                              if ( (v47 & 4) != 0 )
                                                                                *(_DWORD *)(a1 + 56) |= 0x1000u;
                                                                            }
                                                                          }
                                                                          if ( v79 )
                                                                          {
                                                                            v78 = v77;
                                                                            if ( (v77 & 3) != 0 )
                                                                            {
                                                                              if ( v77 )
                                                                                sub_140032C80(v79, 0LL, v77);
                                                                            }
                                                                            else if ( v77 >> 2 )
                                                                            {
                                                                              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                            }
                                                                            v76 = 0;
                                                                            LOBYTE(v1) = sub_1400314C4(
                                                                                           a1,
                                                                                           (unsigned int)"ReliabilityDegraded",
                                                                                           v46,
                                                                                           (unsigned int)&v79,
                                                                                           (__int64)&v77,
                                                                                           (__int64)&v78,
                                                                                           (__int64)v80,
                                                                                           v8,
                                                                                           (__int64)&v76);
                                                                            v75[0] = v1;
                                                                            if ( (_BYTE)v1 == 1 && v76 )
                                                                              *(_DWORD *)(a1 + 56) |= 0x80u;
                                                                            if ( v79 )
                                                                            {
                                                                              v78 = v77;
                                                                              if ( (v77 & 3) != 0 )
                                                                              {
                                                                                if ( v77 )
                                                                                  sub_140032C80(v79, 0LL, v77);
                                                                              }
                                                                              else if ( v77 >> 2 )
                                                                              {
                                                                                sub_140032C80(
                                                                                  v79,
                                                                                  0LL,
                                                                                  4LL * (v77 >> 2));
                                                                              }
                                                                              v76 = 0;
                                                                              LOBYTE(v1) = sub_1400314C4(
                                                                                             a1,
                                                                                             (unsigned int)"ReadOnly",
                                                                                             v48,
                                                                                             (unsigned int)&v79,
                                                                                             (__int64)&v77,
                                                                                             (__int64)&v78,
                                                                                             (__int64)v80,
                                                                                             v8,
                                                                                             (__int64)&v76);
                                                                              v75[0] = v1;
                                                                              if ( (_BYTE)v1 == 1 && v76 )
                                                                                *(_DWORD *)(a1 + 56) |= 0x100u;
                                                                              if ( v79 )
                                                                              {
                                                                                v78 = v77;
                                                                                if ( (v77 & 3) != 0 )
                                                                                {
                                                                                  if ( v77 )
                                                                                    sub_140032C80(v79, 0LL, v77);
                                                                                }
                                                                                else if ( v77 >> 2 )
                                                                                {
                                                                                  sub_140032C80(
                                                                                    v79,
                                                                                    0LL,
                                                                                    4LL * (v77 >> 2));
                                                                                }
                                                                                v76 = 0;
                                                                                v75[0] = sub_1400314C4(
                                                                                           a1,
                                                                                           (unsigned int)"VolatileMemoryBackupDeviceFailed",
                                                                                           v49,
                                                                                           (unsigned int)&v79,
                                                                                           (__int64)&v77,
                                                                                           (__int64)&v78,
                                                                                           (__int64)v80,
                                                                                           v8,
                                                                                           (__int64)&v76);
                                                                                if ( v75[0] == 1 && v76 )
                                                                                  *(_DWORD *)(a1 + 56) |= 0x200u;
                                                                                v78 = v77;
                                                                                if ( (v77 & 3) != 0 )
                                                                                {
                                                                                  if ( v77 )
                                                                                    sub_140032C80(v79, 0LL, v77);
                                                                                }
                                                                                else if ( v77 >> 2 )
                                                                                {
                                                                                  sub_140032C80(
                                                                                    v79,
                                                                                    0LL,
                                                                                    4LL * (v77 >> 2));
                                                                                }
                                                                                v76 = 0;
                                                                                v75[0] = sub_1400314C4(
                                                                                           a1,
                                                                                           (unsigned int)"AvailableSpare",
                                                                                           v50,
                                                                                           (unsigned int)&v79,
                                                                                           (__int64)&v77,
                                                                                           (__int64)&v78,
                                                                                           (__int64)v80,
                                                                                           v8,
                                                                                           (__int64)&v76);
                                                                                if ( v75[0] == 1 && v76 )
                                                                                  *(_BYTE *)(a1 + 140) = v76;
                                                                                v78 = v77;
                                                                                if ( (v77 & 3) != 0 )
                                                                                {
                                                                                  if ( v77 )
                                                                                    sub_140032C80(v79, 0LL, v77);
                                                                                }
                                                                                else if ( v77 >> 2 )
                                                                                {
                                                                                  sub_140032C80(
                                                                                    v79,
                                                                                    0LL,
                                                                                    4LL * (v77 >> 2));
                                                                                }
                                                                                v76 = 0;
                                                                                LOBYTE(v1) = sub_1400314C4(
                                                                                               a1,
                                                                                               (unsigned int)"AvailableSpareThreshold",
                                                                                               v51,
                                                                                               (unsigned int)&v79,
                                                                                               (__int64)&v77,
                                                                                               (__int64)&v78,
                                                                                               (__int64)v80,
                                                                                               v8,
                                                                                               (__int64)&v76);
                                                                                v75[0] = v1;
                                                                                if ( (_BYTE)v1 == 1 )
                                                                                {
                                                                                  LOBYTE(v1) = v76;
                                                                                  if ( v76 )
                                                                                    *(_BYTE *)(a1 + 141) = v76;
                                                                                }
                                                                                if ( v79 )
                                                                                {
                                                                                  v78 = v77;
                                                                                  if ( (v77 & 3) != 0 )
                                                                                  {
                                                                                    if ( v77 )
                                                                                      sub_140032C80(v79, 0LL, v77);
                                                                                  }
                                                                                  else if ( v77 >> 2 )
                                                                                  {
                                                                                    sub_140032C80(
                                                                                      v79,
                                                                                      0LL,
                                                                                      4LL * (v77 >> 2));
                                                                                  }
                                                                                  LOBYTE(v1) = sub_140031390(
                                                                                                 a1,
                                                                                                 v52,
                                                                                                 v53,
                                                                                                 (unsigned int)&v79,
                                                                                                 (__int64)&v77,
                                                                                                 (__int64)&v78);
                                                                                  v55 = v79;
                                                                                  v75[0] = v1;
                                                                                  if ( (_BYTE)v1 == 1 )
                                                                                  {
                                                                                    v56 = v78;
                                                                                    if ( v78 )
                                                                                    {
                                                                                      if ( v78 < 0x10 )
                                                                                        v37 = v78;
                                                                                      sub_140032980(a1 + 4017, v79, v37);
                                                                                      LOBYTE(v1) = *(_BYTE *)(a1 + 4016) | 1;
                                                                                      *(_BYTE *)(a1 + 4016) = v1;
                                                                                      if ( v56 > 8 )
                                                                                      {
                                                                                        LOBYTE(v1) = v1 | 2;
                                                                                        *(_BYTE *)(a1 + 4016) = v1;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  if ( v55 )
                                                                                  {
                                                                                    v78 = v77;
                                                                                    if ( (v77 & 3) != 0 )
                                                                                    {
                                                                                      if ( v77 )
                                                                                        sub_140032C80(v55, 0LL, v77);
                                                                                    }
                                                                                    else if ( v77 >> 2 )
                                                                                    {
                                                                                      sub_140032C80(
                                                                                        v55,
                                                                                        0LL,
                                                                                        4LL * (v77 >> 2));
                                                                                    }
                                                                                    v76 = 0;
                                                                                    LOBYTE(v1) = sub_1400314C4(
                                                                                                   a1,
                                                                                                   (unsigned int)"ForcedPhysicalSectorSizeInBytes",
                                                                                                   v54,
                                                                                                   (unsigned int)&v79,
                                                                                                   (__int64)&v77,
                                                                                                   (__int64)&v78,
                                                                                                   (__int64)v80,
                                                                                                   v8,
                                                                                                   (__int64)&v76);
                                                                                    v75[0] = v1;
                                                                                    if ( (_BYTE)v1 == 1 )
                                                                                    {
                                                                                      LOBYTE(v1) = v76;
                                                                                      if ( v76 )
                                                                                        *(_DWORD *)(a1 + 144) = v76;
                                                                                    }
                                                                                    if ( v79 )
                                                                                    {
                                                                                      v78 = v77;
                                                                                      if ( (v77 & 3) != 0 )
                                                                                      {
                                                                                        if ( v77 )
                                                                                          sub_140032C80(v79, 0LL, v77);
                                                                                      }
                                                                                      else if ( v77 >> 2 )
                                                                                      {
                                                                                        sub_140032C80(
                                                                                          v79,
                                                                                          0LL,
                                                                                          4LL * (v77 >> 2));
                                                                                      }
                                                                                      v76 = 0;
                                                                                      LOBYTE(v1) = sub_1400314C4(
                                                                                                     a1,
                                                                                                     (unsigned int)"RetainAsyncEventControlMask",
                                                                                                     v57,
                                                                                                     (unsigned int)&v79,
                                                                                                     (__int64)&v77,
                                                                                                     (__int64)&v78,
                                                                                                     (__int64)v80,
                                                                                                     v8,
                                                                                                     (__int64)&v76);
                                                                                      v75[0] = v1;
                                                                                      if ( (_BYTE)v1 == 1 )
                                                                                      {
                                                                                        LOBYTE(v1) = v76;
                                                                                        *(_DWORD *)(a1 + 148) = v76;
                                                                                      }
                                                                                      if ( v79 )
                                                                                      {
                                                                                        v78 = v77;
                                                                                        if ( (v77 & 3) != 0 )
                                                                                        {
                                                                                          if ( v77 )
                                                                                            sub_140032C80(v79, 0LL, v77);
                                                                                        }
                                                                                        else if ( v77 >> 2 )
                                                                                        {
                                                                                          sub_140032C80(
                                                                                            v79,
                                                                                            0LL,
                                                                                            4LL * (v77 >> 2));
                                                                                        }
                                                                                        v76 = 0;
                                                                                        LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"ShutdownTimeoutForSurpriseRemove", v58, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                        v75[0] = v1;
                                                                                        if ( (_BYTE)v1 == 1 )
                                                                                        {
                                                                                          LOBYTE(v1) = v76;
                                                                                          if ( v76 )
                                                                                          {
                                                                                            if ( v76 > 0xFF )
                                                                                              LOBYTE(v1) = -1;
                                                                                            *(_BYTE *)(a1 + 142) = v1;
                                                                                          }
                                                                                        }
                                                                                        if ( v79 )
                                                                                        {
                                                                                          v78 = v77;
                                                                                          if ( (v77 & 3) != 0 )
                                                                                          {
                                                                                            if ( v77 )
                                                                                              sub_140032C80(
                                                                                                v79,
                                                                                                0LL,
                                                                                                v77);
                                                                                          }
                                                                                          else if ( v77 >> 2 )
                                                                                          {
                                                                                            sub_140032C80(
                                                                                              v79,
                                                                                              0LL,
                                                                                              4LL * (v77 >> 2));
                                                                                          }
                                                                                          v76 = 0;
                                                                                          LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"MaxIoCountLimit", v59, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                          v75[0] = v1;
                                                                                          if ( (_BYTE)v1 )
                                                                                          {
                                                                                            LOBYTE(v1) = v76;
                                                                                            if ( v76 )
                                                                                            {
                                                                                              if ( v76 > 0x80 )
                                                                                                v43 = v76;
                                                                                              *(_DWORD *)(a1 + 152) = v43;
                                                                                            }
                                                                                          }
                                                                                          if ( v79 )
                                                                                          {
                                                                                            v78 = v77;
                                                                                            if ( (v77 & 3) != 0 )
                                                                                            {
                                                                                              if ( v77 )
                                                                                                sub_140032C80(
                                                                                                  v79,
                                                                                                  0LL,
                                                                                                  v77);
                                                                                            }
                                                                                            else if ( v77 >> 2 )
                                                                                            {
                                                                                              sub_140032C80(
                                                                                                v79,
                                                                                                0LL,
                                                                                                4LL * (v77 >> 2));
                                                                                            }
                                                                                            v76 = 0;
                                                                                            LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"SubmissionQueueAssignmentPolicy", v60, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                            v75[0] = v1;
                                                                                            if ( (_BYTE)v1 == 1 )
                                                                                            {
                                                                                              LOBYTE(v1) = v76;
                                                                                              if ( v76 )
                                                                                                *(_DWORD *)(a1 + 160) = v76;
                                                                                            }
                                                                                            if ( v79 )
                                                                                            {
                                                                                              v78 = v77;
                                                                                              if ( (v77 & 3) != 0 )
                                                                                              {
                                                                                                if ( v77 )
                                                                                                  sub_140032C80(
                                                                                                    v79,
                                                                                                    0LL,
                                                                                                    v77);
                                                                                              }
                                                                                              else if ( v77 >> 2 )
                                                                                              {
                                                                                                sub_140032C80(
                                                                                                  v79,
                                                                                                  0LL,
                                                                                                  4LL * (v77 >> 2));
                                                                                              }
                                                                                              v76 = 0;
                                                                                              LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableMFNDCCDuringRemoval", v61, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                              v75[0] = v1;
                                                                                              if ( (_BYTE)v1 == 1 && v76 )
                                                                                                *(_DWORD *)(a1 + 56) |= 0x2000u;
                                                                                              if ( v79 )
                                                                                              {
                                                                                                v78 = v77;
                                                                                                if ( (v77 & 3) != 0 )
                                                                                                {
                                                                                                  if ( v77 )
                                                                                                    sub_140032C80(v79, 0LL, v77);
                                                                                                }
                                                                                                else if ( v77 >> 2 )
                                                                                                {
                                                                                                  sub_140032C80(
                                                                                                    v79,
                                                                                                    0LL,
                                                                                                    4LL * (v77 >> 2));
                                                                                                }
                                                                                                v76 = 0;
                                                                                                LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"EnableSingleDpcForIoCompletion", v62, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                v75[0] = v1;
                                                                                                if ( (_BYTE)v1 == 1 && v76 )
                                                                                                  *(_DWORD *)(a1 + 56) |= 0x4000u;
                                                                                                if ( v79 )
                                                                                                {
                                                                                                  v78 = v77;
                                                                                                  if ( (v77 & 3) != 0 )
                                                                                                  {
                                                                                                    if ( v77 )
                                                                                                      sub_140032C80(v79, 0LL, v77);
                                                                                                  }
                                                                                                  else if ( v77 >> 2 )
                                                                                                  {
                                                                                                    sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                  }
                                                                                                  v76 = 0;
                                                                                                  LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableNamespacePreferredValueCheck", v63, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                  v75[0] = v1;
                                                                                                  if ( (_BYTE)v1 == 1 && v76 )
                                                                                                    *(_DWORD *)(a1 + 56) |= 0x8000u;
                                                                                                  if ( v79 )
                                                                                                  {
                                                                                                    v78 = v77;
                                                                                                    if ( (v77 & 3) != 0 )
                                                                                                    {
                                                                                                      if ( v77 )
                                                                                                        sub_140032C80(v79, 0LL, v77);
                                                                                                    }
                                                                                                    else if ( v77 >> 2 )
                                                                                                    {
                                                                                                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                    }
                                                                                                    v76 = 0;
                                                                                                    LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"IgnoreNamespacePreferredValues", v64, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                    v75[0] = v1;
                                                                                                    if ( (_BYTE)v1 == 1 && v76 )
                                                                                                      *(_DWORD *)(a1 + 56) |= 0x10000u;
                                                                                                    if ( v79 )
                                                                                                    {
                                                                                                      v78 = v77;
                                                                                                      if ( (v77 & 3) != 0 )
                                                                                                      {
                                                                                                        if ( v77 )
                                                                                                          sub_140032C80(v79, 0LL, v77);
                                                                                                      }
                                                                                                      else if ( v77 >> 2 )
                                                                                                      {
                                                                                                        sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                      }
                                                                                                      v76 = 0;
                                                                                                      LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableBypassIO", v65, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                      v75[0] = v1;
                                                                                                      if ( (_BYTE)v1 == 1 && v76 )
                                                                                                        *(_DWORD *)(a1 + 56) |= 0x20000u;
                                                                                                      if ( v79 )
                                                                                                      {
                                                                                                        v78 = v77;
                                                                                                        if ( (v77 & 3) != 0 )
                                                                                                        {
                                                                                                          if ( v77 )
                                                                                                            sub_140032C80(v79, 0LL, v77);
                                                                                                        }
                                                                                                        else if ( v77 >> 2 )
                                                                                                        {
                                                                                                          sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                        }
                                                                                                        v76 = 0;
                                                                                                        LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableGetActiveNSIDList", v66, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                        v75[0] = v1;
                                                                                                        if ( (_BYTE)v1 == 1 && v76 )
                                                                                                          *(_DWORD *)(a1 + 56) |= 0x40000u;
                                                                                                        if ( v79 )
                                                                                                        {
                                                                                                          v78 = v77;
                                                                                                          if ( (v77 & 3) != 0 )
                                                                                                          {
                                                                                                            if ( v77 )
                                                                                                              sub_140032C80(v79, 0LL, v77);
                                                                                                          }
                                                                                                          else if ( v77 >> 2 )
                                                                                                          {
                                                                                                            sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                          }
                                                                                                          v76 = 0;
                                                                                                          LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"ForceCryptoEraseToUseFormatNVM", v67, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                          v75[0] = v1;
                                                                                                          if ( (_BYTE)v1 == 1 && v76 )
                                                                                                            *(_DWORD *)(a1 + 56) |= 0x80000u;
                                                                                                          if ( v79 )
                                                                                                          {
                                                                                                            v78 = v77;
                                                                                                            if ( (v77 & 3) != 0 )
                                                                                                            {
                                                                                                              if ( v77 )
                                                                                                                sub_140032C80(v79, 0LL, v77);
                                                                                                            }
                                                                                                            else if ( v77 >> 2 )
                                                                                                            {
                                                                                                              sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                            }
                                                                                                            v76 = 0;
                                                                                                            LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"EnforceActiveNamespaceIdentification", v68, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                            v75[0] = v1;
                                                                                                            if ( (_BYTE)v1 == 1 && v76 )
                                                                                                              *(_DWORD *)(a1 + 56) |= 0x100000u;
                                                                                                            if ( v79 )
                                                                                                            {
                                                                                                              v78 = v77;
                                                                                                              if ( (v77 & 3) != 0 )
                                                                                                              {
                                                                                                                if ( v77 )
                                                                                                                  sub_140032C80(v79, 0LL, v77);
                                                                                                              }
                                                                                                              else if ( v77 >> 2 )
                                                                                                              {
                                                                                                                sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                              }
                                                                                                              v76 = 0;
                                                                                                              LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableForwardedIO", v69, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                              v75[0] = v1;
                                                                                                              if ( (_BYTE)v1 == 1 && v76 )
                                                                                                                *(_DWORD *)(a1 + 56) |= 0x800000u;
                                                                                                              if ( v79 )
                                                                                                              {
                                                                                                                v78 = v77;
                                                                                                                if ( (v77 & 3) != 0 )
                                                                                                                {
                                                                                                                  if ( v77 )
                                                                                                                    sub_140032C80(v79, 0LL, v77);
                                                                                                                }
                                                                                                                else if ( v77 >> 2 )
                                                                                                                {
                                                                                                                  sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                                }
                                                                                                                v76 = 0;
                                                                                                                LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"SupportZeroActiveNamespace", v70, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                                v75[0] = v1;
                                                                                                                if ( (_BYTE)v1 == 1 && v76 )
                                                                                                                  *(_DWORD *)(a1 + 56) |= 0x1000000u;
                                                                                                                if ( v79 )
                                                                                                                {
                                                                                                                  v78 = v77;
                                                                                                                  if ( (v77 & 3) != 0 )
                                                                                                                  {
                                                                                                                    if ( v77 )
                                                                                                                      sub_140032C80(v79, 0LL, v77);
                                                                                                                  }
                                                                                                                  else if ( v77 >> 2 )
                                                                                                                  {
                                                                                                                    sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                                  }
                                                                                                                  v76 = 0;
                                                                                                                  LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"EnableIntelTSESplitIOWorkaround", v71, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                                  v75[0] = v1;
                                                                                                                  if ( (_BYTE)v1 == 1 && v76 )
                                                                                                                    *(_DWORD *)(a1 + 56) |= 0x2000000u;
                                                                                                                  if ( v79 )
                                                                                                                  {
                                                                                                                    v78 = v77;
                                                                                                                    if ( (v77 & 3) != 0 )
                                                                                                                    {
                                                                                                                      if ( v77 )
                                                                                                                        sub_140032C80(v79, 0LL, v77);
                                                                                                                    }
                                                                                                                    else if ( v77 >> 2 )
                                                                                                                    {
                                                                                                                      sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                                    }
                                                                                                                    v76 = 0;
                                                                                                                    LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"WeightedRoundRobinEnabled", v72, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                                    v75[0] = v1;
                                                                                                                    if ( (_BYTE)v1 == 1 && v76 )
                                                                                                                      *(_DWORD *)(a1 + 56) |= 0x400u;
                                                                                                                    if ( v79 )
                                                                                                                    {
                                                                                                                      v78 = v77;
                                                                                                                      if ( (v77 & 3) != 0 )
                                                                                                                      {
                                                                                                                        if ( v77 )
                                                                                                                          sub_140032C80(v79, 0LL, v77);
                                                                                                                      }
                                                                                                                      else if ( v77 >> 2 )
                                                                                                                      {
                                                                                                                        sub_140032C80(v79, 0LL, 4LL * (v77 >> 2));
                                                                                                                      }
                                                                                                                      v76 = 0;
                                                                                                                      LOBYTE(v1) = sub_1400314C4(a1, (unsigned int)"DisableF0TimestampSync", v73, (unsigned int)&v79, (__int64)&v77, (__int64)&v78, (__int64)v80, v8, (__int64)&v76);
                                                                                                                      v75[0] = v1;
                                                                                                                      if ( (_BYTE)v1 == 1 && v76 )
                                                                                                                        *(_DWORD *)(a1 + 56) |= 0x4000000u;
                                                                                                                      if ( v79 )
                                                                                                                      {
                                                                                                                        StorPortFreeRegistryBuffer(a1);
                                                                                                                        LOBYTE(v1) = sub_14002EBF8(a1);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return v1;
                                }
                                v78 = v77;
                                if ( (v77 & 3) != 0 )
                                {
                                  if ( v77 )
                                    sub_140032C80(v21, 0LL, v77);
                                }
                                else if ( v77 >> 2 )
                                {
                                  sub_140032C80(v21, 0LL, 4LL * (v77 >> 2));
                                }
                                v76 = 0;
                                LOBYTE(v1) = sub_1400314C4(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v22,
                                               (unsigned int)&v79,
                                               (__int64)&v77,
                                               (__int64)&v78,
                                               (__int64)v80,
                                               v8,
                                               (__int64)&v76);
                                v75[0] = v1;
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v76;
                                  if ( v76 < 6 )
                                    *(_DWORD *)(a1 + 80) = v76;
                                }
                                v21 = v79;
                                if ( v79 )
                                  goto LABEL_141;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
