/*
 * XREFs of EtwTimLogBlockNonCetBinaries @ 0x140830640
 * Callers:
 *     PsBlockNonCetBinaries @ 0x1407F5DE8 (PsBlockNonCetBinaries.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogBlockNonCetBinaries(int a1, __int64 a2, int a3, int a4, unsigned __int16 *a5, int a6)
{
  unsigned __int16 *v6; // r14
  __int64 *v7; // rdi
  const wchar_t *v8; // r13
  __int64 *v9; // rax
  ULONG v10; // r12d
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // r15d
  void *v15; // rsi
  __int16 v16; // ax
  int v17; // ecx
  unsigned int v18; // r8d
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  _WORD v27[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+98h] [rbp-70h] BYREF
  int *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  _DWORD *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  __int64 v43; // [rsp+D8h] [rbp-30h]
  _DWORD v44[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  void *v47; // [rsp+F8h] [rbp-10h]
  _DWORD v48[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  _DWORD *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  __int64 v53; // [rsp+128h] [rbp+20h]
  _DWORD v54[2]; // [rsp+130h] [rbp+28h] BYREF
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  __int64 *v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  __int64 *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+70h] BYREF
  const wchar_t *v64; // [rsp+188h] [rbp+80h]
  int v65; // [rsp+190h] [rbp+88h]
  int v66; // [rsp+194h] [rbp+8Ch]
  int *v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v69; // [rsp+1A8h] [rbp+A0h]
  int v70; // [rsp+1B0h] [rbp+A8h]
  int v71; // [rsp+1B4h] [rbp+ACh]
  _QWORD v72[22]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v73; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v74; // [rsp+2D0h] [rbp+1C8h] BYREF

  v74 = a4;
  v73 = a3;
  v6 = a5;
  v7 = &EmptyUnicodeString;
  v33 = a2;
  v30 = a1;
  v34 = 0LL;
  v8 = L"(null)";
  v9 = *(__int64 **)(a2 + 848);
  v37 = 0LL;
  if ( v9 )
    v7 = v9;
  v10 = 12;
  v11 = *(_WORD *)v7;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v27[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v27;
    v12 = *(unsigned __int16 *)v7;
    v13 = (const wchar_t *)v7[1];
  }
  else
  {
    v27[0] = 6;
    UserData.Ptr = (ULONGLONG)v27;
    v13 = L"(null)";
    v12 = 12;
  }
  v64 = v13;
  v66 = 0;
  v65 = v12;
  EtwpQueryProcessCommandLine(a2, &v37);
  v14 = (unsigned __int16)v37;
  v15 = (void *)*((_QWORD *)&v37 + 1);
  v68 = 2LL;
  v67 = &v28;
  if ( (_WORD)v37 )
  {
    v69 = (const wchar_t *)*((_QWORD *)&v37 + 1);
    v16 = (unsigned __int16)v37 >> 1;
    v17 = (unsigned __int16)v37;
  }
  else
  {
    v69 = L"(null)";
    v17 = 12;
    v16 = 6;
  }
  v70 = v17;
  LOWORD(v28) = v16;
  v71 = 0;
  v18 = EtwpTiFillProcessIdentity(v72, v33, &v34) + 4;
  if ( v6 && *v6 )
  {
    v8 = (const wchar_t *)*((_QWORD *)v6 + 1);
    v10 = *v6;
    v19 = *v6 >> 1;
  }
  else
  {
    v19 = 6;
  }
  LOWORD(v29) = v19;
  v20 = 2LL * v18;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v29;
  v21 = 2LL * (v18 + 1);
  *((_QWORD *)&UserData.Size + v20) = 2LL;
  v22 = 2LL * (v18 + 2);
  *(&UserData.Ptr + v21) = (ULONGLONG)v8;
  *(&UserData.Size + 2 * v21) = v10;
  *(&UserData.Reserved + 2 * v21) = 0;
  v23 = v30;
  *(&UserData.Ptr + v22) = (ULONGLONG)&v73;
  *((_QWORD *)&UserData.Size + v22) = 4LL;
  v24 = 2LL * (v18 + 3);
  *(&UserData.Ptr + v24) = (ULONGLONG)&v74;
  *((_QWORD *)&UserData.Size + v24) = 4LL;
  v25 = 2LL * (v18 + 4);
  *(&UserData.Ptr + v25) = (ULONGLONG)&a6;
  v26 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_BLOCK_NON_CET_BINARIES;
  *((_QWORD *)&UserData.Size + v25) = 4LL;
  if ( v23 != 1 )
    v26 = &MITIGATION_ENFORCE_BLOCK_NON_CET_BINARIES;
  EtwWriteEx(*(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40], v26, 0LL, 1u, 0LL, 0LL, v18 + 5, &UserData);
  if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL) )
  {
    v30 = v23;
    v39 = &v30;
    v40 = 4LL;
    v41 = v44;
    v43 = v7[1];
    v44[0] = *(unsigned __int16 *)v7;
    v45 = v48;
    v35 = v34;
    v49 = &v35;
    v51 = v54;
    v53 = *((_QWORD *)v6 + 1);
    v54[0] = *v6;
    v31 = v73;
    v55 = &v31;
    v32 = v74;
    v57 = &v32;
    LODWORD(v33) = a6;
    v59 = &v33;
    v61 = &v36;
    v42 = 2LL;
    v44[1] = 0;
    v46 = 2LL;
    v47 = v15;
    v48[0] = v14;
    v48[1] = 0;
    v50 = 8LL;
    v52 = 2LL;
    v54[1] = 0;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v36 = 0x1000000LL;
    v62 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F78,
      (unsigned __int8 *)&dword_140055A04,
      0LL,
      0LL,
      0xEu,
      &v38);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
