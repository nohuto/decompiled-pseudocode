/*
 * XREFs of ExpUpdateDebugInfo @ 0x140908210
 * Callers:
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ExDestroyHandle @ 0x140907B60 (ExDestroyHandle.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExReferenceHandleDebugInfo @ 0x140A816A0 (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A9431C (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rsi
  ULONG v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  ULONG v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // eax
  _OWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // eax

  result = ExReferenceHandleDebugInfo();
  v8 = result;
  if ( result )
  {
    v9 = 0;
    if ( (*(_DWORD *)(result + 8) & 3) != 0 )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)(result + 16));
      v9 = 1;
    }
    v10 = *(_DWORD *)(v8 + 8);
    if ( (v10 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 8) = v10 & 0x3FFFFFFE | 0x80000000;
      *(_DWORD *)(v8 + 72) = 0;
      memset_0((void *)(v8 + 80), 0, 160LL * *(unsigned int *)(v8 + 4));
    }
    v11 = *(_DWORD *)(v8 + 8);
    if ( (v11 & 2) != 0 && a4 == 2 )
    {
      if ( (v11 & 0x40000000) != 0 )
      {
        v18 = 0;
        v19 = *(_DWORD *)(v8 + 4) - 1;
      }
      else
      {
        v18 = 1;
        v19 = *(_DWORD *)(v8 + 72);
      }
      while ( v18 <= v19 )
      {
        v20 = 160LL * v18;
        if ( *(_DWORD *)(v20 + v8 + 104) == 1 && *(_QWORD *)(v20 + v8 + 96) == a3 )
        {
          v21 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 72) = v21 - 1;
          v22 = (_OWORD *)(v20 + v8);
          v23 = 160LL * (v21 % *(_DWORD *)(v8 + 4)) + v8;
          v22[5] = *(_OWORD *)(v23 + 80);
          v22[6] = *(_OWORD *)(v23 + 96);
          v22[7] = *(_OWORD *)(v23 + 112);
          v22[8] = *(_OWORD *)(v23 + 128);
          v22[9] = *(_OWORD *)(v23 + 144);
          v22[10] = *(_OWORD *)(v23 + 160);
          v22[11] = *(_OWORD *)(v23 + 176);
          v22[12] = *(_OWORD *)(v23 + 192);
          v22[13] = *(_OWORD *)(v23 + 208);
          v22[14] = *(_OWORD *)(v23 + 224);
          *(_DWORD *)(v23 + 104) = 0;
          break;
        }
        ++v18;
      }
    }
    else
    {
      v12 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v8 + 72)) % *(_DWORD *)(v8 + 4);
      if ( !v12 )
      {
        v24 = *(_DWORD *)(v8 + 8) | 0x40000000;
        *(_DWORD *)(v8 + 8) = v24;
        if ( (v24 & 4) != 0 )
          __debugbreak();
      }
      v13 = v8 + 160LL * v12 + 80;
      *(_OWORD *)v13 = *(_OWORD *)(a2 + 1288);
      *(_QWORD *)(v13 + 16) = a3;
      *(_DWORD *)(v13 + 24) = a4;
      v14 = RtlWalkFrameChain((PVOID *)(v13 + 32), 0x10u, 0x300u);
      v15 = v14 - 3;
      if ( v14 <= 3 )
        v15 = 0LL;
      v16 = v15;
      v17 = RtlWalkFrameChain((PVOID *)(v13 + 8 * (v15 + 4)), 16 - v15, 1u);
      memset_0((void *)(v13 + 8 * (v17 + v16 + 4LL)), 0, 8LL * (16 - (v17 + v16)));
    }
    if ( v9 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 16));
    return ExDereferenceHandleDebugInfo(a1, v8);
  }
  return result;
}
