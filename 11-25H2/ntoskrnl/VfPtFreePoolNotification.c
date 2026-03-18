/*
 * XREFs of VfPtFreePoolNotification @ 0x140B99718
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifNotifyPluginSystemEvent @ 0x14060C9E8 (DifNotifyPluginSystemEvent.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
 *     VfFreeMemoryNotification @ 0x140B97A9C (VfFreeMemoryNotification.c)
 */

__int64 __fastcall VfPtFreePoolNotification(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  if ( a3 )
  {
    v4 = 0;
    v11 = a2;
    v12 = 0;
    *(_QWORD *)&v10 = a4;
    *((_QWORD *)&v10 + 1) = a3;
    DifNotifyPluginSystemEvent(1, &v10);
    DifObjTrkQeuryInvokeDeleteRange(a1, a3, 0LL, 0);
    if ( (VfRuleClasses & 8) != 0 )
    {
      if ( (unsigned int)(DifpPoolTagsSize - 1) > 9 )
      {
LABEL_7:
        ViPtLogPoolTraceWrapper(a4, a2, a3, 1);
      }
      else
      {
        while ( v4 < DifpPoolTagsSize )
        {
          if ( *((_DWORD *)&DifpPoolTags + v4) == a2 )
            goto LABEL_7;
          ++v4;
        }
      }
    }
    result = VfRuleClasses;
    if ( (VfRuleClasses & 0x20) != 0 || (VfRuleClasses & 0x10) != 0 || (VfRuleClasses & 0x800) != 0 )
      return VfFreeMemoryNotification(a1, a3);
  }
  return result;
}
