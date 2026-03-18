/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18019015C
 * Callers:
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector4@@@Z @ 0x180190108 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z @ 0x180267DD4 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOLORVALUE@@@Z @ 0x180267ECC (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOL.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DQuaternion@@@Z @ 0x180267FD4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CPropertyChangeResource::ShouldNotify(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 && *(_DWORD *)(v2 + 116) && *(_DWORD *)(a1 + 72) )
  {
    v5 = *(_DWORD *)(a1 + 76);
    return _bittest(&v5, a2);
  }
  return v3;
}
