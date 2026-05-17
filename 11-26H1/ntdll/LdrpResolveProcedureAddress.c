/*
 * XREFs of LdrpResolveProcedureAddress @ 0x1800C5A40
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C5930 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlCharToInteger @ 0x1800399A0 (RtlCharToInteger.c)
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     RtlGuardCheckImageBase @ 0x18004C3D0 (RtlGuardCheckImageBase.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpCheckRedirection @ 0x1800838D8 (LdrpCheckRedirection.c)
 *     strrchr @ 0x18012CC40 (strrchr.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(
        __int64 a1,
        __int64 a2,
        const char *a3,
        ULONG a4,
        char a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rax
  __int64 (*v7)(void); // rsi
  int v8; // ebx
  unsigned int v10; // r15d
  char v11; // r14
  char v12; // al
  __int64 v13; // rax
  int ProcedureAddress; // eax
  int v15; // ebx
  unsigned int v16; // eax
  char *v17; // rbx
  char *v18; // rax
  char *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v22; // [rsp+30h] [rbp-B9h] BYREF
  ULONG Value; // [rsp+38h] [rbp-B1h] BYREF
  ULONG v24; // [rsp+3Ch] [rbp-ADh]
  __int64 v25; // [rsp+40h] [rbp-A9h]
  STRING SourceString; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v27; // [rsp+58h] [rbp-91h]
  __int128 v28; // [rsp+60h] [rbp-89h] BYREF
  __int128 v29; // [rsp+70h] [rbp-79h]
  __int128 v30; // [rsp+80h] [rbp-69h]
  __int128 v31; // [rsp+90h] [rbp-59h]
  __int128 v32; // [rsp+A0h] [rbp-49h]
  __int128 v33; // [rsp+B0h] [rbp-39h]
  __int128 v34; // [rsp+C0h] [rbp-29h]
  __int128 v35; // [rsp+D0h] [rbp-19h]

  v6 = *(_QWORD *)(a2 + 80);
  v7 = 0LL;
  v27 = a2;
  v8 = a4;
  v24 = a4;
  v25 = a1;
  v10 = 0;
  Value = a4;
  v22 = a2;
  v30 = v6;
  SourceString = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( a1 && LdrpRedirectionModule && LdrpRedirectionModule != a1 )
  {
    if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 104) & 1;
    }
    else if ( LdrpRedirectionCalloutFunc )
    {
      v12 = LdrpRedirectionCalloutFunc(*(_QWORD *)(a1 + 80));
      a1 = v25;
      v11 = v12;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  while ( 1 )
  {
    if ( v11 )
    {
      if ( a3 )
      {
        v13 = LdrpCheckRedirection(a1, v22, (__int64)a3);
        if ( v13 != -4530927 )
        {
          *a6 = v13;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v22 + 48), a3, v8, a6);
    v15 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20
      || (a5 & 2) != 0
      || (v17 = (char *)*a6, v18 = strrchr((const char *)*a6, 46), (v19 = v18) == 0LL)
      || (v20 = v18 - v17, v20 > 0xFFFF) )
    {
      v15 = -1073741701;
LABEL_31:
      LdrpReleaseDllPath((__int64)&v28);
      goto LABEL_48;
    }
    a3 = v19 + 1;
    SourceString.Buffer = v17;
    SourceString.Length = v20;
    SourceString.MaximumLength = v20;
    if ( *a3 == 35 )
    {
      if ( RtlCharToInteger(a3 + 1, 0, &Value) < 0 )
      {
        v15 = -1073741701;
        goto LABEL_25;
      }
      a3 = 0LL;
      v24 = Value;
    }
    DWORD2(v29) = *(_DWORD *)(v22 + 272);
    v15 = LdrpLoadForwardedDll(&SourceString, (__int64)&v28, v27, v22, 2, (__int64)&v22);
    if ( v15 < 0 )
      goto LABEL_31;
    LdrpDereferenceModule(v22);
    a1 = v25;
    v8 = v24;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
      RtlGuardCheckImageBase(*(_QWORD *)(v22 + 184), 1);
    else
      RtlGuardCheckImageBase(*(_QWORD *)(v22 + 48), 0);
    LdrpReleaseDllPath((__int64)&v28);
    goto LABEL_26;
  }
LABEL_25:
  LdrpReleaseDllPath((__int64)&v28);
  if ( v15 < 0 )
    goto LABEL_48;
LABEL_26:
  v7 = (__int64 (*)(void))*a6;
  if ( RtlpHpExportType )
  {
    if ( RtlpHpExportType == 1 )
    {
      if ( v7 == RtlAllocateHeapExport )
      {
        v7 = RtlAllocateHeapFast;
      }
      else if ( v7 == RtlFreeHeapExport )
      {
        v7 = RtlFreeHeapFast;
      }
      else if ( v7 == RtlReAllocateHeapExport )
      {
        v7 = RtlReAllocateHeapFast;
      }
    }
  }
  else if ( v7 == RtlAllocateHeapExport )
  {
    v7 = RtlAllocateHeapFull;
  }
  else if ( v7 == RtlFreeHeapExport )
  {
    v7 = RtlFreeHeapFull;
  }
  else if ( v7 == RtlReAllocateHeapExport )
  {
    v7 = RtlReAllocateHeapFull;
  }
LABEL_48:
  *a6 = (unsigned __int64)v7;
  return (unsigned int)v15;
}
