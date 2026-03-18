/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400692A8
 * Callers:
 *     Win32UAFMAllocPoolWithQuota @ 0x1401C1F30 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1401C1FC0 (Win32UAFMAllocPoolWithQuotaZInit.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400693C8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a2;
  v5[0] = &v6;
  v5[1] = &v7;
  return ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___)(
           this,
           a3,
           a4,
           v5);
}
