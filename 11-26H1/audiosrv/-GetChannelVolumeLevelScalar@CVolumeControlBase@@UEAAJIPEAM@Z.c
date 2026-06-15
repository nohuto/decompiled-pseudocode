/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180050D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180050EB4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v7; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( (unsigned int)v4 >= *((_DWORD *)this + 29) )
  {
    v7 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevelScalar", 542, v7);
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v7 = -2147467261;
    goto LABEL_10;
  }
  if ( v4 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  *a3 = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + ((unsigned __int64)(unsigned int)v4 << 6)));
  v7 = 0;
LABEL_5:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
