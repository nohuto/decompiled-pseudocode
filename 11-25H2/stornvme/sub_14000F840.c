/*
 * XREFs of sub_14000F840 @ 0x14000F840
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     sub_14000B930 @ 0x14000B930 (sub_14000B930.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000F840(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r14d
  char v6; // r13
  bool v7; // r12
  unsigned int v8; // kr00_4
  unsigned int v10; // r15d
  int v11; // edi
  __int64 v12; // rbx
  int v13; // ebx
  unsigned int v14; // ebp
  char v15; // bl
  int v16; // ebx
  __int64 v17; // r9
  __int64 result; // rax
  const wchar_t *v19; // rdx
  int v20; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-128h] BYREF
  int v22; // [rsp+20h] [rbp-108h]
  const wchar_t *v23; // [rsp+28h] [rbp-100h]
  __int64 v24; // [rsp+30h] [rbp-F8h]
  _OWORD *v25; // [rsp+38h] [rbp-F0h]
  int v26; // [rsp+40h] [rbp-E8h]
  __int64 *v27; // [rsp+48h] [rbp-E0h]
  char *v28; // [rsp+50h] [rbp-D8h]
  __int64 v29; // [rsp+58h] [rbp-D0h]
  __int64 v30; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-B8h]
  __int128 v33; // [rsp+80h] [rbp-A8h] BYREF
  _OWORD v34[5]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 176);
  memset(v34, 0, sizeof(v34));
  v5 = 0;
  v31 = 0LL;
  v6 = 0;
  LOBYTE(v30) = a2;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 204);
  v35 = 0LL;
  v10 = v8 / 0xA;
  v11 = *(_DWORD *)(v4 + 20);
  v12 = *(_QWORD *)(a1 + 176);
  v32 = 0LL;
  v13 = *(_DWORD *)(v12 + 28);
  if ( (v11 & 1) != 0 && (v13 & 1) == 0 )
  {
    v14 = 0;
    if ( v10 )
    {
      while ( (v13 & 1) == 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
        {
          *(_DWORD *)(a1 + 24) |= 0x1000000u;
          v15 = 1;
          goto LABEL_29;
        }
        if ( sub_14000B930(a1, 0, a3, a4) )
        {
          v6 = 1;
          goto LABEL_8;
        }
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        ++v14;
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
        if ( v14 >= v10 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (v13 & 1) == 0 && v14 == v10 )
      {
        v7 = 1;
        goto LABEL_21;
      }
    }
    if ( v6 )
    {
      v15 = 0;
      goto LABEL_29;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v11 & 0xFFFFFFFE;
  _InterlockedOr(v21, 0);
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  if ( v10 )
  {
    while ( (v16 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
      {
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
        v15 = 1;
        goto LABEL_22;
      }
      if ( sub_14000B930(a1, 0, a3, a4) )
      {
        v6 = 1;
        goto LABEL_19;
      }
      StorPortExtendedFunction(81LL, a1, 10000LL, v17);
      ++v5;
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
      if ( v5 >= v10 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    if ( (v16 & 1) != 0 )
      v7 = v5 == v10;
  }
LABEL_21:
  v15 = 0;
LABEL_22:
  if ( !v6 && !v7 && !v15 )
  {
    ++*(_DWORD *)(a1 + 4136);
    return 0LL;
  }
LABEL_29:
  ++*(_DWORD *)(a1 + 4140);
  if ( (_BYTE)v30 )
  {
    sub_1400192CC(a1, v34);
    LODWORD(v31) = *(_DWORD *)(a1 + 24);
    v19 = L"Controller Reset failed due to surprise remove";
    v20 = *(_DWORD *)(a1 + 28);
    HIDWORD(v31) = v20;
    if ( !v15 )
      v19 = L"Controller Reset failed";
    HIDWORD(v30) = -1056964606;
    v28 = (char *)&v30 + 4;
    v27 = &v31;
    v26 = 8;
    v25 = v34;
    LODWORD(v24) = 88;
    v23 = v19;
    v22 = (unsigned __int16)v20;
    StorPortNotification(4109LL, a1, 0LL);
    *(_QWORD *)&v32 = v32 | 0x400;
    v33 = v32;
    ((void (__fastcall *)(__int64, __int128 *, _QWORD, _QWORD, int, const wchar_t *, __int64, _DWORD, int, __int64 *, char *, __int64, __int64, __int64, _QWORD, _QWORD))sub_1400316E0)(
      a1,
      &v33,
      0LL,
      0LL,
      v22,
      v23,
      v24,
      (_DWORD)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      *((_QWORD *)&v32 + 1));
  }
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 3996));
    return 3238002700LL;
  }
  else
  {
    result = 3238002689LL;
    if ( v15 )
      return 3238002697LL;
  }
  return result;
}
