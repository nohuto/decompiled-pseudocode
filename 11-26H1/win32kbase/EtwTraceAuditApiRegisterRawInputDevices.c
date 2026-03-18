/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1400DC180
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1400DC394 (-EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJE.c)
 *     McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer @ 0x1400DC46C (McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall EtwTraceAuditApiRegisterRawInputDevices(
        int a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        struct tagTHREADINFO *a6,
        PVOID BaseAddress,
        __int64 a8,
        char a9)
{
  PEPROCESS *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r13
  char *v15; // rsi
  const WCHAR *v16; // r14
  char ProcessStartKey; // bl
  int v18; // edi
  unsigned int ThreadInfoFlags; // eax
  int v20; // r8d
  PVOID Buffer; // [rsp+C8h] [rbp-80h] BYREF
  LONGLONG TimeQuadPart; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-58h]
  __int128 v26; // [rsp+100h] [rbp-48h]

  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x400) != 0
    && (qword_1402A9DC8 & 0x400) == qword_1402A9DC8 )
  {
    MemoryInformation = 0LL;
    Buffer = 0LL;
    v25 = 0LL;
    v9 = (PEPROCESS *)*((_QWORD *)a6 + 57);
    v26 = 0LL;
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v9);
    v23 = a8;
    v10 = EtwpTraceAuditApiQueryAddressVADInformation(
            BaseAddress,
            &MemoryInformation,
            (struct _OBJECT_NAME_INFORMATION **)&Buffer);
    v14 = v10;
    if ( v10 < 0 )
    {
      MemoryInformation = 0LL;
      v25 = 0LL;
      v26 = 0LL;
    }
    v15 = (char *)Buffer;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    {
      if ( Buffer )
        v16 = (const WCHAR *)*((_QWORD *)Buffer + 1);
      else
        v16 = &word_14026AF94;
      ProcessStartKey = PsGetProcessStartKey(**((_QWORD **)a6 + 57));
      v18 = *(_DWORD *)(*((_QWORD *)a6 + 57) + 56LL);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(a6);
      McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer(
        DWORD2(MemoryInformation),
        ThreadInfoFlags,
        v20,
        a1,
        a2,
        a3,
        a4,
        a5,
        (char)BaseAddress,
        (__int64)&v23,
        a9,
        *((_DWORD *)a6 + 233),
        *((_DWORD *)a6 + 234),
        ThreadInfoFlags,
        v18,
        (__int64)&TimeQuadPart,
        ProcessStartKey,
        (__int64)v16,
        v14,
        SBYTE8(MemoryInformation),
        v25,
        SBYTE8(v26),
        SBYTE8(v25),
        SBYTE4(v26));
    }
    if ( v15 )
      GreDeleteFastMutex(v15, v11, v12, v13);
  }
}
