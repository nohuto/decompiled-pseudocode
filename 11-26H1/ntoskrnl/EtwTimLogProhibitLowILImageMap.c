/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x140831238
 * Callers:
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v4; // rdi
  const wchar_t *v5; // r12
  __int64 *v6; // rax
  ULONG v7; // r15d
  unsigned __int16 v8; // ax
  int v9; // eax
  const wchar_t *v10; // rcx
  int v11; // r14d
  void *v12; // rsi
  __int16 v13; // ax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // r10d
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  int v23; // r15d
  _WORD v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+78h] [rbp-90h] BYREF
  int *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  _DWORD *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  _DWORD v37[2]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  void *v40; // [rsp+D8h] [rbp-30h]
  _DWORD v41[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  _DWORD *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 v46; // [rsp+108h] [rbp+0h]
  _DWORD v47[2]; // [rsp+110h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  const wchar_t *v49; // [rsp+128h] [rbp+20h]
  int v50; // [rsp+130h] [rbp+28h]
  int v51; // [rsp+134h] [rbp+2Ch]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  const wchar_t *v54; // [rsp+148h] [rbp+40h]
  int v55; // [rsp+150h] [rbp+48h]
  int v56; // [rsp+154h] [rbp+4Ch]
  _QWORD v57[20]; // [rsp+158h] [rbp+50h] BYREF

  v28 = a2;
  v27 = a1;
  v4 = &EmptyUnicodeString;
  v29 = 0LL;
  v5 = L"(null)";
  v6 = *(__int64 **)(a2 + 848);
  v30 = 0LL;
  if ( v6 )
    v4 = v6;
  v7 = 12;
  v8 = *(_WORD *)v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v8 )
  {
    v24[0] = v8 >> 1;
    UserData.Ptr = (ULONGLONG)v24;
    v9 = *(unsigned __int16 *)v4;
    v10 = (const wchar_t *)v4[1];
  }
  else
  {
    v24[0] = 6;
    UserData.Ptr = (ULONGLONG)v24;
    v10 = L"(null)";
    v9 = 12;
  }
  v49 = v10;
  v51 = 0;
  v50 = v9;
  EtwpQueryProcessCommandLine(a2, &v30);
  v11 = (unsigned __int16)v30;
  v12 = (void *)*((_QWORD *)&v30 + 1);
  v53 = 2LL;
  v52 = &v25;
  if ( (_WORD)v30 )
  {
    v54 = (const wchar_t *)*((_QWORD *)&v30 + 1);
    v13 = (unsigned __int16)v30 >> 1;
    v14 = (unsigned __int16)v30;
  }
  else
  {
    v54 = L"(null)";
    v14 = 12;
    v13 = 6;
  }
  v55 = v14;
  LOWORD(v25) = v13;
  v56 = 0;
  v15 = EtwpTiFillProcessIdentity(v57, v28, (unsigned __int64 *)&v29);
  v16 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v15 + 4), (__int64)KeGetCurrentThread());
  v18 = v16 + v17;
  if ( a3 && *a3 )
  {
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v7 = *a3;
    v19 = *a3 >> 1;
  }
  else
  {
    v19 = 6;
  }
  v26 = v19;
  v20 = 2LL * v18;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v26;
  v21 = 2LL * (v18 + 1);
  *((_QWORD *)&UserData.Size + v20) = 2LL;
  v22 = (const EVENT_DESCRIPTOR *)MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  *(&UserData.Ptr + v21) = (ULONGLONG)v5;
  *(&UserData.Size + 2 * v21) = v7;
  *(&UserData.Reserved + 2 * v21) = 0;
  v23 = v27;
  if ( v27 != 1 )
    v22 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  EtwWriteEx(*(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40], v22, 0LL, 1u, 0LL, 0LL, v18 + 2, &UserData);
  if ( (unsigned int)dword_140E08F78 > 5 && tlgKeywordOn((__int64)&dword_140E08F78, 0x400000000000LL) )
  {
    v27 = v23;
    v32 = &v27;
    v33 = 4LL;
    v34 = v37;
    v36 = v4[1];
    v37[0] = *(unsigned __int16 *)v4;
    v38 = v41;
    v28 = v29;
    v42 = &v28;
    v44 = v47;
    v46 = *((_QWORD *)a3 + 1);
    v47[0] = *a3;
    v35 = 2LL;
    v37[1] = 0;
    v39 = 2LL;
    v40 = v12;
    v41[0] = v11;
    v41[1] = 0;
    v43 = 8LL;
    v45 = 2LL;
    v47[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F78,
      (unsigned __int8 *)byte_140055D50,
      0LL,
      0LL,
      0xAu,
      &v31);
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
