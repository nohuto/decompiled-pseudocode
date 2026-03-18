/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x14041AA8C
 * Callers:
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1402824D4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x14036AF68 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x140193088 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x14036B374 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  int v5; // esi
  struct DXGSWAPCHAIN **v6; // rcx
  int v7; // edi
  struct DXGFASTMUTEX *const *v8; // rax
  struct DXGFASTMUTEX *v9; // rdi
  __int64 v11; // [rsp+28h] [rbp-40h]
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2840);
  v5 = 0;
  KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( !v6 )
    goto LABEL_5;
  v7 = SwapChainAbandonInternal(*v6);
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, this, **((_QWORD **)this + 354));
    v11 = **((_QWORD **)this + 354);
    WdLogGlobalForLineNumber = 4504;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"BLTQUEUE 0x%I64 Failed to abandon the indirect swapchain at 0x%I64.",
      (__int64)this,
      v11,
      0LL,
      0LL,
      0LL);
  }
  ObfDereferenceObject(*((PVOID *)this + 354));
  *((_QWORD *)this + 354) = 0LL;
  if ( v7 >= 0 )
  {
LABEL_5:
    if ( a2 )
    {
      v8 = (struct DXGFASTMUTEX *const *)SwapChainOpenInternal(a2);
      *((_QWORD *)this + 354) = v8;
      if ( v8 )
      {
        v9 = *v8;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, *v8, 0);
        LODWORD(v9) = *((_DWORD *)v9 + 50);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
        *((_DWORD *)this + 725) = (_DWORD)v9;
        *((_DWORD *)this + 724) = 1;
      }
      else
      {
        v5 = -1073741823;
      }
    }
    v7 = v5;
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v7;
}
