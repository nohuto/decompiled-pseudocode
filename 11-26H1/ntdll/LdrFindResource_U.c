/*
 * XREFs of LdrFindResource_U @ 0x1800D9C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v8; // rbx
  _DWORD *SharedData; // r10
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned int v12; // edi
  _DWORD *v13; // rax
  __int64 v15; // rcx

  v8 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v15);
  }
  v12 = LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
  v13 = NtCurrentPeb()->SharedData;
  if ( v13 && *v13 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v11);
  }
  return v12;
}
