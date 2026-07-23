/*
 * XREFs of MiSoftFaultClusterTradeInitialize @ 0x140502088
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiSoftFaultClusterTradeInitialize(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 *v3; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rbp
  _QWORD *v22; // rcx
  __int64 v23; // rbx
  __int64 i; // rax
  unsigned __int64 v25; // rbx
  ULONG_PTR v26; // rbx
  __int64 result; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 v32; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v33[16]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(unsigned __int64 **)a1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v32 = 0LL;
  v9 = *v3;
  v10 = v3[7];
  v11 = ((*v3 & 0xFFFFFFFFFFFFF000uLL) - (*v3 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  *(_QWORD *)(a1 + 48) = v11;
  if ( (*(_DWORD *)(v5 + 48) & 0x80000) != 0 )
  {
    v18 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
    if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    v17 = *(unsigned __int16 *)(v10 + 174);
    v16 = 8 * v11;
  }
  else
  {
    ProtoPteAddress = MiGetProtoPteAddress(v5, v9 >> 12, 0xCu, (unsigned int **)&v32);
    if ( !ProtoPteAddress || !(_QWORD)v32 || ProtoPteAddress != a2 )
      return 0LL;
    v13 = *(_QWORD *)(v32 + 8);
    v14 = v13 + 8LL * (unsigned int)(*(_DWORD *)(v32 + 44) - *(_DWORD *)(v32 + 52));
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) > v13 )
      v13 = a2 & 0xFFFFFFFFFFFFF000uLL;
    v15 = (a2 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
    if ( v14 <= v15 )
      v15 = v14;
    if ( v13 >= v15 )
      return 0LL;
    v16 = 8 * v11;
    if ( a2 - 8 * v11 < v13 || a2 + 8 * (16 - v11) > v15 )
      return 0LL;
    v17 = *(_DWORD *)(*(_QWORD *)v32 + 60LL) & 0x3FF;
  }
  v19 = a2 - v16;
  v20 = 16LL;
  v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v17);
  v22 = v33;
  *(_QWORD *)(a1 + 56) = v21;
  v23 = v19 - (_QWORD)v33;
  do
  {
    *v22 = *(_QWORD *)((char *)v22 + v23);
    ++v22;
    --v20;
  }
  while ( v20 );
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x10 )
    {
      v26 = -1LL;
      if ( (_DWORD)i != 16 )
        goto LABEL_28;
      v32 = 0LL;
      if ( (((v6 + 0x220000000000LL) / 48) & 0xF) == v11 )
      {
LABEL_31:
        *a3 = 1;
        return 0LL;
      }
      if ( (int)MiAcquireNonPagedResources((ULONG *)v21, 1uLL, 0LL, 0LL) < 0 )
        return 0LL;
      *(_BYTE *)(a1 + 40) = 1;
      MiInitializePageColorBase(v10, 3, (*(_DWORD *)(v5 + 48) >> 10) & 0x7F, (__int64)&v32);
      v28 = (DWORD2(v32) >> 9) & 0x3F;
      goto LABEL_33;
    }
    v25 = v33[i];
    if ( (v25 & 1) != 0 )
      break;
  }
  v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v26 & 0xF) != (unsigned int)i )
    return 0LL;
LABEL_28:
  v26 += v11 - (unsigned int)i;
  v29 = 48 * v26;
  if ( v26 <= qword_140E2D920 && ((*(_QWORD *)(v29 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v30 = v29 - 0x220000000000LL;
    *(_QWORD *)(a1 + 72) = v30;
    if ( v30 == v6 )
      goto LABEL_31;
    v28 = MiPageToNode(v26);
LABEL_33:
    v31 = v28;
    *(_DWORD *)(a1 + 80) = v28;
    result = 1LL;
    *(_QWORD *)(a1 + 64) = v26;
    *(_BYTE *)(56320 * v31 + *(_QWORD *)(v21 + 16) + 4155) = 1;
    return result;
  }
  return 0LL;
}
