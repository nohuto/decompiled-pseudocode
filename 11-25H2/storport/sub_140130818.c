/*
 * XREFs of sub_140130818 @ 0x140130818
 * Callers:
 *     sub_1400CF330 @ 0x1400CF330 (sub_1400CF330.c)
 *     sub_14010E978 @ 0x14010E978 (sub_14010E978.c)
 *     sub_14012FCD0 @ 0x14012FCD0 (sub_14012FCD0.c)
 *     sub_140130C44 @ 0x140130C44 (sub_140130C44.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E8D80 @ 0x1400E8D80 (sub_1400E8D80.c)
 *     sub_1400E922C @ 0x1400E922C (sub_1400E922C.c)
 *     sub_1400E9360 @ 0x1400E9360 (sub_1400E9360.c)
 *     sub_1400EA3EC @ 0x1400EA3EC (sub_1400EA3EC.c)
 *     sub_1400F0F5C @ 0x1400F0F5C (sub_1400F0F5C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 *     sub_1400F2E10 @ 0x1400F2E10 (sub_1400F2E10.c)
 *     sub_140130574 @ 0x140130574 (sub_140130574.c)
 *     sub_1401305DC @ 0x1401305DC (sub_1401305DC.c)
 */

char __fastcall sub_140130818(int *SystemArgument2, int a2)
{
  volatile signed __int32 *v4; // rcx
  char v5; // si
  int v6; // edi
  char v7; // dl
  __int64 v8; // rdx
  int v9; // r8d
  const wchar_t *v10; // r9
  int v11; // r8d
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rdi
  _QWORD *v19; // rcx
  __int128 v20; // xmm1
  signed __int32 v22[8]; // [rsp+0h] [rbp-E8h] BYREF
  wchar_t *v23; // [rsp+30h] [rbp-B8h]
  __int64 v24; // [rsp+38h] [rbp-B0h]
  wchar_t *v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h]
  wchar_t *v27; // [rsp+50h] [rbp-98h]
  __int64 v28; // [rsp+58h] [rbp-90h]
  int *v29; // [rsp+60h] [rbp-88h]
  __int64 v30; // [rsp+68h] [rbp-80h]
  int *v31; // [rsp+70h] [rbp-78h]
  __int64 v32; // [rsp+78h] [rbp-70h]
  int *v33; // [rsp+80h] [rbp-68h]
  __int64 v34; // [rsp+88h] [rbp-60h]
  int *v35; // [rsp+90h] [rbp-58h]
  __int64 v36; // [rsp+98h] [rbp-50h]
  __int128 v37; // [rsp+A0h] [rbp-48h]
  __int128 v38; // [rsp+B0h] [rbp-38h]

  v4 = (volatile signed __int32 *)*((_QWORD *)SystemArgument2 + 159);
  v5 = 1;
  if ( !v4 || *(_DWORD *)(*((_QWORD *)SystemArgument2 + 16) + 84LL) != 1 )
  {
    v6 = -1073741436;
    v5 = 0;
    goto LABEL_14;
  }
  if ( !_InterlockedCompareExchange(v4, 1, 0) )
  {
    sub_1400A870C(
      (__int64)SystemArgument2,
      1,
      4,
      (__int64)L"Controller reset recovery started",
      L"ResetReason",
      a2,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    _interlockedbittestandset(SystemArgument2 + 237, 1u);
    sub_1400E8D80((__int64)SystemArgument2);
    sub_1400E922C((__int64)SystemArgument2);
    sub_1400EA3EC((__int64)SystemArgument2);
    sub_1400F2E10((__int64)SystemArgument2);
    _interlockedbittestandset(SystemArgument2 + 268, 4u);
    sub_1400E9360((__int64)SystemArgument2);
    _interlockedbittestandreset(SystemArgument2 + 268, 4u);
    sub_1401305DC((__int64)SystemArgument2, a2);
    *((_QWORD *)SystemArgument2 + 121) &= ~1uLL;
    v6 = sub_1400F1D38((__int64)SystemArgument2, v7, a2);
    if ( v6 >= 0 )
    {
      if ( sub_140130574((__int64)SystemArgument2) )
        KeBugCheckEx(0x176u, 4uLL, (ULONG_PTR)SystemArgument2, 0LL, 0LL);
      sub_1400F1128(SystemArgument2, v8, v9);
    }
    else
    {
      v5 = 0;
      sub_1400F0F5C((__int64)SystemArgument2);
    }
    **(_QWORD **)(*((_QWORD *)SystemArgument2 + 159) + 40LL) = KeQueryUnbiasedInterruptTime();
    _InterlockedOr(v22, 0);
    _InterlockedCompareExchange(*((volatile signed __int32 **)SystemArgument2 + 159), 2, 1);
    _interlockedbittestandreset(SystemArgument2 + 237, 1u);
    _InterlockedExchange(*((volatile __int32 **)SystemArgument2 + 159), 0);
    sub_1400F2254((__int64)SystemArgument2);
    if ( v6 >= 0 )
    {
      if ( v6 )
        goto LABEL_16;
      v36 = 0LL;
      v35 = (int *)&dword_140149108;
      v10 = L"Controller reset recovery succeeded";
      v34 = 0LL;
      v11 = 4;
      v33 = (int *)&dword_140149108;
      v32 = 0LL;
      v31 = (int *)&dword_140149108;
      v30 = 0LL;
      v29 = (int *)&dword_140149108;
      v28 = 0LL;
      v27 = (wchar_t *)&dword_140149108;
      v26 = 0LL;
      v25 = (wchar_t *)&dword_140149108;
      v24 = 0LL;
      v23 = (wchar_t *)&dword_140149108;
LABEL_15:
      sub_1400A870C(
        (__int64)SystemArgument2,
        1,
        v11,
        (__int64)v10,
        L"ResetReason",
        a2,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      goto LABEL_16;
    }
LABEL_14:
    v12 = SystemArgument2[294];
    v10 = L"Controller reset recovery failed";
    v36 = 0LL;
    v35 = (int *)&dword_140149108;
    v34 = 0LL;
    v33 = (int *)&dword_140149108;
    v32 = 0LL;
    v31 = (int *)&dword_140149108;
    v30 = 0LL;
    v29 = (int *)&dword_140149108;
    v11 = 2;
    v28 = v12;
    v27 = L"ControllerErrorState";
    v26 = v6;
    v25 = L"Status";
    v24 = *((_QWORD *)SystemArgument2 + 121);
    v23 = L"ControllerState";
    goto LABEL_15;
  }
  v6 = 259;
LABEL_16:
  if ( (SystemArgument2[336] & 0x10) != 0 )
  {
    v13 = *SystemArgument2 == 1314276178;
    v37 = 0LL;
    LODWORD(v37) = v6;
    BYTE4(v37) = v5;
    v38 = 0LL;
    if ( v13 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 169) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
      v15 = *(_DWORD *)(v14 + 12);
      v16 = v14 + 64;
      _InterlockedOr(v22, 0);
      if ( v15 )
      {
        if ( v14 != -64 )
        {
          v17 = _InterlockedIncrement((volatile signed __int32 *)v14) % v15;
          v18 = v16 + ((unsigned __int64)v17 << 6);
          if ( (SystemArgument2[330] & 1) != 0 )
            *(_DWORD *)(v18 + 4) = _InterlockedIncrement(SystemArgument2 + 352);
          else
            *(_DWORD *)(v18 + 4) = v17;
          *(_DWORD *)v18 = 2;
          v19 = (_QWORD *)(v18 + 8);
          if ( (SystemArgument2[330] & 2) != 0 )
            KeQuerySystemTimePrecise(v19);
          else
            *v19 = MEMORY[0xFFFFF78000000014];
          v20 = v38;
          *(_OWORD *)(v18 + 16) = v37;
          *(_OWORD *)(v18 + 32) = v20;
        }
      }
    }
  }
  return v5;
}
