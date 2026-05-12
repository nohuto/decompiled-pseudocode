/*
 * XREFs of sub_1400BD9F4 @ 0x1400BD9F4
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BCC0C @ 0x1400BCC0C (sub_1400BCC0C.c)
 *     sub_1400BD714 @ 0x1400BD714 (sub_1400BD714.c)
 *     sub_1400BD898 @ 0x1400BD898 (sub_1400BD898.c)
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400E7C34 @ 0x1400E7C34 (sub_1400E7C34.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400FA008 @ 0x1400FA008 (sub_1400FA008.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400BD9F4(_QWORD *SystemArgument2)
{
  void *v1; // r13
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // r10
  bool v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned int *v11; // rdx
  int v12; // esi
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  __int64 v19; // r9
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v29; // [rsp+30h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-20h] BYREF
  char v31; // [rsp+A0h] [rbp+48h]
  char v32; // [rsp+A8h] [rbp+50h]
  int v33; // [rsp+B0h] [rbp+58h]
  unsigned int v34; // [rsp+B8h] [rbp+60h]

  v1 = 0LL;
  v3 = 0LL;
  *(_OWORD *)Src = 0LL;
  v32 = sub_1400BDD84(SystemArgument2, 1LL);
  v7 = 0;
  v8 = 0;
  v33 = 0;
  v31 = 0;
  v9 = *(_QWORD *)(v4 + 1048);
  if ( v9 && (*(_DWORD *)(v9 + 24) & 0x100000) != 0 || (unsigned __int8)sub_1400BDD84(v4, 2LL) )
    v31 = v6;
  v10 = *(_QWORD *)(v4 + 592);
  v12 = sub_1400E736C(v4, 4096LL, v5, Src, &Src[1], 0);
  if ( v12 >= 0 )
  {
    if ( v32 )
    {
      v14 = SystemArgument2[131];
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 24) & 0x40000) == 0 )
        {
          v1 = (void *)sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(SystemArgument2[16] + 8LL));
          if ( !v1 )
          {
LABEL_10:
            v12 = -1073741670;
            goto LABEL_47;
          }
          if ( (int)sub_1400BD714(SystemArgument2, (__int64)Src[0], (__int64)Src[1]) < 0 )
          {
            v12 = 0;
          }
          else
          {
            memmove(v1, Src[0], 0x1000uLL);
            v15 = 0;
            v12 = 0;
            v13 = 0;
            v11 = (unsigned int *)v1;
            while ( 1 )
            {
              v16 = *v11;
              if ( !*v11 )
              {
LABEL_16:
                v8 = v15;
                goto LABEL_17;
              }
              if ( v16 <= v15 )
                break;
              ++v13;
              ++v11;
              v15 = v16;
              if ( v13 >= 0x400 )
                goto LABEL_16;
            }
            v12 = -1073741762;
LABEL_17:
            v7 = v12 >= 0;
          }
        }
      }
    }
    v17 = *(_DWORD *)(v10 + 516);
    if ( v7 && v8 > v17 )
      v17 = v8;
    if ( !v17 )
      goto LABEL_46;
    v18 = 1;
    do
    {
      v34 = v18;
      if ( !v7 || !v31 || (v3 = 0LL, sub_1400BCC0C((__int64)v1, (__int64)v11, v18)) )
      {
        memset_0(Src[0], 0, 0x1000uLL);
        v3 = 0LL;
        v12 = sub_1400BD898(SystemArgument2, (__int64)Src[0], (__int64)Src[1], v19, v18);
        if ( v12 >= 0 )
        {
          v20 = (_BYTE *)sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(SystemArgument2[16] + 8LL));
          v3 = v20;
          if ( !v20 )
            goto LABEL_10;
          memmove(v20, Src[0], 0x1000uLL);
          if ( !v32 || v3[4 * (v3[26] & 0xF) + 130] || *(_QWORD *)v3 )
          {
            ++v33;
            v29 = 0LL;
            v12 = sub_1400F7E54(SystemArgument2, v18, v22, &v29);
            if ( v12 < 0 )
              goto LABEL_47;
            v25 = v29;
            *(_QWORD *)(v29 + 176) = v3;
            v3 = 0LL;
            if ( v7 && !sub_1400BCC0C((__int64)v1, v24, v18) )
            {
              v26 = SystemArgument2[17];
              if ( (v26 & 0x2000000) == 0 )
                SystemArgument2[17] = v26 | 0x2000000;
            }
            sub_1400FA008(v25);
            v27 = v29;
            *(_QWORD *)(v29 + 112) |= 0x10uLL;
            sub_1400E7C34(SystemArgument2, v27);
            _interlockedbittestandreset(*(volatile signed __int32 **)(v29 + 256), 2u);
            *(_DWORD *)(*(_QWORD *)(v29 + 8) + 48LL) &= ~0x80u;
          }
          else
          {
            if ( v7 )
            {
              if ( sub_1400BCC0C((__int64)v1, v21, v18) )
              {
                v23 = SystemArgument2[17];
                if ( (v23 & 0x2000000) == 0 )
                  SystemArgument2[17] = v23 | 0x2000000;
              }
            }
            ExFreePoolWithTag(v3, 0x52436152u);
            v3 = 0LL;
          }
        }
      }
      ++v18;
    }
    while ( v34 < v17 );
    if ( !v33 )
    {
LABEL_46:
      SystemArgument2[17] |= 0x20000uLL;
      v3 = 0LL;
    }
  }
LABEL_47:
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v13, Src[0], (__int64)Src[1]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x52436152u);
  return (unsigned int)v12;
}
