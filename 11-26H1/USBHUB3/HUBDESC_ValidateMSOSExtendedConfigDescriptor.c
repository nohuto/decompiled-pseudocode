/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003E9A8
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1400258C0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

bool __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptor(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  bool v7; // bl
  _BYTE *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int8 v11; // al
  _BYTE *v12; // rcx
  unsigned int i; // edx
  unsigned __int8 v14; // al
  __int64 v15; // rdx

  v4 = a4;
  v5 = a3;
  v7 = 1;
  if ( a2 != *a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x119u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, a2, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), 126LL);
    v7 = !HUBDESC_ShouldEnforceWin8ValidationImmutable(v5);
  }
  LOBYTE(a3) = 0;
  v8 = (char *)a1 + 18;
  v9 = 0;
  v10 = 0x87FFFFFE03FFLL;
  do
  {
    if ( *v8 )
    {
      if ( (_BYTE)a3 || (v11 = *v8 - 48, v11 > 0x2Fu) || !_bittest64(&v10, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(v4, v9, 5, 283, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v15 = 123LL;
LABEL_27:
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), v15, a3, v10);
        v7 = 0;
        goto LABEL_28;
      }
    }
    else
    {
      LOBYTE(a3) = 1;
    }
    ++v9;
    ++v8;
  }
  while ( v9 < 8 );
  LOBYTE(a3) = 0;
  v12 = (char *)a1 + 26;
  for ( i = 0; i < 8; ++i )
  {
    if ( *v12 )
    {
      if ( (_BYTE)a3 || (v14 = *v12 - 48, v14 > 0x2Fu) || !_bittest64(&v10, v14) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(i) = 2;
          WPP_RECORDER_SF_(v4, i, 5, 284, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v15 = 124LL;
        goto LABEL_27;
      }
    }
    else
    {
      LOBYTE(a3) = 1;
    }
    ++v12;
  }
  if ( v7 )
    return v7;
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(i) = 2;
    WPP_RECORDER_SF_(v4, i, 5, 285, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v7;
}
