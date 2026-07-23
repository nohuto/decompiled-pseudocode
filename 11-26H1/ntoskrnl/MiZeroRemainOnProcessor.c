/*
 * XREFs of MiZeroRemainOnProcessor @ 0x1402F5BCC
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 * Callees:
 *     MiProcessorParked @ 0x1402F5654 (MiProcessorParked.c)
 *     MiProcessorInEngineProcessAffinity @ 0x1407136B8 (MiProcessorInEngineProcessAffinity.c)
 */

__int64 __fastcall MiZeroRemainOnProcessor(__int64 a1, int a2)
{
  _DWORD *v2; // rbx
  __int64 v5; // rax
  __int16 v6; // r9
  __int64 v7; // rdx
  __int16 v8; // r8
  __int128 v9; // xmm6
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD **)(a1 + 80);
  v10 = 0LL;
  if ( !*v2 )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_WORD *)(a1 + 120);
  v7 = *(_QWORD *)(a1 + 96);
  v8 = *(_WORD *)(a1 + 104);
  WORD4(v10) = v8;
  *(_QWORD *)&v10 = v7;
  if ( v7 == v5 && v8 == v6 && v7 )
  {
    v9 = v10;
    if ( a2 == 1 && (unsigned int)MiProcessorParked((__int64)&v10) )
    {
      ++v2[102];
    }
    else
    {
      v10 = v9;
      if ( (unsigned int)MiProcessorInEngineProcessAffinity(v2, &v10) )
      {
LABEL_2:
        ++v2[101];
        return 1LL;
      }
      ++v2[104];
    }
  }
  else
  {
    ++v2[103];
  }
  return 0LL;
}
