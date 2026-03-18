/*
 * XREFs of sub_14000EBE0 @ 0x14000EBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001AB0 @ 0x140001AB0 (sub_140001AB0.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_1400146F0 @ 0x1400146F0 (sub_1400146F0.c)
 *     sub_140014B80 @ 0x140014B80 (sub_140014B80.c)
 *     sub_140018FE4 @ 0x140018FE4 (sub_140018FE4.c)
 *     sub_14001D628 @ 0x14001D628 (sub_14001D628.c)
 *     sub_14003202C @ 0x14003202C (sub_14003202C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 *     sub_140032860 @ 0x140032860 (sub_140032860.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000EBE0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // edi
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  __int64 v15; // rbp
  __int64 v16; // r12
  signed __int32 v17; // ecx
  __int64 v18; // r9
  signed __int32 v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  void (__fastcall *v26)(__int64, __int64, _QWORD); // rax
  unsigned int v27; // r13d
  unsigned int v28; // r15d
  __int64 v29; // r12
  signed __int32 v30; // ecx
  __int64 v31; // r9
  signed __int32 v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  signed __int64 v35; // rax
  signed __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rax
  void (__fastcall *v39)(__int64, __int64, _QWORD); // rax
  __int64 v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // r13
  __int64 v43; // rcx
  unsigned int v44; // r15d
  __int64 v45; // rcx
  int v46; // [rsp+70h] [rbp-A8h]
  unsigned int v47; // [rsp+78h] [rbp-A0h]
  _OWORD v48[4]; // [rsp+90h] [rbp-88h] BYREF

  if ( a1 && (*(_DWORD *)(a1 + 4056) & 0x1000) != 0 )
    return 0LL;
  switch ( a2 )
  {
    case 0:
      v6 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
        *(_BYTE *)(a3 + 4) = 1;
      if ( v6 > 1 )
        *(_BYTE *)(a3 + 5) = 1;
      if ( v6 > 2 )
        *(_BYTE *)(a3 + 6) = 1;
      if ( v6 > 3 )
        *(_BYTE *)(a3 + 7) = 1;
      if ( v6 > 9 )
        *(_BYTE *)(a3 + 13) = 1;
      if ( v6 > 0xA )
        *(_BYTE *)(a3 + 14) = 1;
      if ( v6 > 0xB )
        *(_BYTE *)(a3 + 15) = 1;
      if ( v6 > 0xD )
        *(_BYTE *)(a3 + 17) = 1;
      if ( v6 > 0xE )
        *(_BYTE *)(a3 + 18) = 1;
      if ( v6 > 0x1E )
        *(_BYTE *)(a3 + 34) = 1;
      if ( v6 > 0x1F )
        *(_BYTE *)(a3 + 35) = 1;
      if ( (unsigned int)sub_140018FE4() )
      {
        if ( *(_DWORD *)a3 > 0x10u )
          *(_BYTE *)(a3 + 20) = 1;
      }
      return 0;
    case 1:
      if ( *(_DWORD *)(a3 + 8) == 2 )
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFFBF | (*(_BYTE *)(a3 + 12) != 0 ? 0x40 : 0);
      return 0;
    case 2:
      v8 = *(unsigned __int8 *)(a3 + 10);
      return (unsigned int)v8 >= *(_DWORD *)(a1 + 224) || !*(_QWORD *)(a1 + 8 * v8 + 1672);
    case 3:
      return 0;
    case 9:
      v9 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1672);
      if ( v9 )
        *(_DWORD *)(v9 + 20) |= 4u;
      return 0;
    case 10:
      v7 = 0;
      v10 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1672);
      if ( !v10 )
        return v7;
      *(_DWORD *)(v10 + 20) |= 4u;
      v11 = 0;
      v12 = *(unsigned __int8 *)(a3 + 10);
      v46 = v12;
      v47 = 0;
      if ( !*(_WORD *)(a1 + 330) )
        goto LABEL_79;
      do
      {
        v13 = *(unsigned __int16 *)(a1 + 328);
        v14 = 0;
        v15 = *(_QWORD *)(a1 + 936) + 208LL * v11;
        if ( *(_WORD *)(a1 + 328) )
        {
          v16 = 0LL;
          do
          {
            v17 = *(_DWORD *)(v16 + *(_QWORD *)(v15 + 32));
            if ( (v17 & 8) != 0 )
            {
              while ( BYTE1(v17) == v12 )
              {
                v18 = 32LL * v14;
                v19 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)(*(_QWORD *)(v15 + 32) + v18),
                        v17 - 8,
                        v17);
                if ( v17 == v19 )
                {
                  v20 = *(_QWORD *)(v15 + 32);
                  v21 = *(_QWORD *)(v20 + v16 + 16);
                  if ( v21 )
                  {
                    *(_DWORD *)(v20 + v16) = 0;
                    *(_QWORD *)(v18 + *(_QWORD *)(v15 + 32) + 16) = 0LL;
                    if ( (v17 & 1) == 0 )
                    {
                      if ( (v17 & 0x40) != 0 )
                      {
                        if ( *(_QWORD *)(v21 + 8) )
                        {
                          v22 = *(_QWORD *)(v15 + 200);
                          do
                          {
                            v23 = v22;
                            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) = v22;
                            v22 = _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(v15 + 200),
                                    *(_QWORD *)(v21 + 8),
                                    v22);
                          }
                          while ( v22 != v23 );
                          *(_QWORD *)(v21 + 8) = 0LL;
                        }
                        if ( (v17 & 0x80u) != 0 )
                        {
                          v24 = *(_QWORD *)(v21 + 16);
                          StorPortExtendedFunction(1LL, a1, v21, v18);
                          v21 = v24;
                        }
                        if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v21, 0xFFFFu) == 1 )
                          StorPortNotification(0x2000LL, a1, v21);
                      }
                      else
                      {
                        if ( *(_BYTE *)(v21 + 2) == 40 )
                          v25 = *(_QWORD *)(v21 + 104);
                        else
                          v25 = *(_QWORD *)(v21 + 56);
                        if ( (v25 & 0xFFF) != 0 )
                          v25 = v25 - (v25 & 0xFFF) + 4096;
                        *(_BYTE *)(v21 + 3) = 8;
                        if ( v25 )
                        {
                          v26 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v25 + 4192);
                          if ( v26 )
                            v26(a1, v21, 0LL);
                        }
                        sub_14000A8A0(a1, v21, 0);
                      }
                    }
                    ++*(_DWORD *)(v15 + 140);
                    _InterlockedDecrement16((volatile signed __int16 *)(v15 + 136));
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 4056) |= 0x8000u;
                    if ( (*(_DWORD *)(a1 + 128) & 0x40) != 0 )
                      MEMORY[6] = -1;
                  }
                  v12 = v46;
                  break;
                }
                v17 = v19;
                if ( (v19 & 8) == 0 )
                  break;
              }
            }
            ++v14;
            v16 += 32LL;
          }
          while ( v14 < v13 );
          v11 = v47;
        }
        if ( byte_140042130 || (*(_DWORD *)(a1 + 4056) & 0x200) == 0 )
          sub_14001D628(a1, v15, v12, 0, 0, 8);
        v47 = ++v11;
      }
      while ( v11 < *(unsigned __int16 *)(a1 + 330) );
LABEL_79:
      if ( *(_QWORD *)(a1 + 368) )
      {
        v27 = *(unsigned __int16 *)(a1 + 324);
        v28 = 0;
        if ( *(_WORD *)(a1 + 324) )
        {
          v29 = 0LL;
          do
          {
            v30 = *(_DWORD *)(v29 + *(_QWORD *)(a1 + 368));
            if ( (v30 & 8) != 0 )
            {
              while ( (v30 & 0x10) == 0 && BYTE1(v30) == v12 )
              {
                v31 = 32LL * v28;
                v32 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)(*(_QWORD *)(a1 + 368) + v31),
                        v30 - 8,
                        v30);
                if ( v30 == v32 )
                {
                  v33 = *(_QWORD *)(a1 + 368);
                  v34 = *(_QWORD *)(v33 + v29 + 16);
                  if ( v34 )
                  {
                    *(_DWORD *)(v33 + v29) = 0;
                    *(_QWORD *)(v31 + *(_QWORD *)(a1 + 368) + 16) = 0LL;
                    if ( (v30 & 1) == 0 )
                    {
                      if ( (v30 & 0x40) != 0 )
                      {
                        if ( *(_QWORD *)(v34 + 8) )
                        {
                          v35 = *(_QWORD *)(a1 + 536);
                          do
                          {
                            v36 = v35;
                            *(_QWORD *)(*(_QWORD *)(v34 + 8) + 24LL) = v35;
                            v35 = _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(a1 + 536),
                                    *(_QWORD *)(v34 + 8),
                                    v35);
                          }
                          while ( v35 != v36 );
                          *(_QWORD *)(v34 + 8) = 0LL;
                        }
                        if ( (v30 & 0x80u) != 0 )
                        {
                          v37 = *(_QWORD *)(v34 + 16);
                          StorPortExtendedFunction(1LL, a1, v34, v31);
                          v34 = v37;
                          v12 = v46;
                        }
                        if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v34, 0xFFFFu) == 1 )
                        {
                          StorPortNotification(0x2000LL, a1, v34);
                          ++*(_DWORD *)(a1 + 476);
                          _InterlockedDecrement16((volatile signed __int16 *)(a1 + 472));
                          break;
                        }
                      }
                      else
                      {
                        if ( *(_BYTE *)(v34 + 2) == 40 )
                          v38 = *(_QWORD *)(v34 + 104);
                        else
                          v38 = *(_QWORD *)(v34 + 56);
                        if ( (v38 & 0xFFF) != 0 )
                          v38 = v38 - (v38 & 0xFFF) + 4096;
                        *(_BYTE *)(v34 + 3) = 8;
                        if ( v38 )
                        {
                          v39 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v38 + 4192);
                          if ( v39 )
                            v39(a1, v34, 0LL);
                        }
                        sub_14000A8A0(a1, v34, 0);
                      }
                    }
                    ++*(_DWORD *)(a1 + 476);
                    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 472));
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 4056) |= 0x8000u;
                    if ( (*(_DWORD *)(a1 + 128) & 0x40) != 0 )
                      MEMORY[6] = -1;
                  }
                  break;
                }
                v30 = v32;
                if ( (v32 & 8) == 0 )
                  break;
              }
            }
            ++v28;
            v29 += 32LL;
          }
          while ( v28 < v27 );
        }
        if ( byte_140042130 || (*(_DWORD *)(a1 + 4056) & 0x200) == 0 )
          sub_14001D628(a1, a1 + 336, v12, 0, 0, 8);
      }
      return v7;
    case 11:
      v40 = *(_QWORD *)(a1 + 1560);
      v7 = 0;
      if ( !a3 )
        goto LABEL_116;
      if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
        goto LABEL_118;
      v41 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)a3 != 2 )
      {
        if ( v41 >= 0x6C )
        {
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_OWORD *)(a3 + 32) = 0LL;
          *(_OWORD *)(a3 + 48) = 0LL;
          *(_OWORD *)(a3 + 64) = 0LL;
          *(_OWORD *)(a3 + 80) = 0LL;
          *(_QWORD *)(a3 + 96) = 0LL;
          *(_DWORD *)(a3 + 104) = 0;
          *(_DWORD *)a3 = 1;
          *(_DWORD *)(a3 + 4) = 108;
          *(_OWORD *)(a3 + 25) = *(_OWORD *)(v40 + 24);
          *(_OWORD *)(a3 + 41) = *(_OWORD *)(v40 + 40);
          *(_QWORD *)(a3 + 57) = *(_QWORD *)(v40 + 56);
LABEL_137:
          sub_140001AB0(v40, a3 + 90, 0x10u);
          LOBYTE(v7) = 0;
          return v7;
        }
LABEL_116:
        LOBYTE(v7) = 1;
        return v7;
      }
      if ( v41 < 0x78 )
        goto LABEL_116;
      v42 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a3 + 112) + 10LL) + 1672);
      if ( v42 )
      {
        if ( *(_BYTE *)(a1 + 1008) )
          *(_DWORD *)(a1 + 4056) |= 0x20000u;
        v43 = *(_QWORD *)(a1 + 1104);
        *(_BYTE *)(a1 + 1019) = 0;
        sub_140032C80(v43, 0LL, 4232LL);
        *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
        *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
        *(_BYTE *)(a1 + 1008) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 2u;
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 4u;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
          v44 = 0x80000000;
        else
          v44 = *(_DWORD *)(a1 + 244);
        if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 4096LL, 0LL) && v44 != 0x80000000 )
          StorPortExtendedFunction(82LL, a1, 4096LL, 0LL);
        if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_OWORD *)(a3 + 32) = 0LL;
        *(_OWORD *)(a3 + 48) = 0LL;
        *(_OWORD *)(a3 + 64) = 0LL;
        *(_OWORD *)(a3 + 80) = 0LL;
        *(_OWORD *)(a3 + 96) = 0LL;
        *(_QWORD *)(a3 + 112) = 0LL;
        *(_DWORD *)a3 = 2;
        *(_DWORD *)(a3 + 4) = 120;
        memset(v48, 0, sizeof(v48));
        if ( (unsigned int)sub_140032860(v42 + 168, v48, 64LL) )
        {
          *(_OWORD *)(a3 + 25) = *(_OWORD *)(v42 + 168);
          *(_OWORD *)(a3 + 41) = *(_OWORD *)(v42 + 184);
          *(_OWORD *)(a3 + 57) = *(_OWORD *)(v42 + 200);
          *(_OWORD *)(a3 + 73) = *(_OWORD *)(v42 + 216);
        }
        else
        {
          *(_OWORD *)(a3 + 25) = *(_OWORD *)(v40 + 24);
          *(_OWORD *)(a3 + 41) = *(_OWORD *)(v40 + 40);
          *(_QWORD *)(a3 + 57) = *(_QWORD *)(v40 + 56);
        }
        goto LABEL_137;
      }
LABEL_118:
      LOBYTE(v7) = 1;
      return v7;
    case 13:
      v45 = *(_QWORD *)(a1 + 1560);
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
      {
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_OWORD *)(a3 + 32) = 0LL;
        *(_OWORD *)(a3 + 48) = 0LL;
        *(_OWORD *)(a3 + 64) = 0LL;
        *(_OWORD *)(a3 + 80) = 0LL;
        *(_OWORD *)(a3 + 96) = 0LL;
        *(_OWORD *)(a3 + 112) = 0LL;
        *(_OWORD *)(a3 + 128) = 0LL;
        *(_QWORD *)(a3 + 144) = 0LL;
        *(_DWORD *)a3 = 1;
        v7 = 0;
        *(_DWORD *)(a3 + 4) = 152;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v45 + 4);
        *(_DWORD *)(a3 + 32) = *(_DWORD *)(v45 + 20);
      }
      return v7;
    case 14:
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
        return (unsigned int)sub_14003202C(
                               a1,
                               *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a3 + 8) + 10LL) + 1672),
                               *(_QWORD *)(a3 + 24));
      return v7;
    case 16:
      if ( !(unsigned int)sub_140018FE4() )
        return 1;
      return (unsigned int)StorPortExtendedFunction(
                             135LL,
                             a1,
                             *(unsigned int *)(a1 + 4340),
                             *(unsigned int *)(a1 + 4344)) != 0;
    case 30:
      v7 = 1;
      if ( a3 && *(_QWORD *)a3 )
      {
        sub_140014B80(a1, a3);
        return 0;
      }
      return v7;
    case 31:
      v7 = 1;
      if ( a3 && *(_DWORD *)a3 >= 0x38u && *(_DWORD *)(a3 + 4) >= 0x38u && *(int *)(a3 + 8) < 6 )
      {
        sub_1400146F0(a1, a3);
        return 0;
      }
      return v7;
    default:
      return 1;
  }
}
