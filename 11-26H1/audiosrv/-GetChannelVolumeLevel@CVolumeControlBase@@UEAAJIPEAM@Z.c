/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180064140
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevel(CVolumeControlBase *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v7; // rax
  unsigned int v8; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( (unsigned int)v4 >= *((_DWORD *)this + 29) )
  {
    v8 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevel", 575, v8);
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    goto LABEL_10;
  }
  if ( v4 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v7 = *((_QWORD *)this + 10);
  v8 = 0;
  *a3 = fmaxf(
          fminf(
            *(float *)(((unsigned __int64)(unsigned int)v4 << 6) + v7 + 4),
            *(float *)(((unsigned __int64)(unsigned int)v4 << 6) + v7 + 12)),
          *(float *)(((unsigned __int64)(unsigned int)v4 << 6) + v7 + 8));
LABEL_5:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
