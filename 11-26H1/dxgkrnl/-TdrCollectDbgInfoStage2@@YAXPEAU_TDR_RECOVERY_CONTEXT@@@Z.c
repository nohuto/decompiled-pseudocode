/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x14019D760 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x140193360 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x140195874 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1401B46D8 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1401D82F4 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x14025984C (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x14038A6D0 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x140411CDC (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  CTDR_DUMP_BUFFER *v2; // rcx
  int v3; // eax
  bool v4; // al
  CTDR_DUMP_BUFFER *v5; // rcx
  _DWORD *v6; // rsi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int64 v9; // r8
  int v10; // eax
  unsigned int *v11; // rbx
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  unsigned int *v15; // rbx
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)a1 + 2921) )
  {
    v2 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
LABEL_36:
    if ( v2 )
      CTDR_DUMP_BUFFER::`scalar deleting destructor'(v2);
    *((_QWORD *)a1 + 359) = 0LL;
    return;
  }
  v3 = *((_DWORD *)a1 + 4);
  v4 = v3 == 6 || v3 == 12;
  if ( *((_QWORD *)a1 + 357) )
  {
    v5 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
    if ( v5 )
    {
      if ( !v4 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 3160LL) )
        {
          v7 = (char *)CTDR_DUMP_BUFFER::AddSegment(v5, 5, 0x2004u);
          v8 = v7;
          if ( v7 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v16, v7, 0x2000);
            v10 = DmmCollectTdrDiagInfo(a1, v8, v9);
            if ( v10 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v10 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v16) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              WdLogSingleEntry3(1LL, a1, v8, 0x2000LL);
              WdLogGlobalForLineNumber = 2085;
            }
            if ( v16 )
              *v16 = 0;
            v6 = (_DWORD *)((char *)a1 + 116);
          }
          else
          {
            v6 = (_DWORD *)((char *)a1 + 116);
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v11 = (unsigned int *)*((_QWORD *)a1 + 359);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v11);
          *((_QWORD *)a1 + 358) = v11[6];
          *((_DWORD *)a1 + 35) = 5;
          TdrUpdateDbgReport(a1, 0);
        }
        else
        {
          v6 = (_DWORD *)((char *)a1 + 116);
        }
        v12 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 359), 7, 0x804u);
        v13 = v12;
        if ( v12 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v16, v12, 2048);
          v14 = DxgkCollectCoreDbgInfo(a1, v13);
          if ( v14 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v14 < 0 )
          {
            *v6 |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((CTDR_DUMP_BUFFER_CANARY *)&v16) )
          {
            *v6 |= 0x40000000u;
            WdLogSingleEntry3(1LL, a1, v13, 2048LL);
            WdLogGlobalForLineNumber = 2137;
          }
          if ( v16 )
            *v16 = 0;
        }
        else
        {
          *v6 |= 0x80000000;
        }
        v15 = (unsigned int *)*((_QWORD *)a1 + 359);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v15);
        *((_QWORD *)a1 + 358) = v15[6];
        *((_DWORD *)a1 + 35) = 7;
        TdrUpdateDbgReport(a1, 0);
      }
      v2 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
      goto LABEL_36;
    }
  }
}
