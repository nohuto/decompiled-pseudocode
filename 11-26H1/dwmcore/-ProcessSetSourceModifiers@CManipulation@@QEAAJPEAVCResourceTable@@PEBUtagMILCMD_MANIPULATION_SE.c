/*
 * XREFs of ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z @ 0x18014CD58
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::ProcessSetSourceModifiers(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_SETSOURCEMODIFIERS *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = (__int64 *)((char *)this + 496);
  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 34LL);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v4, Resource);
  v8 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 3), 34LL);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v4 + 1, v8);
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 4), 34LL);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 64, v9);
  v10 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 5), 34LL);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 65, v10);
  v11 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 6), 34LL);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 66, v11);
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 80LL))(this, 13LL, this);
  return 0LL;
}
