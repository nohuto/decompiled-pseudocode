/*
 * XREFs of CcUpdateDynamicRegistrySettings @ 0x1404D48A0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcUpdateDynamicRegistrySettings(__int64 a1)
{
  int v1; // ebx
  unsigned int *p_P; // rdi
  char v3; // si
  unsigned int v4; // r12d
  int v5; // r13d
  int v6; // r15d
  const char *v7; // rbx
  const char *v8; // r10
  const char *v9; // r9
  const char *v10; // r8
  const char *v11; // rdx
  const char *v12; // rcx
  const char *v13; // rax
  unsigned int v14; // r14d
  const char *v15; // r8
  const char *v16; // rdx
  const char *v17; // rcx
  const char *v18; // rax
  __int64 v19; // rbx
  ULONG v20; // r14d
  ULONG v21; // r14d
  ULONG v22; // r14d
  ULONG v23; // r14d
  ULONG v24; // r14d
  ULONG v25; // r14d
  ULONG v26; // r14d
  ULONG v27; // r14d
  ULONG v28; // r14d
  ULONG v29; // r14d
  ULONG v30; // r14d
  ULONG i; // r14d
  int v32; // ecx
  NTSTATUS v33; // eax
  int v34; // r15d
  unsigned int *PoolWithTag; // r15
  NTSTATUS v36; // eax
  int v37; // r15d
  unsigned int *v38; // r15
  __int64 v39; // rax
  NTSTATUS v40; // eax
  int v41; // r15d
  unsigned int *v42; // r15
  NTSTATUS v43; // eax
  int v44; // r15d
  unsigned int *v45; // r15
  NTSTATUS v46; // eax
  int v47; // r15d
  unsigned int *v48; // r15
  NTSTATUS v49; // eax
  int v50; // r15d
  unsigned int *v51; // r15
  NTSTATUS v52; // eax
  int v53; // r15d
  unsigned int *v54; // r15
  NTSTATUS v55; // eax
  int v56; // r15d
  unsigned int *v57; // r15
  __int64 v58; // rax
  NTSTATUS v59; // eax
  int v60; // r15d
  unsigned int *v61; // r15
  NTSTATUS v62; // eax
  int v63; // r15d
  unsigned int *v64; // r15
  NTSTATUS v65; // eax
  int v66; // r15d
  unsigned int *v67; // r15
  NTSTATUS v68; // eax
  int v69; // r15d
  unsigned int *v70; // rbx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  __int64 v73; // [rsp+40h] [rbp-C8h]
  __int64 v74; // [rsp+50h] [rbp-B8h]
  __int64 v75; // [rsp+60h] [rbp-A8h]
  char v76; // [rsp+88h] [rbp-80h]
  char v77; // [rsp+89h] [rbp-7Fh]
  char v78; // [rsp+8Ah] [rbp-7Eh]
  char v79; // [rsp+8Bh] [rbp-7Dh]
  char v80; // [rsp+8Ch] [rbp-7Ch]
  char v81; // [rsp+8Dh] [rbp-7Bh]
  char v82; // [rsp+8Eh] [rbp-7Ah]
  char v83; // [rsp+8Fh] [rbp-79h]
  char v84; // [rsp+90h] [rbp-78h]
  char v85; // [rsp+91h] [rbp-77h]
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  char v87; // [rsp+A8h] [rbp-60h]
  char v88; // [rsp+A9h] [rbp-5Fh]
  ULONG v89; // [rsp+ACh] [rbp-5Ch] BYREF
  ULONG v90; // [rsp+B0h] [rbp-58h] BYREF
  ULONG v91; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v92; // [rsp+B8h] [rbp-50h]
  int v93; // [rsp+BCh] [rbp-4Ch]
  int v94; // [rsp+C0h] [rbp-48h]
  unsigned int v95; // [rsp+C4h] [rbp-44h]
  int v96; // [rsp+C8h] [rbp-40h]
  _DWORD v97[2]; // [rsp+D0h] [rbp-38h] BYREF
  const WCHAR *v98; // [rsp+D8h] [rbp-30h]
  ULONG v99; // [rsp+E0h] [rbp-28h] BYREF
  ULONG v100; // [rsp+E4h] [rbp-24h] BYREF
  ULONG v101; // [rsp+E8h] [rbp-20h] BYREF
  ULONG v102; // [rsp+ECh] [rbp-1Ch] BYREF
  ULONG v103; // [rsp+F0h] [rbp-18h] BYREF
  ULONG v104; // [rsp+F4h] [rbp-14h] BYREF
  ULONG v105; // [rsp+F8h] [rbp-10h] BYREF
  int v106; // [rsp+FCh] [rbp-Ch]
  int v107; // [rsp+100h] [rbp-8h]
  int v108; // [rsp+104h] [rbp-4h]
  unsigned int v109; // [rsp+108h] [rbp+0h]
  unsigned int v110; // [rsp+10Ch] [rbp+4h]
  ULONG v111; // [rsp+110h] [rbp+8h] BYREF
  ULONG v112; // [rsp+114h] [rbp+Ch] BYREF
  HANDLE v113; // [rsp+118h] [rbp+10h] BYREF
  HANDLE v114; // [rsp+120h] [rbp+18h] BYREF
  HANDLE v115; // [rsp+128h] [rbp+20h] BYREF
  HANDLE v116; // [rsp+130h] [rbp+28h] BYREF
  HANDLE v117; // [rsp+138h] [rbp+30h] BYREF
  HANDLE v118; // [rsp+140h] [rbp+38h] BYREF
  HANDLE v119; // [rsp+148h] [rbp+40h] BYREF
  HANDLE v120; // [rsp+150h] [rbp+48h] BYREF
  HANDLE v121; // [rsp+158h] [rbp+50h] BYREF
  HANDLE v122; // [rsp+160h] [rbp+58h] BYREF
  HANDLE KeyHandle; // [rsp+168h] [rbp+60h] BYREF
  HANDLE Handle; // [rsp+170h] [rbp+68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+178h] [rbp+70h] BYREF
  OBJECT_ATTRIBUTES v126; // [rsp+1A8h] [rbp+A0h] BYREF
  OBJECT_ATTRIBUTES v127; // [rsp+1D8h] [rbp+D0h] BYREF
  OBJECT_ATTRIBUTES v128; // [rsp+208h] [rbp+100h] BYREF
  OBJECT_ATTRIBUTES v129; // [rsp+238h] [rbp+130h] BYREF
  OBJECT_ATTRIBUTES v130; // [rsp+268h] [rbp+160h] BYREF
  OBJECT_ATTRIBUTES v131; // [rsp+298h] [rbp+190h] BYREF
  OBJECT_ATTRIBUTES v132; // [rsp+2C8h] [rbp+1C0h] BYREF
  OBJECT_ATTRIBUTES v133; // [rsp+2F8h] [rbp+1F0h] BYREF
  OBJECT_ATTRIBUTES v134; // [rsp+328h] [rbp+220h] BYREF
  OBJECT_ATTRIBUTES v135; // [rsp+358h] [rbp+250h] BYREF
  OBJECT_ATTRIBUTES v136; // [rsp+388h] [rbp+280h] BYREF
  char P; // [rsp+3B8h] [rbp+2B0h] BYREF

  v1 = 156;
  v97[1] = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  p_P = (unsigned int *)&P;
  v92 = 0;
  v76 = 0;
  v108 = 0;
  v3 = 0;
  v87 = 0;
  v107 = 0;
  v4 = 0;
  v77 = 0;
  v5 = 0;
  v93 = 0;
  v78 = 0;
  v106 = 0;
  v79 = 0;
  v94 = 0;
  v80 = 0;
  v109 = 0;
  v81 = 0;
  v110 = 0;
  v88 = 0;
  v95 = 0;
  v82 = 0;
  v96 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  DbgPrintEx(0x7Fu, 2u, "CcUpdateDynamicRegistrySettings: Updating Dynamic Registry Keys under: \"%wZ\"\n", a1 + 56);
  v97[0] = 11141288;
  v98 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  *(_DWORD *)&ValueName.Length = 2359330;
  ValueName.Buffer = L"TopBottomDPTEqual";
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v97;
  v111 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v20 = 156;
    while ( 1 )
    {
      v33 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, p_P, v20, &v111);
      v34 = v33;
      if ( v33 != -1073741789 && v33 != -2147483643 )
        break;
      if ( v20 != v1 )
        break;
      v20 = v111;
      if ( v111 > 0x40000 || (PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v111, 0x78666343u)) == 0LL )
      {
        v34 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = PoolWithTag;
      v1 = v20;
      v3 = 1;
    }
    ZwClose(KeyHandle);
    if ( v34 >= 0 && p_P[3] )
    {
      v5 = 0;
      v92 = *(unsigned int *)((char *)p_P + p_P[2]);
      if ( v92 < 3 )
        v76 = 1;
    }
    else
    {
      v5 = 0;
    }
  }
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"LazyWriterPercentageOfNumProcs";
  Handle = 0LL;
  v126.ObjectName = (PUNICODE_STRING)v97;
  v90 = 0;
  *(_QWORD *)&v126.Length = 48LL;
  *(_QWORD *)&v126.Attributes = 576LL;
  v126.RootDirectory = 0LL;
  *(_OWORD *)&v126.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &v126) >= 0 )
  {
    v21 = v1;
    while ( 1 )
    {
      v36 = ZwQueryValueKey(Handle, &ValueName, KeyValueFullInformation, p_P, v21, &v90);
      v37 = v36;
      if ( v36 != -1073741789 && v36 != -2147483643 )
        break;
      if ( v21 != v1 )
        break;
      v21 = v90;
      if ( v90 > 0x40000 || (v38 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v90, 0x78666343u)) == 0LL )
      {
        v37 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v38;
      v1 = v21;
      v3 = 1;
    }
    ZwClose(Handle);
    if ( v37 >= 0 && p_P[3] )
    {
      v39 = p_P[2];
      v87 = 1;
      v108 = *(unsigned int *)((char *)p_P + v39);
    }
  }
  *(_DWORD *)&ValueName.Length = 1966108;
  ValueName.Buffer = L"LargeWriteSize";
  v113 = 0LL;
  v127.ObjectName = (PUNICODE_STRING)v97;
  v89 = 0;
  *(_QWORD *)&v127.Length = 48LL;
  *(_QWORD *)&v127.Attributes = 576LL;
  v127.RootDirectory = 0LL;
  *(_OWORD *)&v127.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v113, 0x20019u, &v127) >= 0 )
  {
    v22 = v1;
    while ( 1 )
    {
      v40 = ZwQueryValueKey(v113, &ValueName, KeyValueFullInformation, p_P, v22, &v89);
      v41 = v40;
      if ( v40 != -1073741789 && v40 != -2147483643 )
        break;
      if ( v22 != v1 )
        break;
      v22 = v89;
      if ( v89 > 0x40000 || (v42 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v89, 0x78666343u)) == 0LL )
      {
        v41 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v42;
      v1 = v22;
      v3 = 1;
    }
    ZwClose(v113);
    if ( v41 >= 0 && p_P[3] )
    {
      v77 = 1;
      v107 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 3670070;
  ValueName.Buffer = L"SoftThrottleLargeWriteAtPct";
  v114 = 0LL;
  v128.ObjectName = (PUNICODE_STRING)v97;
  v112 = 0;
  *(_QWORD *)&v128.Length = 48LL;
  *(_QWORD *)&v128.Attributes = 576LL;
  v128.RootDirectory = 0LL;
  *(_OWORD *)&v128.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v114, 0x20019u, &v128) >= 0 )
  {
    v23 = v1;
    while ( 1 )
    {
      v43 = ZwQueryValueKey(v114, &ValueName, KeyValueFullInformation, p_P, v23, &v112);
      v44 = v43;
      if ( v43 != -1073741789 && v43 != -2147483643 )
        break;
      if ( v23 != v1 )
        break;
      v23 = v112;
      if ( v112 > 0x40000 || (v45 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v112, 0x78666343u)) == 0LL )
      {
        v44 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v45;
      v1 = v23;
      v3 = 1;
    }
    ZwClose(v114);
    if ( v44 >= 0 && p_P[3] )
    {
      v78 = 1;
      v93 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 2883626;
  ValueName.Buffer = L"SoftThrottleDelayInMs";
  v115 = 0LL;
  v129.ObjectName = (PUNICODE_STRING)v97;
  v99 = 0;
  *(_QWORD *)&v129.Length = 48LL;
  *(_QWORD *)&v129.Attributes = 576LL;
  v129.RootDirectory = 0LL;
  *(_OWORD *)&v129.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v115, 0x20019u, &v129) >= 0 )
  {
    v24 = v1;
    while ( 1 )
    {
      v46 = ZwQueryValueKey(v115, &ValueName, KeyValueFullInformation, p_P, v24, &v99);
      v47 = v46;
      if ( v46 != -1073741789 && v46 != -2147483643 )
        break;
      if ( v24 != v1 )
        break;
      v24 = v99;
      if ( v99 > 0x40000 || (v48 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v99, 0x78666343u)) == 0LL )
      {
        v47 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v48;
      v1 = v24;
      v3 = 1;
    }
    ZwClose(v115);
    if ( v47 >= 0 && p_P[3] )
    {
      v79 = 1;
      v106 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 2359330;
  ValueName.Buffer = L"MaxLazyWritePages";
  v116 = 0LL;
  v130.ObjectName = (PUNICODE_STRING)v97;
  v100 = 0;
  *(_QWORD *)&v130.Length = 48LL;
  *(_QWORD *)&v130.Attributes = 576LL;
  v130.RootDirectory = 0LL;
  *(_OWORD *)&v130.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v116, 0x20019u, &v130) >= 0 )
  {
    v25 = v1;
    while ( 1 )
    {
      v49 = ZwQueryValueKey(v116, &ValueName, KeyValueFullInformation, p_P, v25, &v100);
      v50 = v49;
      if ( v49 != -1073741789 && v49 != -2147483643 )
        break;
      if ( v25 != v1 )
        break;
      v25 = v100;
      if ( v100 > 0x40000 || (v51 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v100, 0x78666343u)) == 0LL )
      {
        v50 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v51;
      v1 = v25;
      v3 = 1;
    }
    ZwClose(v116);
    if ( v50 >= 0 && p_P[3] )
    {
      v80 = 1;
      v94 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 4325440;
  ValueName.Buffer = L"PeriodicTelemetrySampleFrequency";
  v117 = 0LL;
  v131.ObjectName = (PUNICODE_STRING)v97;
  v101 = 0;
  *(_QWORD *)&v131.Length = 48LL;
  *(_QWORD *)&v131.Attributes = 576LL;
  v131.RootDirectory = 0LL;
  *(_OWORD *)&v131.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v117, 0x20019u, &v131) >= 0 )
  {
    v26 = v1;
    while ( 1 )
    {
      v52 = ZwQueryValueKey(v117, &ValueName, KeyValueFullInformation, p_P, v26, &v101);
      v53 = v52;
      if ( v52 != -1073741789 && v52 != -2147483643 )
        break;
      if ( v26 != v1 )
        break;
      v26 = v101;
      if ( v101 > 0x40000 || (v54 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v101, 0x78666343u)) == 0LL )
      {
        v53 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v54;
      v1 = v26;
      v3 = 1;
    }
    ZwClose(v117);
    if ( v53 >= 0 && p_P[3] )
    {
      v81 = 1;
      v109 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 4194366;
  ValueName.Buffer = L"PeriodicTelemetryEventFrequency";
  v118 = 0LL;
  v132.ObjectName = (PUNICODE_STRING)v97;
  v102 = 0;
  *(_QWORD *)&v132.Length = 48LL;
  *(_QWORD *)&v132.Attributes = 576LL;
  v132.RootDirectory = 0LL;
  *(_OWORD *)&v132.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v118, 0x20019u, &v132) >= 0 )
  {
    v27 = v1;
    while ( 1 )
    {
      v55 = ZwQueryValueKey(v118, &ValueName, KeyValueFullInformation, p_P, v27, &v102);
      v56 = v55;
      if ( v55 != -1073741789 && v55 != -2147483643 )
        break;
      if ( v27 != v1 )
        break;
      v27 = v102;
      if ( v102 > 0x40000 || (v57 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v102, 0x78666343u)) == 0LL )
      {
        v56 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v57;
      v1 = v27;
      v3 = 1;
    }
    ZwClose(v118);
    if ( v56 >= 0 && p_P[3] )
    {
      v58 = p_P[2];
      v88 = 1;
      v110 = *(unsigned int *)((char *)p_P + v58);
    }
  }
  *(_DWORD *)&ValueName.Length = 4325440;
  ValueName.Buffer = L"PeriodicTelemetryReportFrequency";
  v119 = 0LL;
  v133.ObjectName = (PUNICODE_STRING)v97;
  v103 = 0;
  *(_QWORD *)&v133.Length = 48LL;
  *(_QWORD *)&v133.Attributes = 576LL;
  v133.RootDirectory = 0LL;
  *(_OWORD *)&v133.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v119, 0x20019u, &v133) >= 0 )
  {
    v28 = v1;
    while ( 1 )
    {
      v59 = ZwQueryValueKey(v119, &ValueName, KeyValueFullInformation, p_P, v28, &v103);
      v60 = v59;
      if ( v59 != -1073741789 && v59 != -2147483643 )
        break;
      if ( v28 != v1 )
        break;
      v28 = v103;
      if ( v103 > 0x40000 || (v61 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v103, 0x78666343u)) == 0LL )
      {
        v60 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v61;
      v1 = v28;
      v3 = 1;
    }
    ZwClose(v119);
    if ( v60 >= 0 && p_P[3] )
    {
      v82 = 1;
      v95 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 2883626;
  ValueName.Buffer = L"DisableCacheTelemetry";
  v120 = 0LL;
  v134.ObjectName = (PUNICODE_STRING)v97;
  v104 = 0;
  *(_QWORD *)&v134.Length = 48LL;
  *(_QWORD *)&v134.Attributes = 576LL;
  v134.RootDirectory = 0LL;
  *(_OWORD *)&v134.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v120, 0x20019u, &v134) >= 0 )
  {
    v29 = v1;
    while ( 1 )
    {
      v62 = ZwQueryValueKey(v120, &ValueName, KeyValueFullInformation, p_P, v29, &v104);
      v63 = v62;
      if ( v62 != -1073741789 && v62 != -2147483643 )
        break;
      if ( v29 != v1 )
        break;
      v29 = v104;
      if ( v104 > 0x40000 || (v64 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v104, 0x78666343u)) == 0LL )
      {
        v63 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v64;
      v1 = v29;
      v3 = 1;
    }
    ZwClose(v120);
    if ( v63 >= 0 && p_P[3] )
    {
      v83 = 1;
      v96 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"EnableAsyncLazywrite";
  v121 = 0LL;
  v135.ObjectName = (PUNICODE_STRING)v97;
  v105 = 0;
  *(_QWORD *)&v135.Length = 48LL;
  *(_QWORD *)&v135.Attributes = 576LL;
  v135.RootDirectory = 0LL;
  *(_OWORD *)&v135.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v121, 0x20019u, &v135) >= 0 )
  {
    v30 = v1;
    while ( 1 )
    {
      v65 = ZwQueryValueKey(v121, &ValueName, KeyValueFullInformation, p_P, v30, &v105);
      v66 = v65;
      if ( v65 != -1073741789 && v65 != -2147483643 )
        break;
      if ( v30 != v1 )
        break;
      v30 = v105;
      if ( v105 > 0x40000 || (v67 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v105, 0x78666343u)) == 0LL )
      {
        v66 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v67;
      v1 = v30;
      v3 = 1;
    }
    ZwClose(v121);
    if ( v66 >= 0 && p_P[3] )
    {
      v84 = 1;
      v4 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  *(_DWORD *)&ValueName.Length = 3407922;
  ValueName.Buffer = L"EnableAsyncLazywriteMulti";
  v122 = 0LL;
  v136.ObjectName = (PUNICODE_STRING)v97;
  v91 = 0;
  *(_QWORD *)&v136.Length = 48LL;
  *(_QWORD *)&v136.Attributes = 576LL;
  v136.RootDirectory = 0LL;
  *(_OWORD *)&v136.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v122, 0x20019u, &v136) >= 0 )
  {
    for ( i = v1; ; v1 = i )
    {
      v68 = ZwQueryValueKey(v122, &ValueName, KeyValueFullInformation, p_P, i, &v91);
      v69 = v68;
      if ( v68 != -1073741789 && v68 != -2147483643 )
        break;
      if ( i != v1 )
        break;
      i = v91;
      if ( v91 > 0x40000 || (v70 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v91, 0x78666343u)) == 0LL )
      {
        v69 = -1073741670;
        break;
      }
      if ( v3 )
        ExFreePoolWithTag(p_P, 0x78666343u);
      p_P = v70;
      v3 = 1;
    }
    ZwClose(v122);
    if ( v69 >= 0 && p_P[3] )
    {
      v85 = 1;
      v5 = *(unsigned int *)((char *)p_P + p_P[2]);
    }
  }
  v6 = v106;
  v7 = "valid";
  v8 = "valid";
  v9 = "valid";
  if ( !v80 )
    v8 = "not found";
  v10 = "valid";
  v11 = "valid";
  v12 = "valid";
  if ( !v79 )
    v9 = "not found";
  v13 = "valid";
  if ( !v78 )
    v10 = "not found";
  if ( !v77 )
    v11 = "not found";
  if ( !v87 )
    v12 = "not found";
  v14 = v107;
  if ( !v76 )
    v13 = "not found";
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(1/2): \n"
    "\tTopBottom                      : 0x%04lx(%s)\n"
    "\tLazyWriterPct                  : 0x%04lx(%s) (unsupported)\n"
    "\tLargeWriteSize                 : 0x%04lx(%s)\n"
    "\tSoftThrottleAt                 : 0x%04lx(%s)\n"
    "\tSoftThrottleDelay              : 0x%04lx(%s)\n"
    "\tMaxLazyWritePages              : 0x%04lx(%s)\n",
    v92,
    v13,
    v108,
    v12,
    v107,
    v11,
    v93,
    v10,
    v106,
    v9,
    v94,
    v8);
  v15 = "valid";
  v16 = "valid";
  v17 = "valid";
  if ( !v85 )
    v15 = "not found";
  v18 = "valid";
  if ( !v84 )
    v16 = "not found";
  LODWORD(v75) = v5;
  if ( !v83 )
    v17 = "not found";
  LODWORD(v74) = v4;
  if ( !v82 )
    v18 = "not found";
  LODWORD(v73) = v96;
  if ( !v81 )
    v7 = "not found";
  LODWORD(ResultLength) = v95;
  *(_QWORD *)Length = v7;
  v19 = v109;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(2/2): \n"
    "\tPeriodicTelmetrySampleFrequency: 0x%04lx(%s)\n"
    "\tPeriodicTelmetryReportFrequency: 0x%04lx(%s)\n"
    "\tDisableCacheTelemetry          : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywrite           : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywriteMulti      : 0x%04lx(%s)\n",
    v109,
    *(_QWORD *)Length,
    ResultLength,
    v18,
    v73,
    v17,
    v74,
    v16,
    v75,
    v15);
  if ( v3 )
    ExFreePoolWithTag(p_P, 0x78666343u);
  if ( v76 )
    CcAzure_TopBottomDPTEqual = v92;
  if ( v77 )
  {
    if ( !v14 || (CcAzure_LargeWriteSize = v14 << 10, v14 << 10 <= v14) )
      CcAzure_LargeWriteSize = 0;
  }
  if ( v78 )
  {
    v32 = 0;
    if ( (unsigned int)(v93 - 1) <= 0x63 )
      v32 = v93;
    CcAzure_SoftThrottleLargeWriteAtPct = v32;
  }
  if ( v79 && v6 )
    CcSoftThrottleDelay = v6;
  if ( v80 && (unsigned int)(v94 - 1) <= 0x7FFF )
    CcMaxLazyWritePages = v94;
  if ( v81 && (_DWORD)v19 )
    *(_QWORD *)&EmpParseLock.Timer.Header.Lock = -10000000 * v19;
  if ( v88 && v110 )
    EmpParseLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(10000000LL * v110);
  if ( v82 && v95 )
    EmpParseLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(10000000LL * v95);
  if ( v83 )
    BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) = v96 != 0;
  if ( v84 )
  {
    if ( v4 > 1 )
    {
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywrite(0x%04lx), no change to current value (0x%04lx)\n",
        v4,
        (unsigned __int8)CcEnableAsyncLazywrite);
    }
    else
    {
      CcEnableAsyncLazywrite = v4 != 0;
      if ( v4 && !CcEnablePerVolumeLazyWriter )
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
    }
  }
  if ( v85 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
          CcEnableAsyncLazywriteMulti = 1;
        else
          DbgPrintEx(
            0x7Fu,
            2u,
            "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simpl"
            "e) Async Lazywriter to be enabled!\n");
      }
      else
      {
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywriteMulti(0x%04lx), no change to current value (0x%04lx)\n",
          v5,
          (unsigned __int8)CcEnableAsyncLazywriteMulti);
      }
    }
    else
    {
      CcEnableAsyncLazywriteMulti = 0;
    }
  }
}
