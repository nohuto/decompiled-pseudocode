/*
 * XREFs of ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x14004F204
 * Callers:
 *     DxgkMapPhysicalMemoryCB @ 0x14004F1C0 (DxgkMapPhysicalMemoryCB.c)
 *     SysMmTestMapPhysicalObject @ 0x14009D6F0 (SysMmTestMapPhysicalObject.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288370 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmMapContiguousMemory @ 0x14004F49C (SmmMapContiguousMemory.c)
 *     SmmMapMdl @ 0x14004F568 (SmmMapMdl.c)
 *     SmmValidateParameters_0 @ 0x14004F880 (SmmValidateParameters_0.c)
 *     McTemplateK0pqxxpxx_EtwWriteTransfer @ 0x140068538 (McTemplateK0pqxxpxx_EtwWriteTransfer.c)
 *     SmmMapIoSpace @ 0x14009D004 (SmmMapIoSpace.c)
 *     SmmMapSection @ 0x140288010 (SmmMapSection.c)
 *     SmmMapVirtualMemory @ 0x140288208 (SmmMapVirtualMemory.c)
 */

__int64 __fastcall SysMmMapPhysicalObject(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  char v8; // r13
  __int64 v10; // r12
  unsigned int v12; // edx
  unsigned __int64 *v13; // rsi
  void **v14; // r15
  unsigned __int64 *v15; // r14
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned int v20; // edi
  int v22; // edx
  int v23; // [rsp+20h] [rbp-58h]

  v8 = a2;
  v10 = a3;
  if ( (a5 & 1) == 0 || (unsigned __int8)SmmValidateParameters_0(a1, a2) )
  {
    v12 = *((_DWORD *)a1 + 11);
    if ( ((v12 >> 1) & 0xF) == 1 )
    {
      v13 = a8;
      v15 = a7;
      v14 = a6;
      v22 = (v12 >> 11) & 3;
      v23 = v22;
      LOBYTE(v22) = v8;
      v16 = SmmMapSection(*((_QWORD *)a1 + 1), v22, v10, a4, v23, (__int64)a6, (__int64)a7, (__int64)a8);
    }
    else
    {
      switch ( (*((_DWORD *)a1 + 11) >> 1) & 0xF )
      {
        case 2:
          v13 = a8;
          v15 = a7;
          LOBYTE(a3) = v8;
          v14 = a6;
          v16 = SmmMapMdl(a1, *((_QWORD *)a1 + 1), a3, v10, a4, (v12 >> 11) & 3, a6, a7, a8);
          break;
        case 3:
          v13 = a8;
          v15 = a7;
          v14 = a6;
          v16 = SmmMapIoSpace(*((_QWORD *)a1 + 1), v10, a4, (v12 >> 11) & 3, (__int64)a6, (__int64)a7, (__int64)a8);
          break;
        case 4:
          v13 = a8;
          v14 = a6;
          v15 = a7;
          v16 = SmmMapVirtualMemory(*((_QWORD *)a1 + 1), v10, a4, (_DWORD)a6, (__int64)a7, (__int64)a8);
          break;
        case 5:
          v13 = a8;
          v14 = a6;
          v15 = a7;
          v16 = SmmMapContiguousMemory(*((_QWORD *)a1 + 1), v10, a4, (_DWORD)a6, (__int64)a7, (__int64)a8);
          break;
        default:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 749;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0", 749LL, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741822;
      }
    }
    v20 = v16;
    if ( v16 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
        McTemplateK0pqxxpxx_EtwWriteTransfer(v18, v17, v19, (_DWORD)a1, v8, v10, a4, (char)*v14, *v15, *v13);
    }
    return v20;
  }
  return 3221225485LL;
}
