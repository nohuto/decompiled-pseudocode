/*
 * XREFs of HalpConstructScatterGatherListDmaThin @ 0x1403E97E0
 * Callers:
 *     HalpBuildScatterGatherListDmaThin @ 0x1403E9120 (HalpBuildScatterGatherListDmaThin.c)
 *     HalGetScatterGatherListDmaThin @ 0x1403E93E0 (HalGetScatterGatherListDmaThin.c)
 *     HalBuildScatterGatherListDmaThin @ 0x1403E95B0 (HalBuildScatterGatherListDmaThin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmaThin(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // ebx
  void *v3; // r8
  unsigned int v5; // r9d
  __int64 *v6; // rax
  int v7; // edx
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r10d
  __int64 *i; // rdi
  __int64 v16; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // r13
  void *v22; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v3 = *(void **)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(__int64 **)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 60);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = 0LL;
  v11 = v1 + 16;
  *(_QWORD *)(v1 + 8) = a1;
  v22 = v3;
  if ( v5 )
  {
    while ( v6 )
    {
      v12 = v5;
      if ( *((_DWORD *)v6 + 10) - v7 <= v5 )
        v12 = *((_DWORD *)v6 + 10) - v7;
      v13 = *((_DWORD *)v6 + 11) + v7;
      v5 -= v12;
      v14 = v13 & 0xFFF;
      for ( i = &v6[((unsigned __int64)v13 >> 12) + 6]; v12; v10 = v16 + v20 )
      {
        v16 = v14 + (*i << 12);
        v17 = 4096 - v14;
        v18 = v12;
        if ( v17 <= v12 )
          v18 = v17;
        if ( v16 != v10 + 1 || !v9 )
        {
          v19 = v9++;
          v11 = v1 + 8 * (v19 + 2 * (v19 + 1));
          *(_QWORD *)v11 = v16;
          *(_DWORD *)(v11 + 8) = 0;
          *(_QWORD *)(v11 + 16) = 0LL;
        }
        *(_DWORD *)(v11 + 8) += v18;
        v12 -= v18;
        ++i;
        v20 = v18 - 1LL;
        v14 = 0;
      }
      v6 = (__int64 *)*v6;
      v7 = 0;
      if ( !v5 )
      {
        v3 = v22;
        goto LABEL_13;
      }
    }
    v3 = v22;
    if ( v9 )
      *(_DWORD *)(v1 + 24 * (v9 - 1 + 1LL)) += v5;
  }
LABEL_13:
  *(_DWORD *)v1 = v9;
  if ( v3 )
  {
    _m_prefetchw(v3);
    if ( (_InterlockedOr((volatile signed __int32 *)v3, 1u) & 2) != 0 )
      v2 = -1073741536;
  }
  if ( v8 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  return v2;
}
