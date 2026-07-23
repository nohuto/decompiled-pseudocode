/*
 * XREFs of VfPtFreePoolNotification @ 0x140C4AF8C
 * Callers:
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     DifNotifyPluginSystemEvent @ 0x1404CFE80 (DifNotifyPluginSystemEvent.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 *     VfFreeMemoryNotification @ 0x140C4B358 (VfFreeMemoryNotification.c)
 */

__int64 __fastcall VfPtFreePoolNotification(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]
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
      if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
      {
        while ( v4 < DifpPoolTagsSize )
        {
          if ( *((_DWORD *)&DifpPoolTags + v4) == a2 )
            goto LABEL_4;
          ++v4;
        }
      }
      else
      {
LABEL_4:
        ViPtLogPoolTraceWrapper(a4, a2, a3, 1LL);
      }
    }
    result = VfRuleClasses;
    if ( (VfRuleClasses & 0x20) != 0 || (VfRuleClasses & 0x10) != 0 || (VfRuleClasses & 0x800) != 0 )
      return VfFreeMemoryNotification(a1, a3);
  }
  return result;
}
