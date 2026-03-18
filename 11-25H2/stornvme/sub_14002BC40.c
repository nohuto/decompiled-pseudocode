/*
 * XREFs of sub_14002BC40 @ 0x14002BC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_1400187E0 @ 0x1400187E0 (sub_1400187E0.c)
 *     sub_1400294E0 @ 0x1400294E0 (sub_1400294E0.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     sub_14002B8B8 @ 0x14002B8B8 (sub_14002B8B8.c)
 *     sub_14002B918 @ 0x14002B918 (sub_14002B918.c)
 *     sub_14002C06C @ 0x14002C06C (sub_14002C06C.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 *     sub_14002C67C @ 0x14002C67C (sub_14002C67C.c)
 *     sub_14002C7E8 @ 0x14002C7E8 (sub_14002C7E8.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002BC40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  char v6; // si
  __int64 v7; // r9
  __int64 result; // rax
  bool v9; // zf
  unsigned __int64 i; // r12
  __int64 v11; // r12
  int j; // edx
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // r9
  __int64 *v22; // [rsp+20h] [rbp-59h]
  const wchar_t *v23; // [rsp+28h] [rbp-51h]
  __int64 v24; // [rsp+30h] [rbp-49h]
  int v25; // [rsp+38h] [rbp-41h]
  int v26; // [rsp+40h] [rbp-39h]
  __int64 v27; // [rsp+48h] [rbp-31h]
  const wchar_t *v28; // [rsp+50h] [rbp-29h]
  __int64 v29; // [rsp+58h] [rbp-21h]
  const wchar_t *v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h]
  __int64 v32; // [rsp+78h] [rbp-1h] BYREF
  __int64 v33; // [rsp+80h] [rbp+7h]
  __int64 v34; // [rsp+88h] [rbp+Fh]
  unsigned int v35; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v36; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+F0h] [rbp+77h]
  __int64 v38; // [rsp+F8h] [rbp+7Fh]

  v37 = a3;
  v34 = *(_QWORD *)(a1 + 1560);
  v5 = *(_DWORD *)(v34 + 516);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  v33 = *(_QWORD *)(a1 + 3984);
  v36 = 0LL;
  sub_140006100(a1, 0x1000u);
  v38 = v36;
  if ( !v36 )
  {
    result = sub_1400294E0(a1, a2, 1, v7);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
    ++*(_DWORD *)(a1 + 4200);
    if ( !v9 )
      return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    return result;
  }
  for ( i = 0LL; ; i = v35 + 1 )
  {
    v35 = i;
    if ( i >= 0x400 )
      break;
    v11 = *(unsigned int *)(a2 + 4 * i + 2048);
    if ( !(_DWORD)v11 )
      break;
    if ( (unsigned int)v11 <= v5 )
    {
      sub_140009580(a1, a1 + 1136);
      for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1232) + 4225LL) |= j )
        ++j;
      *(_WORD *)(*(_QWORD *)(a1 + 1232) + 4212LL) = 0;
      sub_140032C80(v36, 0LL, 4096LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4160LL) = v36;
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1232) + 4208LL) = 4096;
      v13 = *(_QWORD *)(a1 + 1232) + 4096LL;
      *(_BYTE *)v13 = 6;
      *(_DWORD *)(v13 + 4) = v11;
      *(_QWORD *)(v13 + 24) = 0LL;
      *(_BYTE *)(v13 + 40) = 0;
      sub_1400092F0(a1, a1 + 1144);
      sub_140008130(a1, a1 + 1144, 0LL);
      if ( *(_BYTE *)(a1 + 1147) == 1 )
      {
        if ( *(_BYTE *)(a1 + 20) || v5 <= 1 )
        {
          v15 = v38;
        }
        else
        {
          v14 = sub_1400187E0(a1, 1u, 1u);
          v15 = v38;
          if ( v14 && !*(_BYTE *)(v38 + 4LL * (*(_BYTE *)(v38 + 26) & 0xF) + 130) && !*(_QWORD *)v38 )
            continue;
        }
        v32 = 0LL;
        v22 = &v32;
        StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
        if ( !v32 )
        {
          v16 = *(_DWORD *)(a1 + 4204) + 1;
          v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
          *(_DWORD *)(a1 + 4204) = v16;
          if ( !v9 )
          {
            v31 = v16;
            v30 = L"Pool Fail Count";
            v29 = v11;
            v28 = L"NSID";
            v27 = 0LL;
            v26 = 0;
            v25 = 2;
            v24 = 8LL;
            v23 = L"Reenumeration Resource Fail";
            LODWORD(v22) = 10;
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
          }
          break;
        }
        sub_14002B350(a1, v15, v34, v33, v11, v32);
        *(_QWORD *)(a2 + 8LL * (unsigned int)(v11 - 1) + 8) = v32;
        ++*(_DWORD *)(a2 + 4);
      }
    }
  }
  if ( v36 )
    sub_14000CF50(a1, 4096LL, &v36, 0LL);
  v17 = a1;
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v6 = 1;
    v18 = a2 + 2048;
    goto LABEL_29;
  }
  v35 = 0;
  v20 = sub_14002B918(a1, a2, v5, &v35);
  if ( v20 )
  {
    if ( !(unsigned __int8)sub_14002C67C(a1) )
    {
      sub_14002B8B8(a1, v5);
      v6 = 1;
      goto LABEL_40;
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
    {
      sub_14002B8B8(a1, v5);
      v18 = a2 + 2048;
      v6 = 1;
LABEL_35:
      v17 = a1;
LABEL_29:
      sub_14002C7E8(v17, v18);
      goto LABEL_40;
    }
    sub_14002C06C(a1, a2, v5);
    sub_14002C324(a1, v5, v20, v35, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31);
  }
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v18 = 0LL;
    goto LABEL_35;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
LABEL_40:
  sub_1400294E0(a1, a2, v6, v19);
  return StorPortExtendedFunction(31LL, a1, v37, v21);
}
