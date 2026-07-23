/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x1409D3A08
 * Callers:
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi
  char v9; // r12
  unsigned __int16 Length; // r14
  wchar_t *Buffer; // r15
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // ax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  ULONGLONG v18; // r10
  __int16 v19; // r11
  int v20; // r8d
  unsigned int v21; // ecx
  ULONG v22; // r8d
  ULONGLONG v23; // r9
  __int16 v24; // ax
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int16 v28; // ax
  ULONG v29; // r8d
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rcx
  const EVENT_DESCRIPTOR *v33; // rdx
  ULONG v34; // r9d
  int v35; // r13d
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v39; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v44; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v45; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  __int64 *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h] BYREF
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  wchar_t *v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+130h] [rbp+28h] BYREF
  int v63; // [rsp+134h] [rbp+2Ch]
  _DWORD *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  wchar_t *v66; // [rsp+148h] [rbp+40h]
  _DWORD v67[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  const wchar_t *v69; // [rsp+168h] [rbp+60h]
  int v70; // [rsp+170h] [rbp+68h]
  int v71; // [rsp+174h] [rbp+6Ch]
  __int16 *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  const wchar_t *v74; // [rsp+188h] [rbp+80h]
  int v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+194h] [rbp+8Ch]
  __int64 v77[24]; // [rsp+198h] [rbp+90h] BYREF

  v4 = *(__int64 **)(a2 + 848);
  v5 = &EmptyUnicodeString;
  v38 = a1;
  DestinationString = 0LL;
  if ( v4 )
    v5 = v4;
  DestinationString_8 = 0LL;
  v9 = 1;
  v44 = 0LL;
  v45 = 0LL;
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString_8);
  Length = DestinationString_8.Length;
  if ( !DestinationString_8.Length )
  {
    RtlInitUnicodeString(&DestinationString_8, L"Unknown");
    Length = DestinationString_8.Length;
    v9 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v44, L"Unknown");
    a3 = &v44;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v45, L"Unknown");
    a4 = &v45;
  }
  Buffer = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140E08F40 > 5
    && v38 == 2
    && (qword_140E08F50 & 0x200000000001LL) != 0
    && (qword_140E08F58 & 0x200000000001LL) == qword_140E08F58 )
  {
    v48 = 2LL;
    v47 = &v50;
    v49 = (__int64 *)v5[1];
    v50 = *(unsigned __int16 *)v5;
    v51 = &v54;
    v54 = Length;
    v55 = &v58;
    v57 = (unsigned __int64 *)a3->Buffer;
    v58 = a3->Length;
    v59 = &v62;
    v61 = a4->Buffer;
    v62 = a4->Length;
    v52 = 2LL;
    v56 = 2LL;
    v60 = 2LL;
    v63 = 0;
    v53 = DestinationString_8.Buffer;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08F40, (unsigned __int8 *)byte_140055E51, 0LL, 0LL, 0xAu, v46);
  }
  if ( v5 && *(_WORD *)v5 )
  {
    LOWORD(v36) = *(_WORD *)v5 >> 1;
    UserData.Ptr = (ULONGLONG)&v36;
    *(_QWORD *)&UserData.Size = 2LL;
    v13 = *(unsigned __int16 *)v5;
    v12 = (const wchar_t *)v5[1];
  }
  else
  {
    LOWORD(v36) = 6;
    UserData.Ptr = (ULONGLONG)&v36;
    v12 = L"(null)";
    v13 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v70 = v13;
  v72 = &v37;
  v69 = v12;
  v71 = 0;
  v73 = 2LL;
  if ( Length )
  {
    v74 = Buffer;
    v14 = Length >> 1;
    v15 = Length;
  }
  else
  {
    v74 = L"(null)";
    v15 = 12;
    v14 = 6;
  }
  v75 = v15;
  v37 = v14;
  v76 = 0;
  v16 = EtwpTiFillProcessIdentity(v77, a2, &DestinationString);
  v17 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v16 + 4), (__int64)KeGetCurrentThread());
  v21 = v17 + v20;
  if ( a3 && a3->Length )
  {
    v23 = (ULONGLONG)a3->Buffer;
    v22 = a3->Length;
    v24 = a3->Length >> 1;
  }
  else
  {
    v22 = 12;
    v23 = v18;
    v24 = v19;
  }
  v39 = v24;
  v25 = 2LL * v21;
  v26 = v21 + 1;
  v27 = 2LL * (v21 + 1);
  *(&UserData.Ptr + v25) = (ULONGLONG)&v39;
  *((_QWORD *)&UserData.Size + v25) = 2LL;
  *(&UserData.Ptr + v27) = v23;
  *(&UserData.Size + 2 * v27) = v22;
  *(&UserData.Reserved + 2 * v27) = 0;
  if ( a4 && a4->Length )
  {
    v18 = (ULONGLONG)a4->Buffer;
    v29 = a4->Length;
    v28 = a4->Length >> 1;
  }
  else
  {
    v28 = 6;
    v29 = 12;
  }
  LOWORD(v40) = v28;
  v30 = 2LL * (v26 + 1);
  v31 = v26 + 2;
  *(&UserData.Ptr + v30) = (ULONGLONG)&v40;
  v32 = 2LL * (v26 + 2);
  *((_QWORD *)&UserData.Size + v30) = 2LL;
  v33 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  v34 = v31 + 1;
  *(&UserData.Ptr + v32) = v18;
  *(&UserData.Size + 2 * v32) = v29;
  *(&UserData.Reserved + 2 * v32) = 0;
  v35 = v38;
  if ( v38 != 1 )
    v33 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(*(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40], v33, 0LL, v34, &UserData);
  if ( (unsigned int)dword_140E08F78 > 5
    && (qword_140E08F88 & 0x400000000000LL) != 0
    && (qword_140E08F90 & 0x400000000000LL) == qword_140E08F90 )
  {
    v38 = v35;
    HIDWORD(v52) = 0;
    v47 = (__int64 *)&v38;
    v49 = &v52;
    v51 = (__int64 *)v5[1];
    LODWORD(v52) = *(unsigned __int16 *)v5;
    v53 = (wchar_t *)&v56;
    v56 = Length;
    v43 = DestinationString;
    v57 = &v43;
    v59 = &v62;
    v61 = a3->Buffer;
    v62 = a3->Length;
    v64 = v67;
    v66 = a4->Buffer;
    v67[0] = a4->Length;
    v63 = 0;
    v67[1] = 0;
    v48 = 4LL;
    v50 = 2LL;
    v54 = 2LL;
    v55 = (__int64 *)Buffer;
    v58 = 8LL;
    v60 = 2LL;
    v65 = 2LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08F78, (unsigned __int8 *)byte_140055DB9, 0LL, 0LL, 0xCu, v46);
  }
  if ( v9 )
    ExFreePoolWithTag(Buffer, 0);
}
