/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x140142F1C
 * Callers:
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14010AA14 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401429E4 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(PERESOURCE *this, struct CInputPointerNode *a2)
{
  char **v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  struct CInputPointerNode **v7; // rcx
  char *v8; // rax
  __int64 v9; // rcx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10848LL);
  if ( *((_DWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10850LL);
  if ( *((struct CInputPointerNode **)a2 + 32) != (struct CInputPointerNode *)((char *)a2 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10851LL);
  if ( *((struct CInputPointerNode **)a2 + 30) != (struct CInputPointerNode *)((char *)a2 + 240) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10852LL);
  v6 = *(_QWORD *)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_15;
  v7 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v7 != a2 )
    goto LABEL_15;
  *v7 = (struct CInputPointerNode *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v9 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_12;
  if ( *(char **)(v9 + 8) != v8 || (v3 = (char **)*((_QWORD *)a2 + 3), *v3 != v8) )
LABEL_15:
    __fastfail(3u);
  *v3 = (char *)v9;
  *(_QWORD *)(v9 + 8) = v3;
LABEL_12:
  if ( *((_DWORD *)a2 + 18) )
    CInputDest::~CInputDest((struct CInputPointerNode *)((char *)a2 + 72));
  GreDeleteFastMutex((char *)a2, (__int64)v3, v4, v5);
}
