/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x140039FF4
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned int *v6; // rax
  __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  void *v9; // r8
  __int64 v10; // r15
  char v11; // si
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // r12
  bool v19; // zf
  unsigned int v20; // r12d
  unsigned __int8 *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rdx
  unsigned __int8 *v25; // rcx
  unsigned int v26; // eax
  ULONG *v27; // r13
  __int64 v28; // rax
  __int64 v30; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  unsigned int v35; // [rsp+70h] [rbp-58h]
  unsigned int v37; // [rsp+D0h] [rbp+8h]
  ULONG v38; // [rsp+D8h] [rbp+10h]
  int v40; // [rsp+E8h] [rbp+20h] BYREF

  v40 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v40;
  }
  v9 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v10 = a5;
  v11 = 1;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = *(_DWORD *)(a2 + 72) - v12;
  if ( *a1 >= 0x14u )
  {
LABEL_10:
    if ( *v6 > v13 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(
                              v7,
                              a2,
                              &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v12;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x9Au, v15, v30);
      }
      v16 = 253LL;
      goto LABEL_16;
    }
    if ( v8[3] )
    {
      if ( *(_BYTE *)(v7 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v8[3];
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x9Bu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(v7 + 24))(*(_QWORD *)(v7 + 40), 195LL, v9);
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(v10, a2, 5, 156, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      v16 = 196LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
      && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v10, a2, 5, 157, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v16 = 197LL;
        goto LABEL_16;
      }
      if ( *v8 < 0x1Cu )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_41:
          v16 = 198LL;
          goto LABEL_16;
        }
        v17 = 158;
LABEL_40:
        LODWORD(v30) = *v8;
        WPP_RECORDER_SF_d(v10, 2u, 5u, v17, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
        goto LABEL_41;
      }
      if ( ((*v8 - 4) & 7) != 0 )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v17 = 159;
        goto LABEL_40;
      }
      v38 = 0;
      v18 = ((unsigned __int64)*v8 - 28) >> 3;
      v19 = (_DWORD)v18 == -1;
      v20 = v18 + 1;
      v35 = v20;
      if ( v19 )
        goto LABEL_64;
      v21 = v8 + 20;
      v22 = v20;
      v31 = v8 + 20;
      v23 = 1;
      v34 = v20;
      do
      {
        if ( v23 < v20 )
        {
          v24 = v20 - v23;
          v33 = (unsigned int)v24;
          v25 = &v8[8 * v23 + 20];
          v32 = v25;
          do
          {
            if ( *(_DWORD *)v25 == *(_DWORD *)v31 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v30) = *(_DWORD *)v31;
                WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA0u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
              }
              (*(void (__fastcall **)(_QWORD, __int64, void *))(v7 + 24))(*(_QWORD *)(v7 + 40), 199LL, v9);
              v25 = v32;
              v24 = v33;
            }
            v25 += 8;
            --v24;
            v32 = v25;
            v33 = v24;
          }
          while ( v24 );
          v8 = a1;
          v20 = v35;
          v21 = v31;
          v22 = v34;
        }
        v21 += 8;
        ++v23;
        --v22;
        v31 = v21;
        v34 = v22;
      }
      while ( v22 );
      v26 = 0;
      v27 = (ULONG *)(v8 + 20);
      v37 = 0;
      LODWORD(a2) = 0;
      do
      {
        if ( *v27 > (unsigned int)a2 )
        {
          if ( RtlIsNtDdiVersionAvailable(*v27) )
          {
            LODWORD(a2) = *v27;
            v38 = *v27;
            *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) = &v8[8 * v37 + 20];
          }
          else
          {
            LODWORD(a2) = v38;
          }
          v26 = v37;
        }
        ++v26;
        v27 += 2;
        v37 = v26;
      }
      while ( v26 < v20 );
      if ( !(_DWORD)a2 )
      {
LABEL_64:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v10, a2, 5, 161, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 32))(*(_QWORD *)(v7 + 40), 200LL);
      }
    }
    else if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
           && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
    {
      if ( *v8 >= 0x1Au )
      {
        if ( v8[20] == 1 )
        {
          if ( *v8 != 26 )
          {
            *v5 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v30) = *v8;
              WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA3u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
            }
            v16 = 247LL;
            goto LABEL_16;
          }
        }
        else if ( !v8[20] )
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = v8[20];
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA4u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
          }
          v16 = 249LL;
          goto LABEL_16;
        }
        v28 = *(_QWORD *)(v7 + 80);
        if ( !*(_QWORD *)(v28 + 56) )
        {
          *(_QWORD *)(v28 + 56) = v8;
          goto LABEL_87;
        }
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v10, a2, 5, 165, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v16 = 248LL;
        goto LABEL_16;
      }
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = *v8;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA2u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v30);
      }
      v16 = 250LL;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), v16);
    }
LABEL_87:
    if ( !*v5 )
      return v11;
    goto LABEL_88;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    251LL,
    &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  if ( v13 >= 0x14 )
  {
    v6 = a3;
    *v5 = 2;
    *a3 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x98u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v12,
        *v8,
        20,
        20);
      v6 = a3;
    }
    v9 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
    goto LABEL_10;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x99u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v12, *v8, 20);
    goto LABEL_87;
  }
LABEL_88:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(v10, a2, 5, 166, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v11;
}
