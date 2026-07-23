/*
 * XREFs of MiAddZeroingThread @ 0x140521E94
 * Callers:
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 * Callees:
 *     MiZeroRemainOnProcessor @ 0x1402F5BCC (MiZeroRemainOnProcessor.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x1402F5D74 (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1402F5E34 (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 *     MiIncrementZeroEngineThread @ 0x1404FAFBC (MiIncrementZeroEngineThread.c)
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 */

__int64 __fastcall MiAddZeroingThread(__int64 a1, int a2, int a3, int *a4)
{
  __int64 result; // rax
  int *v8; // rbx
  _QWORD **v9; // rcx
  _QWORD *i; // rdi
  __int64 v11; // rdi
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  result = MiFindOptimalEngineToAddThread(a1, a2, a3, (_DWORD)a4, (__int64)&v13);
  if ( !(_DWORD)result )
  {
    v8 = (int *)(a1 + 504LL * *a4 + 232);
    v9 = (_QWORD **)(v8 + 42);
    if ( *v8 )
    {
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
      {
        v12 = *((_OWORD *)i - 3);
        if ( ((unsigned __int64)v12 & *((_QWORD *)&v14 + 1)) != 0
          && WORD4(v12) == (_WORD)v15
          && (*(_DWORD *)(i - 4) & 6) == 2 )
        {
          ++v8[66];
LABEL_15:
          v11 = (__int64)(i - 20);
          if ( !(unsigned int)MiZeroRemainOnProcessor(v11, a3) )
          {
            v16 = 0LL;
            v13 = 0LL;
            v14 = 0LL;
            v15 = 0LL;
            MiFindBestZeroingProcessor((__int64)&v13, v8, a3, 0);
            if ( DWORD2(v15) == 5 )
            {
              ++v8[71];
              return 2LL;
            }
            if ( *(_QWORD *)(v11 + 176) )
              MiUnlinkZeroThreadFromActiveDomain(v11);
            *(_QWORD *)(v11 + 96) = 0LL;
            *(_WORD *)(v11 + 104) = 0;
            *(_QWORD *)(v11 + 112) = 0LL;
            *(_WORD *)(v11 + 120) = 0;
            MiAssignBackgroundZeroThreadToProcessor(v11, (__int64)v8, (__int64)&v13);
          }
          MiIncrementZeroEngineThread(v11, a3);
          return 0LL;
        }
      }
    }
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 4) & 6) == 2 )
      {
        ++v8[65];
        goto LABEL_15;
      }
    }
    ++v8[71];
    return 2LL;
  }
  return result;
}
