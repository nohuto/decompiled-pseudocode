/*
 * XREFs of ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x18008BAD0
 * Callers:
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800CA7C0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18001CBC4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?ForEachStream@@YAX$$QEAV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18011177C (-ForEachStream@@YAX$$QEAV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 */

__int64 __fastcall CAudioResourceManager::ReevaluateStreamsOnStreamGroup(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IStreamGroupProxy *a3)
{
  __int64 v3; // rdx
  _QWORD v5[8]; // [rsp+20h] [rbp-50h] BYREF
  struct EndpointCharacteristicsDescriptor *v6; // [rsp+88h] [rbp+18h] BYREF
  struct IStreamGroupProxy *v7; // [rsp+90h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  v5[0] = off_180174FD8;
  v5[1] = &v7;
  v5[2] = (char *)this - 8;
  v5[3] = &v6;
  v5[7] = v5;
  ForEachStream(v5);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)v5, v3);
  return 0LL;
}
