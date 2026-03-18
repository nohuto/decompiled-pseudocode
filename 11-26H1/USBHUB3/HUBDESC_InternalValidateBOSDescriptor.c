/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x140036368
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C9CC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     WPP_RECORDER_SF_Ddd @ 0x140040388 (WPP_RECORDER_SF_Ddd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rdi
  int v9; // edx
  char v10; // si
  __int64 v11; // r15
  void (__fastcall **v12)(_QWORD, __int64); // r12
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, __int64); // rax
  unsigned __int16 *v17; // r12
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // r13d
  unsigned int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+80h] [rbp+8h] BYREF
  void (__fastcall **v27)(_QWORD, __int64); // [rsp+90h] [rbp+18h]
  _QWORD *v28; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v26 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v26;
  }
  v9 = 5;
  if ( a3 )
    *a3 = 5;
  if ( a1 )
  {
    v11 = a5;
    if ( *(_DWORD *)(a2 + 72) >= 5u )
    {
      v12 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v27 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v28 = (_QWORD *)(a2 + 40);
    }
    else
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xECu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      v12 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v28 = (_QWORD *)(a2 + 40);
      v13 = *(_QWORD *)(a2 + 40);
      v14 = *(void (__fastcall **)(__int64, __int64))(a2 + 24);
      v27 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v14(v13, 23LL);
      v9 = 5;
    }
    if ( a1[1] != 15 )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xEDu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      v12 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v28 = (_QWORD *)(a2 + 40);
      v15 = *(_QWORD *)(a2 + 40);
      v16 = *(void (__fastcall **)(__int64, __int64))(a2 + 24);
      v27 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v16(v15, 24LL);
    }
    if ( *a1 < 5u )
    {
      *v5 = 2;
      v28 = (_QWORD *)(a2 + 40);
      v27 = v12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Ddd(v11, v9, (_DWORD)a3, 238, v25, *a1, 5, 5);
        v27 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v28 = (_QWORD *)(a2 + 40);
      }
      (*v12)(*(_QWORD *)(a2 + 40), 21LL);
    }
    v17 = (unsigned __int16 *)(a1 + 2);
    v18 = *((unsigned __int16 *)a1 + 1);
    if ( (unsigned int)v18 < *(_DWORD *)(a2 + 72) )
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + v18;
    if ( *a1 > 5u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Ddd(v11, v9, (_DWORD)a3, 239, v25, *a1, 5, *a1);
        v17 = (unsigned __int16 *)(a1 + 2);
      }
      (*v27)(*v28, 20LL);
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( a3 )
        *a3 = *a1;
    }
    if ( *((_WORD *)a1 + 1) < 5u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xF0u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
      *v5 = 2;
    }
    v19 = a1[4];
    v20 = *a1 + 2 * v19;
    v21 = *v17;
    if ( v21 < v20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v9, (_DWORD)a3, 241, v25, v21, v20, v19);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
      *v5 = 2;
    }
    if ( !a1[4] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(v11, v9, 5, 242, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v22, v23, 243, v25, *((_WORD *)a1 + 1), v20, a1[4]);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    }
    v10 = 1;
  }
  else
  {
    v10 = 1;
    *v5 = 1;
    LODWORD(v11) = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(a5, v9, 5, 235, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 27LL);
  }
  if ( *v5 )
  {
    v10 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(v11, v9, 5, 244, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return v10;
}
