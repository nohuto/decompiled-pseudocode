/*
 * XREFs of Bulk_Stage_Release @ 0x140018AA8
 * Callers:
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     Bulk_CompleteTransfers @ 0x14001FAFC (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Bulk_Stage_Release(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // r8d
  __int64 result; // rax

  v2 = *(unsigned __int8 **)a2;
  if ( *(_BYTE *)(a2 + 44) )
  {
    IoFreeMdl(*(PMDL *)(a2 + 48));
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_BYTE *)(a2 + 44) = 0;
  }
  v5 = (__int64 *)(a2 + 8);
  v6 = *(__int64 **)(a2 + 8);
  if ( v6 != (__int64 *)(a2 + 8) )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
    {
      do
      {
        memset((void *)v6[2], 0, *((unsigned int *)v6 + 11));
        v6 = (__int64 *)*v6;
      }
      while ( v5 != v6 );
    }
    v7 = a1 + 208;
    if ( (__int64 *)*v5 != v5 )
    {
      **(_QWORD **)(a2 + 16) = *(_QWORD *)v7;
      *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v7 = *v5;
      *(_QWORD *)(*v5 + 8) = v7;
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v5 = (__int64)v5;
    }
  }
  v8 = (__int64 *)(a2 + 24);
  v9 = *(__int64 **)(a2 + 24);
  if ( v9 != (__int64 *)(a2 + 24) )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
    {
      do
      {
        memset((void *)v9[2], 0, *((unsigned int *)v9 + 11));
        v9 = (__int64 *)*v9;
      }
      while ( v8 != v9 );
    }
    v10 = a1 + 208;
    if ( (__int64 *)*v8 != v8 )
    {
      **(_QWORD **)(v10 + 8) = *v8;
      *(_QWORD *)(*v8 + 8) = *(_QWORD *)(v10 + 8);
      **(_QWORD **)(a2 + 32) = v10;
      *(_QWORD *)(v10 + 8) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = a2 + 24;
      *v8 = (__int64)v8;
    }
  }
  v11 = v2[128];
  v12 = v2[132];
  --v2[130];
  v13 = v2[129];
  if ( (unsigned __int8 *)a2 == &v2[v12 * v11 + 144] )
  {
    result = (v12 + 1) / v13;
    v2[132] = (v12 + 1) % v13;
  }
  else
  {
    result = (unsigned int)((int)(v13 + v2[131] - 1) / (int)v13);
    v2[131] = (int)(v13 + v2[131] - 1) % (int)v13;
  }
  return result;
}
