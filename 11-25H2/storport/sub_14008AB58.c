/*
 * XREFs of sub_14008AB58 @ 0x14008AB58
 * Callers:
 *     sub_14007B8DC @ 0x14007B8DC (sub_14007B8DC.c)
 *     sub_14008017C @ 0x14008017C (sub_14008017C.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008DFD0 @ 0x14008DFD0 (sub_14008DFD0.c)
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140134B78 @ 0x140134B78 (sub_140134B78.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008AB58(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  unsigned int v6; // r12d
  int v7; // ebx
  char v8; // r15
  __int64 v10; // rdi
  _BYTE *v11; // rax
  const char *v13; // r8
  __int64 v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+50h] [rbp-39h]
  _OWORD v17[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h]

  v6 = a3;
  v16 = 0;
  v7 = 0;
  v18 = 0LL;
  v8 = a2;
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, sizeof(v17));
  if ( a3 >= 2u || !(_BYTE)a2 && a3 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3584);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 3592);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6056);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 6064);
  }
  if ( !v11 || !(_BYTE)a2 && (!v11[152] || !v11[153]) )
    return (unsigned int)-1073741637;
  if ( !v11[53] )
  {
    LOBYTE(a2) = 1;
    v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _OWORD *, _BYTE *))sub_14008C3E8)(
           v10,
           a2,
           a4,
           a5,
           v15,
           a6);
    if ( v7 >= 0 )
    {
      v7 = sub_140135288(v10, 1LL, v17);
      if ( v7 < 0 )
      {
LABEL_22:
        sub_14006FED8(a6, 32LL, (__int64)"TcglibOpenSession");
        return (unsigned int)v7;
      }
      v7 = sub_14013477C(v10, v17, v6, v15);
      if ( v7 >= 0 )
      {
        sub_140134A98(v10, v17);
        v7 = sub_14008DFD0(a1, a6);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v7 = sub_140135288(v10, 2LL, v17);
        if ( v7 < 0 )
          goto LABEL_22;
        LOBYTE(v14) = v8 == 0;
        v7 = sub_140134B78(v10, v17, v14, v15);
        if ( v7 >= 0 )
        {
LABEL_30:
          sub_140134A98(v10, v17);
          return (unsigned int)v7;
        }
        v13 = "TcglibConfigureLockingSpEx";
      }
      else
      {
        v13 = "TcglibActivateLockingSpEx";
      }
      sub_14006FED8(a6, 32LL, (__int64)v13);
      goto LABEL_30;
    }
  }
  return (unsigned int)v7;
}
