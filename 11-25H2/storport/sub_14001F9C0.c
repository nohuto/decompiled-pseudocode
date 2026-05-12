/*
 * XREFs of sub_14001F9C0 @ 0x14001F9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140053C70 @ 0x140053C70 (sub_140053C70.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14001F9C0(__int64 a1, unsigned int a2, int a3)
{
  __int64 *v6; // r8
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // rbp
  char v12; // r15
  bool v13; // r12
  char v14; // r13
  __int64 v15; // rdx
  int *v16; // rcx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  __int64 v20; // rax
  void (__fastcall *v21)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  int *v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rcx
  int v31; // eax
  _DWORD v32[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+48h] [rbp-40h]
  unsigned int v34; // [rsp+50h] [rbp-38h]
  int v35; // [rsp+54h] [rbp-34h]

  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_140053C70(a1, (unsigned int)&unk_140148AF0, a3, **(_QWORD **)(a1 + 4960), *(_DWORD *)(a1 + 56), a2, a3);
  v6 = (__int64 *)(a1 + 4960);
  if ( a3 )
  {
    v7 = (*(_BYTE *)(a1 + 108) & 1) == 0;
    v8 = *v6;
    *(_QWORD *)(a1 + 5264) = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(v8 + 20);
    if ( v7 )
      v10 = v9 & 0xFFFFFFEF;
    else
      v10 = v9 | 0x10;
    *(_DWORD *)(v8 + 20) = v10;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5300);
    if ( *(_QWORD *)(a1 + 5264) )
    {
      if ( (*(_DWORD *)(*v6 + 20) & 0x10) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v30 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5264);
        *(_QWORD *)(a1 + 5272) += v30 / 0x2710;
        if ( v30 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5308);
      }
      *(_QWORD *)(a1 + 5264) = 0LL;
    }
  }
  *(_DWORD *)(*v6 + 16) = a3;
  if ( (unsigned __int8)sub_140020090(a1 + 376, 9LL) )
  {
    if ( !*(_DWORD *)(a1 + 96) || (v11 = *(_QWORD *)(a1 + 5016)) == 0 )
    {
LABEL_32:
      if ( (unsigned __int8)sub_140020090(a1 + 376, 9LL) )
      {
        v20 = *(_QWORD *)(a1 + 608);
        v32[0] = 1;
        v32[1] = 24;
        v33 = 0LL;
        v34 = a2;
        v35 = a3;
        v21 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(v20 + 120);
        if ( v21 )
          v21(*(_QWORD *)(a1 + 616) + 16LL, 9LL, v32);
      }
      goto LABEL_35;
    }
    v12 = 1;
    v13 = 1;
    v14 = 1;
    if ( *(char *)(a1 + 108) < 0 )
      goto LABEL_21;
    if ( *(_DWORD *)(a1 + 348) == 4 && !*(_DWORD *)(a1 + 100) )
    {
      v31 = *(_DWORD *)(a1 + 392);
      if ( v31 == 5 || v31 == 17 )
        goto LABEL_21;
      if ( (*(_BYTE *)(a1 + 107) & 0x50) == 0x50 )
      {
        v12 = 0;
        goto LABEL_22;
      }
    }
    v15 = *(_QWORD *)(a1 + 4960);
    if ( !v15 )
      goto LABEL_43;
    v16 = *(int **)(v15 + 8);
    v17 = *v16;
    if ( *v16 == 1 )
    {
      v25 = v16[2];
      v26 = v16 + 4;
      if ( !v25 )
        v26 = 0LL;
    }
    else
    {
      if ( v17 == 2 )
      {
        if ( !v16[2] )
          goto LABEL_21;
      }
      else if ( v17 != 3 || !v16[2] )
      {
        goto LABEL_21;
      }
      v26 = v16 + 6;
    }
    if ( v26 )
    {
      if ( *v26 < 2u )
      {
        if ( *v26 == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 && *(_DWORD *)(v15 + 16) )
        {
          v12 = 0;
          goto LABEL_22;
        }
      }
      else if ( *(_DWORD *)(v15 + 16) > v26[9] )
      {
        v12 = 0;
        goto LABEL_22;
      }
LABEL_43:
      if ( (*(_BYTE *)(v11 + 506) & 4) != 0 )
      {
        v13 = 0;
        goto LABEL_22;
      }
      if ( *(_DWORD *)(v11 + 548) == 4 && !*(_DWORD *)(v11 + 1044) && (*(_BYTE *)(v11 + 505) & 0x44) == 0x44 )
      {
        v13 = 0;
        v14 = 0;
        goto LABEL_31;
      }
      if ( !(unsigned __int8)sub_140021280(v11) )
      {
LABEL_31:
        *(_BYTE *)(a1 + 4893) = v12;
        *(_BYTE *)(v11 + 1862) = v13;
        *(_BYTE *)(v11 + 1863) = v14;
        goto LABEL_32;
      }
      v27 = *(_QWORD *)(v11 + 1872);
      v28 = *(int **)(v27 + 8);
      v29 = *v28;
      if ( *v28 == 1 )
      {
        v18 = v28[2];
        v19 = v28 + 4;
        if ( !v18 )
          v19 = 0LL;
LABEL_25:
        if ( v19 )
        {
          if ( *v19 >= 2u )
          {
            if ( *(_DWORD *)(v27 + 16) > v19[9] )
              v13 = 0;
          }
          else if ( *v19 == 1 && (*(_BYTE *)(v11 + 505) & 0x40) != 0 )
          {
            v13 = *(_DWORD *)(v27 + 16) == 0;
          }
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v11 + 1864));
          if ( v13 )
            goto LABEL_31;
          goto LABEL_22;
        }
        goto LABEL_49;
      }
      if ( v29 == 2 )
      {
        if ( v28[2] )
        {
LABEL_54:
          v19 = v28 + 6;
          goto LABEL_25;
        }
      }
      else if ( v29 == 3 && v28[2] )
      {
        goto LABEL_54;
      }
LABEL_49:
      v13 = 0;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v11 + 1864));
      goto LABEL_22;
    }
LABEL_21:
    v12 = 0;
LABEL_22:
    v14 = 0;
    goto LABEL_31;
  }
LABEL_35:
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 4960), a2);
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      return sub_140053C70(
               v23,
               (unsigned int)&unk_14014A6A0,
               v24,
               **(_QWORD **)(a1 + 4960),
               *(_DWORD *)(a1 + 56),
               a2,
               a3);
  }
  return result;
}
