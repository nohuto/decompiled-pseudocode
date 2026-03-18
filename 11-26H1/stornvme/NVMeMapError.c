/*
 * XREFs of NVMeMapError @ 0x14000AD00
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeAdminCommandErrorLog @ 0x140005930 (NVMeAdminCommandErrorLog.c)
 *     GetSrbScsiData @ 0x14000EE70 (GetSrbScsiData.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x14000F350 (NVMeIsAllowedWithinThrottleLimit.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeMapError(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, unsigned __int16 a6, char *a7)
{
  char v7; // r12
  char v8; // r13
  __int64 SrbExtension; // r14
  unsigned int v14; // r11d
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 k; // rcx
  __int64 v22; // r10
  __int64 j; // rcx
  __int64 i; // rcx
  int v25; // ecx
  char v27; // al
  char v28; // bl
  char *v29; // r14
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // eax
  char *v33; // rcx
  unsigned int v34; // eax
  __int128 Src; // [rsp+D0h] [rbp-80h] BYREF
  __int16 v36; // [rsp+E0h] [rbp-70h]
  int v37; // [rsp+E8h] [rbp-68h] BYREF
  char v38[4]; // [rsp+ECh] [rbp-64h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-60h]
  __int128 v40; // [rsp+100h] [rbp-50h]
  __int128 v41; // [rsp+120h] [rbp-30h]
  __int128 v42; // [rsp+130h] [rbp-20h]
  char *v43; // [rsp+140h] [rbp-10h] BYREF
  void *v44; // [rsp+148h] [rbp-8h] BYREF
  char *v45; // [rsp+150h] [rbp+0h]
  __int128 *v46; // [rsp+160h] [rbp+10h]
  __int64 v47; // [rsp+168h] [rbp+18h]
  __int128 v48; // [rsp+170h] [rbp+20h]
  __int128 v49; // [rsp+180h] [rbp+30h]
  __int128 v50; // [rsp+190h] [rbp+40h]
  __int128 v51; // [rsp+1A0h] [rbp+50h] BYREF

  v45 = a7;
  *(_QWORD *)&v51 = a3;
  v7 = 0;
  v36 = 0;
  v8 = 0;
  v38[0] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v37 = 0;
  SrbExtension = 0LL;
  v14 = 1;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  Src = 0LL;
  if ( a2 )
  {
    SrbExtension = GetSrbExtension(a2);
    v16 = *(_OWORD *)(SrbExtension + 4144);
    v40 = *(_OWORD *)(SrbExtension + 4096);
    v17 = *(_OWORD *)(SrbExtension + 4128);
    v42 = v16;
    v41 = v17;
    if ( ((unsigned __int8)v14 & *(_BYTE *)(SrbExtension + 4225)) != 0 )
    {
      v18 = (unsigned int)(unsigned __int8)v40 - 2;
      if ( (unsigned int)v18 <= 0x80 )
        __asm { jmp     rcx }
      NVMeAdminCommandErrorLog(a1, a2);
      goto LABEL_45;
    }
    goto LABEL_11;
  }
  if ( !a3 )
  {
LABEL_11:
    LODWORD(v39) = DWORD1(v40);
    goto LABEL_12;
  }
  v47 = 0LL;
  v51 = 0LL;
  DWORD1(v51) = 4;
  BYTE10(v51) = *(_BYTE *)(a3 + 3);
  v48 = 0LL;
  v46 = &v51;
  v49 = 0LL;
  v50 = 0LL;
  LOWORD(v51) = 1;
  StorPortNotification(8193LL, a1, a3);
  v14 = 1;
  LODWORD(v40) = 2;
  v19 = *(unsigned __int8 *)(a3 + 3);
  if ( (unsigned int)v19 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v20 = *(_QWORD *)(a1 + 8 * v19 + 1672)) != 0) )
    LODWORD(v39) = *(_DWORD *)(v20 + 16);
  else
    LODWORD(v39) = 0;
LABEL_12:
  if ( !(_BYTE)v40 )
  {
    if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 0LL, &v37) || (*(_BYTE *)(a1 + 21) & 2) == 0 )
      goto LABEL_45;
    if ( (_DWORD)v39 != -1 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
      {
        v22 = *(_QWORD *)(a1 + 8 * i + 1672);
        if ( v22 && *(_DWORD *)(v22 + 16) == (_DWORD)v39 )
          goto LABEL_44;
      }
    }
    v22 = 0LL;
    goto LABEL_44;
  }
  if ( (unsigned __int8)v40 == 1 )
  {
    if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 2LL, &v37) || (*(_BYTE *)(a1 + 21) & 2) == 0 )
      goto LABEL_45;
    if ( (_DWORD)v39 != -1 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 224); j = (unsigned int)(j + 1) )
      {
        v22 = *(_QWORD *)(a1 + 8 * j + 1672);
        if ( v22 && *(_DWORD *)(v22 + 16) == (_DWORD)v39 )
          goto LABEL_44;
      }
    }
    v22 = 0LL;
    goto LABEL_44;
  }
  if ( (unsigned __int8)v40 == 2 )
  {
    if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, v14, &v37) || (*(_BYTE *)(a1 + 21) & 2) == 0 )
      goto LABEL_45;
    if ( (_DWORD)v39 != -1 )
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 224); k = (unsigned int)(k + 1) )
      {
        v22 = *(_QWORD *)(a1 + 8 * k + 1672);
        if ( v22 && *(_DWORD *)(v22 + 16) == (_DWORD)v39 )
          goto LABEL_44;
      }
    }
    v22 = 0LL;
LABEL_44:
    StorPortExtendedFunction(86LL, a1, v22, 1LL);
LABEL_45:
    v14 = 1;
  }
  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  if ( v25 == -1 || *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) == -1 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, v14);
  }
  else
  {
    LODWORD(v39) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( (v25 & 2) != 0 )
      StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  }
  if ( a4 )
    return 1;
  switch ( (a6 >> 9) & 7 )
  {
    case 0:
      switch ( (unsigned __int8)(a6 >> 1) )
      {
        case 0u:
          v28 = 1;
          goto LABEL_72;
        case 1u:
        case 0x12u:
        case 0x15u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 32;
          goto LABEL_70;
        case 2u:
        case 0x13u:
        case 0x14u:
        case 0x16u:
        case 0x18u:
        case 0x1Au:
        case 0x1Eu:
LABEL_85:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 36;
          goto LABEL_70;
        case 3u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 35;
          goto LABEL_70;
        case 4u:
        case 0x81u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          goto LABEL_69;
        case 5u:
          v7 = 64;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 0xB;
          BYTE7(Src) = 10;
          v8 = 1;
          WORD6(Src) = 2059;
          goto LABEL_70;
        case 6u:
          v28 = 4;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 4;
          v7 = 2;
          WORD6(Src) = 68;
          goto LABEL_72;
        case 7u:
        case 9u:
        case 0xAu:
          v7 = 64;
          goto LABEL_97;
        case 8u:
          v7 = 64;
          goto LABEL_98;
        case 0xBu:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 2336;
          goto LABEL_70;
        case 0xCu:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 44;
          goto LABEL_70;
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
LABEL_68:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          goto LABEL_69;
        case 0x19u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 42;
          goto LABEL_70;
        case 0x1Bu:
          v7 = 34;
LABEL_97:
          v8 = 1;
LABEL_98:
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 0xB;
          BYTE7(Src) = 10;
LABEL_69:
          WORD6(Src) = 0;
          goto LABEL_70;
        case 0x1Cu:
          v28 = 4;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 4;
          v7 = 2;
          WORD6(Src) = 0;
          goto LABEL_72;
        case 0x1Du:
          v7 = 2;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 2;
          v28 = 24;
          WORD6(Src) = 1028;
          goto LABEL_72;
        case 0x23u:
          v28 = 23;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
          v7 = 2;
          WORD6(Src) = 544;
          goto LABEL_72;
        case 0x80u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 33;
LABEL_70:
          BYTE2(Src) = v27;
          goto LABEL_71;
        case 0x82u:
          v7 = 2;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 2;
          v28 = 4;
          if ( SrbExtension )
          {
            if ( _bittest16((const signed __int16 *)(SrbExtension + 4218), 0xFu) )
            {
              WORD6(Src) = 4;
            }
            else
            {
              WORD6(Src) = 260;
              v8 = 1;
            }
          }
          else
          {
            WORD6(Src) = 4;
          }
          goto LABEL_72;
        case 0x83u:
          BYTE2(Src) &= 0xF0u;
          v28 = 4;
          v7 = 24;
          WORD6(Src) = 0;
LABEL_114:
          BYTE7(Src) = 10;
          LOBYTE(Src) = -16;
          goto LABEL_72;
        default:
          goto LABEL_71;
      }
    case 1:
      switch ( (unsigned __int8)(a6 >> 1) )
      {
        case 0u:
        case 2u:
        case 3u:
        case 5u:
        case 7u:
        case 0x18u:
        case 0x19u:
          goto LABEL_68;
        case 1u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 38;
          goto LABEL_70;
        case 6u:
        case 8u:
        case 9u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x80u:
        case 0x81u:
        case 0x83u:
          goto LABEL_85;
        case 0xAu:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 5;
          BYTE7(Src) = 10;
          WORD6(Src) = 305;
          goto LABEL_70;
        case 0xBu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x1Au:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 6;
          BYTE7(Src) = 10;
          goto LABEL_69;
        case 0x82u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 7;
          BYTE7(Src) = 10;
          WORD6(Src) = 36;
          goto LABEL_70;
        default:
          goto LABEL_71;
      }
    case 2:
      switch ( (unsigned __int8)(a6 >> 1) )
      {
        case 0x80u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          WORD6(Src) = 3;
          goto LABEL_70;
        case 0x81u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          WORD6(Src) = 17;
          goto LABEL_70;
        case 0x82u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          WORD6(Src) = 272;
          goto LABEL_70;
        case 0x83u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          WORD6(Src) = 528;
          goto LABEL_70;
        case 0x84u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 3;
          BYTE7(Src) = 10;
          WORD6(Src) = 784;
          goto LABEL_70;
        case 0x85u:
          v7 = 2;
          LOBYTE(Src) = -16;
          v27 = BYTE2(Src) & 0xF0 | 0xE;
          BYTE7(Src) = 10;
          WORD6(Src) = 29;
          goto LABEL_70;
        case 0x86u:
          v28 = 23;
          WORD6(Src) = 2336;
          v7 = 2;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 7;
          if ( !a3 )
            v28 = 4;
          goto LABEL_114;
        default:
          goto LABEL_71;
      }
  }
LABEL_71:
  v28 = 4;
LABEL_72:
  if ( a2 )
  {
    *(_BYTE *)(a2 + 3) = v28;
    GetSrbScsiData(a2, 0, (unsigned int)&v43, (unsigned int)&v44, (__int64)v38);
    if ( v43 )
      *v43 = v7;
    if ( (Src & 0x80u) != 0LL )
    {
      v29 = (char *)v44;
      if ( v44 )
      {
        v30 = (unsigned __int8)v38[0];
        if ( v38[0] )
        {
          v31 = 18;
          if ( v38[0] <= 0x12u )
            v31 = (unsigned __int8)v38[0];
          memmove(v44, &Src, v31);
          *(_BYTE *)(a2 + 3) |= 0x80u;
          if ( v30 > v31 )
          {
            v32 = v30 - v31;
            v33 = &v29[v31];
            if ( (((_BYTE)v30 - (_BYTE)v31) & 3) != 0 )
            {
              if ( v32 )
                memset(v33, 0, v32);
            }
            else
            {
              v34 = v32 >> 2;
              if ( v34 )
                memset(v33, 0, 4LL * v34);
            }
          }
        }
      }
    }
  }
  if ( v45 )
    *v45 = v8;
  return v28;
}
