/*
 * XREFs of HalSocRequestApi @ 0x1404E885C
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x140593B28 (HalpApicSetupRegisterAccess.c)
 *     HalpHvCounterUpdateCallback @ 0x1405998D0 (HalpHvCounterUpdateCallback.c)
 *     HalpHvDiscover @ 0x140599910 (HalpHvDiscover.c)
 *     HalpHvTimerInitialize @ 0x140599A80 (HalpHvTimerInitialize.c)
 *     HalpApicTimerDiscover @ 0x14059B5D8 (HalpApicTimerDiscover.c)
 *     HalpApicTimerIsInvariant @ 0x14059B7DC (HalpApicTimerIsInvariant.c)
 *     HalpTscDiscover @ 0x14059B918 (HalpTscDiscover.c)
 *     HalpTscGetAttributes @ 0x14059BA64 (HalpTscGetAttributes.c)
 *     HalpApicGetCpuInfo @ 0x1405A3E14 (HalpApicGetCpuInfo.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpHvIsFrequencyAvailable @ 0x140587618 (HalpHvIsFrequencyAvailable.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalSocRequestApi(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  __int64 (__fastcall **v11)(); // rsi
  unsigned int v12; // ebx
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // r8
  _QWORD *i; // rax
  __int64 *MemoryInternal; // rax
  __int64 (__fastcall *v24)(); // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+28h] [rbp-38h] BYREF
  __int128 v26; // [rsp+38h] [rbp-28h] BYREF

  v5 = 0;
  v24 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v10 = a3 - 2;
  if ( v10 )
  {
    v14 = v10 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v12 = 8;
        v24 = HalpSocApiAllocatePhysicalMemory;
        v11 = &v24;
        goto LABEL_4;
      }
      v16 = (unsigned int)(v15 - 1);
      if ( !(_DWORD)v16 )
      {
        v11 = (__int64 (__fastcall **)())&v26;
        v26 = xmmword_140FBB3C8;
        v8 = &HalpTimerHvApicCallbackList;
        v9 = 1;
        goto LABEL_3;
      }
      if ( (_DWORD)v16 != 1 )
      {
        HalpTimerLastProblem = 27;
        return (unsigned int)-1073741811;
      }
      if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, v16, a4, v24) )
      {
        *(_QWORD *)&v25 = HalpHvGetTscFrequency;
        v11 = (__int64 (__fastcall **)())&v25;
        *((_QWORD *)&v25 + 1) = HalpHvGetApicFrequency;
        goto LABEL_3;
      }
    }
    else if ( HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      if ( (_RAX & 2) != 0 )
      {
        v11 = (__int64 (__fastcall **)())&HalpTimerHypervisorReferenceTime;
        HalpTimerHypervisorReferenceTime = qword_140FBB3E8;
        v8 = (__int64 *)&HalpTimerHvReferenceCallbackList;
        v12 = 8;
        v9 = 1;
        goto LABEL_4;
      }
    }
    return (unsigned int)-1073741637;
  }
  v11 = &HalpTimerPcCpuApi;
LABEL_3:
  v12 = 16;
LABEL_4:
  if ( !a5 || v6 > v12 )
  {
    HalpTimerLastProblem = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v12 )
  {
    v5 = -1073741789;
    HalpTimerLastProblem = 28;
    return v5;
  }
  if ( v9 )
  {
    if ( a2 )
    {
      for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
      {
        if ( i[1] == a2 )
          goto LABEL_8;
      }
      MemoryInternal = (__int64 *)HalpMmAllocateMemoryInternal(16LL);
      if ( !MemoryInternal )
        return (unsigned int)-1073741801;
      MemoryInternal[1] = a2;
      *MemoryInternal = *v8;
      *v8 = (__int64)MemoryInternal;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  memmove(a5, v11, v12);
  return v5;
}
