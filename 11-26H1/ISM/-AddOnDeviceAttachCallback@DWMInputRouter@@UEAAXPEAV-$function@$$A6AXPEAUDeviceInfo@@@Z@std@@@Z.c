/*
 * XREFs of ?AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800805A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

_QWORD *__fastcall DWMInputRouter::AddOnDeviceAttachCallback(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (_QWORD *)(a1 + 472);
  result = (_QWORD *)a2;
  v4 = (_QWORD *)v2[1];
  if ( v4 == (_QWORD *)v2[2] )
    return std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(v2, (__int64)v4, &v5);
  *v4 = result;
  v2[1] += 8LL;
  return result;
}
