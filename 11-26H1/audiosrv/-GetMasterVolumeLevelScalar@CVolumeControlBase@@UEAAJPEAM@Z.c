/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x1800540E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x180085804 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     pow @ 0x1800B31B4 (pow.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdi
  double v8; // xmm0_8
  double v9; // xmm2_8
  double v10; // xmm7_8
  float v11; // xmm0_4
  unsigned int v12; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a2 )
  {
    v12 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 509, -2147467261);
    goto LABEL_9;
  }
  v5 = *((unsigned int *)this + 28);
  if ( v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *((_QWORD *)this + 10);
  v7 = v5 << 6;
  v8 = pow(10.0, *(float *)(v7 + v6 + 4) / 20.0);
  v9 = v8;
  v10 = *(double *)(v7 + v6 + 32);
  if ( *(_DWORD *)(v7 + v6) == 1 )
  {
    if ( v8 <= 1.0 )
    {
LABEL_5:
      v9 = pow(v8, 1.0 / *(double *)(v7 + v6 + 56));
      goto LABEL_6;
    }
    v9 = 2.0 - pow(v8, -1.0 / *(double *)(v7 + v6 + 56));
  }
  else if ( *(_DWORD *)(v7 + v6) == 2 )
  {
    v8 = v8 / *(double *)(v7 + v6 + 40);
    goto LABEL_5;
  }
LABEL_6:
  v11 = fmax(fmin((v9 - *(double *)(v7 + v6 + 24)) / (v10 - *(double *)(v7 + v6 + 24)), 1.0), 0.0);
  *a2 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v11);
  }
  v12 = 0;
LABEL_9:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v12;
}
