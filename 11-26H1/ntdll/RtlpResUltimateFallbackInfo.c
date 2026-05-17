/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x1800A7430
 * Callers:
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  unsigned int v5; // esi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // r9d
  __int64 result; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v21; // [rsp+80h] [rbp+8h] BYREF

  v19[0] = 4456514LL;
  v19[1] = L"RtlpResUltimateFallbackInfo Enter";
  v5 = 0;
  v21 = 0LL;
  v20[1] = L"RtlpResUltimateFallbackInfo Exit";
  v20[0] = 4325440LL;
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v18 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v18 = 2147353476LL;
    LdrpTraceLoadMUIDll(v19, *(unsigned __int8 *)v18);
  }
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v13 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, a2, (unsigned int)&v21, v13, 1);
  if ( (int)result >= 0 )
  {
    v15 = v21;
    if ( (unsigned __int64)v21 - 1 <= 0xFFFFFFFFFFFFFFFDuLL
      && (v16 = (unsigned int)v21[31], (_DWORD)v16)
      && v21[32]
      && (v17 = v21[6]) != 0 )
    {
      *a4 = v17;
      *a3 = (char *)v15 + v16;
    }
    else
    {
      v5 = -1073741823;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v20, *(unsigned __int8 *)v12);
    }
    return v5;
  }
  return result;
}
