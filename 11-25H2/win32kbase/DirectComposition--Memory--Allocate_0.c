/*
 * XREFs of DirectComposition::Memory::Allocate_0 @ 0x1400692E8
 * Callers:
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x140068EB0 (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x140228778 (-CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x140228E10 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400693C8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate_0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 UserSessionState; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v10) = a4;
  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = v4;
  v9[0] = v8;
  v9[1] = &v10;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___(
           UserSessionState + 72032,
           a1,
           v4,
           v9,
           256LL,
           v8[1]);
}
