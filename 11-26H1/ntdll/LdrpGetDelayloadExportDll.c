/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x1800C2F70
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800C6830 (LdrpLogDelayLoadTrigger.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, __int64 *a3, char *a4, __int64 a5)
{
  PVOID *v7; // r14
  char *v9; // rdi
  size_t v10; // rax
  int v11; // edi
  ANSI_STRING SourceString; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v14[8]; // [rsp+40h] [rbp-C8h] BYREF

  v14[0] = 0LL;
  *a3 = 0LL;
  v7 = (PVOID *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  memset(&v14[1], 0, 112);
  if ( *v7 )
    return LdrpFindLoadedDllByHandle(*v7, a3, 0LL, a4);
  v9 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
  if ( !(_DWORD)a4 )
    LODWORD(a4) = *(_DWORD *)(a1 + 272);
  LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), (unsigned int)a4 | 1LL, (__int64)v14);
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = v9;
  if ( v9 )
  {
    v10 = strlen(v9);
    if ( v10 >= 0xFFFF )
      LOWORD(v10) = -2;
    SourceString.Length = v10;
    SourceString.MaximumLength = v10 + 1;
  }
  v11 = LdrpLoadForwardedDll(&SourceString, (int)v14, a1, (_QWORD *)a1, 3, (__int64)a3);
  if ( v11 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
      *v7 = *(PVOID *)(*a3 + 48);
    LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
  }
  LdrpReleaseDllPath((__int64)v14);
  return (unsigned int)v11;
}
