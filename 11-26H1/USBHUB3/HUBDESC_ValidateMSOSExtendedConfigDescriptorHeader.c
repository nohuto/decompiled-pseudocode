/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003EB54
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x140025A60 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(int *a1, int a2, __int64 a3, __int64 a4)
{
  int *v6; // rax
  char v7; // bl
  int v8; // edx
  int v9; // ecx
  void (__fastcall **v10)(_QWORD, __int64); // r15
  _QWORD *v11; // r12
  int v12; // edx
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  void (__fastcall **v16)(_QWORD, __int64); // [rsp+40h] [rbp-38h]
  _QWORD *v17; // [rsp+48h] [rbp-30h]

  v6 = a1;
  v7 = 1;
  if ( a2 != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, a2, 16);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 122LL);
LABEL_5:
    v7 = 0;
    goto LABEL_24;
  }
  v9 = *((unsigned __int16 *)a1 + 2);
  if ( (_WORD)v9 == 256 )
  {
    v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v11 = (_QWORD *)(a3 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v9, 256);
    v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v11 = (_QWORD *)(a3 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 120LL);
    v6 = a1;
    v7 = 0;
  }
  v12 = 4;
  v16 = v10;
  v17 = v11;
  if ( *((_WORD *)v6 + 3) != 4 )
  {
    v16 = v10;
    v17 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = 4;
      LODWORD(v14) = *((unsigned __int16 *)v6 + 3);
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x120u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v14, v15);
      v16 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v17 = (_QWORD *)(a3 + 40);
    }
    (*v10)(*v11, 125LL);
    v6 = a1;
    v7 = 0;
  }
  if ( *((_BYTE *)v6 + 8) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(a4, v12, 5, 289, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      v10 = v16;
      v11 = v17;
    }
    (*v10)(*v11, 121LL);
    goto LABEL_5;
  }
  v8 = *v6;
  if ( *v6 == 40 )
  {
    if ( v7 )
      return v7;
  }
  else
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = 40;
      LODWORD(v14) = *v6;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x122u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v14, v15);
    }
    (*v16)(*v17, 127LL);
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(a4, v8, 5, 291, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v7;
}
