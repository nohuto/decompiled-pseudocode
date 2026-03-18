/*
 * XREFs of FreeInputContext @ 0x140283300
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1401BCDF8 (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall FreeInputContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19788) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 832LL);
    while ( v4 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 56);
      if ( v4 == a1 )
      {
        tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=((_QWORD *)(v5 + 56), *(_QWORD *)(a1 + 56));
        return HMFreeObject(a1);
      }
    }
    return HMFreeObject(a1);
  }
  return result;
}
