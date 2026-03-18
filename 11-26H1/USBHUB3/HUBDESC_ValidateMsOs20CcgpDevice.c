/*
 * XREFs of HUBDESC_ValidateMsOs20CcgpDevice @ 0x14003EDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CcgpDevice(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  int v5; // edx
  char v7; // si
  __int64 v8; // rdx
  int v9; // edx

  v3 = *a2;
  v5 = 512;
  v7 = 1;
  if ( (v3 & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v5, 5, 361, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    v8 = 201LL;
  }
  else
  {
    if ( *a3 == 4 )
    {
      *((_QWORD *)a2 + 7) = a3;
      *a2 = v3 | 0x200;
      return v7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x16Au,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a3);
    v8 = 202LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v9, 5, 363, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v7;
}
