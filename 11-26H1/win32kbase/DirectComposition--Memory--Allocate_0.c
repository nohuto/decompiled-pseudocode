/*
 * XREFs of DirectComposition::Memory::Allocate_0 @ 0x1400B3D64
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x1400B3C5C (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x1401B2E18 (-CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEB_K_K@Z @ 0x1401B8BF8 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPE.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400B3E34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate_0(__int64 a1, unsigned int a2, int a3)
{
  __int64 UserSessionState; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v8[0] = v7;
  v7[0] = 256LL;
  v8[1] = &v9;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___(
           UserSessionState + 72016,
           a1,
           a2,
           v8,
           v7[0],
           v7[1]);
}
