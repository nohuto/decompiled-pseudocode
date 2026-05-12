/*
 * XREFs of sub_1400BDE7C @ 0x1400BDE7C
 * Callers:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BCA54 @ 0x1400BCA54 (sub_1400BCA54.c)
 *     sub_1400BCA9C @ 0x1400BCA9C (sub_1400BCA9C.c)
 *     sub_1400BCAC8 @ 0x1400BCAC8 (sub_1400BCAC8.c)
 *     sub_140120B60 @ 0x140120B60 (sub_140120B60.c)
 *     sub_1401269C0 @ 0x1401269C0 (sub_1401269C0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400BDE7C(__int64 SystemArgument2, __int64 a2, char a3)
{
  __int16 v3; // di
  __int64 v7; // rcx
  int v8; // r9d
  signed int v9; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // ecx
  ULONG v15; // r8d
  ULONG v16; // ebx
  __int64 *v17; // r12
  int v18; // r10d
  unsigned int *v19; // r8
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // ebx
  unsigned int v23; // ebx
  ULONG v24; // r15d
  __int64 v25; // rax
  unsigned __int16 v26; // r15
  int v27; // ecx
  char v28; // r8
  bool v29; // al
  bool v30; // dl
  int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // edx
  int v34; // ecx
  unsigned int v35; // edx
  bool v36; // zf
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  bool v40; // zf
  int v41; // ecx
  unsigned int v42; // edx
  bool v43; // zf
  void (__fastcall *v44)(__int64, _QWORD, _QWORD); // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // r14
  _QWORD *v53; // rcx
  __int128 v54; // xmm1
  signed __int32 v55[8]; // [rsp+0h] [rbp-C9h] BYREF
  char v56; // [rsp+A1h] [rbp-28h]
  ULONG MicroSeconds; // [rsp+A4h] [rbp-25h]
  int v58; // [rsp+A8h] [rbp-21h] BYREF
  unsigned int v59; // [rsp+ACh] [rbp-1Dh]
  unsigned int v60; // [rsp+B0h] [rbp-19h]
  unsigned int v61; // [rsp+B4h] [rbp-15h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-11h]
  __int64 v63; // [rsp+C0h] [rbp-9h]
  __int128 v64; // [rsp+C8h] [rbp-1h]
  __int128 v65; // [rsp+D8h] [rbp+Fh]

  HIBYTE(v3) = 0;
  v58 = 0;
  v60 = 0;
  v56 = 0;
  v63 = 0LL;
  if ( !*(_QWORD *)(SystemArgument2 + 1272) )
    return 3221225473LL;
  if ( !sub_1400BCA54(SystemArgument2) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4252);
    if ( (_WORD)v10 )
    {
      if ( (unsigned __int16)v10 > *(_WORD *)(v7 + 22) )
      {
        v9 = -1073741595;
        goto LABEL_161;
      }
      v13 = *(_QWORD *)(SystemArgument2 + 864) - 128LL;
      v63 = 192 * v10 + *(_QWORD *)(SystemArgument2 + 728) - 192LL;
      v11 = *(_WORD *)(v63 + 138);
      v12 = ((unsigned __int64)v11 << 7) + v13;
    }
    else
    {
      v11 = 0;
      v12 = *(_QWORD *)(v7 + 856);
      v63 = *(_QWORD *)(v7 + 712);
    }
    v62 = v12;
    v14 = 10000000;
    if ( v8 )
      v14 = v8;
    v15 = 50;
    MicroSeconds = 50;
    v61 = 10 * ((v14 + 9) / 0xAu);
    v59 = 1000;
    if ( v61 / 0xA <= 0x3E8 )
    {
      v59 = v61 / 0xA;
      if ( v61 / 0xA <= 0x32 )
      {
        v15 = v61 / 0xA;
        MicroSeconds = v61 / 0xA;
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(v12 + 56), 1u);
    v16 = v59;
    v17 = (__int64 *)(a2 + 4240);
    while ( **(_DWORD **)(SystemArgument2 + 1272) != 1
         || *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1272) + 4LL)
         || (*(_DWORD *)(SystemArgument2 + 1072) & 0x10) == 0 )
    {
      sub_14002CDD0(v15);
      if ( a3 && sub_1400BCAC8(SystemArgument2, v11, &v58) )
        sub_1401269C0((PVOID)SystemArgument2);
      if ( sub_1400BCA9C(*(_QWORD *)(a2 + 4240)) )
        goto LABEL_53;
      if ( v60 > v61 )
      {
        v29 = 1;
        v9 = -1073741643;
        v30 = 0;
        goto LABEL_54;
      }
      v60 += MicroSeconds;
      MicroSeconds = v16;
      if ( sub_14008F0E0() )
      {
        v28 = 1;
        v9 = -1073741595;
        v29 = 0;
        v30 = 0;
        goto LABEL_55;
      }
      v15 = v16;
    }
    if ( !sub_1400BCA9C(*v17) )
    {
      if ( ((*(_DWORD *)(a2 + 4256) & 0x40) != 0 || (*(_DWORD *)(a2 + 4256) & 0x2000) != 0)
        && (*(_DWORD *)(*(_QWORD *)*v17 + 4256LL) & 0x4000) != 0 )
      {
        v19 = (unsigned int *)*v17;
        v56 = v18;
        v20 = v19[16];
        if ( *(_QWORD *)v19 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)v19 + 4184LL);
          if ( v21 )
            *(_BYTE *)(*(_QWORD *)(v21 + 184) + 3LL) |= v18;
        }
        v22 = v18 & *(_DWORD *)(*(_QWORD *)v19 + 4256LL);
        sub_140120B60(*(_QWORD *)(SystemArgument2 + 1024), (unsigned int)v20);
        _InterlockedOr(v55, 0);
        if ( !_InterlockedCompareExchange(
                *(volatile signed __int32 **)(*(_QWORD *)(SystemArgument2 + 1024) + 8 * v20 + 24),
                1,
                0) )
          _InterlockedAdd((volatile signed __int32 *)(SystemArgument2 + 956), 1u);
        if ( !(_BYTE)v22 )
          _InterlockedAdd((volatile signed __int32 *)(SystemArgument2 + 960), 1u);
      }
      v23 = 0;
      v24 = MicroSeconds;
      _InterlockedDecrement((volatile signed __int32 *)(v62 + 56));
      while ( 1 )
      {
        do
          sub_14002CDD0(v24);
        while ( **(_DWORD **)(SystemArgument2 + 1272) );
        if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0 )
          break;
        if ( a3 && sub_1400BCAC8(SystemArgument2, v11, &v58) )
          sub_1401269C0((PVOID)SystemArgument2);
        if ( sub_1400BCA9C(*v17) )
        {
          v27 = *(_DWORD *)(a2 + 4256) & 0x80;
          v28 = 0;
          v9 = v27 != 0 ? 0xC000042B : 0;
          v29 = v27 != 0;
          v30 = v27 == 0;
          goto LABEL_56;
        }
        if ( v23 > v61 )
        {
          v9 = -1073741643;
          goto LABEL_46;
        }
        v23 += v24;
        v24 = v59;
        if ( sub_14008F0E0() )
        {
          v9 = -1073741595;
          goto LABEL_46;
        }
      }
      v9 = -1073741436;
LABEL_157:
      v26 = v11;
      if ( v56 )
        goto LABEL_166;
      goto LABEL_162;
    }
LABEL_53:
    v31 = *(_DWORD *)(a2 + 4256) & 0x80;
    v9 = v31 != 0 ? 0xC000042B : 0;
    v29 = v31 != 0;
    v30 = v31 == 0;
LABEL_54:
    v28 = 0;
LABEL_55:
    _InterlockedDecrement((volatile signed __int32 *)(v62 + 56));
LABEL_56:
    if ( !v30 )
    {
      v26 = v11;
      if ( v9 >= 0 )
      {
LABEL_175:
        if ( (*(_BYTE *)(SystemArgument2 + 1344) & 8) != 0 )
        {
          v36 = *(_DWORD *)SystemArgument2 == 1314276178;
          *(_DWORD *)((char *)&v65 + 10) = 0;
          HIWORD(v65) = 0;
          WORD1(v64) = v11;
          LOWORD(v64) = *(_WORD *)(v63 + 136);
          *((_QWORD *)&v64 + 1) = *(_QWORD *)(a2 + 4184);
          DWORD1(v64) = *(_DWORD *)(a2 + 4096);
          WORD4(v65) = *(_WORD *)(a2 + 4260);
          *(_QWORD *)&v65 = 0LL;
          if ( v36 )
          {
            v48 = *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 1352) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
            v49 = *(_DWORD *)(v48 + 12);
            v50 = v48 + 64;
            _InterlockedOr(v55, 0);
            if ( v49 )
            {
              if ( v48 != -64 )
              {
                v51 = _InterlockedIncrement((volatile signed __int32 *)v48) % v49;
                v52 = v50 + ((unsigned __int64)v51 << 6);
                if ( (*(_DWORD *)(SystemArgument2 + 1320) & 1) != 0 )
                  *(_DWORD *)(v52 + 4) = _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 1408));
                else
                  *(_DWORD *)(v52 + 4) = v51;
                *(_WORD *)v52 = 1;
                v53 = (_QWORD *)(v52 + 8);
                LOBYTE(v3) = v26 != 0;
                *(_WORD *)(v52 + 2) = v3;
                if ( (*(_DWORD *)(SystemArgument2 + 1320) & 2) != 0 )
                  KeQuerySystemTimePrecise(v53);
                else
                  *v53 = MEMORY[0xFFFFF78000000014];
                v54 = v65;
                *(_OWORD *)(v52 + 16) = v64;
                *(_OWORD *)(v52 + 32) = v54;
              }
            }
          }
        }
        return (unsigned int)v9;
      }
      if ( v29 || v28 )
      {
LABEL_46:
        v25 = *(_QWORD *)(SystemArgument2 + 1272);
        v26 = v11;
        if ( v11 )
          _InterlockedAdd((volatile signed __int32 *)(v25 + 56), 1u);
        else
          _InterlockedAdd((volatile signed __int32 *)(v25 + 52), 1u);
        goto LABEL_166;
      }
      goto LABEL_157;
    }
    v32 = *(unsigned __int16 *)(a2 + 4260);
    if ( ((v32 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) != 2 )
          goto LABEL_149;
        v33 = v32 >> 1;
        switch ( (unsigned __int8)v33 )
        {
          case 0x80u:
            goto LABEL_149;
          case 0x81u:
            goto LABEL_149;
          case 0x82u:
            goto LABEL_149;
          case 0x83u:
            goto LABEL_149;
          case 0x84u:
            goto LABEL_149;
        }
        v34 = (unsigned __int8)v33 - 133;
        if ( (unsigned __int8)v33 == 133 )
          goto LABEL_149;
        goto LABEL_140;
      }
      v35 = v32 >> 1;
      if ( (unsigned __int8)v35 <= 0x80u )
      {
        if ( (unsigned __int8)v35 == 128 )
          goto LABEL_81;
        if ( (unsigned __int8)v35 <= 0x11u )
        {
          if ( (unsigned __int8)v35 == 17 )
            goto LABEL_90;
          if ( (unsigned __int8)v35 <= 9u )
          {
            if ( (unsigned __int8)v35 == 9
              || !(_BYTE)v35
              || (unsigned __int8)v35 == 1
              || (unsigned __int8)v35 == 2
              || (unsigned __int8)v35 == 3 )
            {
              goto LABEL_81;
            }
            v37 = (unsigned __int8)v35 - 5;
            v36 = (unsigned __int8)v35 == 5;
LABEL_78:
            if ( v36 )
              goto LABEL_81;
            v38 = v37 - 1;
            if ( !v38 )
              goto LABEL_81;
            v39 = v38 - 1;
            if ( !v39 )
              goto LABEL_81;
            goto LABEL_129;
          }
          if ( (unsigned __int8)v35 != 10 )
          {
            if ( (unsigned __int8)v35 != 11 )
            {
              if ( (unsigned __int8)v35 == 12
                || (unsigned __int8)v35 == 13
                || (unsigned __int8)v35 == 14
                || (unsigned __int8)v35 == 15 )
              {
                goto LABEL_81;
              }
              if ( (unsigned __int8)v35 != 16 )
                goto LABEL_149;
            }
LABEL_90:
            v9 = -2147483210;
            goto LABEL_82;
          }
LABEL_81:
          v9 = -1073741808;
LABEL_82:
          v26 = v11;
          goto LABEL_174;
        }
        if ( (unsigned __int8)v35 <= 0x1Au )
        {
          switch ( (unsigned __int8)v35 )
          {
            case 0x1Au:
            case 0x12u:
            case 0x13u:
              goto LABEL_101;
            case 0x14u:
              v9 = -1073741800;
              goto LABEL_82;
            case 0x15u:
              goto LABEL_149;
            case 0x16u:
              goto LABEL_101;
          }
          v41 = (unsigned __int8)v35 - 24;
          v40 = (unsigned __int8)v35 == 24;
          goto LABEL_99;
        }
        if ( (unsigned __int8)v35 == 27 )
        {
          v9 = -1073741637;
          goto LABEL_82;
        }
        if ( (unsigned __int8)v35 == 28 )
          goto LABEL_81;
        if ( (unsigned __int8)v35 != 30 )
        {
          v37 = (unsigned __int8)v35 - 31;
          v36 = (unsigned __int8)v35 == 31;
          goto LABEL_78;
        }
LABEL_141:
        v9 = -1073741790;
        goto LABEL_82;
      }
      if ( (unsigned __int8)v35 == 129 )
        goto LABEL_81;
      v39 = (unsigned __int8)v35 - 130;
      if ( (unsigned __int8)v35 == 130 )
        goto LABEL_141;
LABEL_129:
      v43 = v39 == 1;
LABEL_148:
      if ( !v43 )
        goto LABEL_149;
      goto LABEL_81;
    }
    v42 = v32 >> 1;
    if ( (unsigned __int8)v42 > 0x80u )
    {
      if ( (unsigned __int8)v42 == 129 )
        goto LABEL_81;
      v39 = (unsigned __int8)v42 - 130;
      if ( (unsigned __int8)v42 == 130 )
      {
        v9 = -1073741661;
        goto LABEL_82;
      }
      goto LABEL_129;
    }
    if ( (unsigned __int8)v42 == 128 )
      goto LABEL_81;
    if ( (unsigned __int8)v42 > 0xEu )
    {
      if ( (unsigned __int8)v42 <= 0x16u )
      {
        if ( (unsigned __int8)v42 == 22
          || (unsigned __int8)v42 == 15
          || (unsigned __int8)v42 == 16
          || (unsigned __int8)v42 == 17
          || (unsigned __int8)v42 == 18
          || (unsigned __int8)v42 == 19 )
        {
          goto LABEL_81;
        }
        v34 = (unsigned __int8)v42 - 20;
        if ( (unsigned __int8)v42 != 20 )
        {
LABEL_140:
          if ( v34 == 1 )
            goto LABEL_141;
LABEL_149:
          v9 = -1073741435;
          goto LABEL_82;
        }
LABEL_101:
        v9 = -1073741436;
        goto LABEL_82;
      }
      if ( (unsigned __int8)v42 == 24 )
        goto LABEL_81;
      if ( (unsigned __int8)v42 == 25 || (unsigned __int8)v42 == 26 )
      {
        v9 = -1073741643;
        goto LABEL_82;
      }
      if ( (unsigned __int8)v42 != 27 )
      {
        if ( (unsigned __int8)v42 == 28 )
          goto LABEL_149;
        v43 = (unsigned __int8)v42 == 30;
        goto LABEL_148;
      }
    }
    else
    {
      if ( (unsigned __int8)v42 == 14 )
        goto LABEL_81;
      if ( (unsigned __int8)v42 > 7u )
      {
        if ( (unsigned __int8)v42 != 8 && (unsigned __int8)v42 != 9 && (unsigned __int8)v42 != 10 )
        {
          if ( (unsigned __int8)v42 == 11 )
            goto LABEL_81;
          v39 = (unsigned __int8)v42 - 12;
          if ( (unsigned __int8)v42 == 12 )
          {
            v9 = -1073740758;
            goto LABEL_82;
          }
          goto LABEL_129;
        }
      }
      else if ( (unsigned __int8)v42 != 7 )
      {
        if ( !(_BYTE)v42 )
        {
          v9 = 0;
          goto LABEL_82;
        }
        if ( (unsigned __int8)v42 == 1 || (unsigned __int8)v42 == 2 )
          goto LABEL_81;
        if ( (unsigned __int8)v42 == 3 || (unsigned __int8)v42 == 4 )
          goto LABEL_149;
        v41 = (unsigned __int8)v42 - 5;
        v40 = (unsigned __int8)v42 == 5;
LABEL_99:
        if ( !v40 && v41 != 1 )
          goto LABEL_149;
        goto LABEL_101;
      }
    }
    v9 = -1073741248;
    goto LABEL_82;
  }
  v9 = -1073741436;
LABEL_161:
  v26 = 0;
LABEL_162:
  v44 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(a2 + 4192);
  if ( v44 )
  {
    v44(SystemArgument2, *(_QWORD *)(a2 + 4200), 0LL);
    v17 = (__int64 *)(a2 + 4240);
  }
  else
  {
    v17 = (__int64 *)(a2 + 4240);
    _interlockedbittestandreset((volatile signed __int32 *)(**(_QWORD **)(a2 + 4240) + 4256LL), 3u);
  }
  v11 = v26;
LABEL_166:
  if ( (*(_DWORD *)(a2 + 4256) & 0x800) == 0
    && **(_BYTE **)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) == 1
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4268), 1, 0) )
  {
    v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) + 24LL);
    if ( v45 )
      ++*(_QWORD *)(v45 + 56);
    v46 = *(_QWORD *)(SystemArgument2 + 128);
    v47 = *(_QWORD *)(v46 + 160);
    if ( *(_BYTE *)v47 == 1
      && _InterlockedExchangeAdd(
           *(volatile signed __int32 **)(*(_QWORD *)(v47 + 16) + 8LL * *(unsigned int *)(*v17 + 64)),
           0xFFFFFFFF) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v46 + 160) + 8LL), 0LL, 2LL);
    }
  }
LABEL_174:
  if ( v9 >= 0 )
    goto LABEL_175;
  sub_1400A870C(
    SystemArgument2,
    1,
    3,
    (__int64)L"NVMe command failed (polling)",
    L"CDW0",
    *(_DWORD *)(a2 + 4096),
    L"NSID",
    *(_DWORD *)(a2 + 4100),
    L"CDW10|CDW11",
    *(_QWORD *)(a2 + 4136),
    L"CDW12|CDW13",
    *(_QWORD *)(a2 + 4144),
    L"CDW14|CDW15",
    *(_QWORD *)(a2 + 4152),
    L"Command status",
    *(_WORD *)(a2 + 4260),
    L"Controller state",
    *(_QWORD *)(SystemArgument2 + 968),
    L"NTStatus",
    v9);
  return (unsigned int)v9;
}
