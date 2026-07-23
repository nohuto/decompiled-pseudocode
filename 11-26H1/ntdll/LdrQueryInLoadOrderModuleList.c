/*
 * XREFs of LdrQueryInLoadOrderModuleList @ 0x1800EC660
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int *v3; // r9
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, int **, __int64, __int64 *); // rax
  __int64 result; // rax
  _OWORD v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  int *v14; // [rsp+98h] [rbp+38h] BYREF

  v3 = &PebLdr;
  v11 = 0LL;
  v12 = 0;
  v14 = &PebLdr;
  memset(v10, 0, sizeof(v10));
  if ( a1 != (_QWORD *)&LdrpLocalProcess )
  {
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _OWORD *, __int64, _QWORD))a1[2])(*a1, 0LL, v10, 48LL, 0LL) >= 0 )
    {
      v7 = *a1;
      v8 = (__int64 (__fastcall *)(__int64, __int64, int **, __int64, __int64 *))a1[1];
      v13 = 0LL;
      result = v8(v7, *((_QWORD *)&v10[0] + 1) + 24LL, &v14, 8LL, &v13);
      if ( (int)result < 0 )
        return result;
      if ( v13 != 8 )
        return 2147483661LL;
    }
    v3 = v14;
  }
  *a2 = v3 + 4;
  if ( a3 )
    *a3 = v3 + 12;
  return 0LL;
}
