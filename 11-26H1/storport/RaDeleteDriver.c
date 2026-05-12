/*
 * XREFs of RaDeleteDriver @ 0x140183DC0
 * Callers:
 *     RaDriverUnload @ 0x14004ECA0 (RaDriverUnload.c)
 *     StorPortInitialize @ 0x140076DD0 (StorPortInitialize.c)
 * Callees:
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1400723BC (McGenEventUnregister_EtwUnregister.c)
 *     RaFreeDriverInitData @ 0x14007329C (RaFreeDriverInitData.c)
 *     RaidRemovePortDriver @ 0x14007690C (RaidRemovePortDriver.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     StorpUnRegisterTraceLogging @ 0x140190464 (StorpUnRegisterTraceLogging.c)
 */

void __fastcall RaDeleteDriver(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 )
  {
    v2 = (_QWORD **)(a1 + 96);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v5 = v3 - 26;
      v4[1] = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (*(_DWORD *)(v3 - 3) & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))*(v3 - 5);
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      RaFreeDriverInitData((__int64)v3, v5);
    }
    *(_DWORD *)a1 = 0;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      RaidRemovePortDriver(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      RaidReleasePortData(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    if ( _InterlockedExchangeAdd(&g_RaidEtwRefCount, 0xFFFFFFFF) == 1 )
    {
      McGenEventUnregister_EtwUnregister();
      StorpUnRegisterTraceLogging();
    }
  }
}
