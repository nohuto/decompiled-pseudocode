/*
 * XREFs of ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x1802A5F00
 * Callers:
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802A7BF0 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::SetHardwareProtection(CLegacySwapChain *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this + 33);
  v5 = 0;
  if ( !v4 )
  {
    v5 = -2003304307;
    v8 = -2003304307;
    v10 = 97;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 100) != a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 83;
    }
    else
    {
      v7 = *((_QWORD *)this - 3);
      *((_BYTE *)this + 100) = a2;
      v6 = (*(__int64 (__fastcall **)(char *))(v7 + 64))((char *)this - 24);
      v5 = v6;
      if ( v6 >= 0 )
      {
        *((_DWORD *)this + 120) = (*(__int64 (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 96LL))(this);
        return v5;
      }
      v10 = 88;
    }
    v8 = v6;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v10, 0LL);
  }
  return v5;
}
