/*
 * XREFs of EmonInitializePebs @ 0x140BF3300
 * Callers:
 *     EmonInitializeProfilingBSP @ 0x140597F64 (EmonInitializeProfilingBSP.c)
 * Callees:
 *     <none>
 */

void EmonInitializePebs()
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  int v9; // eax

  IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[24] = 0;
  if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts >= 2u )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RDX & 0x200000) != 0 )
    {
      v5 = __readmsr(0x1A0u);
      if ( (v5 & 0x1000) == 0 )
      {
        IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] = 1;
        v6 = __readmsr(0x345u);
        v7 = ((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 8) & 0xF;
        if ( (_DWORD)v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                LODWORD(IommuInterfaceStateChangeCallbackPushLock.InGlobalForegroundList) = 200;
              else
                LODWORD(IommuInterfaceStateChangeCallbackPushLock.InGlobalForegroundList) = 0;
            }
            else
            {
              LODWORD(IommuInterfaceStateChangeCallbackPushLock.InGlobalForegroundList) = 192;
            }
          }
          else
          {
            LODWORD(IommuInterfaceStateChangeCallbackPushLock.InGlobalForegroundList) = 176;
          }
        }
        else
        {
          LODWORD(IommuInterfaceStateChangeCallbackPushLock.InGlobalForegroundList) = 144;
        }
        IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[24] = 1;
        HIDWORD(IommuInterfaceStateChangeCallbackPushLock.ForegroundDpcStackListEntry.Next) = 0;
      }
    }
  }
}
