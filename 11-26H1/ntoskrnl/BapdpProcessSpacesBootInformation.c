/*
 * XREFs of BapdpProcessSpacesBootInformation @ 0x1406CEC00
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessSpacesBootInformation(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _DWORD v4[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+10h] BYREF

  v4[0] = -408036172;
  v4[1] = 1161419828;
  v4[2] = -1108642150;
  v4[3] = 2121252359;
  v5 = 0;
  if ( (unsigned int)BapdpQueryData(a1, v4, 0LL, 0LL, &v5, 0LL) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)BapdpQueryData(v2, v4, 0LL, Pool2 + 8, &v5, 0LL) < 0 )
      {
        ExFreePoolWithTag(v3, 0);
      }
      else
      {
        *v3 = v5;
        ExpSysDbgLock.SchedulerApc.Reserved[2] = v3;
      }
    }
  }
}
