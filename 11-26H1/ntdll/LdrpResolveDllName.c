/*
 * XREFs of LdrpResolveDllName @ 0x18007BF80
 * Callers:
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpAppCompatRedirect @ 0x18007C530 (LdrpAppCompatRedirect.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGetNtPathFromDosPath @ 0x18007C310 (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x18007C440 (LdrpGetFullPath.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpResolveDllName(_OWORD *a1, __int64 a2, __int64 a3, _OWORD *a4, __int16 a5)
{
  unsigned int v9; // r15d
  bool v10; // bp
  __int64 v11; // r14
  PVOID Atom; // rax
  const void *v13; // r12
  unsigned int v14; // ebx
  _WORD *v15; // rcx
  bool v16; // zf
  int NtPathFromDosPath; // eax
  unsigned int v18; // ebx
  __m128i v19; // xmm0
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // xmm0_8
  unsigned __int16 v22; // dx
  __int16 v23; // cx
  __int64 v24; // rax
  __int16 v25; // dx
  unsigned __int64 v26; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int FullPath; // eax
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF

  v9 = 0;
  *(_OWORD *)Src = 0LL;
  v10 = 0;
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1731, (__int64)"LdrpResolveDllName", 3, "DLL name: %wZ\n", a1);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1732, (__int64)"LdrpResolveDllName", 5, "%wZ\n", a1);
  if ( (a5 & 0x200) != 0 )
  {
    *(_OWORD *)Src = *a1;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v18 = FullPath;
    if ( FullPath < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrfind.c",
        1853,
        (__int64)"LdrpResolveDllName",
        4,
        "Status: 0x%08lx\n",
        FullPath);
      goto LABEL_15;
    }
    v15 = (_WORD *)(a2 + 16);
    v16 = a2 + 16 == *(_QWORD *)(a2 + 8);
    *(_OWORD *)Src = *(_OWORD *)a2;
    v10 = !v16;
    if ( !v16 )
    {
      *(_QWORD *)(a2 + 8) = v15;
      *(_WORD *)(a2 + 2) = 256;
      *v15 = 0;
      goto LABEL_9;
    }
  }
  v11 = LOWORD(Src[0]);
  Atom = 0LL;
  v13 = Src[1];
  LODWORD(Src[0]) = 0;
  Src[1] = 0LL;
  v14 = v11 + 2;
  if ( (unsigned int)(v11 + 2) > 0xFFFE )
  {
    v18 = -1073741562;
  }
  else if ( (v14 & 1) != 0 )
  {
    v18 = -1073741811;
  }
  else
  {
    Atom = RtlpAllocateAtom(v14);
    Src[1] = Atom;
    if ( Atom )
    {
      WORD1(Src[0]) = v11 + 2;
      v10 = 1;
      memmove(Atom, v13, v11 + 2);
      LOWORD(Src[0]) = v11;
LABEL_9:
      *(_WORD *)a2 = 0;
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(Src, a2);
      v18 = NtPathFromDosPath;
      if ( NtPathFromDosPath >= 0 )
      {
        v19 = *(__m128i *)Src;
        v20 = _mm_cvtsi128_si32(*(__m128i *)Src);
        *a4 = *(_OWORD *)Src;
        v21 = _mm_srli_si128(v19, 8).m128i_u64[0];
        v22 = v20 >> 1;
        if ( v20 >> 1 )
        {
          do
          {
            v23 = *(_WORD *)(v21 + 2LL * v22 - 2);
            if ( v23 == 92 )
              break;
            if ( v23 == 47 )
              break;
            --v22;
          }
          while ( v22 );
        }
        v24 = v22;
        v25 = 2 * v22;
        *(_WORD *)a3 = v20 - v25;
        v26 = v21 + 2 * v24;
        LOWORD(v24) = WORD1(Src[0]) - v25;
        *(_QWORD *)(a3 + 8) = v26;
        *(_WORD *)(a3 + 2) = v24;
        LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1853, (__int64)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", v18);
        goto LABEL_15;
      }
      v28 = (unsigned int)(NtPathFromDosPath + 1073741809);
      if ( (unsigned int)v28 <= 0x2C && (v29 = 0x1C3000000011LL, _bittest64(&v29, v28))
        || v18 == -2147483632
        || v18 == -1073741661 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrfind.c",
          1833,
          (__int64)"LdrpResolveDllName",
          2,
          "Original status: 0x%08lx\n",
          v18);
        v9 = v18;
        v18 = -1073741515;
      }
      Atom = Src[1];
      goto LABEL_21;
    }
    v18 = -1073741801;
  }
LABEL_21:
  if ( v10 )
  {
    if ( Atom )
    {
      RtlpSysVolFree(Atom);
      Src[1] = 0LL;
    }
    LODWORD(Src[0]) = 0;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1853, (__int64)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", v18);
  if ( v9 )
  {
    LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1855, (__int64)"LdrpResolveDllName", 6, "%x-%x\n", v9, v18);
    return v18;
  }
LABEL_15:
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1857, (__int64)"LdrpResolveDllName", 6, "%x\n", v18);
  return v18;
}
