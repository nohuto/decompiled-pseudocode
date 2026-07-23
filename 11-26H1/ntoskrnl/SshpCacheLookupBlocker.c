/*
 * XREFs of SshpCacheLookupBlocker @ 0x140A908EC
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SshpCacheLookupBlocker(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  _QWORD *v8; // rax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    return (unsigned int)-1073741275;
  v5 = *(_OWORD *)(a2 + 16);
  Buffer[0] = 0LL;
  v12 = a2 + 48;
  v6 = *(_QWORD *)(a2 + 64);
  *(_OWORD *)((char *)v11 + 8) = 0LL;
  v13 = v6;
  v7 = *(_OWORD *)(a2 + 32);
  Buffer[1] = v11;
  v11[1] = v5;
  v11[0] = v7;
  v8 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 48), Buffer);
  if ( v8 )
    *a3 = v8[1];
  else
    return (unsigned int)-1073741275;
  return v3;
}
