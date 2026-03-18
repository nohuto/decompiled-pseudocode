/*
 * XREFs of ValidateUniqueGpuVaMapping @ 0x1400AB034
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9630 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

char __fastcall ValidateUniqueGpuVaMapping(__int64 a1)
{
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  _QWORD *v2; // r8
  unsigned __int64 v3; // rsi
  _QWORD *v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  bool v15; // bp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char result; // al
  unsigned __int64 v19; // rdi
  bool v20; // cl

  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*(_DWORD *)(a1 + 72) & 0xF, *(_QWORD **)(a1 + 64));
  if ( VidMmGlobalAllocFromOwner )
  {
    v3 = v2[14];
    v4 = VidMmGlobalAllocFromOwner + 12;
    v5 = v2[13];
    v6 = v2[10];
    v7 = (_QWORD *)VidMmGlobalAllocFromOwner[12];
    v8 = v2[11] & 0x7FFFFFFFFFFFFFFFLL;
    v9 = v6 + v3 - v5;
    while ( 1 )
    {
      if ( v7 == v4 )
        return 1;
      v10 = v7[4];
      v11 = v7[8];
      v12 = v7[7];
      v13 = v10 + v11 - v12;
      v14 = v7[5] & 0x7FFFFFFFFFFFFFFFLL;
      if ( v9 <= v10 )
        return 1;
      if ( v6 < v13 && v8 != v14 )
      {
        v15 = 1;
        if ( *v2 == *(v7 - 6) && (v5 > v12 || v3 < v11) )
          break;
      }
LABEL_24:
      v7 = (_QWORD *)*v7;
    }
    v16 = 0LL;
    v17 = 0LL;
    if ( v5 > v12 && v5 < v11 )
      v16 = v5 - v12;
    if ( v3 < v11 && v3 > v12 )
      v17 = v11 - v3;
    if ( v16 )
    {
      v15 = v6 >= v7[4] + v16;
      if ( !v17 )
        goto LABEL_23;
    }
    else if ( !v17 )
    {
      goto LABEL_18;
    }
    v19 = v13 - v17;
    v20 = 0;
    if ( v9 <= v19 )
      v20 = v15;
    v15 = v20;
LABEL_23:
    if ( !v15 )
    {
LABEL_18:
      WdLogSingleEntry4(3LL, v12, v11, v14, v8);
      result = 0;
      WdLogGlobalForLineNumber = 723;
      return result;
    }
    goto LABEL_24;
  }
  return 1;
}
