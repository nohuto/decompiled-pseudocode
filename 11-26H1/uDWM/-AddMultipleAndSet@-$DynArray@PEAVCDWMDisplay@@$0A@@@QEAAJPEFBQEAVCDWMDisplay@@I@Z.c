/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z @ 0x180064640
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180064524 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CDWMDisplay *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v6; // eax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v4;
    }
    else
    {
      v8 = a2;
      v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, (__int64)a2, (unsigned __int64 *)&v8);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC2u, 0LL);
      else
        *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v8;
    }
  }
  return v5;
}
