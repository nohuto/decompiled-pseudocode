/*
 * XREFs of HalpMcaReadError @ 0x14044BC70
 * Callers:
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14057D890 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BEFCC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 *     HalpWheaWriteMsrStatus @ 0x14044B2BC (HalpWheaWriteMsrStatus.c)
 *     HalpMcaStuckErrorCheck @ 0x14044B308 (HalpMcaStuckErrorCheck.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140580D68 (HalpMcaReadErrorUncorrectedAMD.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpMcaReadError(int a1, void *a2, int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // r9d
  unsigned int v11; // r13d
  int v12; // r15d
  __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char v17; // r12
  int v18; // eax
  char v19; // dl
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rax
  unsigned __int8 CpuVendor; // al
  char v24; // dl
  __int64 v25; // rcx
  bool v26; // al
  unsigned int v27; // r12d
  char v28; // bl
  unsigned __int8 v29; // al
  char v31; // [rsp+38h] [rbp-31h]
  char v32; // [rsp+39h] [rbp-30h]
  __int16 v33; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v34; // [rsp+40h] [rbp-29h]
  int v35; // [rsp+44h] [rbp-25h]
  int v36; // [rsp+48h] [rbp-21h]
  int v37; // [rsp+4Ch] [rbp-1Dh]
  int v38; // [rsp+50h] [rbp-19h]
  unsigned int v39; // [rsp+54h] [rbp-15h]
  __int64 v40; // [rsp+58h] [rbp-11h]
  __int64 v41; // [rsp+60h] [rbp-9h]
  __int64 v42; // [rsp+68h] [rbp-1h]
  __int128 v43; // [rsp+70h] [rbp+7h] BYREF
  __int64 v44; // [rsp+80h] [rbp+17h]
  int *v45; // [rsp+88h] [rbp+1Fh]

  v5 = 0;
  v42 = a4;
  v45 = a3;
  v44 = 0LL;
  v41 = (__int64)a2;
  v35 = a1;
  v6 = 0LL;
  v33 = 0;
  v34 = 1;
  v38 = -1;
  v31 = 0;
  v32 = 0;
  v43 = 0LL;
  if ( !HalpMcaNumberOfBanks )
  {
    v7 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v7;
  }
  v8 = (unsigned __int8)HalpMcaNumberOfBanks;
  v39 = (unsigned __int8)HalpMcaNumberOfBanks;
  memset_0(a2, 0, 0x828uLL);
  v9 = 1025;
  v10 = -1073733631;
  v11 = 0;
  v12 = 2;
  while ( 1 )
  {
    v36 = v10;
    v37 = v9;
    if ( v11 >= v8 )
      break;
    v40 = 0LL;
    if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
      v13 = v14;
    v15 = guard_dispatch_icall_no_overrides(a5, v13);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 0;
      *(_QWORD *)&v43 = v15;
      v18 = v35;
      BYTE8(v43) = HalpMcaRecoverySupported;
      v44 = a5;
      HIDWORD(v43) = v11;
      v33 = 0;
      switch ( v35 )
      {
        case 16:
          LOBYTE(v20) = HalpGetCpuVendor();
          if ( (_BYTE)v20 == 1 )
          {
            HalpMcaReadErrorUncorrectedAMD(&v43, &v33);
            v17 = HIBYTE(v33);
            v21 = v33;
            v16 = v43;
LABEL_26:
            if ( !v21 )
              break;
LABEL_27:
            HalpMcaPopulateErrorData(a5, v11, v16, v42, v41, v34++);
            if ( (!v17 || !v31) && !v32 )
            {
              v38 = v11;
              v6 = v16;
              if ( v17 )
                v31 = 1;
              else
                v32 = 1;
            }
            break;
          }
          v22 = (v16 >> 61) & 1;
          if ( (_BYTE)v20 == 2 )
          {
            if ( !v22 )
              break;
            if ( (v16 & 0x1000000000000000LL) == 0 )
            {
LABEL_15:
              HalpWheaWriteMsrStatus(a5, v11, v20);
              break;
            }
            if ( (v16 & 0x200000000000000LL) == 0 && v19 )
              goto LABEL_18;
          }
          else
          {
            if ( !v22 )
              break;
            if ( (v16 & 0x1000000000000000LL) == 0 )
              goto LABEL_15;
            if ( (v16 & 0x200000000000000LL) != 0 || !v19 )
            {
              v21 = 1;
              goto LABEL_26;
            }
LABEL_18:
            if ( (v16 & 0x100000000000000LL) == 0 )
              break;
            v17 = 1;
          }
          LOBYTE(v33) = 1;
          goto LABEL_27;
        case 1:
          CpuVendor = HalpGetCpuVendor();
          v25 = (v16 >> 61) & 1;
          if ( CpuVendor == 1 )
          {
            if ( !v25 )
            {
              v26 = 0;
              if ( v24 )
                v26 = (v16 & 0x100000000000LL) != 0;
              goto LABEL_52;
            }
            if ( v24 && (v16 & 0x200000000000000LL) == 0 )
              goto LABEL_39;
          }
          else if ( CpuVendor == 2 )
          {
            if ( !v25 )
            {
              v26 = 0;
              goto LABEL_52;
            }
            if ( v24 && (v16 & 0x300000000000000LL) == 0 )
            {
LABEL_39:
              v26 = 1;
LABEL_52:
              v6 = v16;
              v27 = v11;
              v28 = v26;
              goto LABEL_55;
            }
          }
          else
          {
            v26 = 0;
            if ( !v25 )
              goto LABEL_52;
          }
          break;
        case 17:
          v6 = v16;
          v27 = v11;
          v28 = v31;
          goto LABEL_56;
      }
    }
    ++v11;
    v10 = v36 + 16;
    v8 = v39;
    v9 = v37 + 4;
  }
  v27 = v38;
  v28 = v31;
LABEL_55:
  v18 = v35;
LABEL_56:
  if ( v27 == -1 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( v18 != 16 )
      HalpMcaStuckErrorCheck(v27, v6, a5);
    HalpMcaPopulateErrorData(a5, v27, v6, v42, v41, 0);
    v29 = HalpGetCpuVendor();
    if ( (v6 & 0x2000000000000000LL) != 0 )
    {
      v12 = v28 == 0;
    }
    else if ( v29 == 1 && HalpMcaRecoverySupported && v28 )
    {
      v12 = 0;
    }
    *v45 = v12;
  }
  return v5;
}
