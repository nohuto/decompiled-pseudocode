/*
 * XREFs of PoFxRegisterDebugger @ 0x140CDC3E8
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PoFxActivateComponent @ 0x14037C860 (PoFxActivateComponent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PoFxRegisterDebugger()
{
  wchar_t *v0; // r14
  _DWORD *Pool2; // rdi
  unsigned int v2; // r12d
  _DWORD *v3; // rbx
  int v4; // r15d
  int v5; // ecx
  ULONG_PTR v6; // rsi
  wchar_t *v7; // rax
  wchar_t *v8; // rdx
  ULONG_PTR v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v17[6]; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall *v18)(__int64, __int64, char); // [rsp+90h] [rbp-78h]
  int v19; // [rsp+B8h] [rbp-50h]
  __int128 *v20; // [rsp+C0h] [rbp-48h]
  __int128 v21; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-30h]
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset_0(v17, 0, 0x50uLL);
  BugCheckParameter2 = 0LL;
  v0 = 0LL;
  DestinationString_8 = 0LL;
  if ( (unsigned int)guard_dispatch_icall_no_overrides(33LL, 0LL) == -2147483643 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0LL, 0x4D584650u);
    if ( Pool2 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(33LL, 0LL) >= 0 )
      {
        v2 = 0;
        v3 = Pool2 + 1;
        v4 = 0;
        if ( *Pool2 )
        {
          while ( 1 )
          {
            v3 = (_DWORD *)((char *)v3 + v2);
            v2 = v3[1];
            if ( *v3 == 1 )
            {
              v5 = v3[2];
              if ( v5 )
                break;
            }
            if ( !*v3 )
            {
              LODWORD(v13) = (v3[4] >> 5) & 7;
              LODWORD(v12) = v3[4] & 0x1F;
              LODWORD(v11) = v3[3];
              RtlStringCbPrintfW(
                pszDest,
                0x30uLL,
                L"PCI_DEBUG_%04X_%02X_%02X_%02X",
                *((unsigned __int16 *)v3 + 4),
                v11,
                v12,
                v13);
              v8 = pszDest;
LABEL_13:
              RtlInitUnicodeString(&DestinationString_8, v8);
              v22 = 0LL;
              v21 = 0LL;
              memset_0(v17, 0, 0x50uLL);
              v17[0] = 1;
              v20 = &v21;
              v17[1] = 1;
              v18 = PopFxDebuggerPowerCriticalTransitionCallback;
              v19 = 1;
              if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString_8, (__int64)v17, &BugCheckParameter2) < 0 )
                goto LABEL_18;
              v9 = BugCheckParameter2;
              v10 = *(_QWORD *)(BugCheckParameter2 + 64);
              *(_DWORD *)(BugCheckParameter2 + 864) |= 2u;
              DestinationString = 0LL;
              if ( v10 )
              {
                DestinationString = *(_QWORD *)(v9 + 72);
                guard_dispatch_icall_no_overrides(21LL, (__int64)&DestinationString);
              }
              PoFxActivateComponent(v9, 0LL, 1);
              PoFxStartDevicePowerManagement(v9);
            }
            if ( (unsigned int)++v4 >= *Pool2 )
              goto LABEL_18;
          }
          if ( KeGetCurrentPrcb()->CpuVendor == 2 )
          {
            v6 = (unsigned int)(2 * v5 + 22);
            v7 = (wchar_t *)ExAllocatePool2(64LL, v6, 0x4D584650u);
            v0 = v7;
            if ( !v7 )
              goto LABEL_18;
            RtlStringCbPrintfW(v7, (unsigned int)v6, L"ACPI\\DEBUG%ws", v3 + 3);
            v8 = v0;
          }
          else
          {
            v8 = (wchar_t *)(v3 + 3);
          }
          goto LABEL_13;
        }
      }
LABEL_18:
      ExFreePoolWithTag(Pool2, 0x4D584650u);
      if ( v0 )
        ExFreePoolWithTag(v0, 0x4D584650u);
    }
  }
}
