/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180070ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x1800B3190 (floorf.c)
 *     WPP_SF_dd @ 0x1800CFC30 (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800CFCD8 (WPP_SF_g.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // r9d
  float v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0.0;
  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
    goto LABEL_12;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 12);
  v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 136LL))(this, &v9);
  if ( v5 < 0 )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 311, v5);
    return (unsigned int)v5;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids);
  }
  v6 = *((_DWORD *)this + 12) - 1;
  v7 = (int)floorf((float)((float)v6 * v9) + 0.5);
  if ( v7 >= v6 )
    v7 = v6;
  *a2 = v7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids);
  }
  return (unsigned int)v5;
}
