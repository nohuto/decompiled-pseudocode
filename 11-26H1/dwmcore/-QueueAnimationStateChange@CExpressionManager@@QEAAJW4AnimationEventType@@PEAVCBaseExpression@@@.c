/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18010D514
 * Callers:
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18010D45C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18010E8D0 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3, int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  __int128 *v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  v5 = a1 + 272;
  LODWORD(v12) = a2;
  v6 = *(_DWORD *)(a1 + 296);
  *((_QWORD *)&v12 + 1) = a3;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v10 = -2147024362;
    v11 = 183;
    goto LABEL_9;
  }
  if ( v7 > *(_DWORD *)(a1 + 292) )
  {
    v13 = &v12;
    v10 = DynArrayImpl<1>::Grow((int)a1 + 272, 16, 1, a4, (__int64)&v13);
    if ( v10 >= 0 )
    {
      *(_OWORD *)((unsigned int)(16 * (*(_DWORD *)(v5 + 24))++) + *(_QWORD *)v5) = *v13;
      goto LABEL_5;
    }
    v11 = 194;
LABEL_9:
    v8 = v10;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v11, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x21Fu, 0LL);
    return v8;
  }
  *(_OWORD *)(*(_QWORD *)v5 + 16LL * v6) = v12;
  *(_DWORD *)(a1 + 296) = v7;
LABEL_5:
  (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0;
}
