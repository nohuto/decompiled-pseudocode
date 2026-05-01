/*
 * XREFs of ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800920B0
 * Callers:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180091DDC (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCWRLObject.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180092088 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_180092088.c)
 *     ??_GCImmersiveShellComponent@@UEAAPEAXI@Z @ 0x1802DAA90 (--_GCImmersiveShellComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 */

void __fastcall CImmersiveShellComponent::~CImmersiveShellComponent(CImmersiveShellComponent *this)
{
  char *v1; // rbx

  *(_QWORD *)this = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  v1 = (char *)this + 24;
  *((_QWORD *)this + 1) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)this + 24);
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)v1);
}
