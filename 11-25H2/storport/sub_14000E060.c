/*
 * XREFs of sub_14000E060 @ 0x14000E060
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 * Callees:
 *     sub_14000E660 @ 0x14000E660 (sub_14000E660.c)
 *     sub_14000EB00 @ 0x14000EB00 (sub_14000EB00.c)
 *     sub_14000EB30 @ 0x14000EB30 (sub_14000EB30.c)
 *     sub_14000ED78 @ 0x14000ED78 (sub_14000ED78.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_14006D168 @ 0x14006D168 (sub_14006D168.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000E060(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        int *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  char v12; // cl
  char v13; // r8
  char v14; // dl
  char v15; // r8
  char v16; // dl
  char v17; // r8
  char v18; // dl
  KIRQL v19; // bl
  int v20; // ecx
  unsigned __int8 v21; // di
  int v23; // edx
  char v24; // al
  bool v25; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  int v27; // r8d
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  char v30; // cl
  char v31; // cl
  char v32; // r8
  signed __int64 v33; // rdi
  __int64 v34; // rax
  signed __int64 v35; // rdx
  signed __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  _BYTE v41[4]; // [rsp+50h] [rbp-39h] BYREF
  int v42; // [rsp+54h] [rbp-35h] BYREF
  int v43; // [rsp+58h] [rbp-31h] BYREF
  int v44; // [rsp+5Ch] [rbp-2Dh]
  LARGE_INTEGER v45; // [rsp+60h] [rbp-29h] BYREF
  signed __int64 v46; // [rsp+68h] [rbp-21h]
  __int128 v47; // [rsp+70h] [rbp-19h] BYREF

  v8 = a2 + 120;
  v42 = 0;
  v41[0] = 0;
  v12 = *(_BYTE *)(a2 + 142);
  v45.QuadPart = 0LL;
  v43 = 0;
  v25 = (a3 & 2) == 0;
  v13 = v12 | 2;
  if ( v25 )
    v13 = v12 & 0xFD;
  v14 = v13 | 4;
  v47 = 0LL;
  if ( (a3 & 4) == 0 )
    v14 = v13 & 0xFB;
  v15 = v14 | 1;
  if ( (a3 & 1) == 0 )
    v15 = v14 & 0xFE;
  v16 = v15 | 8;
  if ( (a3 & 8) == 0 )
    v16 = v15 & 0xF7;
  v17 = v16 | 0x20;
  if ( (a3 & 0x10) == 0 )
    v17 = v16 & 0xDF;
  v18 = v17 | 0x40;
  if ( (a3 & 0x20) == 0 )
    v18 = v17 & 0xBF;
  *(_BYTE *)(v8 + 22) = v18 ^ (v18 ^ (16 * a5)) & 0x10;
  v19 = KfRaiseIrql(2u);
  v44 = 0;
  if ( byte_1401694F2 < 0 )
  {
    IoGetActivityIdIrp(a2, &v47);
    v44 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( !(unsigned __int8)sub_14000E660(a1, v8, 0, (unsigned int)v41, (__int64)&v45, (__int64)&v42, (__int64)&v43) )
  {
    if ( byte_140168DAA )
    {
      v25 = byte_140168724 == 0;
    }
    else
    {
      if ( !dword_1401684A8 )
      {
        PerformanceCounter.QuadPart = 0LL;
LABEL_27:
        v45 = PerformanceCounter;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        LOBYTE(v27) = 1;
        if ( (unsigned __int8)sub_14000E660(a1, v8, v27, (unsigned int)v41, (__int64)&v45, (__int64)&v42, (__int64)&v43) )
        {
LABEL_68:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          goto LABEL_16;
        }
        v46 = *(_QWORD *)(a1 + 88);
        if ( (v46 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 80));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 80));
          v28 = v46;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v28 | 1, v28);
          }
          while ( v29 != v28 && (v28 & 1) == 0 );
        }
        if ( (unsigned int)sub_14000EB00(a1) )
        {
          v42 = 1;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v8 + 22) & 4) == 0 )
          {
            v42 = 2;
            goto LABEL_74;
          }
          if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v8 + 22) & 2) == 0 )
          {
            v42 = 3;
            goto LABEL_74;
          }
          if ( *(int *)(a1 + 24) > 0 )
          {
            v42 = 4;
            goto LABEL_74;
          }
          if ( *(_BYTE *)(a1 + 38) )
          {
            v42 = 5;
            goto LABEL_74;
          }
          if ( !*(_DWORD *)(a1 + 16) && !(unsigned int)(*(_QWORD *)(a1 + 88) / 0x100000000LL)
            || (v37 = sub_14000EB30(), v8 == v37)
            || (*(_BYTE *)(v37 + 22) & 1) == 0
            || (*(_BYTE *)(v8 + 22) & 6) != 0 )
          {
            v30 = *(_BYTE *)(v8 + 22);
            if ( (v30 & 1) == 0 || (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) == 0 )
            {
              if ( *(_BYTE *)(a1 + 39) && (v30 & 8) == 0 )
              {
                v42 = 8;
                goto LABEL_74;
              }
              if ( (v30 & 0x10) != 0 )
              {
                v42 = 9;
                goto LABEL_74;
              }
              if ( (v30 & 0x40) != 0 )
              {
                v42 = 10;
                goto LABEL_74;
              }
              if ( (v30 & 1) == 0
                || !*(_QWORD *)(a1 - 688)
                || (sub_140021810(a1 - 720, 0LL), *(_BYTE *)(v8 + 20) |= 4u, !(unsigned __int8)sub_14009210C(a1 - 720)) )
              {
                v42 = 0;
                v41[0] = 0;
                _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 4uLL);
                v31 = 0;
                if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
                  *(_BYTE *)(a1 + 38) = 1;
LABEL_47:
                *(_BYTE *)(v8 + 20) = v31 | *(_BYTE *)(v8 + 20) & 0xFE;
                v32 = 0;
                v33 = *(_QWORD *)(a1 + 88);
                while ( (v33 & 3) != 0
                     && !*(_DWORD *)(a1 + 28)
                     && !*(_DWORD *)(a1 + 16)
                     && !*(_DWORD *)(a1 + 32)
                     && !*(_BYTE *)(a1 + 37)
                     && !*(_BYTE *)(a1 + 39)
                     && !*(_BYTE *)(a1 + 36)
                     && *(int *)(a1 + 24) <= 0
                     && !*(_BYTE *)(a1 + 38) )
                {
                  v34 = v33;
                  if ( (v33 & 1) != 0 )
                  {
                    if ( !v32 )
                    {
                      ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
                      v32 = 1;
                    }
                    v34 = v33 ^ 1;
                  }
                  v35 = v34 ^ 2;
                  if ( (v33 & 2) == 0 )
                    v35 = v34;
                  v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v35, v33);
                  v25 = v33 == v36;
                  v33 = v36;
                  if ( v25 )
                  {
                    if ( *(_BYTE *)(a1 + 37) || *(_BYTE *)(a1 + 39) || *(_BYTE *)(a1 + 36) || *(int *)(a1 + 24) > 0 )
                    {
                      v39 = *(_QWORD *)(a1 + 88);
                      if ( (v39 & 3) == 0 )
                      {
                        do
                        {
                          v40 = v39;
                          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v39 | 2, v39);
                        }
                        while ( v40 != v39 && (v39 & 3) == 0 );
                      }
                    }
                    goto LABEL_68;
                  }
                }
                goto LABEL_68;
              }
            }
            v42 = 7;
            goto LABEL_74;
          }
          v42 = 6;
        }
LABEL_74:
        sub_14000ED78(a1, v8);
        v31 = 1;
        v38 = *(__int64 *)(a1 + 88);
        v41[0] = 1;
        v43 = (DWORD2(v38) + (unsigned __int64)v38) >> 32;
        goto LABEL_47;
      }
      if ( !byte_140168724 )
      {
LABEL_26:
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        goto LABEL_27;
      }
      v25 = dword_1401684AC == 0;
    }
    if ( !v25 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
LABEL_16:
  v21 = v41[0];
  if ( v41[0] )
  {
    v23 = v43;
    *a6 = v45;
    v24 = v42;
    *a7 = v42;
    *a8 = v23;
    if ( byte_1401694F2 < 0 )
      sub_14006D168(
        v20,
        *(_DWORD *)(a1 + 16) + v23,
        (unsigned int)&v47,
        a1,
        v44,
        3,
        v24,
        *(_BYTE *)(a1 + 16) + v23,
        (__int64)*(unsigned int *)(a1 + 88) >> 2);
  }
  KeLowerIrql(v19);
  return v21;
}
