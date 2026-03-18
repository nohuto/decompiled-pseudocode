/*
 * XREFs of HUBDESC_ValidateMsOs20VendorRevision @ 0x140040100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20VendorRevision(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  int v5; // edx
  char v7; // bp
  __int64 v8; // rdx
  int v9; // edx

  v3 = *a2;
  v5 = 1024;
  v7 = 1;
  if ( (v3 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v5, 5, 364, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    v8 = 258LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
    goto LABEL_14;
  }
  if ( *a3 != 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x16Du,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a3);
    v8 = 259LL;
    goto LABEL_5;
  }
  if ( a3[2] )
  {
    *((_QWORD *)a2 + 8) = a3;
    *a2 = v3 | 0x400;
    return v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)a2 + 12),
      2u,
      5u,
      0x16Eu,
      (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
      0);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 260LL);
LABEL_14:
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v9, 5, 367, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v7;
}
