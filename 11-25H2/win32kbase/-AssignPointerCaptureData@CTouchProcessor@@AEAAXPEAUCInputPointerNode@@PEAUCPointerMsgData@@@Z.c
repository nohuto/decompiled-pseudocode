/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1401FA87C
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401FC964 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int64 *v9; // rcx
  __int64 v10; // rdx

  v3 = 0LL;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10097);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10098);
  v6 = *((_DWORD *)a3 + 9);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 8) != 0 )
      goto LABEL_16;
    v7 = *((_QWORD *)a2 + 32);
    if ( (struct CInputPointerNode *)v7 != (struct CInputPointerNode *)((char *)a2 + 256) )
    {
      v3 = *((_QWORD *)a2 + 32);
      if ( (*(_DWORD *)(v7 + 36) & 0x80u) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10114);
    }
    if ( (*((_DWORD *)a3 + 9) & 2) != 0 || !v3 || (*(_DWORD *)(v3 + 36) & 1) != 0 )
      goto LABEL_16;
    if ( !*(_QWORD *)(v3 + 40) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10124);
    v8 = *(_QWORD *)(v3 + 40);
    if ( !v8 )
    {
LABEL_16:
      v8 = Win32AllocPoolZInitImpl(256LL, 0x138uLL, 0x43707355u);
      if ( !v8 )
        return;
      *(_WORD *)(v8 + 20) = *((_WORD *)a3 + 8);
      *(_DWORD *)(v8 + 24) = *((_DWORD *)a3 + 7);
      v9 = (__int64 *)((char *)a2 + 240);
      v10 = *((_QWORD *)a2 + 30);
      if ( *(struct CInputPointerNode **)(v10 + 8) != (struct CInputPointerNode *)((char *)a2 + 240) )
        __fastfail(3u);
      *(_QWORD *)v8 = v10;
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)(v10 + 8) = v8;
      *v9 = v8;
    }
    *((_QWORD *)a3 + 5) = v8;
    if ( (*(_DWORD *)(v8 + 16))++ == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10147);
  }
}
