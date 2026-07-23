/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x18001ED80
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrQueryModuleInfoFromLdrEntry(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64, _BYTE *, __int64, __int64 *); // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64, _BYTE *, __int64, __int64 *); // rax
  __int64 v14; // rcx
  int (__fastcall *v15)(__int64, __int64, __int64 *, __int64, __int64 *); // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int (__fastcall *v19)(__int64, __int64, __int64 *, __int64, __int64 *); // rax
  _BYTE v20[24]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[48]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-40h]
  _BYTE v25[32]; // [rsp+C8h] [rbp-38h] BYREF
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v29; // [rsp+200h] [rbp+100h] BYREF

  memset_thunk_772440563353939046(v22, 0, 0x138uLL);
  memset_thunk_772440563353939046(v20, 0, 0x50uLL);
  v9 = *a1;
  v10 = (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int64 *))a1[1];
  v28 = 0LL;
  result = v10(v9, a3, v22, 312LL, &v28);
  if ( (int)result >= 0 )
  {
    if ( v28 != 312 )
      return 2147483661LL;
    v12 = *a1;
    v13 = (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int64 *))a1[1];
    v28 = 0LL;
    result = v13(v12, v27, v20, 80LL, &v28);
    if ( (int)result >= 0 )
    {
      if ( v28 != 80 )
        return 2147483661LL;
      *(_QWORD *)(a2 + 16) = v23;
      *(_DWORD *)(a2 + 24) = v24;
      *(_DWORD *)(a2 + 28) = v26;
      if ( v21 > 0xFFFF )
        *(_WORD *)(a2 + 36) = -1;
      else
        *(_WORD *)(a2 + 36) = v21;
      if ( (a5 & 2) != 0 )
      {
        v14 = *a1;
        v15 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 *))a1[1];
        v16 = LdrpQueryProcessModuleInformationLoopDetectorCount;
        v28 = 0LL;
        v29 = 0LL;
        if ( v15(v14, a4, &v28, 8LL, &v29) >= 0 && v29 == 8 )
        {
          do
          {
            v17 = v28;
            if ( v28 == a4 )
              break;
            ++*(_WORD *)(a2 + 34);
            if ( a3 == v17 - 32 )
              break;
            if ( !--v16 )
              break;
            v18 = *a1;
            v19 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 *))a1[1];
            v29 = 0LL;
            if ( v19(v18, v17, &v28, 8LL, &v29) < 0 )
              break;
          }
          while ( v29 == 8 );
        }
      }
      return LdrpGetModuleName(a1, v25, a2, 0LL);
    }
  }
  return result;
}
