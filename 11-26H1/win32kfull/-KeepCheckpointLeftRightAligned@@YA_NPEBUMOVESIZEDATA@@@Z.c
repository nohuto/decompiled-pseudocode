/*
 * XREFs of ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402C47F0
 * Callers:
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C623C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall KeepCheckpointLeftRightAligned(const struct MOVESIZEDATA *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rax
  bool result; // al

  result = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x30000000) == 0x30000000 )
  {
    v2 = *((_DWORD *)a1 + 34);
    if ( *((_DWORD *)a1 + 38) == v2 )
    {
      v3 = *((_DWORD *)a1 + 36);
      if ( *((_DWORD *)a1 + 40) == v3 )
      {
        v4 = *((_DWORD *)a1 + 44);
        if ( v4 != 3
          && (unsigned int)(v4 - 4) > 4
          && (v4 != 9
           || v3 - v2 == *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 6)
           && *((_DWORD *)a1 + 37) - *((_DWORD *)a1 + 35) == *((_DWORD *)a1 + 9) - *((_DWORD *)a1 + 7)) )
        {
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
            && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 384LL) & 0x10) == 0 )
          {
            return 1;
          }
          v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL);
          v6 = MonitorFromRect((__int32 *)a1 + 38, 2LL, v5);
          if ( MonitorFromRect((__int32 *)a1 + 6, 2LL, v5) == v6 )
            return 1;
        }
      }
    }
  }
  return result;
}
