/*
 * XREFs of HUBDESC_Validate20HubDescriptor @ 0x14003D030
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x14000A210 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // r10
  unsigned __int8 *v7; // rax
  char v8; // bl
  void (__fastcall **v10)(_QWORD, __int64); // rbx
  _QWORD *v11; // r13
  int v12; // eax
  unsigned int v13; // ecx
  bool ShouldEnforceWin8ValidationImmutable; // al
  unsigned __int8 *v15; // r10
  bool ShouldEnforceWin8ValidationMutable; // al
  int v17; // ebx
  unsigned int v18; // r8d
  unsigned __int8 v19; // dl
  unsigned int i; // ebx
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  unsigned int v23; // [rsp+40h] [rbp-58h]
  unsigned int v24; // [rsp+44h] [rbp-54h]
  void (__fastcall **v25)(_QWORD, __int64); // [rsp+48h] [rbp-50h]
  _QWORD *v26; // [rsp+48h] [rbp-50h]
  _QWORD *v27; // [rsp+50h] [rbp-48h]
  void (__fastcall **v28)(_QWORD, __int64); // [rsp+50h] [rbp-48h]
  unsigned int v30; // [rsp+A8h] [rbp+10h]

  v4 = 0;
  v5 = a4;
  v7 = a1;
  if ( a1 )
  {
    if ( a1[2] )
    {
      v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v11 = (_QWORD *)(a3 + 40);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x135u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, 0);
      v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v11 = (_QWORD *)(a3 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
      v5 = a4;
      v4 = 2;
      v7 = a1;
    }
    v12 = v7[2];
    v24 = (unsigned int)(v12 + 7) >> 3;
    v30 = (unsigned int)(v12 + 8) >> 3;
    v13 = v24 + 7 + v30;
    v23 = v13;
    if ( *a1 < v13 )
    {
      v25 = v10;
      v27 = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = *a1;
        WPP_RECORDER_SF_dD(
          v5,
          2u,
          5u,
          0x136u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v21,
          v24 + 7 + ((unsigned int)(v12 + 8) >> 3));
        v25 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
        v27 = (_QWORD *)(a3 + 40);
      }
      (*v10)(*v11, 1LL);
      ShouldEnforceWin8ValidationImmutable = HUBDESC_ShouldEnforceWin8ValidationImmutable(a3);
      v13 = v23;
      if ( ShouldEnforceWin8ValidationImmutable )
      {
        v10 = v25;
        v4 = 2;
        v11 = v27;
      }
    }
    v15 = a1;
    if ( *a1 > v13 )
    {
      v28 = v10;
      v26 = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v13;
        LODWORD(v21) = *a1;
        WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x137u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v21, v22);
        v28 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
        v26 = (_QWORD *)(a3 + 40);
      }
      (*v10)(*v11, 0LL);
      ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
      v15 = a1;
      if ( ShouldEnforceWin8ValidationMutable )
      {
        v10 = v28;
        v4 = 2;
        v11 = v26;
      }
    }
    if ( v15[1] != 41 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v15[1];
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x138u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v21);
      }
      (*v10)(*v11, 6LL);
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a3) )
        v4 = 2;
    }
    v17 = *(unsigned __int16 *)(a1 + 3);
    if ( (v17 & 2) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = *(unsigned __int16 *)(a1 + 3);
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x139u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v21);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (v17 & 0xFF00) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v17;
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x13Au, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v21);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (a1[7] & 1) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2, 5, 315, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
    }
    v18 = v30;
    v19 = -1 << ((a1[2] + 1) & 7);
    if ( v19 != 0xFF && (v19 & a1[v30 + 6]) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2, 5, 316, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
      v18 = v30;
    }
    for ( i = 0; i < v24; ++i )
    {
      if ( a1[i + 7 + v18] != 0xFF )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
          v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a4, 2, 5, 317, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
        v18 = v30;
      }
    }
    if ( !v4 )
      return 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2, 5, 307, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
  }
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2, 5, 318, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  return v8;
}
