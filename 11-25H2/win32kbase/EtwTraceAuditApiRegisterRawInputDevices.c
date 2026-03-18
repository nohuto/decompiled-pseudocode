/*
 * XREFs of EtwTraceAuditApiRegisterRawInputDevices @ 0x1400A4BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1400A4DC4 (-EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJE.c)
 *     McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer @ 0x1400A4EAC (McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400A5530 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
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
  char v11; // r13
  PVOID v12; // rsi
  const WCHAR *v13; // r14
  char ProcessStartKey; // bl
  int v15; // edi
  unsigned int ThreadInfoFlags; // eax
  int v17; // r8d
  PVOID P; // [rsp+C8h] [rbp-80h] BYREF
  LONGLONG TimeQuadPart; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+F0h] [rbp-58h]
  __int128 v23; // [rsp+100h] [rbp-48h]

  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x400) != 0
    && (qword_14029EDA8 & 0x400) == qword_14029EDA8 )
  {
    P = 0LL;
    MemoryInformation = 0LL;
    v9 = (PEPROCESS *)*((_QWORD *)a6 + 58);
    v22 = 0LL;
    v23 = 0LL;
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v9);
    v20 = a8;
    v10 = EtwpTraceAuditApiQueryAddressVADInformation(
            BaseAddress,
            &MemoryInformation,
            (struct _OBJECT_NAME_INFORMATION **)&P);
    v11 = v10;
    if ( v10 < 0 )
    {
      MemoryInformation = 0LL;
      v22 = 0LL;
      v23 = 0LL;
    }
    v12 = P;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    {
      if ( P )
        v13 = (const WCHAR *)*((_QWORD *)P + 1);
      else
        v13 = &word_14025FAA8;
      ProcessStartKey = PsGetProcessStartKey(**((_QWORD **)a6 + 58));
      v15 = *(_DWORD *)(*((_QWORD *)a6 + 58) + 56LL);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(a6);
      McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer(
        DWORD2(MemoryInformation),
        ThreadInfoFlags,
        v17,
        a1,
        a2,
        a3,
        a4,
        a5,
        (char)BaseAddress,
        (__int64)&v20,
        a9,
        *((_DWORD *)a6 + 236),
        *((_DWORD *)a6 + 237),
        ThreadInfoFlags,
        v15,
        (__int64)&TimeQuadPart,
        ProcessStartKey,
        (__int64)v13,
        v11,
        SBYTE8(MemoryInformation),
        v22,
        SBYTE8(v23),
        SBYTE8(v22),
        SBYTE4(v23));
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x6D6D4B45u);
  }
}
