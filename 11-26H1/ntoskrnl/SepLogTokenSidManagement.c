/*
 * XREFs of SepLogTokenSidManagement @ 0x140B2D560
 * Callers:
 *     SepSetTokenUserAndGroups @ 0x140A86164 (SepSetTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x140B1018C (SepDereferenceSidValuesBlock.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     RtlConvertLuidToUlonglong @ 0x14063E73C (RtlConvertLuidToUlonglong.c)
 *     SepGetSidValuesDump @ 0x14063E770 (SepGetSidValuesDump.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepGetSidManagementActionName @ 0x14077BF8C (SepGetSidManagementActionName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepLogTokenSidManagement(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r10d
  __int64 v7; // r8
  int v8; // edx
  unsigned __int64 LastRebalanceQpc; // rax
  $96231996492BD5F83A07B2C42980F173 *v10; // rcx
  $96231996492BD5F83A07B2C42980F173 *v11; // r9
  int v12; // r10d
  $96231996492BD5F83A07B2C42980F173 *v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  ULONG v16; // eax
  unsigned int v17; // ebx
  void *SidValuesDump; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // ecx
  __int64 v23; // rax
  ULONG v24; // ebx
  void *v25; // rdi
  __int64 v26; // r9
  _DWORD *v27; // r9
  __int64 v28; // rax
  ULONG v29; // ecx
  __int64 v30; // rdx
  ULONG v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v38; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  $96231996492BD5F83A07B2C42980F173 *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  $96231996492BD5F83A07B2C42980F173 *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  $96231996492BD5F83A07B2C42980F173 *v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  ULONGLONG *v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  ULONGLONG *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int64 *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  ULONG *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  void *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]

  v6 = a1;
  v31 = 0;
  v35 = 0;
  v36 = 0;
  if ( EtwKernelProvRegHandle && BYTE3(RtlpBootStatHandleLock.Queue) )
  {
    if ( a4 )
    {
      v38 = RtlConvertLuidToUlonglong((LUID)(a4 + 16));
      v39 = RtlConvertLuidToUlonglong((LUID)(v26 + 24));
      v32 = v27[48];
      v33 = v27[49];
      v34 = v27[50];
    }
    else
    {
      v38 = 0LL;
      v39 = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 0;
    }
    UserData.Ptr = (ULONGLONG)SepGetSidManagementActionName(v6, &v31);
    v8 = 2;
    UserData.Size = v31;
    UserData.Reserved = 0;
    LastRebalanceQpc = KeGetCurrentThread()->ApcState.Process[1].LastRebalanceQpc;
    v10 = &RtlpBootStatHandleLock.648;
    if ( LastRebalanceQpc && *(_WORD *)LastRebalanceQpc )
    {
      v11 = *($96231996492BD5F83A07B2C42980F173 **)(LastRebalanceQpc + 8);
      v12 = *(unsigned __int16 *)(LastRebalanceQpc + 2);
    }
    else
    {
      v11 = &RtlpBootStatHandleLock.648;
      v12 = 2;
    }
    v43 = v11;
    v44 = v12;
    v45 = 0;
    if ( v7 && *(_WORD *)(v7 + 64) )
    {
      v13 = *($96231996492BD5F83A07B2C42980F173 **)(v7 + 72);
      v14 = *(unsigned __int16 *)(v7 + 66);
    }
    else
    {
      v13 = &RtlpBootStatHandleLock.648;
      v14 = 2;
    }
    v46 = v13;
    v47 = v14;
    v48 = 0;
    if ( v7 && *(_WORD *)(v7 + 80) )
    {
      v10 = *($96231996492BD5F83A07B2C42980F173 **)(v7 + 88);
      v8 = *(unsigned __int16 *)(v7 + 82);
    }
    v49 = v10;
    v52 = &v38;
    v54 = &v39;
    v56 = &v32;
    v58 = &v33;
    v60 = &v34;
    v50 = v8;
    v51 = 0;
    v53 = 8LL;
    v55 = 8LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    if ( a2 )
      v15 = *(_QWORD *)(a2 + 8);
    else
      v15 = 0LL;
    v40 = v15;
    v62 = &v40;
    v63 = 8LL;
    if ( a2 )
      v16 = *(_DWORD *)(a2 + 16);
    else
      v16 = 0;
    v31 = v16;
    v64 = &v31;
    v17 = 11;
    v65 = 4LL;
    SidValuesDump = 0LL;
    if ( a2 && v16 )
    {
      SidValuesDump = (void *)SepGetSidValuesDump(a2, &v35);
      v67 = v35;
      v17 = 12;
      v66 = SidValuesDump;
      v68 = 0;
    }
    if ( a3 )
      v19 = *(_QWORD *)(a3 + 8);
    else
      v19 = 0LL;
    v41 = v19;
    v20 = v17;
    v21 = v17 + 1;
    v20 *= 2LL;
    *(&UserData.Ptr + v20) = (ULONGLONG)&v41;
    *((_QWORD *)&UserData.Size + v20) = 8LL;
    if ( !a3 || a2 == a3 )
      v22 = 0;
    else
      v22 = *(_DWORD *)(a3 + 16);
    v23 = 2LL * v21;
    v37 = v22;
    v24 = v21 + 1;
    v25 = 0LL;
    *(&UserData.Ptr + v23) = (ULONGLONG)&v37;
    *((_QWORD *)&UserData.Size + v23) = 4LL;
    if ( a3 && v22 )
    {
      v28 = SepGetSidValuesDump(a3, &v36);
      v29 = v36;
      v25 = (void *)v28;
      v30 = 2LL * v24++;
      *(&UserData.Ptr + v30) = v28;
      *(&UserData.Size + 2 * v30) = v29;
      *(&UserData.Reserved + 2 * v30) = 0;
    }
    EtwWrite(EtwKernelProvRegHandle, &TokenSidManagementLog, 0LL, v24, &UserData);
    if ( SidValuesDump )
      ExFreePoolWithTag(SidValuesDump, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
  }
}
