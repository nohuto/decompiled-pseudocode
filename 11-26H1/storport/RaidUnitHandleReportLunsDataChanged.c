/*
 * XREFs of RaidUnitHandleReportLunsDataChanged @ 0x1400A8160
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x140078D00 (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitHandleReportLunsDataChanged(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 Pool; // rax
  __int64 v7; // rdx
  void *v8; // rdi
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  int v12; // eax
  signed __int32 v13[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]
  void *v20; // [rsp+50h] [rbp-28h]
  void *v21; // [rsp+58h] [rbp-20h]

  if ( *(_QWORD *)(a2 + 216) )
  {
    v4 = *(_DWORD **)(a1 + 24);
    if ( *v4 == 1094997074 )
    {
      v5 = (__int64)v4 + 483;
    }
    else if ( *v4 == 1314275652 )
    {
      v5 = (__int64)v4 + 275;
    }
    else
    {
      v5 = 107LL;
    }
    if ( !*(_BYTE *)v5 )
    {
      Pool = RaidAllocatePool(64LL, 16LL, 1398038866LL, *(_QWORD *)(a1 + 8));
      v8 = (void *)Pool;
      if ( Pool )
      {
        v9 = *(_QWORD *)(a2 + 168);
        if ( *(_BYTE *)(v9 + 2) == 40 )
        {
          *(_OWORD *)Pool = *(_OWORD *)(*(unsigned int *)(v9 + 52) + v9);
        }
        else
        {
          *(_WORD *)Pool = 1;
          *(_WORD *)(Pool + 2) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 56LL);
          *(_DWORD *)(Pool + 4) = 4;
          *(_BYTE *)(Pool + 8) = *(_BYTE *)(a1 + 104);
          *(_BYTE *)(Pool + 9) = *(_BYTE *)(a1 + 105);
          *(_BYTE *)(Pool + 10) = *(_BYTE *)(a1 + 106);
          *(_BYTE *)(Pool + 11) = 0;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
        {
          v10 = *(_BYTE *)(a1 + 106);
          v11 = *(_QWORD *)(a1 + 24);
          v21 = v8;
          v20 = &RaidUnitHandleReportLunsDataChangedCompletion;
          LODWORD(v19) = 0;
          LOBYTE(v18) = v10;
          LOBYTE(v17) = *(_BYTE *)(a1 + 105);
          LOBYTE(v16) = *(_BYTE *)(a1 + 104);
          v12 = *(_DWORD *)(v11 + 56);
          LODWORD(v15) = 1;
          LODWORD(v14) = v12;
          McTemplateK0pqquuuqpp_EtwWriteTransfer(
            v11,
            v7,
            (const GUID *)(a2 + 728),
            a1,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            &RaidUnitHandleReportLunsDataChangedCompletion,
            v8);
        }
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4888LL), 1, 0) )
        {
          _InterlockedOr(v13, 0);
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4892LL) = 2;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4904LL) = v8;
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4896LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4912LL) = &RaidUnitHandleReportLunsDataChangedCompletion;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4920LL) = 0LL;
          _InterlockedOr(v13, 0);
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 104LL) |= 0x40u;
LABEL_18:
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 105LL) = 1;
          KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a2 + 216) + 1976LL), 0LL, 0LL);
          return;
        }
        ExFreePoolWithTag(v8, 0x53546152u);
      }
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 216) + 106LL) = 1;
    goto LABEL_18;
  }
}
