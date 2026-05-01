/*
 * XREFs of HamIsHostBeingDebugged @ 0x180012A90
 * Callers:
 *     <none>
 * Callees:
 *     HamRpcCltIsHostBeingDebugged @ 0x18001BE58 (HamRpcCltIsHostBeingDebugged.c)
 */

__int64 __fastcall HamIsHostBeingDebugged(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // esi
  __int64 v9; // r14
  ULONG v10; // eax
  int IsHostBeingDebugged; // ecx
  int v12; // r14d
  ULONG v13; // eax
  char v15; // [rsp+80h] [rbp+8h] BYREF
  _BYTE *v16; // [rsp+90h] [rbp+18h]

  v16 = a3;
  v15 = 0;
  v6 = *(_QWORD *)(a2 + 544);
  v7 = *(_DWORD *)(a2 + 536);
  v8 = *(_DWORD *)(a2 + 532);
  if ( a1[1] )
  {
    v9 = a2 + 464;
    v10 = RtlLengthSid((PSID)(a2 + 464));
    IsHostBeingDebugged = HampInProcIsHostBeingDebugged(a1[1], a2, v9, v10, v8, v7, v6, &v15);
  }
  else
  {
    v12 = a2 + 464;
    v13 = RtlLengthSid((PSID)(a2 + 464));
    IsHostBeingDebugged = HamRpcCltIsHostBeingDebugged(*a1, a2, v12, v13, v8, v7, v6, (__int64)&v15);
  }
  if ( IsHostBeingDebugged >= 0 )
    *a3 = v15;
  return (unsigned int)IsHostBeingDebugged;
}
