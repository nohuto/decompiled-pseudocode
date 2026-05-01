/*
 * XREFs of ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805229C4
 * Callers:
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x1805061B0 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x18051B220 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x18051FF10 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopP.c)
 *     ??$Make@VCTempAppVisualArray@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTempAppVisualArray@@@12@XZ @ 0x18052245C (--$Make@VCTempAppVisualArray@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCTempAppVisualArray@@@12.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualArray::CreateInstance(const struct _GUID *a1, struct _GUID **a2)
{
  volatile int *v3; // rdx
  struct _GUID *v4; // rbx
  unsigned int v5; // edi
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  const struct _GUID *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<CTempAppVisualArray,>((__int64 *)&v9);
  v4 = (struct _GUID *)v9;
  if ( v9 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v4->Data1 + 8LL))(v4);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v6, v6) || InlineIsEqualGUID(v7, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    {
      *a2 = v4;
      v5 = 0;
      (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v4->Data1 + 8LL))(v4);
    }
    else
    {
      v5 = -2147467262;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopPersistence>::Release(
      (__int64)v4,
      v3);
  return v5;
}
