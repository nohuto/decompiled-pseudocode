/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x14014CD78
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x14014D0F4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x14014D18C (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     _wcsupr @ 0x1401C7B2C (_wcsupr.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v4; // r12
  void *v5; // rsi
  PACCESS_TOKEN v6; // r15
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rdx
  NTSTATUS v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  PIMAGE_NT_HEADERS v15; // rax
  DWORD TimeDateStamp; // edi
  unsigned int v17; // r8d
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // eax
  const char *v24; // rdx
  wchar_t *v25; // rdi
  __int64 v26; // rax
  wchar_t *String; // [rsp+38h] [rbp-210h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-208h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-200h]
  size_t Size; // [rsp+50h] [rbp-1F8h] BYREF
  size_t v31; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1E8h]
  PACCESS_TOKEN v33; // [rsp+68h] [rbp-1E0h]
  DWORD v34; // [rsp+70h] [rbp-1D8h]
  int v35; // [rsp+74h] [rbp-1D4h]
  _BYTE v36[144]; // [rsp+80h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+110h] [rbp-138h] BYREF

  v4 = 0;
  pImageFileName = 0LL;
  String = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  BaseAddress = (PVOID)PsGetProcessSectionBaseAddress(*a1);
  if ( !BaseAddress )
  {
    v14 = -1073741637;
    v17 = 1764;
    goto LABEL_16;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( a1 != (PRKPROCESS *)v10 )
  {
    KeAttachProcess(*a1);
    v4 = 1;
  }
  if ( (((unsigned __int8)*((_DWORD *)a1 + 202) >> 4) & 3) == 1 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v33 = v6;
    Size = 256LL;
    v31 = 130LL;
    v23 = RtlQueryPackageIdentity(v6, Src, &Size, v36, &v31, 0LL);
    if ( v23 < 0 )
    {
      CitpLogFailureWorker(v23, v24, 0x719u);
      goto LABEL_7;
    }
    v25 = (wchar_t *)Win32AllocPoolZInitImpl(256LL, Size, 0x49637355u);
    String = v25;
    v26 = Win32AllocPoolZInitImpl(256LL, v31, 0x49637355u);
    v5 = (void *)v26;
    v32 = v26;
    if ( v25 && v26 )
    {
      memmove(v25, Src, Size);
      wcsupr(v25);
      memmove(v5, v36, v31);
      goto LABEL_7;
    }
    v14 = -1073741670;
    v17 = 1806;
LABEL_16:
    v18 = v14;
LABEL_17:
    CitpLogFailureWorker(v18, v7, v17);
    goto LABEL_18;
  }
LABEL_7:
  if ( String )
    goto LABEL_12;
  v11 = SeLocateProcessImageName(*a1, &pImageFileName);
  v14 = v11;
  if ( v11 < 0 )
  {
    pImageFileName = 0LL;
    v17 = 1830;
    v18 = v11;
    goto LABEL_17;
  }
  if ( !pImageFileName->Length )
  {
    v14 = -1073741637;
    goto LABEL_18;
  }
  v14 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  if ( v14 < 0 )
    goto LABEL_18;
  wcsupr(String);
LABEL_12:
  v15 = RtlImageNtHeader(BaseAddress);
  TimeDateStamp = v15->FileHeader.TimeDateStamp;
  v34 = TimeDateStamp;
  LODWORD(BaseAddress) = v15->OptionalHeader.CheckSum;
  v35 = (int)BaseAddress;
  if ( v5 )
    wcsupr((wchar_t *)v5);
  *(_QWORD *)a2 = String;
  String = 0LL;
  *((_QWORD *)a2 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)a2 + 6) = TimeDateStamp;
  *((_DWORD *)a2 + 7) = (_DWORD)BaseAddress;
  *((_DWORD *)a2 + 8) = (*((_DWORD *)a1 + 202) >> 4) & 3;
  *((_QWORD *)a2 + 2) = CitpProgramIdCalculateHash(a2);
  v14 = 0;
LABEL_18:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  GreDeleteFastMutex((char *)String, (__int64)v7, v12, v13);
  GreDeleteFastMutex((char *)v5, v19, v20, v21);
  if ( v4 )
    KeDetachProcess();
  return (unsigned int)v14;
}
