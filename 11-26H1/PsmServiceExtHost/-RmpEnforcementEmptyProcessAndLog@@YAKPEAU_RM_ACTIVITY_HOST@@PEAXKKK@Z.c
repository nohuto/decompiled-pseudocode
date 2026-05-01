/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18005E63C
 * Callers:
 *     ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18005E5A0 (-RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, unsigned int a4)
{
  unsigned int v7; // ebx
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-81h] BYREF
  int v13; // [rsp+34h] [rbp-7Dh] BYREF
  int v14; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v15[3]; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v16; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  void *v19; // [rsp+70h] [rbp-41h]
  int v20; // [rsp+78h] [rbp-39h]
  int v21; // [rsp+7Ch] [rbp-35h]
  _DWORD *v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h]
  const wchar_t *v24; // [rsp+90h] [rbp-21h]
  int v25; // [rsp+98h] [rbp-19h]
  int v26; // [rsp+9Ch] [rbp-15h]
  int *v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  __int64 *v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  int *v31; // [rsp+C0h] [rbp+Fh]
  __int64 v32; // [rsp+C8h] [rbp+17h]
  int *v33; // [rsp+D0h] [rbp+1Fh]
  __int64 v34; // [rsp+D8h] [rbp+27h]

  v7 = MemUtilEmptyProcess(a2, a4, 0LL);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 0x11) != 0 && (qword_1800E1290 & 0x11) == qword_1800E1290 )
  {
    v8 = (const wchar_t *)((char *)a1 + 80);
    v16 = *((_QWORD *)a1 + 4);
    v14 = *((_DWORD *)a1 + 154);
    v12 = a4;
    v33 = (int *)&v12;
    v31 = &v13;
    v29 = &v16;
    v27 = &v14;
    v13 = a3;
    v15[0] = v7;
    v34 = 4LL;
    v32 = 4LL;
    v30 = 8LL;
    v28 = 4LL;
    if ( a1 == (struct _RM_ACTIVITY_HOST *)-80LL )
    {
      v8 = &word_1800BBB1C;
      v10 = 2;
    }
    else
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      v10 = 2 * v9 + 2;
    }
    v25 = v10;
    v22 = v15;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v24 = v8;
    v26 = 0;
    v23 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 17LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v19 = &unk_1800D22B8;
    UserData.Reserved = 2;
    v20 = 88;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return v7;
}
