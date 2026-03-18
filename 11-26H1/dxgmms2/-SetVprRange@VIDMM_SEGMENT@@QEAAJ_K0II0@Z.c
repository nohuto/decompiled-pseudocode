/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1400B74EC
 * Callers:
 *     InitializePhysicalAdapterSegments_0 @ 0x1400B1ED8 (InitializePhysicalAdapterSegments_0.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx

  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4593;
    goto LABEL_22;
  }
  v7 = *((_QWORD *)this + 20);
  if ( a2 >= v7 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4598;
LABEL_22:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 > v7 || (v10 = a3 + a2, v10 > v7) )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4603;
    goto LABEL_22;
  }
  v11 = a4 - 1LL;
  if ( (v11 & a3) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4609;
    goto LABEL_22;
  }
  if ( (v11 & a2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4614;
    goto LABEL_22;
  }
  if ( a5 > 1 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4623;
    goto LABEL_22;
  }
  if ( a6 && a5 != 1 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 4633;
    goto LABEL_22;
  }
  *((_DWORD *)this + 104) = a4;
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 105) = a5;
  *((_QWORD *)this + 51) = v11;
  *((_QWORD *)this + 59) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 53) = v10;
    *((_QWORD *)this + 54) = v10;
    if ( v10 == v7 )
      *((_BYTE *)this + 457) = 1;
  }
  return 0LL;
}
