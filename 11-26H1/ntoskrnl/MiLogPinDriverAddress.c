/*
 * XREFs of MiLogPinDriverAddress @ 0x140AB45D4
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x140AB44D0 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogPinDriverAddress(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  UNICODE_STRING *p_DestinationString; // rdi
  int v7; // r14d
  unsigned int v8; // ecx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  _DWORD *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  wchar_t *Buffer; // [rsp+130h] [rbp+30h]
  _DWORD v43[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]

  v2 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  DestinationString = 0LL;
  v3 = MmLockLoadedDataTableEntry(v2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 120);
    p_DestinationString = (UNICODE_STRING *)(v3 + 88);
    v7 = *(_DWORD *)(v3 + 156);
  }
  else
  {
    v5 = 0;
    v7 = 0;
    p_DestinationString = &DestinationString;
    RtlInitUnicodeString(&DestinationString, L"Image not found");
  }
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x400000000000LL) == *((_QWORD *)stru_140E366D8.FirstArgument + 3) )
  {
    v8 = *(_DWORD *)a1;
    v22 = &v20;
    v20 = 1LL;
    v23 = 8LL;
    v9 = (v8 >> 1) & 1;
    v24 = &v9;
    v25 = 4LL;
    v10 = (v8 >> 2) & 1;
    v26 = &v10;
    v27 = 4LL;
    v11 = (v8 >> 3) & 1;
    v28 = &v11;
    v29 = 4LL;
    v12 = (v8 >> 4) & 1;
    v30 = &v12;
    v31 = 4LL;
    v13 = (v8 >> 5) & 1;
    v32 = &v13;
    v33 = 4LL;
    v14 = (unsigned __int8)v8 >> 6;
    v34 = &v14;
    v15 = (v8 >> 10) & 3;
    v35 = 4LL;
    v36 = &v15;
    v38 = &v16;
    v40 = v43;
    Buffer = p_DestinationString->Buffer;
    v43[0] = p_DestinationString->Length;
    v44 = &v17;
    v46 = &v18;
    *(_QWORD *)&DestinationString.Length = 2164260864LL;
    v48 = &DestinationString;
    v37 = 4LL;
    v16 = (v8 >> 8) & 3;
    v39 = 4LL;
    v41 = 2LL;
    v43[1] = 0;
    v17 = v5;
    v45 = 4LL;
    v18 = v7;
    v47 = 4LL;
    v49 = 8LL;
    tlgWriteAgg(
      (__int64)stru_140E366D8.FirstArgument,
      (unsigned __int8 *)&word_14005AA96,
      (__int64)stru_140E366D8.FirstArgument,
      0x10u,
      &v21);
  }
  if ( v4 )
    MmUnlockLoadedDataTableEntry(v4);
}
