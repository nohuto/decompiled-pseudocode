/*
 * XREFs of SmpConfigureSharedSessionData @ 0x14000A020
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x14000D2D4 (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpConfigureSharedSessionData()
{
  __int64 result; // rax
  __int64 *v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r8
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  NTSTATUS v9; // eax
  unsigned int v10; // edi
  bool v11; // zf
  char *v12; // rbx
  __int64 Length; // rax
  char *v14; // rbx
  __int64 v15; // rax
  char *v16; // r14
  __int64 v17; // rbx
  _BYTE *v18; // rdx
  char *v19; // r14
  PVOID *v20; // r15
  _BYTE *v21; // r12
  unsigned int v22; // edi
  char *v23; // rsi
  PVOID *v24; // r13
  __int64 v25; // rcx
  PVOID *v26; // rbx
  __int64 v27; // rcx
  PVOID *v28; // rcx
  PVOID **v29; // rax
  __int64 *v30; // r12
  char *v31; // rbx
  unsigned int v32; // r15d
  __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // r15d
  __int64 v37; // rcx
  char *v38; // rbx
  __int64 v39; // rax
  PVOID *v40; // rdi
  unsigned int v41; // r15d
  PVOID *v42; // r13
  __int64 v43; // rcx
  PVOID *v44; // rbx
  __int64 v45; // rcx
  PVOID *v46; // rcx
  PVOID **v47; // rax
  NTSTATUS v48; // eax
  unsigned int v49; // ebx
  __int64 v50; // r8
  __int64 v51; // rdx
  NTSTATUS v52; // eax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-B0h] BYREF
  char *v54; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__usercall *v57)@<rax>(wchar_t *@<rcx>, int, __int64); // [rsp+A0h] [rbp-60h] BYREF
  int v58; // [rsp+A8h] [rbp-58h]
  const wchar_t *v59; // [rsp+B0h] [rbp-50h]
  int *v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+D0h] [rbp-30h]
  void *v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+E0h] [rbp-20h]
  const wchar_t *v66; // [rsp+E8h] [rbp-18h]
  int *v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+108h] [rbp+8h]
  void *v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+118h] [rbp+18h]
  const wchar_t *v73; // [rsp+120h] [rbp+20h]
  int *v74; // [rsp+128h] [rbp+28h]
  int v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v78)(int, int, int, int, int, __int64); // [rsp+148h] [rbp+48h]
  int v79; // [rsp+150h] [rbp+50h]
  const wchar_t *v80; // [rsp+158h] [rbp+58h]
  int *v81; // [rsp+160h] [rbp+60h]
  int v82; // [rsp+168h] [rbp+68h]
  __int64 v83; // [rsp+170h] [rbp+70h]
  int v84; // [rsp+178h] [rbp+78h]
  __int64 v85; // [rsp+180h] [rbp+80h]
  int v86; // [rsp+188h] [rbp+88h]
  __int128 v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  int v90; // [rsp+1B0h] [rbp+B0h]

  v58 = 17;
  *(&ObjectAttributes.Length + 1) = 0;
  v60 = &dword_140031328;
  v64 = &SmpBuildSubSystemLists;
  v57 = SmpConfigureSubSystems;
  v67 = &dword_140031328;
  v59 = L"SubSystems";
  v71 = &SmpBuildSubSystemLists;
  v66 = L"Required";
  v74 = &dword_140031328;
  v73 = L"Optional";
  v81 = &dword_140031328;
  v78 = SmpConfigureExecute;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v80 = L"Execute";
  v61 = 0;
  qword_140031348 = (__int64)&BaseAddress;
  BaseAddress = &BaseAddress;
  v62 = 0LL;
  v63 = 0;
  v65 = 16;
  v68 = 0;
  v69 = 0LL;
  v70 = 0;
  v72 = 16;
  v75 = 0;
  v76 = 0LL;
  v77 = 0;
  v79 = 2;
  v82 = 0;
  v83 = 0LL;
  v84 = 0;
  v85 = 0LL;
  v86 = 0;
  v87 = 0LL;
  v88 = 0;
  v89 = 0LL;
  v90 = 0;
  qword_140031338 = (__int64)&qword_140031330;
  qword_140031330 = (__int64)&qword_140031330;
  qword_140031358 = (__int64)&qword_140031350;
  qword_140031350 = &qword_140031350;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v57, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  v1 = (__int64 *)qword_140031330;
  while ( v1 != &qword_140031330 )
  {
    v2 = v1;
    v1 = (__int64 *)*v1;
    SmpFreeSavedRegistryEntry(v2);
  }
  if ( qword_140031350 == &qword_140031350 )
  {
    v3 = 16LL * (unsigned int)dword_140031328 + 104;
    SmpInitExecuteCmd = 0LL;
  }
  else
  {
    v7 = qword_140031358;
    if ( *(PVOID **)qword_140031358 != &qword_140031350 )
      goto LABEL_43;
    v8 = *(_QWORD **)(qword_140031358 + 8);
    if ( *v8 != qword_140031358 )
      goto LABEL_43;
    qword_140031358 = *(_QWORD *)(qword_140031358 + 8);
    *v8 = &qword_140031350;
    v3 = 16LL * (unsigned int)dword_140031328 + 104;
    SmpInitExecuteCmd = v7;
    if ( v7 )
    {
      v4 = *(unsigned __int16 *)(v7 + 16);
      goto LABEL_7;
    }
  }
  v4 = 0LL;
LABEL_7:
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  MaximumSize.QuadPart = v3 + (unsigned int)dword_14003132C + v4 + SmpS0InitCmd.Length + SmpDefaultLibPath.Length + 6LL;
  ObjectAttributes.Attributes = 2;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    SmpLogFailure("SmpConfigureSharedSessionData", 8354LL, (unsigned int)v5);
    return v6;
  }
  ViewSize = 0LL;
  v9 = NtMapViewOfSection(
         SmpSharedSection,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &SmpMappedView,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  v10 = v9;
  if ( v9 < 0 )
  {
    SmpLogFailure("SmpConfigureSharedSessionData", 8379LL, (unsigned int)v9);
    return v10;
  }
  v11 = SmpS0CommandOverride == 0;
  *(_DWORD *)SmpMappedView = 0;
  if ( !v11 )
    *(_DWORD *)SmpMappedView = 1;
  v12 = (char *)SmpMappedView + v3;
  *((_QWORD *)SmpMappedView + 1) = v12 - (_BYTE *)SmpMappedView;
  *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
  memcpy_0(v12, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
  Length = SmpDefaultLibPath.Length;
  *(_WORD *)&v12[SmpDefaultLibPath.Length] = 0;
  v14 = &v12[Length + 2];
  *((_QWORD *)SmpMappedView + 3) = v14 - (_BYTE *)SmpMappedView;
  *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
  memcpy_0(v14, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
  v15 = SmpS0InitCmd.Length;
  *(_WORD *)&v14[SmpS0InitCmd.Length] = 0;
  v16 = &v14[v15 + 2];
  v17 = SmpInitExecuteCmd;
  *((_QWORD *)SmpMappedView + 5) = v16 - (_BYTE *)SmpMappedView;
  if ( v17 && *(_QWORD *)(v17 + 24) )
  {
    *((_WORD *)SmpMappedView + 24) = *(_WORD *)(v17 + 16);
    memcpy_0(v16, *(const void **)(v17 + 24), *(unsigned __int16 *)(v17 + 16));
    v16 += *(unsigned __int16 *)(v17 + 16);
  }
  else
  {
    *((_WORD *)SmpMappedView + 24) = 0;
  }
  *(_WORD *)v16 = 0;
  v18 = SmpMappedView;
  v19 = v16 + 2;
  v20 = (PVOID *)BaseAddress;
  v21 = v19;
  v54 = v19;
  v22 = 0;
  v23 = (char *)SmpMappedView + 104;
  if ( BaseAddress != &BaseAddress )
  {
    while ( 1 )
    {
      v24 = v20;
      v25 = 2LL * v22;
      v26 = v20;
      v20 = (PVOID *)*v20;
      *(_QWORD *)&v23[8 * v25] = v21 - v18;
      *(_WORD *)&v23[8 * v25 + 8] = *((_WORD *)v24 + 8);
      memcpy_0(v21, v24[3], *((unsigned __int16 *)v24 + 8));
      v27 = *((unsigned __int16 *)v24 + 8);
      ++v22;
      *(_WORD *)&v21[v27] = 0;
      v21 += v27 + 2;
      v28 = (PVOID *)*v26;
      if ( *((PVOID **)*v26 + 1) != v24 )
        break;
      v29 = (PVOID **)v24[1];
      if ( *v29 != v24 )
        break;
      *v29 = v28;
      v28[1] = v29;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v24);
      v18 = SmpMappedView;
      if ( v20 == &BaseAddress )
        goto LABEL_25;
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_25:
  *((_QWORD *)v18 + 7) = v23 - v18;
  *((_DWORD *)SmpMappedView + 16) = v22;
  *((_DWORD *)SmpMappedView + 17) = 0;
  if ( v22 )
  {
    v19 = v21;
    v23 += 16 * v22;
    v54 = v21;
  }
  v30 = (__int64 *)SmpSubSystemsRequired;
  v31 = v19;
  v32 = 0;
  if ( (__int64 *)SmpSubSystemsRequired != &SmpSubSystemsRequired )
  {
    do
    {
      v33 = v30;
      v30 = (__int64 *)*v30;
      v34 = 2LL * v32;
      *(_QWORD *)&v23[8 * v34] = v31 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v23[8 * v34 + 8] = *((_WORD *)v33 + 8);
      memcpy_0(v31, (const void *)v33[3], *((unsigned __int16 *)v33 + 8));
      v35 = *((unsigned __int16 *)v33 + 8);
      v36 = v32 + 1;
      v37 = 2LL * v36;
      *(_WORD *)&v31[v35] = 0;
      v38 = &v31[v35];
      *(_QWORD *)&v23[8 * v37] = v38 + 2 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v23[8 * v37 + 8] = *((_WORD *)v33 + 16);
      memcpy_0(v38 + 2, (const void *)v33[5], *((unsigned __int16 *)v33 + 16));
      v39 = *((unsigned __int16 *)v33 + 16);
      v32 = v36 + 1;
      *(_WORD *)&v38[v39 + 2] = 0;
      v31 = &v38[v39 + 4];
    }
    while ( v30 != &SmpSubSystemsRequired );
    v19 = v54;
  }
  *((_QWORD *)SmpMappedView + 9) = v23 - (_BYTE *)SmpMappedView;
  *((_DWORD *)SmpMappedView + 20) = v32;
  *((_DWORD *)SmpMappedView + 21) = 1;
  if ( v32 )
  {
    v19 = v31;
    v23 += 16 * v32;
  }
  v40 = (PVOID *)qword_140031350;
  v41 = 0;
  if ( qword_140031350 != &qword_140031350 )
  {
    do
    {
      v42 = v40;
      v43 = 2LL * v41;
      v44 = v40;
      v40 = (PVOID *)*v40;
      *(_QWORD *)&v23[8 * v43] = v19 - (_BYTE *)SmpMappedView;
      *(_WORD *)&v23[8 * v43 + 8] = *((_WORD *)v42 + 8);
      memcpy_0(v19, v42[3], *((unsigned __int16 *)v42 + 8));
      v45 = *((unsigned __int16 *)v42 + 8);
      ++v41;
      *(_WORD *)&v19[v45] = 0;
      v19 += v45 + 2;
      v46 = (PVOID *)*v44;
      if ( *((PVOID **)*v44 + 1) != v42 )
        goto LABEL_43;
      v47 = (PVOID **)v42[1];
      if ( *v47 != v42 )
        goto LABEL_43;
      *v47 = v46;
      v46[1] = v47;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v42);
    }
    while ( v40 != &qword_140031350 );
  }
  *((_QWORD *)SmpMappedView + 11) = v23 - (_BYTE *)SmpMappedView;
  *((_DWORD *)SmpMappedView + 24) = v41;
  *((_DWORD *)SmpMappedView + 25) = 0;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
  v48 = NtDuplicateObject(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          SmpSharedSection,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &SmpSharedSection,
          4u,
          2u,
          9u);
  v49 = v48;
  if ( v48 >= 0 )
  {
    ViewSize = 0LL;
    SmpMappedView = 0LL;
    v52 = NtMapViewOfSection(
            SmpSharedSection,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &SmpMappedView,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            2u);
    v49 = v52;
    if ( v52 >= 0 )
      return 0LL;
    v50 = (unsigned int)v52;
    v51 = 8500LL;
  }
  else
  {
    v50 = (unsigned int)v48;
    v51 = 8479LL;
  }
  SmpLogFailure("SmpConfigureSharedSessionData", v51, v50);
  return v49;
}
