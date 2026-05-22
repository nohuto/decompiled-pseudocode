/*
 * XREFs of ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180075308
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 * Callees:
 *     swprintf_s @ 0x18009B344 (swprintf_s.c)
 */

__int64 __fastcall AlpcPortString::AlpcPortString(__int64 a1, int *a2, int a3)
{
  int v5; // eax
  int v6; // r8d
  int v7; // ecx
  int v8; // r11d
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  int v15; // edx
  __int64 SessionId; // r9
  const wchar_t *v17; // r8
  int v18; // eax
  int v20; // [rsp+C0h] [rbp+8h]

  *(_OWORD *)a1 = 0LL;
  v5 = *((unsigned __int16 *)a2 + 3);
  v6 = *((unsigned __int16 *)a2 + 2);
  v7 = *((unsigned __int8 *)a2 + 15);
  v8 = *((unsigned __int8 *)a2 + 14);
  v9 = *((unsigned __int8 *)a2 + 13);
  v10 = *((unsigned __int8 *)a2 + 12);
  v11 = *((unsigned __int8 *)a2 + 11);
  v12 = *((unsigned __int8 *)a2 + 10);
  v13 = *((unsigned __int8 *)a2 + 9);
  v14 = *((unsigned __int8 *)a2 + 8);
  v15 = *a2;
  v20 = v6;
  if ( a3 == 1 )
    SessionId = NtCurrentPeb()->SessionId;
  else
    SessionId = 0LL;
  v17 = L"\\Sessions\\%lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  if ( a3 != 1 )
    v17 = L"%.0lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  v18 = swprintf_s(
          (wchar_t *const)(a1 + 16),
          0x52uLL,
          v17,
          SessionId,
          v15,
          v20,
          v5,
          v14,
          v13,
          v12,
          v11,
          v10,
          v9,
          v8,
          v7);
  if ( v18 > 0 )
  {
    *(_WORD *)(a1 + 2) = 164;
    *(_WORD *)a1 = 2 * v18;
    *(_QWORD *)(a1 + 8) = a1 + 16;
  }
  return a1;
}
