/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x140039798
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039EA8 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v7; // rbx
  unsigned int v9; // eax
  int v10; // ebp
  char v11; // r12
  int v12; // r13d
  void *v13; // r8
  unsigned int v14; // ebp
  unsigned int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // r10d
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r12
  bool v23; // bp
  bool v24; // r14
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  unsigned __int8 v30; // al
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+50h] [rbp-38h] BYREF

  v35 = 0;
  v5 = a4;
  v7 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v35;
  }
  v9 = *a1;
  v10 = *(_DWORD *)(a2 + 72);
  v11 = 1;
  *a3 = v9;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v14 = v10 - v12;
  LOBYTE(v15) = 9;
  if ( (unsigned __int8)v9 >= 9u )
    goto LABEL_18;
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    99LL,
    &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  if ( v14 < 9 )
  {
    v17 = *a3;
  }
  else
  {
    *a3 = 9;
    v17 = 9LL;
  }
  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, v16, v17) || *(_BYTE *)(v7 + 13) )
    *v5 = 2;
  if ( (unsigned int)v18 >= v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x75u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a1,
        v12,
        v15,
        v18);
      LOBYTE(v15) = 9;
    }
    v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
LABEL_18:
    if ( *a1 > (unsigned __int8)v15 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(
                              v7,
                              a2,
                              &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids)
        || *(_BYTE *)(v7 + 13) )
      {
        *v5 = 2;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v20;
        LODWORD(v33) = v12;
        LODWORD(v32) = *a1;
        WPP_RECORDER_SF_DDD(a5, 2u, v19, 0x76u, v19, v32, v33, v34);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 98LL);
    }
    if ( *a3 <= v14 )
    {
      v21 = a1[2];
      v22 = a1[3];
      v23 = (*(_DWORD *)(v7 + 256) & 1) == 0 || (_BYTE)v21 != *(_BYTE *)(v7 + 80);
      v24 = !(*(_BYTE *)(v7 + 256) & 1);
      HUBDESC_InternalValidateLastInterface(v7, v5, a5);
      if ( *v5 != 1 )
      {
        if ( v23 )
        {
          if ( _bittest64(*(const signed __int64 **)(v7 + 216), v21) )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v25) || *(_BYTE *)(v7 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v33) = v21;
              LODWORD(v32) = v12;
              WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x78u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32, v33);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 103LL);
          }
          if ( !v24 && *(_BYTE *)(v7 + 80) > (unsigned __int8)v21 )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v25) || *(_BYTE *)(v7 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v34) = *(unsigned __int8 *)(v7 + 80);
              LODWORD(v33) = v21;
              LODWORD(v32) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v26,
                0x79u,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                v32,
                v33,
                v34);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 106LL);
          }
          if ( (_BYTE)v22 )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v25) || *(_BYTE *)(v7 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v34) = v22;
              LODWORD(v33) = v21;
              LODWORD(v32) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v27,
                0x7Au,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                v32,
                v33,
                v34);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 104LL);
          }
          RtlClearAllBits((PRTL_BITMAP)(v7 + 88));
          RtlSetBit((PRTL_BITMAP)(v7 + 208), v21);
          *(_BYTE *)(v7 + 80) = v21;
          ++*(_WORD *)(v7 + 202);
        }
        else
        {
          if ( _bittest64(*(const signed __int64 **)(v7 + 96), v22) )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v25) || *(_BYTE *)(v7 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v34) = v21;
              LODWORD(v33) = v12;
              LODWORD(v32) = v22;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v28,
                0x7Bu,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                v32,
                v33,
                v34);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 101LL);
          }
          if ( *(_BYTE *)(v7 + 81) >= (unsigned __int8)v22 )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v25) || *(_BYTE *)(v7 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v34) = *(unsigned __int8 *)(v7 + 81);
              LODWORD(v33) = v22;
              LODWORD(v32) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v29,
                0x7Cu,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                v32,
                v33,
                v34);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 105LL);
          }
        }
        RtlClearAllBits((PRTL_BITMAP)(v7 + 136));
        *(_BYTE *)(v7 + 185) = 0;
        v30 = a1[4];
        *(_DWORD *)(v7 + 256) &= ~2u;
        *(_BYTE *)(v7 + 184) = v30;
        RtlSetBit((PRTL_BITMAP)(v7 + 88), v22);
        *(_BYTE *)(v7 + 81) = v22;
      }
      v11 = 1;
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v13) || *(_BYTE *)(v7 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = v12;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x77u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 100LL);
    }
LABEL_77:
    if ( !*v5 )
      return v11;
    goto LABEL_78;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, v18, 0x74u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, *a1, v12, v15);
    goto LABEL_77;
  }
LABEL_78:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(a5, a2, 5, 125, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v11;
}
