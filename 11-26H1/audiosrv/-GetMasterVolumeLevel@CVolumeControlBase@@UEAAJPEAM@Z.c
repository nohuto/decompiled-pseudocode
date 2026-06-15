/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18001A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x180085804 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  float v7; // xmm0_4

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v5 = -2147467261;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 )
  {
    v6 = *((unsigned int *)this + 28);
    if ( v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v7 = fmaxf(
           fminf(
             *(float *)((v6 << 6) + *((_QWORD *)this + 10) + 4),
             *(float *)((v6 << 6) + *((_QWORD *)this + 10) + 12)),
           *(float *)((v6 << 6) + *((_QWORD *)this + 10) + 8));
    *a2 = v7;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
        this,
        *((_DWORD *)this + 28),
        v7);
    }
    v5 = 0;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevel", 0x1DBu, -2147467261);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
