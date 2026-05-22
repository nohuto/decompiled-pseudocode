/*
 * XREFs of ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5C74
 * Callers:
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C11B4 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4D50 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801C02FC (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C9460 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@IJ@Z @ 0x1800C592C (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInput.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputProviderBase::ProcessSourceDetectedAndLost(
        MPCInputProviderBase *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        bool *a4)
{
  struct IMPCTarget *v6; // r15
  char v8; // bp
  char *v9; // rbx
  int v10; // r15d
  ISMTracing *v11; // rcx

  v6 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a2 != a3 || !*((_BYTE *)this + 3568) )
  {
    v8 = *((_BYTE *)this + 3568);
    if ( a2 && a2 != a3 && v8 )
    {
      v9 = (char *)this + 560;
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        a2,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 1;
      (*(void (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)v6 + 24LL))(v6, v9);
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 96LL))(
        this,
        v6,
        0LL);
    }
    *((_BYTE *)this + 3568) = 0;
    if ( a3 )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        0LL,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 1;
      v10 = (*(__int64 (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 560);
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 104LL))(
          this,
          a3,
          0LL);
      }
      else
      {
        if ( a4 )
          *a4 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a3 + 32LL))(a3);
        if ( v8 )
        {
          if ( ISMTracing::IsEnabled() )
          {
            ISMTracing::Instance();
            ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
              v11,
              a3,
              (MPCInputProviderBase *)((char *)this + 560),
              0,
              v10);
          }
        }
      }
    }
  }
}
