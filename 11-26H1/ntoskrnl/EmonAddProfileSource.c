/*
 * XREFs of EmonAddProfileSource @ 0x140597230
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     wcsnlen @ 0x14053A6E0 (wcsnlen.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     HalpInsertProfileSource @ 0x14058297C (HalpInsertProfileSource.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EmonAddProfileSource(unsigned __int8 *a1, _DWORD *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned __int8 v19; // bp
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const wchar_t *)(a1 + 280);
  v24 = 0LL;
  v5 = -1073741823;
  v6 = wcsnlen((const wchar_t *)a1 + 140, 0xFEuLL) + 1;
  v8 = (wchar_t *)HalpMmAllocCtxAlloc(v7, 2 * v6);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225495LL;
  wcsncpy_s(v8, v6, v2, v6);
  v12 = (void *)HalpMmAllocCtxAlloc(v11, 320LL);
  v14 = (__int64)v12;
  if ( !v12 )
  {
    HalpMmAllocCtxFree(v13, v9);
    return 3221225495LL;
  }
  memset_0(v12, 0, 0x140uLL);
  v15 = 0x7FFFFFFF;
  *(_BYTE *)(v14 + 28) = 1;
  v16 = *((_DWORD *)a1 + 2);
  *(_DWORD *)(v14 + 24) = v16;
  if ( v16 > 0x7FFFFFFF || (v15 = 4096, v16 < 0x1000) )
    *(_DWORD *)(v14 + 24) = v15;
  *(_BYTE *)(v14 + 29) = 0;
  v17 = *a1;
  v18 = a1[1] | ((a1[5] & 1 | (8 * (a1[4] & 1 | (4 * (a1[3] & 1 | (2 * (a1[2] & 0xF))))))) << 10) | 0x300;
  *(_DWORD *)(v14 + 312) = 37;
  *(_DWORD *)(v14 + 304) = v17 | (v18 << 8);
  *(_QWORD *)(v14 + 32) = 2097153LL;
  memset_0((void *)(v14 + 40), 0, 0x100uLL);
  RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(v14 + 32), *(_WORD *)(v14 + 34), (struct _KAFFINITY_EX *)(a1 + 16));
  *(_QWORD *)(v14 + 296) = v9;
  v19 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v14, v20, 37, &v24) )
  {
    ++HalpProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v14;
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v19);
    return 0LL;
  }
  else
  {
    v21 = v24;
    if ( v24 && *((_DWORD *)v24 + 76) == *(_DWORD *)(v14 + 304) )
    {
      RtlOrAffinityEx((struct _KAFFINITY_EX *)(v24 + 4), (struct _KAFFINITY_EX *)(v14 + 32), (__int64)(v24 + 4));
      if ( a2 )
        *a2 = *(_DWORD *)v21;
      v5 = 0;
    }
    HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v19);
    HalpMmAllocCtxFree(v22, *(_QWORD *)(v14 + 296));
    HalpMmAllocCtxFree(v23, v14);
    return v5;
  }
}
