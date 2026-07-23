/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry32 @ 0x1800F8610
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BF120 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 *     LdrpReadMemory @ 0x1800C9200 (LdrpReadMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrQueryModuleInfoFromLdrEntry32(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64, _BYTE *, __int64, __int64 *); // rax
  NTSTATUS result; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-61h] BYREF
  _WORD v15[2]; // [rsp+38h] [rbp-59h] BYREF
  int v16; // [rsp+3Ch] [rbp-55h]
  __int64 v17; // [rsp+40h] [rbp-51h]
  _BYTE v18[24]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-29h]
  int v20; // [rsp+70h] [rbp-21h]
  __int16 v21; // [rsp+74h] [rbp-1Dh]
  __int16 v22; // [rsp+76h] [rbp-1Bh]
  unsigned int v23; // [rsp+78h] [rbp-19h]
  int v24; // [rsp+84h] [rbp-Dh]
  __int16 v25; // [rsp+88h] [rbp-9h]

  v16 = 0;
  memset_thunk_772440563353939046(v18, 0, 0x48uLL);
  v9 = *a1;
  v10 = (__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int64 *))a1[1];
  v14 = 0LL;
  result = v10(v9, a3, v18, 72LL, &v14);
  if ( result >= 0 )
  {
    if ( v14 == 72 )
    {
      *(_QWORD *)(a2 + 16) = v19;
      *(_DWORD *)(a2 + 24) = v20;
      *(_DWORD *)(a2 + 28) = v24;
      *(_WORD *)(a2 + 36) = v25;
      if ( (a5 & 2) != 0 )
      {
        v12 = 500;
        LODWORD(v14) = 0;
        v13 = a4;
        do
        {
          if ( (int)LdrpReadMemory((__int64)a1, v13, (__int64)&v14, 4LL) < 0 )
            break;
          v13 = (unsigned int)v14;
          if ( (unsigned int)v14 == a4 )
            break;
          ++*(_WORD *)(a2 + 34);
          if ( a3 == v13 - 16 )
            break;
          --v12;
        }
        while ( v12 );
      }
      v17 = v23;
      v15[0] = v21;
      v15[1] = v22;
      return LdrpGetModuleName(a1, (__int64)v15, a2, 1);
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
