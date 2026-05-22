/*
 * XREFs of ?CreateInputDelegationInputObjectProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x18004C570
 * Callers:
 *     ?CreateInputDelegationInputObjectProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18004C4BC (-CreateInputDelegationInputObjectProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVB.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateInputDelegationInputObjectProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputDelegationInputObjectProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x88uLL);
  memset_0(v3, 0, 0x88uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoInputDelegationInputObjectProxyImpl::`vftable';
  v3[5] = 0LL;
  *((_WORD *)v3 + 24) = 0;
  *((_BYTE *)v3 + 50) = 0;
  *v3 = &InputDelegationInputObjectProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &InputDelegationInputObjectProxy::`vftable'{for `IInputDelegationInputObjectProxy'};
  v3[7] = &InputDelegationInputObjectProxy::`vftable'{for `IDelegateInformationProvider'};
  v3[8] = &InputDelegationInputObjectProxy::`vftable'{for `IInputSiteClientPrivate'};
  v3[9] = &InputDelegationInputObjectProxy::`vftable'{for `IGamepadInterceptionTarget'};
  result = 0LL;
  v3[10] = 0LL;
  *((_BYTE *)v3 + 88) = 0;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  *((_DWORD *)v3 + 30) = 0;
  *((_DWORD *)v3 + 31) = 1;
  *((_BYTE *)v3 + 128) = 0;
  *a2 = (struct BamoInputDelegationInputObjectProxy *)v3;
  return result;
}
