/*
 * XREFs of EtwpTimLogMitigationForProcess @ 0x140B1E7FC
 * Callers:
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1409FCFC0 (EtwTimLogProhibitWin32kSystemCalls.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140ABDFA4 (EtwTimLogProhibitDynamicCode.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140B1E7A8 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTimLogMitigationForProcess(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4, char a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rsi
  const wchar_t *v8; // rcx
  __int16 v9; // r14
  int v10; // r12d
  unsigned __int16 v11; // ax
  int v12; // eax
  PVOID v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // r8d
  _WORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h] BYREF
  const EVENT_DESCRIPTOR *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-90h] BYREF
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  _DWORD *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  _DWORD v32[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  PVOID v35; // [rsp+E0h] [rbp-20h]
  _DWORD v36[2]; // [rsp+E8h] [rbp-18h] BYREF
  PCEVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  const wchar_t *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]
  __int16 *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  const wchar_t *v45; // [rsp+130h] [rbp+30h]
  int v46; // [rsp+138h] [rbp+38h]
  int v47; // [rsp+13Ch] [rbp+3Ch]
  __int64 v48[16]; // [rsp+140h] [rbp+40h] BYREF

  v5 = *(__int64 **)(a4 + 848);
  v6 = &EmptyUnicodeString;
  v20 = a2;
  v19 = a1;
  v23 = 0LL;
  EventDescriptor = a3;
  if ( v5 )
    v6 = v5;
  v8 = L"(null)";
  *(_OWORD *)P = 0LL;
  v9 = 6;
  v10 = 12;
  v11 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v17[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v17;
    v12 = *(unsigned __int16 *)v6;
    v8 = (const wchar_t *)v6[1];
  }
  else
  {
    v17[0] = 6;
    UserData.Ptr = (ULONGLONG)v17;
    v12 = 12;
  }
  v40 = v8;
  v42 = 0;
  v41 = v12;
  EtwpQueryProcessCommandLine(a4, (__int64)P);
  v13 = P[1];
  v44 = 2LL;
  v43 = &v18;
  if ( LOWORD(P[0]) )
  {
    v10 = LOWORD(P[0]);
    v9 = LOWORD(P[0]) >> 1;
    v45 = (const wchar_t *)P[1];
  }
  else
  {
    v45 = L"(null)";
  }
  v18 = v9;
  v46 = v10;
  v47 = 0;
  v14 = EtwpTiFillProcessIdentity(v48, a4, (unsigned __int64 *)&v23);
  v15 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v14 + 4), (__int64)KeGetCurrentThread());
  EtwWriteEx(
    *(REGHANDLE *)&stru_140F03830.SavedApcStateFill[40],
    EventDescriptor,
    0LL,
    a5 != 0,
    0LL,
    0LL,
    v15 + v16,
    &UserData);
  if ( (unsigned int)dword_140E08F78 > 5
    && (qword_140E08F88 & 0x200000000000LL) != 0
    && (qword_140E08F90 & 0x200000000000LL) == qword_140E08F90 )
  {
    v26 = 4LL;
    v25 = &v19;
    v27 = &v20;
    v29 = v32;
    v31 = v6[1];
    v32[0] = *(unsigned __int16 *)v6;
    v33 = v36;
    v36[0] = LOWORD(P[0]);
    EventDescriptor = v23;
    p_EventDescriptor = &EventDescriptor;
    v28 = 4LL;
    v30 = 2LL;
    v32[1] = 0;
    v34 = 2LL;
    v35 = v13;
    v36[1] = 0;
    v38 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08F78, (unsigned __int8 *)byte_140055EC1, 0LL, 0LL, 9u, &v24);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
