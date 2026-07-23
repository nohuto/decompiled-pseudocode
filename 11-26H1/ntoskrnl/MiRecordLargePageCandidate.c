/*
 * XREFs of MiRecordLargePageCandidate @ 0x1404409A0
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiUpdateLargePageCandidates @ 0x1404406E0 (MiUpdateLargePageCandidates.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall MiRecordLargePageCandidate(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // rbx
  volatile signed __int32 *v17; // r10
  __int64 v18; // rbx
  int v19; // edi
  unsigned __int64 v20; // rcx

  v5 = a3;
  v8 = 56320LL * (unsigned int)MiPageToNode(a2);
  v9 = v8 + *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v5 == 2 )
    v10 = qword_140E37E50 + v8;
  else
    v10 = v8 + *(_QWORD *)(a1 + 16);
  v11 = v5;
  if ( (a4 & 1) != 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v10 + 8 * v5 + 56216));
    return 0LL;
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 8 * v5 + 56240), 1uLL);
    if ( (a4 & 2) == 0 )
      _InterlockedAdd64((volatile signed __int64 *)(v10 + 8 * v5 + 56216), 1uLL);
    LOBYTE(v13) = 1;
    v14 = 2 * (v5 + 1049);
    v15 = a2 >> MiLargePageCoalesceCandidateBitmapShifts[v5];
    v16 = v15 & 0x1F;
    v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8 * v14) + 4 * (v15 >> 5));
    if ( v16 + 1 > 0x20 )
    {
      if ( (v15 & 0x1F) == 0 )
        goto LABEL_15;
      v19 = v15 & 0x1F;
      _InterlockedOr(v17, ((1 << (32 - v19)) - 1) << v16);
      v13 = 1LL - (unsigned int)(32 - v19);
      ++v17;
      if ( v13 >= 0x20 )
      {
        v20 = v13 >> 5;
        v13 += -32LL * (v13 >> 5);
        do
        {
          *v17++ = -1;
          --v20;
        }
        while ( v20 );
      }
      if ( v13 )
LABEL_15:
        _InterlockedOr(v17, (1 << v13) - 1);
    }
    else
    {
      _InterlockedOr(v17, 1 << v16);
    }
    v18 = 6 * v11;
    if ( (a4 & 8) == 0 && !*(_DWORD *)(a1 + 48 * v11 + 16868) )
      KeSetEvent((PRKEVENT)(a1 + 16864 + 48 * v11), 0, 0);
    return a1 + 16864 + 8 * v18;
  }
}
