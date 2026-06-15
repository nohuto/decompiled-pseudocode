/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x1800795E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v6 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_11;
  if ( a2 == -1 )
    a2 = *((_DWORD *)this + 28);
  if ( a2 >= *((_DWORD *)this + 29) )
  {
    v6 = -2147024809;
LABEL_11:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeRange", 266, v6);
    return v6;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v7 = *((_QWORD *)this + 10);
  v8 = (unsigned __int64)a2 << 6;
  v6 = 0;
  *a3 = *(float *)(v8 + v7 + 8);
  *a4 = *(float *)(v8 + v7 + 12);
  *a5 = *(float *)(v8 + v7 + 16);
  return v6;
}
