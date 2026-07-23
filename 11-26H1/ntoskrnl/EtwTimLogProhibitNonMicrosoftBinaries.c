/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x140B27C0C
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x14099C76C (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // r12
  __int64 *v6; // rdi
  const wchar_t *v8; // r15
  unsigned __int16 v9; // ax
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // r14d
  void *v13; // rsi
  __int16 v14; // ax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // r8d
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int16 v24; // ax
  ULONG v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  const EVENT_DESCRIPTOR *v28; // rdx
  int v29; // r15d
  char v30; // [rsp+48h] [rbp-C0h] BYREF
  char v31; // [rsp+49h] [rbp-BFh] BYREF
  _WORD v32[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v34; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v37[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  _DWORD *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  __int64 v43; // [rsp+C8h] [rbp-40h]
  _DWORD v44[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  void *v47; // [rsp+E8h] [rbp-20h]
  _DWORD v48[2]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  _DWORD *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  __int64 v53; // [rsp+118h] [rbp+10h]
  _DWORD v54[2]; // [rsp+120h] [rbp+18h] BYREF
  char *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  char *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+148h] [rbp+40h] BYREF
  const wchar_t *v60; // [rsp+158h] [rbp+50h]
  int v61; // [rsp+160h] [rbp+58h]
  int v62; // [rsp+164h] [rbp+5Ch]
  int *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  const wchar_t *v65; // [rsp+178h] [rbp+70h]
  int v66; // [rsp+180h] [rbp+78h]
  int v67; // [rsp+184h] [rbp+7Ch]
  _QWORD v68[24]; // [rsp+188h] [rbp+80h] BYREF
  char v69; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v70; // [rsp+2B0h] [rbp+1A8h] BYREF

  v70 = a4;
  v69 = a3;
  v5 = a5;
  v6 = &EmptyUnicodeString;
  LODWORD(v35) = a1;
  v8 = L"(null)";
  v36 = 0LL;
  *(_OWORD *)&v37[1] = 0LL;
  if ( *(_QWORD *)(a2 + 848) )
    v6 = *(__int64 **)(a2 + 848);
  v9 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v32[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v32;
    v10 = *(unsigned __int16 *)v6;
    v11 = (const wchar_t *)v6[1];
  }
  else
  {
    v32[0] = 6;
    UserData.Ptr = (ULONGLONG)v32;
    v11 = L"(null)";
    v10 = 12;
  }
  v60 = v11;
  v62 = 0;
  v61 = v10;
  EtwpQueryProcessCommandLine(a2, (__int64)&v37[1]);
  v12 = LOWORD(v37[1]);
  v13 = (void *)v37[2];
  v64 = 2LL;
  v63 = &v33;
  if ( LOWORD(v37[1]) )
  {
    v65 = (const wchar_t *)v37[2];
    v14 = LOWORD(v37[1]) >> 1;
    v15 = LOWORD(v37[1]);
  }
  else
  {
    v15 = 12;
    v65 = L"(null)";
    v14 = 6;
  }
  v66 = v15;
  v67 = 0;
  LOWORD(v33) = v14;
  v16 = EtwpTiFillProcessIdentity(v68, a2, &v36);
  v17 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v16 + 4), (__int64)KeGetCurrentThread());
  v19 = v17 + v18;
  v20 = 2LL * (unsigned int)(v17 + v18);
  v21 = v19 + 1;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v69;
  *((_QWORD *)&UserData.Size + v20) = 1LL;
  v22 = v21 + 1;
  v23 = 2LL * v21;
  *(&UserData.Ptr + v23) = (ULONGLONG)&v70;
  *((_QWORD *)&UserData.Size + v23) = 1LL;
  if ( v5 && *v5 )
  {
    v8 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v25 = *v5;
    v24 = *v5 >> 1;
  }
  else
  {
    v24 = 6;
    v25 = 12;
  }
  v34 = v24;
  v26 = 2LL * v22;
  v27 = 2LL * (v21 + 2);
  *(&UserData.Ptr + v26) = (ULONGLONG)&v34;
  *((_QWORD *)&UserData.Size + v26) = 2LL;
  *(&UserData.Ptr + v27) = (ULONGLONG)v8;
  v28 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  *(&UserData.Size + 2 * v27) = v25;
  *(&UserData.Reserved + 2 * v27) = 0;
  v29 = v35;
  if ( (_DWORD)v35 != 1 )
    v28 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  EtwWriteEx(*(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40], v28, 0LL, 1u, 0LL, 0LL, v22 + 2, &UserData);
  if ( (unsigned int)dword_140E08F78 > 5
    && (qword_140E08F88 & 0x400000000000LL) != 0
    && (qword_140E08F90 & 0x400000000000LL) == qword_140E08F90 )
  {
    LODWORD(v35) = v29;
    v39 = &v35;
    v40 = 4LL;
    v41 = v44;
    v43 = v6[1];
    v44[0] = *(unsigned __int16 *)v6;
    v45 = v48;
    v37[0] = v36;
    v49 = v37;
    v51 = v54;
    v53 = *((_QWORD *)v5 + 1);
    v54[0] = *v5;
    v30 = v69;
    v55 = &v30;
    v31 = v70;
    v57 = &v31;
    v42 = 2LL;
    v44[1] = 0;
    v46 = 2LL;
    v47 = v13;
    v48[0] = v12;
    v48[1] = 0;
    v50 = 8LL;
    v52 = 2LL;
    v54[1] = 0;
    v56 = 1LL;
    v58 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F78,
      (unsigned __int8 *)byte_140055CB8,
      0LL,
      0LL,
      0xCu,
      &v38);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
