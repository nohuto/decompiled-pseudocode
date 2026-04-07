/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDesktopWorkAreaInfo@@$0A@@@QEAAJPEFBUDesktopWorkAreaInfo@@I@Z @ 0x180070398
 * Callers:
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x180019194 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<DesktopWorkAreaInfo,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax

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
      v8 = 3 * v2;
      v9 = *(_QWORD *)a1;
      *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
      *(_QWORD *)(v9 + 8 * v8 + 16) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 24) = v4;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 24, 1, a2);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC2u, 0LL);
    }
  }
  return v5;
}
