/*
 * XREFs of ?Initialize@CInputManager@@UEAAJXZ @ 0x180150050
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1801E1E30 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180150174 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Reset@CMit@@QEAAJXZ @ 0x1801505A8 (-Reset@CMit@@QEAAJXZ.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x180219BEC (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, char *); // rdi
  int v7; // eax
  int CanReceiveInputThreadMessages; // eax
  int v9; // eax
  CMit *v10; // rcx
  int v11; // eax

  v1 = (__int64 *)((char *)this + 32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  v3 = CoreUICreate(v1);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x33u, 0LL);
  }
  else
  {
    v5 = *v1;
    v6 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
    v7 = v6(v5, (char *)this + 40);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x36u, 0LL);
    }
    else
    {
      CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
      v4 = CanReceiveInputThreadMessages;
      if ( CanReceiveInputThreadMessages < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CanReceiveInputThreadMessages, 0x38u, 0LL);
      }
      else
      {
        v9 = CMit::Create(*((struct CComposition **)this + 2), (struct CMit **)this + 3);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x3Bu, 0LL);
        }
        else
        {
          v10 = (CMit *)*((_QWORD *)this + 3);
          if ( v10 )
          {
            v11 = CMit::Reset(v10);
            v4 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3Fu, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
