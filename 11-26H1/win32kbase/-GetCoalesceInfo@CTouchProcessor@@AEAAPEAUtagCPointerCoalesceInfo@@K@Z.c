/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140156D00
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x14019625C (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(PERESOURCE *this, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v6; // eax

  v3 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9189LL);
  if ( !(_DWORD)v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9190LL);
  v4 = (unsigned __int64)(this + 18);
  *((_DWORD *)this + 37) = 0;
  if ( *((_DWORD *)this + 36) < (unsigned int)v3 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v3 )
    {
      v6 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) <= 0xFFFFFFFF )
      {
        if ( v6 )
        {
          this[19] = (PERESOURCE)Win32AllocPoolZInitImpl(256LL, v6, 0x70647355u);
          *(_DWORD *)v4 = v3;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v4 & -(__int64)(this[19] != 0LL));
}
