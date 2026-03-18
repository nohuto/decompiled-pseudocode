/*
 * XREFs of HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x14003E7AC
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x140025680 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMSOSContainerIDDescriptorHeader(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // bl
  int v7; // edx
  void (__fastcall **v8)(_QWORD, __int64); // r14
  _QWORD *v9; // r15
  _DWORD *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  void (__fastcall **v14)(_QWORD, __int64); // [rsp+40h] [rbp-38h]
  _QWORD *v15; // [rsp+48h] [rbp-30h]

  v6 = 1;
  if ( a2 == 8 )
  {
    if ( *(_WORD *)(a1 + 4) == 256 )
    {
      v8 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v9 = (_QWORD *)(a3 + 40);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          a4,
          2u,
          5u,
          0x112u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          *(unsigned __int16 *)(a1 + 4),
          256);
      v8 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v9 = (_QWORD *)(a3 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 115LL);
      v6 = 0;
    }
    v10 = (_DWORD *)a1;
    v7 = 6;
    v14 = v8;
    v15 = v9;
    if ( *(_WORD *)(a1 + 6) != 6 )
    {
      v14 = v8;
      v15 = v9;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = 6;
        LODWORD(v12) = *(unsigned __int16 *)(a1 + 6);
        WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x113u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v12, v13);
        v14 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
        v15 = (_QWORD *)(a3 + 40);
      }
      (*v8)(*v9, 116LL);
      v10 = (_DWORD *)a1;
      v6 = 0;
    }
    if ( *v10 == 24 )
    {
      if ( v6 )
        return v6;
      goto LABEL_20;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = 24;
      LODWORD(v12) = *v10;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x114u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v12, v13);
      v8 = v14;
      v9 = v15;
    }
    (*v8)(*v9, 118LL);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x111u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 117LL);
  }
  v6 = 0;
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(a4, v7, 5, 277, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v6;
}
