/*
 * XREFs of ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x140020FFC
 * Callers:
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140025F28 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14003D298 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x14003E920 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::CreateFlipToken(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CToken **a4)
{
  UINT v4; // eax
  char v8; // r15
  struct CToken *v9; // r12
  struct CompositionSurfaceObject *i; // rax
  HANDLE CurrentThreadId; // rax
  char *v12; // rcx
  __int64 Pool2; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 *j; // rax
  char v19; // r13
  int v20; // edi
  __int64 v22; // [rsp+20h] [rbp-48h]

  v4 = a3->Flags.Value & 0x42000;
  *a4 = 0LL;
  v8 = 1;
  v9 = 0LL;
  if ( v4 == 0x2000 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
    if ( *((_DWORD *)this + 40) )
    {
      for ( i = (struct CompositionSurfaceObject *)*((_QWORD *)this + 18);
            i != (struct CompositionSurfaceObject *)((char *)this + 144);
            i = *(struct CompositionSurfaceObject **)i )
      {
        if ( *((_QWORD *)i - 1) == a1 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)i - 3) + 200LL))((__int64)i - 24);
          goto LABEL_7;
        }
      }
    }
    v8 = 0;
LABEL_7:
    CurrentThreadId = PsGetCurrentThreadId();
    v12 = (char *)this + 48;
    if ( CurrentThreadId == *((HANDLE *)this + 7) )
    {
      *((_QWORD *)this + 7) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v12, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  Pool2 = ExAllocatePool2(256LL, 616LL, 1869892948LL);
  v14 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = 6;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_QWORD *)Pool2 = &CToken::`vftable';
    *(_QWORD *)(Pool2 + 56) = a1;
    *(_WORD *)(Pool2 + 64) = 0;
    *(_QWORD *)(Pool2 + 96) = 0LL;
    *(_DWORD *)(Pool2 + 68) = 0;
    *(_QWORD *)(Pool2 + 48) = this;
    ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
    *(_QWORD *)(v14 + 104) = 0LL;
    *(_QWORD *)v14 = &CFlipToken::`vftable';
    v15 = *(_QWORD *)(v14 + 56);
    *(_QWORD *)(v14 + 112) = 0LL;
    *(_DWORD *)(v14 + 577) = 0;
    *(_QWORD *)(v14 + 592) = 0LL;
    *(_QWORD *)(v14 + 600) = 0LL;
    v16 = *(_QWORD *)(v14 + 48);
    v22 = v15;
    *(_DWORD *)(v14 + 581) = 256;
    KeEnterCriticalRegion();
    v17 = v16 + 48;
    ExAcquirePushLockSharedEx(v16 + 48, 0LL);
    if ( *(_DWORD *)(v16 + 160) )
    {
      for ( j = *(__int64 **)(v16 + 144); j != (__int64 *)(v16 + 144); j = (__int64 *)*j )
      {
        if ( *(j - 1) == v22 )
        {
          v19 = *((_BYTE *)j + 17);
          goto LABEL_16;
        }
      }
    }
    v19 = 0;
LABEL_16:
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v17 + 8) )
    {
      *(_QWORD *)(v17 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v17, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v17, 0LL);
    }
    KeLeaveCriticalRegion();
    *(_QWORD *)(v14 + 164) = 0LL;
    *(_QWORD *)(v14 + 172) = 0LL;
    *(_QWORD *)(v14 + 180) = 0LL;
    *(_QWORD *)(v14 + 188) = 0LL;
    *(_BYTE *)(v14 + 576) = v19 == 0;
    *(_QWORD *)(v14 + 204) = 1065353216LL;
    *(_DWORD *)(v14 + 212) = 0;
    *(_QWORD *)(v14 + 216) = 1065353216LL;
    *(_DWORD *)(v14 + 224) = 0;
    *(_QWORD *)(v14 + 136) = 0LL;
    *(_QWORD *)(v14 + 144) = 0LL;
    v20 = CFlipToken::InitializeCompleted((CFlipToken *)v14, a3, v8);
    if ( v20 < 0 )
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
    else
      v9 = (struct CToken *)v14;
    if ( v20 >= 0 )
    {
      *a4 = v9;
      return (unsigned int)v20;
    }
  }
  else
  {
    v20 = -1073741801;
  }
  CompositionSurfaceObject::SignalGpuFence(this, a1, a3->FenceValue, 1);
  if ( a3->PresentLimitSemaphoreId )
    CompositionSurfaceObject::SignalPresentLimitSemaphore(this, a1);
  return (unsigned int)v20;
}
