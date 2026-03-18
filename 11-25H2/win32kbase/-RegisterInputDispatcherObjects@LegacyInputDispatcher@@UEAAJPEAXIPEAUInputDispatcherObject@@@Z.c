/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1402109C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x14018A5BC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  unsigned int i; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( a3 + *((_DWORD *)this + 13) <= *((_DWORD *)this + 11) )
  {
    if ( !*((_QWORD *)this + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3085);
    for ( i = 0; i < a3; *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11 + 8) = a2 )
    {
      v10 = *(_QWORD *)a4;
      v11 = i + *((_DWORD *)this + 13);
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v11) = v10;
      v11 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v11) = *((_QWORD *)a4 - 1);
    }
    if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
      *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) += a3;
    return 0LL;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3081);
    return 3221225485LL;
  }
}
