/*
 * XREFs of ?LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CF5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x1400762A8 (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogActivePathPresentHistoryCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // rbp
  _DWORD *v4; // rax
  struct _DXGK_DIAG_HEADER *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rcx
  DISPLAY_SOURCE *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // eax
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12, a1, 1);
  if ( *((_QWORD *)a1 + 395) )
  {
    if ( *((_DWORD *)a1 + 50) == 1 )
    {
      v3 = *(unsigned int *)(*((_QWORD *)a1 + 395) + 432LL);
      if ( (_DWORD)v3 )
      {
        v4 = (_DWORD *)operator new[](168 * v3 + 64, 0x4B677844u, 256LL);
        v13 = v4;
        v5 = (struct _DXGK_DIAG_HEADER *)v4;
        if ( v4 )
        {
          v4[1] = 168 * v3 + 64;
          *v4 = 52;
          v6 = 0;
          v4[10] = 0;
          *((_QWORD *)v4 + 4) = 0LL;
          *((_QWORD *)v4 + 1) = 0LL;
          *((_OWORD *)v4 + 1) = 0LL;
          *((_QWORD *)v4 + 6) = *(_QWORD *)((char *)a1 + 412);
          v4[14] = 0;
          v7 = *((_QWORD *)a1 + 395);
          if ( *(_DWORD *)(v7 + 96) )
          {
            do
            {
              v8 = (DISPLAY_SOURCE *)(*(_QWORD *)(v7 + 128) + 4024LL * v6);
              if ( v8 && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v7, v6) )
              {
                v9 = 168LL * *((unsigned int *)v5 + 14);
                *(_DWORD *)((char *)v5 + v9 + 64) = *((_DWORD *)v8 + 4);
                DISPLAY_SOURCE::GetPresentDiagHistory(v8, (struct _DXGK_DIAG_HEADER *)((char *)v5 + v9 + 72));
                ++*((_DWORD *)v5 + 14);
              }
              v10 = *((_DWORD *)v5 + 14);
              if ( v10 >= (unsigned int)v3 )
                break;
              v7 = *((_QWORD *)a1 + 395);
              ++v6;
            }
            while ( v6 < *(_DWORD *)(v7 + 96) );
            if ( v10 )
              DxgkWriteDiagEntry(v5);
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 10999;
        }
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v13);
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  return 0LL;
}
