/*
 * XREFs of ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1401FC030
 * Callers:
 *     ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1401FBF5C (-ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1401FC0FC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402A62F0 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 */

__int64 __fastcall Edgy::_OnInput(__int64 a1, __int64 a2)
{
  __int64 ArcData; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int128 v8; // xmm1
  unsigned int v9; // r10d
  __int128 v10; // xmm0
  _OWORD v12[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  _BYTE v14[64]; // [rsp+58h] [rbp-40h] BYREF

  ArcData = Edgy::_GetArcData(v14);
  v5 = *(int *)(a2 + 16);
  v6 = 4LL;
  v7 = dword_14035C630[v5];
  v8 = *(_OWORD *)(ArcData + 16);
  v9 = dword_14035C634[v5];
  v12[0] = *(_OWORD *)ArcData;
  v10 = *(_OWORD *)(ArcData + 32);
  v12[1] = v8;
  *(_QWORD *)&v8 = *(_QWORD *)(ArcData + 48);
  v12[2] = v10;
  v13 = v8;
  while ( v7 < v9 )
  {
    if ( (DWORD2(v12[0]) & dword_14035C4B8[4 * v7]) == dword_14035C4BC[4 * v7] )
    {
      v6 = (unsigned int)dword_14035C4B4[4 * v7];
      break;
    }
    ++v7;
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = v6;
  if ( (_DWORD)v5 != (_DWORD)v6 )
    *(_QWORD *)(a1 + 8) = Edgy::_OnStateTransition(a2, v6, v12);
  return a1;
}
