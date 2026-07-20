/*
 * XREFs of SmscpLoadSubSystemsForMuSession @ 0x140002770
 * Callers:
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpNtSerializeBoot @ 0x14000D240 (SmpNtSerializeBoot.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 */

__int64 __fastcall SmscpLoadSubSystemsForMuSession(int a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  int v5; // eax
  char *v6; // rcx
  unsigned int v7; // esi
  _DWORD *v8; // r15
  char *v9; // r12
  __int64 v10; // rdx
  char *v11; // r8
  unsigned int v12; // esi
  unsigned int *v13; // r13
  char *v14; // r9
  int v15; // r15d
  BOOLEAN v16; // al
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  signed int v21; // eax
  _DWORD *v22; // rsi
  char *v23; // r15
  int v24; // edi
  signed __int32 v25[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+20h] [rbp-40h]
  char *v27; // [rsp+30h] [rbp-30h]
  __int64 SystemInformation; // [rsp+38h] [rbp-28h] BYREF
  char *v29; // [rsp+40h] [rbp-20h]
  UNICODE_STRING String1; // [rsp+48h] [rbp-18h] BYREF
  char v31; // [rsp+A8h] [rbp+48h]
  int v32; // [rsp+B0h] [rbp+50h]
  PVOID ReturnedState; // [rsp+B8h] [rbp+58h] BYREF

  ReturnedState = 0LL;
  SystemInformation = 0LL;
  v29 = 0LL;
  v31 = 0;
  String1 = 0LL;
  v2 = RtlAcquirePrivilege((PULONG)&SmpSessionCreatePrivilege, 1u, 2u, &ReturnedState);
  v3 = v2;
  if ( v2 < 0 )
  {
    SmpLogFailure("SmscpLoadSubSystemsForMuSession", 814LL, (unsigned int)v2);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v25, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 816;
    *((_DWORD *)SmscpSharedWindow + 1) = v3;
LABEL_3:
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    return (unsigned int)v3;
  }
  if ( !a1 && SmpSerializeBoot == 1 )
  {
    v5 = SmpNtSerializeBoot();
    v3 = v5;
    if ( v5 >= 0 )
    {
      v31 = 1;
    }
    else
    {
      SmpLogFailure("SmscpLoadSubSystemsForMuSession", 839LL, (unsigned int)v5);
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v25, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 841;
      *((_DWORD *)SmscpSharedWindow + 1) = v3;
      *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
    }
  }
  v6 = (char *)SmpMappedView;
  v7 = 0;
  v8 = (char *)SmpMappedView + 64;
  v9 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 7);
  if ( *((_DWORD *)SmpMappedView + 16) )
  {
    while ( 1 )
    {
      v10 = 16LL * v7;
      v29 = &v6[*(_QWORD *)&v9[v10]];
      WORD1(SystemInformation) = *(_WORD *)&v9[v10 + 8];
      LOWORD(SystemInformation) = WORD1(SystemInformation);
      v3 = NtSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformation, 0x10u);
      if ( v3 < 0 )
        break;
      if ( ++v7 >= *v8 )
        break;
      v6 = (char *)SmpMappedView;
    }
  }
  RtlReleasePrivilege(ReturnedState);
  if ( v3 < 0 )
  {
    SmpLogFailureString((__int64)"SmscpLoadSubSystemsForMuSession", 0x370u, (__int64)v29, v3);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v25, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 882;
LABEL_16:
    *((_DWORD *)SmscpSharedWindow + 1) = v3;
    goto LABEL_3;
  }
  v11 = (char *)SmpMappedView;
  v12 = 0;
  v13 = (unsigned int *)((char *)SmpMappedView + 80);
  v14 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 9);
  v27 = v14;
  if ( *((_DWORD *)SmpMappedView + 20) )
  {
    v15 = 12296;
    if ( a1 )
      v15 = 4104;
    while ( 1 )
    {
      String1.Buffer = (PWSTR)&v11[*(_QWORD *)&v14[16 * v12]];
      String1.MaximumLength = *(_WORD *)&v14[16 * v12 + 8];
      String1.Length = String1.MaximumLength;
      v29 = &v11[*(_QWORD *)&v14[16 * v12 + 16]];
      WORD1(SystemInformation) = *(_WORD *)&v14[16 * v12 + 24];
      LOWORD(SystemInformation) = WORD1(SystemInformation);
      v16 = RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u);
      v18 = v15 | 1;
      if ( !v16 )
        v18 = v15;
      v32 = v18;
      if ( !v31 && a1 == 1 && SmpSerializeBoot == 2 )
      {
        v19 = SmpNtSerializeBoot();
        v20 = v19;
        if ( v19 >= 0 )
        {
          v31 = 1;
        }
        else
        {
          SmpLogFailure("SmscpLoadSubSystemsForMuSession", 941LL, (unsigned int)v19);
          *(_DWORD *)SmscpSharedWindow = 1;
          _InterlockedOr(v25, 0);
          *((_DWORD *)SmscpSharedWindow + 2) = 943;
          *((_DWORD *)SmscpSharedWindow + 1) = v20;
          *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
        }
        v18 = v32;
      }
      v21 = SmpExecuteCommand((unsigned int)&SystemInformation, a1, v17, v18, 0LL);
      v3 = v21;
      if ( v21 < 0 )
        break;
      v11 = (char *)SmpMappedView;
      v12 += 2;
      if ( v12 >= *v13 )
        goto LABEL_33;
      v14 = v27;
    }
    SmpLogFailureString((__int64)"SmscpLoadSubSystemsForMuSession", 0x3BEu, (__int64)String1.Buffer, v21);
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v25, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 960;
    goto LABEL_16;
  }
LABEL_33:
  v22 = v11 + 96;
  v23 = &v11[*((_QWORD *)v11 + 11)];
  v24 = 0;
  if ( *((_DWORD *)v11 + 24) )
  {
    while ( 1 )
    {
      v26 = 0LL;
      v29 = &v11[*(_QWORD *)&v23[16 * v24]];
      WORD1(SystemInformation) = *(_WORD *)&v23[16 * v24 + 8];
      LOWORD(SystemInformation) = WORD1(SystemInformation);
      SmpExecuteCommand((unsigned int)&SystemInformation, a1, (_DWORD)v11, 0, 0LL);
      if ( (unsigned int)++v24 >= *v22 )
        break;
      v11 = (char *)SmpMappedView;
    }
  }
  return (unsigned int)v3;
}
