/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x140030358
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x14001E47C (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x14001D388 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1400348DC (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x14003498C (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, _WORD *a2, __int64 a3, int a4)
{
  _WORD *v4; // rdi
  const void ***v6; // r8
  const void **v7; // r14
  unsigned __int16 v8; // ax
  __int64 v9; // rbx
  NTSTATUS v10; // ebx
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // rcx

  v4 = a2;
  *a2 = 0;
  v6 = (const void ***)(*a1 + 176LL);
  if ( *(_DWORD *)(*a1 + 168LL) == 3 && (v7 = *v6, LODWORD(a2) = *(unsigned __int16 *)*v6, (_WORD)a2) )
  {
    v8 = v4[1] - 2;
    v9 = v8;
    if ( v8 > 4u )
    {
      if ( (int)a2 >= v8 - 4 )
      {
        LOWORD(a2) = v4[1] - 6;
      }
      else
      {
        v11 = *(_WORD *)*v6;
        do
        {
          v12 = v11;
          v11 += 2;
          *(_WORD *)(*((_QWORD *)v4 + 1) + 2 * (v12 >> 1)) = 48;
        }
        while ( v11 < v8 - 4 );
      }
      memmove(*((void **)v4 + 1), v7[1], (unsigned __int16)a2);
      v10 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)(*((_QWORD *)v4 + 1) + 2 * ((unsigned __int64)(v9 - 4) >> 1)),
              6uLL,
              L"%02X",
              *(unsigned __int16 *)v7);
      if ( v10 >= 0 )
      {
        *v4 = v4[1] - 2;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x7Du,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v10);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), (_DWORD)a2, (_DWORD)v6, a4);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), (_DWORD)a2, (_DWORD)v6, a4);
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v10;
}
