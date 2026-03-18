/*
 * XREFs of MapInCpuVisibleSegment @ 0x140103038
 * Callers:
 *     MapInVideoMemory @ 0x140102EA8 (MapInVideoMemory.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x14010418C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x140104254 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 */

__int64 __fastcall MapInCpuVisibleSegment(__int64 a1, __int64 **a2)
{
  __int64 *v2; // r10
  __int64 v4; // rbx
  SIZE_T *v5; // rdi
  signed __int64 v7; // r9
  struct _MDL *v8; // r8
  struct _MDL *v9; // rax
  struct _MDL *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi

  v2 = *a2;
  v4 = **a2;
  v5 = *(SIZE_T **)v4;
  if ( (*(_BYTE *)(v4 + 36) & 1) != 0 )
    return 0LL;
  v7 = v5[9];
  v8 = *(struct _MDL **)(v5[8] + 32);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) & 8) != 0 )
    v9 = VidMmiBuildMdlFromMdl((PVOID)v2[2], v5[2], v8, v7 / 4096);
  else
    v9 = VidMmiBuildMdlForContiguousMmIo((PVOID)v2[2], v5[2], (union _LARGE_INTEGER)((char *)v8 + v7));
  v10 = v9;
  if ( v9 )
  {
    v12 = VidMmRotateLegacyAllocation(a1, v5, 1LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 3975;
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      *(_BYTE *)(v4 + 36) |= 1u;
      *(_BYTE *)(v4 + 43) = 1;
    }
    return v13;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3945;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
}
