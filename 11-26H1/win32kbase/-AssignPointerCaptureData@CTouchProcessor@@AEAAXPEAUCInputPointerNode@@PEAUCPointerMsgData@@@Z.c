/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x140147B44
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x14004D2F8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        PERESOURCE *this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx

  v3 = 0LL;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10080LL);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10081LL);
  v6 = *((_DWORD *)a3 + 9);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 8) != 0 )
      goto LABEL_18;
    v7 = *((_QWORD *)a2 + 32);
    if ( (struct CInputPointerNode *)v7 != (struct CInputPointerNode *)((char *)a2 + 256) )
    {
      v3 = *((_QWORD *)a2 + 32);
      if ( (*(_DWORD *)(v7 + 36) & 0x80u) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10097LL);
    }
    if ( (*((_DWORD *)a3 + 9) & 2) != 0 || !v3 || (*(_DWORD *)(v3 + 36) & 1) != 0 )
      goto LABEL_18;
    if ( !*(_QWORD *)(v3 + 40) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10107LL);
    v8 = *(_QWORD *)(v3 + 40);
    if ( !v8 )
    {
LABEL_18:
      v8 = Win32AllocPoolZInitImpl(256LL, 0x138uLL, 0x43707355u);
      if ( !v8 )
        return;
      *(_WORD *)(v8 + 20) = *((_WORD *)a3 + 8);
      *(_DWORD *)(v8 + 24) = *((_DWORD *)a3 + 7);
      v10 = (__int64 *)((char *)a2 + 240);
      v11 = *((_QWORD *)a2 + 30);
      if ( *(struct CInputPointerNode **)(v11 + 8) != (struct CInputPointerNode *)((char *)a2 + 240) )
        __fastfail(3u);
      *(_QWORD *)v8 = v11;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)(v11 + 8) = v8;
      *v10 = v8;
    }
    *((_QWORD *)a3 + 5) = v8;
    if ( (*(_DWORD *)(v8 + 16))++ == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10130LL);
  }
}
