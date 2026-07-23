/*
 * XREFs of MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 * Callees:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiReplaceTransitionPageInitializeTargetPfn(__int64 a1)
{
  _QWORD *v1; // rsi
  int v2; // r14d
  __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // eax
  _DWORD *v7; // rcx
  char v8; // cl
  int PfnSlabType; // eax
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 32);
  v4 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v5 = 48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL;
  v6 = *(_DWORD *)(v5 + 32) >> 30;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (*(_BYTE *)(v4 + 34) & 7) + 7520);
  v7 = (_DWORD *)(a1 + 48);
  if ( (v6 & 1) != 0 )
  {
    *v7 |= 8u;
    v1 = (_QWORD *)(a1 + 16);
  }
  if ( (*v7 & 8) != 0 )
    return 3221225473LL;
  if ( (*(_BYTE *)(v4 + 34) & 7) == 3 )
  {
    if ( (*(_DWORD *)(v4 + 16) & 0x400LL) != 0 )
    {
      v8 = *(_BYTE *)(v4 + 36);
      *(_BYTE *)(v4 + 36) = v8 & 0xF0;
      goto LABEL_6;
    }
    v1 = (_QWORD *)(a1 + 16);
  }
  v8 = *(_BYTE *)(v5 + 36);
LABEL_6:
  *(_DWORD *)(a1 + 40) = v8 & 0xF;
  PfnSlabType = MiGetPfnSlabType(v5);
  v10 = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(a1 + 36) = PfnSlabType;
  v11 = (v10 >> 22) & 3;
  if ( ((*(_DWORD *)(v5 + 32) >> 22) & 3) != (_DWORD)v11 )
    MiChangePageAttribute(v5, v11, 1LL);
  v12 = 2LL;
  *(_QWORD *)(v5 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  if ( v2 >= 9 )
    v12 = 0LL;
  MiCopyPfnEntryEx(v5, v4, v12);
  *(_BYTE *)(v5 + 36) ^= (*(_BYTE *)(a1 + 40) ^ *(_BYTE *)(v5 + 36)) & 0xF;
  if ( (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) == *(_QWORD *)(a1 + 16) )
    MiSetPfnContainingFrame(v5, *(_QWORD *)(a1 + 24));
  MiCopyPage(*(_QWORD *)(a1 + 24), *v1, 6LL);
  _InterlockedOr(v14, 0);
  *(_QWORD *)(v5 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v5 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  return 0LL;
}
