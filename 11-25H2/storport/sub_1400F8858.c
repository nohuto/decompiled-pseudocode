/*
 * XREFs of sub_1400F8858 @ 0x1400F8858
 * Callers:
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 * Callees:
 *     sub_1400D1B4C @ 0x1400D1B4C (sub_1400D1B4C.c)
 *     sub_1400F7D38 @ 0x1400F7D38 (sub_1400F7D38.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400F8858(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // r15d
  void *v9; // r12
  int v10; // ecx
  char v11; // r13
  int v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // rsi
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // ecx
  _OWORD *v18; // rax
  int v19; // ebx
  __int64 v20; // r15
  __int64 v21; // rdi
  int v22; // r12d
  __int64 v23; // r13
  KIRQL v24; // bp
  _OWORD *v25; // rax
  bool v27; // [rsp+38h] [rbp-60h]
  int v28; // [rsp+38h] [rbp-60h]
  bool v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(v5 + 2) != 40 )
    return (unsigned int)-1073741823;
  *(_BYTE *)(v4 + 3) |= 1u;
  v6 = v5 + *(unsigned int *)(v5 + 120);
  *(_BYTE *)(v5 + 3) = 0;
  v7 = v6 + 16;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v8 = *(_DWORD *)(v5 + 60);
    v9 = *(void **)(v5 + 64);
  }
  else
  {
    v8 = *(_DWORD *)(v5 + 16);
    v9 = *(void **)(v5 + 24);
  }
  v10 = (unsigned __int8)*(_DWORD *)v7;
  v11 = *(_BYTE *)(v6 + 82) & 3;
  if ( (unsigned int)(v10 - 1) > 1 )
  {
    if ( v11 && (!v9 || !v8 || !*(_QWORD *)(a2 + 8)) )
      return (unsigned int)-1073741811;
    if ( byte_1401688B4 && *(_BYTE *)(v6 + 80) == 1 && (unsigned int)(v10 - 129) <= 1 && *(_BYTE *)(v6 + 59) == 0xEE )
      return (unsigned int)-1073741637;
    v13 = sub_1401225EC(*(_QWORD *)(a1 + 16));
    v14 = (__int64 *)v13;
    if ( !v13 )
      return (unsigned int)-1073741670;
    *(_BYTE *)(a2 + 141) = -88;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 4256LL);
    v16 = *(_QWORD *)v13;
    if ( *(_BYTE *)(v6 + 80) == 1 )
      v17 = v15 | 1;
    else
      v17 = v15 & 0xFFFFFFFE;
    *(_DWORD *)(v16 + 4256) = v17;
    *(_DWORD *)(*v14 + 4256) |= 0x20u;
    *(_DWORD *)(*v14 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v14 + 4256) ^ (unsigned __int8)(2 * v11)) & 2;
    *(_QWORD *)(*v14 + 4184) = a2;
    *(_QWORD *)(*v14 + 4192) = sub_1400FC9A0;
    *(_QWORD *)(*v14 + 4200) = v14;
    *(_QWORD *)(*v14 + 4216) = a1;
    *(_QWORD *)(*v14 + 4232) = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(*v14 + 4256) & 2) != 0 )
    {
      *(_QWORD *)(*v14 + 4160) = v9;
      *(PHYSICAL_ADDRESS *)(*v14 + 4168) = MmGetPhysicalAddress(v9);
      *(_DWORD *)(*v14 + 4248) = v8;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) & 0x100000000LL) == 0 )
      {
        *(_DWORD *)(*v14 + 4256) &= ~0x200u;
        v18 = (_OWORD *)*v14;
        v18[256] = *(_OWORD *)v7;
        v18[257] = *(_OWORD *)(v6 + 32);
        v18[258] = *(_OWORD *)(v6 + 48);
        v18[259] = *(_OWORD *)(v6 + 64);
        v19 = *(_DWORD *)(*v14 + 4256);
        v20 = *(_QWORD *)(a2 + 8);
        v21 = v14[7];
        v22 = *(_DWORD *)(*v14 + 4248);
        v23 = *(_QWORD *)(*v14 + 4160);
        v30 = *(_QWORD *)(a1 + 16);
        v24 = KfRaiseIrql(2u);
        v27 = (v19 & 0x200) != 0;
        v29 = v27;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, bool, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL) + 8LL) + 112LL))(
                *(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL),
                *(_QWORD *)(*(_QWORD *)(v30 + 128) + 8LL),
                v20,
                v23,
                v22,
                sub_140121DE0,
                v14,
                v27,
                v21,
                584);
        if ( v12 == -1073741789 )
        {
          LOBYTE(v28) = v29;
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL) + 8LL) + 88LL))(
                  *(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL),
                  *(_QWORD *)(*(_QWORD *)(v30 + 128) + 8LL),
                  v20,
                  v23,
                  v22,
                  sub_140121DE0,
                  v14,
                  v28);
        }
        if ( v24 < 2u )
          KeLowerIrql(v24);
        if ( v12 >= 0 )
          return 259;
LABEL_32:
        _interlockedbittestandreset((volatile signed __int32 *)(*v14 + 4256), 3u);
        sub_140122C20(*(_QWORD *)(a1 + 16), v14);
        return (unsigned int)v12;
      }
      v12 = sub_1400F7D38(v6 + 16, v8, *(_DWORD **)(a2 + 8), (_QWORD *)*v14, v14[1]);
      if ( v12 < 0 )
        goto LABEL_32;
    }
    v25 = (_OWORD *)*v14;
    v25[256] = *(_OWORD *)v7;
    v25[257] = *(_OWORD *)(v7 + 16);
    v25[258] = *(_OWORD *)(v7 + 32);
    v25[259] = *(_OWORD *)(v7 + 48);
    sub_1400D1B4C(*(_DWORD **)(*(_QWORD *)(a1 + 16) + 128LL), a2);
    v12 = sub_140122670(*(PVOID *)(a1 + 16));
    if ( v12 >= 0 )
      return (unsigned int)v12;
    goto LABEL_32;
  }
  return (unsigned int)-1073741595;
}
