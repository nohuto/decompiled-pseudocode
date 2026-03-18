/*
 * XREFs of ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400418B8
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x14001B9F4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BB00 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140075BA8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 */

char __fastcall OPTAPIDCOBJ::bValid(OPTAPIDCOBJ *this)
{
  __int64 v2; // rdx
  DC *v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax

  if ( !*(_QWORD *)this )
  {
    if ( *((_BYTE *)this + 113) == 1 )
      return 0;
    XDCOBJ::vLockIgnoreAttributes(this, *((HDC *)this + 13));
    if ( *(_QWORD *)this )
    {
      v5 = XDCOBJ::SaveAttributes(this);
      v3 = *(DC **)this;
      if ( v5 )
      {
        if ( (*((_DWORD *)v3 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v3);
      }
      else
      {
        OBJECT::InterlockedDecrementExclusiveLockCount(v3);
        *(_QWORD *)this = 0LL;
      }
    }
    v6 = *(_QWORD *)this;
    *((_BYTE *)this + 113) = 1;
    if ( !v6 )
      return 0;
    if ( *(_WORD *)(v6 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      XDCOBJ::vUnlock(this);
      return 0;
    }
  }
  return 1;
}
