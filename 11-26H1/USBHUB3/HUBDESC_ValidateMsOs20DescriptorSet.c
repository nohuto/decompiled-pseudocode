/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003F3B0
 * Callers:
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x140025D10 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1400362F0 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x14003F710 (HUBDESC_ValidateMsOs20DescriptorSetHeader.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSet(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int16 *v6; // rcx
  char v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // edx
  int v12; // r9d
  __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int16 *v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 20);
  v4 = *(unsigned int *)(a2 + 12);
  v5 = a2;
  v6 = *(unsigned __int16 **)(a2 + 24);
  v7 = 1;
  if ( (_DWORD)v4 != v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x170u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v4,
        *(unsigned __int16 *)(a2 + 20));
    v8 = 188LL;
    goto LABEL_44;
  }
  if ( (unsigned int)v4 < 0xA )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x171u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *(_DWORD *)(a2 + 12));
    v8 = 189LL;
    goto LABEL_44;
  }
  v9 = (unsigned __int64)v6 + v4;
  if ( v6 > (unsigned __int16 *)((char *)v6 + v4)
    || (unsigned __int64)(v6 + 2) > v9
    || (a2 = *v6, (unsigned int)a2 < 4)
    || (unsigned __int64)v6 + a2 > v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_43:
      v8 = 194LL;
      goto LABEL_44;
    }
    v12 = 370;
LABEL_42:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 96), a2, 5, v12, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    goto LABEL_43;
  }
  if ( (_WORD)a2 != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 96),
        2u,
        5u,
        0x173u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        a2);
    v8 = 190LL;
    goto LABEL_44;
  }
  if ( (_WORD)v2 != v6[4] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 96),
        2u,
        5u,
        0x174u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v2,
        v6[4]);
    v8 = 191LL;
    goto LABEL_44;
  }
  if ( *((_DWORD *)v6 + 1) <= *(_DWORD *)(v5 + 16) )
  {
    v15 = v6;
    while ( 1 )
    {
      v10 = v6[1];
      if ( v10 >= 9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v14) = v6[1];
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 96),
            2u,
            5u,
            0x177u,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v14);
        }
      }
      else
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v6[1]))(
                a1,
                v5,
                v6,
                v9) )
          goto LABEL_45;
        if ( v10 - 1 > 1 && (*(_BYTE *)v5 & 0x18) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v5 + 96),
              v11,
              5,
              374,
              (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
          }
          v8 = 193LL;
          goto LABEL_44;
        }
      }
      if ( !HUBDESC_GetNextMsOs20Descriptor(v9, &v15) )
        break;
      v6 = v15;
      if ( !v15 )
        return v7;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v12 = 376;
    goto LABEL_42;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v5 + 96),
      2u,
      5u,
      0x175u,
      (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
      *((_DWORD *)v6 + 1),
      *(_DWORD *)(v5 + 16));
  v8 = 192LL;
LABEL_44:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
LABEL_45:
  v7 = 0;
  *(_DWORD *)v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 96), v11, 5, 377, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v7;
}
