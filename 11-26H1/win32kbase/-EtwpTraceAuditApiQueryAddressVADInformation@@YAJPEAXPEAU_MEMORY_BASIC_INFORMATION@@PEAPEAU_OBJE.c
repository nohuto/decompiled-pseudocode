/*
 * XREFs of ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1400DC394
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1400DC180 (EtwTraceAuditApiRegisterRawInputDevices.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall EtwpTraceAuditApiQueryAddressVADInformation(
        PVOID BaseAddress,
        PVOID MemoryInformation,
        struct _OBJECT_NAME_INFORMATION **a3)
{
  char *v3; // rbx
  NTSTATUS VirtualMemory; // edi
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = 0LL;
  if ( !BaseAddress )
    return 3221225485LL;
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    v7 = (char *)Win32AllocPoolZInitImpl(256LL, 0x200uLL, 0x6D6D4B45u);
    v3 = v7;
    if ( v7 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        MemorySectionName,
                        v7,
                        0x200uLL,
                        0LL);
      if ( VirtualMemory < 0 )
      {
        GreDeleteFastMutex(v3, v8, v9, v10);
        v3 = 0LL;
      }
    }
  }
  *a3 = (struct _OBJECT_NAME_INFORMATION *)v3;
  return (unsigned int)VirtualMemory;
}
