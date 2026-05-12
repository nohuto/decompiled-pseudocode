/*
 * XREFs of sub_1400BCF34 @ 0x1400BCF34
 * Callers:
 *     sub_1400BD410 @ 0x1400BD410 (sub_1400BD410.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BD898 @ 0x1400BD898 (sub_1400BD898.c)
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400E7C34 @ 0x1400E7C34 (sub_1400E7C34.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400FA008 @ 0x1400FA008 (sub_1400FA008.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400BCF34(PVOID SystemArgument2, __int64 a2, _DWORD *a3)
{
  int v3; // r14d
  _DWORD *v4; // rbx
  _BYTE *v6; // rdi
  int v7; // r13d
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int *v10; // r10
  int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // r15d
  char v14; // cl
  unsigned int v15; // ebx
  void *v16; // rcx
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // r8d
  int v24; // [rsp+28h] [rbp-81h]
  int v25; // [rsp+A0h] [rbp-9h]
  unsigned int v26; // [rsp+A4h] [rbp-5h]
  __int64 v27; // [rsp+A8h] [rbp-1h] BYREF
  void *Dst[2]; // [rsp+B0h] [rbp+7h] BYREF
  char v29; // [rsp+110h] [rbp+67h]
  char v32; // [rsp+128h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v6 = 0LL;
  *(_OWORD *)Dst = 0LL;
  v25 = 0;
  v7 = 0;
  v32 = sub_1400BDD84(SystemArgument2, 1LL);
  v11 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 1656) + 28LL) & 0x100) == 0 )
  {
    v14 = 0;
    v26 = 1024;
    v29 = 0;
    v13 = 0;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(v8 + 592);
  v13 = 0;
  v14 = v9;
  v29 = v9;
  v26 = *(_DWORD *)(v12 + 516);
  if ( !v26 )
    goto LABEL_31;
  while ( 1 )
  {
LABEL_5:
    v15 = v13 + 1;
    if ( !v14 )
      v15 = *v10;
    ++v13;
    if ( !v15 )
      break;
    v16 = Dst[0];
    if ( !Dst[0] )
    {
      LOBYTE(v24) = 0;
      v3 = sub_1400E736C(SystemArgument2, 4096LL, v9, Dst, &Dst[1], v24);
      if ( v3 < 0 )
        break;
      v16 = Dst[0];
      if ( !Dst[0] )
        break;
    }
    memset_0(v16, 0, 0x1000uLL);
    v3 = sub_1400BD898(SystemArgument2, v15);
    if ( v3 < 0 )
    {
      *(_DWORD *)(*((_QWORD *)SystemArgument2 + 207) + 28LL) |= 0x80u;
      goto LABEL_25;
    }
    v17 = (_BYTE *)sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)SystemArgument2 + 16) + 8LL));
    v6 = v17;
    if ( !v17 )
    {
      v3 = -1073741670;
      goto LABEL_30;
    }
    memmove(v17, Dst[0], 0x1000uLL);
    v18 = sub_1400EC40C(SystemArgument2, v15);
    if ( v32 && !v6[4 * (v6[26] & 0xF) + 130] && !*(_QWORD *)v6 )
    {
      if ( v18 )
      {
        ++v7;
        *(_QWORD *)(v18 + 112) &= ~2uLL;
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)SystemArgument2 + 207) + 28LL) |= 0x40u;
      }
LABEL_24:
      ExFreePoolWithTag(v6, 0x52436152u);
LABEL_25:
      v6 = 0LL;
      goto LABEL_26;
    }
    if ( v18 )
    {
      ++v11;
      goto LABEL_24;
    }
    ++v25;
    v27 = 0LL;
    v3 = sub_1400F7E54(SystemArgument2, v15, v19, &v27);
    if ( v3 < 0 )
      goto LABEL_30;
    v20 = v27;
    v21 = v27;
    *(_QWORD *)(v27 + 176) = v6;
    v6 = 0LL;
    sub_1400FA008(v21);
    *(_QWORD *)(v20 + 112) |= 0x10uLL;
    sub_1400E7C34(SystemArgument2, v20);
    _interlockedbittestandreset(*(volatile signed __int32 **)(v20 + 256), 2u);
    *(_DWORD *)(*(_QWORD *)(v27 + 8) + 48LL) &= ~0x80u;
LABEL_26:
    v10 = (unsigned int *)(a2 + 4);
    a2 += 4LL;
    if ( v13 >= v26 )
      goto LABEL_30;
    v14 = v29;
  }
  v6 = 0LL;
LABEL_30:
  v4 = a3;
LABEL_31:
  sub_1400A870C(
    (__int64)SystemArgument2,
    1,
    4,
    (__int64)L"Identify changed namespaces",
    L"NewNamespaceCount",
    v25,
    L"DeletedNamespaceCount",
    v7,
    L"ModifiedNamespaceCount",
    v11,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    L"NtStatus",
    v3);
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v22, Dst[0], (__int64)Dst[1]);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52436152u);
  *(_DWORD *)(*((_QWORD *)SystemArgument2 + 207) + 16LL) = v25;
  *(_DWORD *)(*((_QWORD *)SystemArgument2 + 207) + 20LL) = v7;
  *(_DWORD *)(*((_QWORD *)SystemArgument2 + 207) + 24LL) = v11;
  if ( v4 )
    *v4 = v25 + v11 + v7;
  return (unsigned int)v3;
}
