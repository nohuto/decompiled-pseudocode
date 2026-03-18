/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x14003EEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, _BYTE *a2, _WORD *a3, __int64 a4)
{
  char v4; // bl
  _WORD *v5; // r14
  _BYTE *v6; // rdi
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v12; // r10
  int v13; // ecx
  int v14; // r9d
  int v15; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = a3;
  v6 = a2;
  LOBYTE(a4) = 1;
  if ( (*a2 & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)v6 + 12),
        (_DWORD)a2,
        5,
        338,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64, _WORD *, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL, a3, a4);
    LOBYTE(a4) = 0;
  }
  if ( *v5 != 20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 339;
      v15 = (unsigned __int16)*v5;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  LOBYTE(a3) = 0;
  v10 = 0;
  v12 = 0x87FFFFFE03FFLL;
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)v5 + v10 + 4);
    if ( !(_BYTE)v13 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_23;
    }
    if ( (_BYTE)a3 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 340;
        goto LABEL_33;
      }
LABEL_34:
      v9 = 168LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v13 - 48) > 0x2Fu || !_bittest64(&v12, (unsigned __int8)(v13 - 48)) )
      break;
LABEL_23:
    if ( ++v10 >= 8 )
    {
      LOBYTE(a3) = 0;
      v10 = 0;
      while ( 1 )
      {
        v13 = *((unsigned __int8 *)v5 + v10 + 12);
        if ( (_BYTE)v13 )
        {
          if ( (_BYTE)a3 == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v14 = 342;
LABEL_33:
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)v6 + 12),
              v10,
              5,
              v14,
              (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
            goto LABEL_34;
          }
          if ( (unsigned __int8)(v13 - 48) > 0x2Fu || !_bittest64(&v12, (unsigned __int8)(v13 - 48)) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_9;
            v8 = 343;
            goto LABEL_21;
          }
        }
        else
        {
          LOBYTE(a3) = 1;
        }
        if ( ++v10 >= 8 )
        {
          v4 = a4;
          if ( (_BYTE)a4 != 1 )
            goto LABEL_11;
          *(_DWORD *)v6 |= 0x20u;
          *((_QWORD *)v6 + 4) = v5;
          return v4;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_9;
  v8 = 341;
LABEL_21:
  v15 = v13;
LABEL_8:
  WPP_RECORDER_SF_d(*((_QWORD *)v6 + 12), 2u, 5u, v8, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v15);
LABEL_9:
  v9 = 167LL;
LABEL_10:
  (*(void (__fastcall **)(_QWORD, __int64, _WORD *, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9, a3, a4);
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(*((_QWORD *)v6 + 12), v10, 5, 344, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v4;
}
