/*
 * XREFs of VfVolatileSetDifRuleClass @ 0x14064B744
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     VfRlrsVolatileConfigUpdate @ 0x14064C1E4 (VfRlrsVolatileConfigUpdate.c)
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 *     CarInit @ 0x14064D6BC (CarInit.c)
 *     DifInit @ 0x14064F4A0 (DifInit.c)
 *     DifRegisterKernelPlugins @ 0x14064F5EC (DifRegisterKernelPlugins.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140C27DCC (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140C27E54 (VfInitDifWithoutReboot.c)
 */

__int64 __fastcall VfVolatileSetDifRuleClass(void *Src, size_t Size)
{
  size_t v2; // rbx
  __int64 v4; // r14
  int v5; // r12d
  char v6; // r15
  _DWORD *Pool2; // rdi
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // r8
  int inited; // ebx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdx

  v2 = (unsigned int)Size;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( InitSafeBootMode )
    return 3221228554LL;
  if ( (_DWORD)VfRuleClasses )
    return 3221228669LL;
  if ( (_DWORD)Size != 16 && (_DWORD)Size != 96 )
    return 3221225476LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  VfAllowedVolatileRC = 0LL;
  v9 = VfAllowedVolatileRCId;
  v10 = 23LL;
  v11 = &VfAllowedVolatileRC;
  do
  {
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 < 0x40u )
    {
      v4 = v12 >> 5;
      v5 = 1 << v12;
    }
    *((_DWORD *)&VfAllowedVolatileRC + v4) |= v5;
    v9 = (__int64 *)((char *)v9 + 4);
    --v10;
  }
  while ( v10 );
  if ( KeGetCurrentThread()->PreviousMode )
    RtlCopyFromUser(Pool2, Src, v2);
  else
    memmove(Pool2, Src, v2);
  v13 = 2LL;
  v14 = 2LL;
  do
  {
    if ( (*(_DWORD *)v11 & *(_DWORD *)((_BYTE *)v11 + (char *)Pool2 - (char *)&VfAllowedVolatileRC)) != 0 )
      v6 = 1;
    v11 = (__int64 *)((char *)v11 + 4);
    --v14;
  }
  while ( v14 );
  if ( !v6 )
  {
    inited = -1073738626;
LABEL_37:
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTags = 0LL;
    xmmword_140E68298 = 0LL;
    qword_140E682A8 = 0LL;
    MmVerifierData = 0;
    VfClearDifWithoutReboot();
    VfDifRunningWithoutReboot = 0;
    DifIsVolatileMode = 0;
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    LOBYTE(v20) = 1;
    VfRlrsVolatileConfigUpdate(Pool2 + 14, v20);
    CarCleanup();
    goto LABEL_40;
  }
  inited = VfInitDifWithoutReboot();
  if ( inited >= 0 )
  {
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(0x40uLL);
    if ( !ViWdmThunksWithIatIndex )
    {
      inited = -1073741801;
      goto LABEL_37;
    }
    v16 = (unsigned __int64)&VfRuleClasses;
    do
    {
      *(_DWORD *)v16 = *(_DWORD *)((char *)Pool2 - (char *)&VfRuleClasses + v16);
      v16 += 4LL;
      --v13;
    }
    while ( v13 );
    if ( (VfRuleClasses & 4) == 0 || (inited = VfRlrsVolatileConfigUpdate(Pool2 + 14, 0LL), inited >= 0) )
    {
      DifpPoolTagsSize = 0;
      DifpPoolTagsSizeBytes = 0;
      v17 = Pool2 + 4;
      v18 = 10LL;
      do
      {
        if ( *v17 )
        {
          v19 = DifpPoolTagsSize;
          *((_DWORD *)&DifpPoolTags + (unsigned int)DifpPoolTagsSize) = *v17;
          v16 = (unsigned int)(v19 + 1);
          DifpPoolTagsSize = v16;
          DifpPoolTagsSizeBytes += 4;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
      VfOptionFlags = Pool2[2];
      VfTriageContext = Pool2[3];
      MmVerifierData = VfRuleClasses;
      VfDifRunningWithoutReboot = 1;
      DifIsVolatileMode = 1;
      inited = CarInit(v16, v17);
      if ( inited >= 0 )
      {
        DifRebootlessRundown.Count = 0LL;
        DifInit();
        DifRegisterKernelPlugins();
      }
    }
  }
  if ( inited < 0 )
    goto LABEL_37;
LABEL_40:
  ExFreePoolWithTag(Pool2, 0x63536656u);
  return (unsigned int)inited;
}
