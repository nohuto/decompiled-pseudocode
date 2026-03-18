/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x14003E254
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D22C (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x14002DC0C (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r13d
  int v8; // r15d
  __int64 v9; // rdx
  int v10; // edx
  char v11; // bl
  void (__fastcall **v13)(_QWORD, __int64); // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // r8
  __int16 v16; // cx
  int v17; // eax
  bool v18; // al
  int v19; // ecx
  unsigned __int16 v20; // r9
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v22; // [rsp+28h] [rbp-50h]
  void (__fastcall **v23)(_QWORD, __int64); // [rsp+30h] [rbp-48h]
  _QWORD *v24; // [rsp+80h] [rbp+8h]
  unsigned int v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  v5 = 0;
  if ( !a1 )
  {
    v8 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(a5, a2, 5, 259, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    v9 = 79LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v9);
    goto LABEL_6;
  }
  if ( a2 < 2 )
  {
    v8 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x104u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, a2);
    v9 = 71LL;
    goto LABEL_5;
  }
  v8 = a5;
  if ( *a1 >= 0x12u )
  {
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v14 = (_QWORD *)(a3 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x105u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v5 = 2;
    v14 = (_QWORD *)(a3 + 40);
  }
  v15 = v14;
  v23 = v13;
  v24 = v14;
  if ( a1[1] != 1 )
  {
    v23 = v13;
    v24 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = a1[1];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x106u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
      v23 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v24 = (_QWORD *)(a3 + 40);
      v14 = (_QWORD *)(a3 + 40);
    }
    ((void (__fastcall *)(_QWORD, __int64, _QWORD *))*v13)(*v14, 77LL, v15);
    v15 = v24;
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v14 = (_QWORD *)(a3 + 40);
    v5 = 2;
  }
  if ( v25 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v25;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x107u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
      v13 = v23;
      v14 = v24;
    }
    (*v13)(*v14, 71LL);
    goto LABEL_6;
  }
  v16 = *((_WORD *)a1 + 6);
  if ( (v16 & 0xF000u) > 0x9000
    || (v16 & 0xF00u) > 0x900
    || (v10 = 144, (*((_WORD *)a1 + 6) & 0xF0u) > 0x90)
    || (v16 & 0xFu) > 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = *((unsigned __int16 *)a1 + 6);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x108u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
      v15 = (_QWORD *)(a3 + 40);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*v15, 69LL);
  }
  if ( a1[4] == 17 && !a1[5] && !a1[6] )
  {
    v10 = 254;
    if ( (unsigned __int16)(*((_WORD *)a1 + 1) - 513) > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x109u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL, v15);
      v5 = 2;
    }
    else if ( a4 )
    {
      *a4 = 1;
    }
  }
  v17 = *(_DWORD *)(a3 + 4);
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v19 = a1[7];
      if ( (_BYTE)v19 != 8 && ((((_BYTE)v19 - 16) & 0xCF) != 0 || (_BYTE)v19 == 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 268;
          goto LABEL_70;
        }
LABEL_71:
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        v5 = 2;
      }
    }
    else
    {
      if ( v17 != 2 )
      {
        if ( v17 == 3 && a1[7] != 9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v22) = a1[7];
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x10Fu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
          }
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
            goto LABEL_6;
        }
        goto LABEL_77;
      }
      if ( a1[7] != 64 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = a1[7];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0x10Du, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
        ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
        v19 = a1[7];
        if ( ShouldEnforceWin8ValidationMutable )
          v5 = 2;
        if ( (_BYTE)v19 != 8 && ((((_BYTE)v19 - 16) & 0xCF) != 0 || (_BYTE)v19 == 48) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 270;
            goto LABEL_70;
          }
          goto LABEL_71;
        }
      }
    }
  }
  else if ( a1[7] != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = a1[7];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x10Au, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v15);
    v18 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
    v19 = a1[7];
    if ( v18 )
      v5 = 2;
    if ( (_BYTE)v19 != 8 && ((((_BYTE)v19 - 16) & 0xCF) != 0 || (_BYTE)v19 == 48) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 267;
LABEL_70:
        LODWORD(v22) = v19;
        WPP_RECORDER_SF_d(a5, 2u, 5u, v20, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v22);
        goto LABEL_71;
      }
      goto LABEL_71;
    }
  }
LABEL_77:
  if ( !v5 )
    return 1;
LABEL_6:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(v8, v10, 5, 272, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v11;
}
