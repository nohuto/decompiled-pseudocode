/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18026F644
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x180125000 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18019E090 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801E0340 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::CreateResource(
        CGenericInk *this,
        struct CD2DResourceManager **a2,
        struct CD2DGenericInk **a3)
{
  int v6; // eax
  struct CD2DGenericInk *v7; // rbx
  int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct CD2DGenericInk *v13; // [rsp+68h] [rbp+10h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v6 = CD2DContext::CreateGenericInk(a2 + 2, &v13);
  v7 = v13;
  v8 = v6;
  if ( v6 < 0 )
  {
    v10 = 485;
  }
  else
  {
    v9 = *((_QWORD *)v13 + 9);
    if ( *((_DWORD *)this + 58)
      && (v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(
                 *((_QWORD *)v13 + 9),
                 *((_QWORD *)this + 26)),
          v8 < 0) )
    {
      v10 = 492;
    }
    else
    {
      v11 = *((_DWORD *)this + 66);
      if ( v11
        && (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(
                   v9,
                   0LL,
                   *((_QWORD *)this + 30),
                   v11 / *((_DWORD *)this + 68),
                   *((_DWORD *)this + 69),
                   *((_DWORD *)this + 68),
                   0LL),
            v8 < 0) )
      {
        v10 = 505;
      }
      else
      {
        v8 = CGenericInk::SetContextMsgRoutingInfo(this, (struct CD3DDevice *)a2);
        if ( v8 >= 0 )
        {
          *a3 = v7;
          (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
          return (unsigned int)v8;
        }
        v10 = 508;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v10, 0LL);
  if ( v7 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v7);
  return (unsigned int)v8;
}
