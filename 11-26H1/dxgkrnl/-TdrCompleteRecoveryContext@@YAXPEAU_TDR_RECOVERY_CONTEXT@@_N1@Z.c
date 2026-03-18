/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401D8FF0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x14019D760 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401D9CF0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9128 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, struct _LUID *a2, bool a3)
{
  __int64 v4; // rcx
  char v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  DXGADAPTER *v9; // rcx
  int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // r11
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 6);
    v6 = (char)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL) + 736LL)
                                                          + 8LL)
                                              + 496LL))(
        v4,
        0LL);
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 != 6 && v7 != 12 )
    {
      a2 = (struct _LUID *)&g_TdrHistory;
      v8 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_140167894, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v8 + 3) = *((_QWORD *)a1 + 15);
      *((_DWORD *)&g_TdrHistory + 2 * v8 + 8) = *((_DWORD *)a1 + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v8 + 40) = *(UUID *)((char *)a1 + 56);
      *((_QWORD *)&g_TdrHistory + v8 + 7) = *((_QWORD *)a1 + 9);
    }
    v9 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
    v10 = *((_DWORD *)a1 + 20);
    v11 = *((_DWORD *)a1 + 4);
    v14 = 0LL;
    v12 = *((_DWORD *)v9 + 60);
    DXGADAPTER::IsAdapterSessionized(v9, a2, 0LL, &v14);
    DxgkLogCodePointPacketForSession(24, v14, v11, v12, v10, v13);
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)a1);
    if ( v6 )
    {
      *((_DWORD *)a1 + 29) &= ~1u;
      TdrUpdateDbgReport(a1, 0);
    }
    TdrDereferenceRecoveryContext(a1, a3);
  }
}
