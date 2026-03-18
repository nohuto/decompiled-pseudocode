/*
 * XREFs of NVMeIceConfigureReadWriteCommand @ 0x140031644
 * Callers:
 *     NVMeIceIoStart @ 0x1400272C4 (NVMeIceIoStart.c)
 * Callees:
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeIceConfigureReadWriteCommand(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  char v9; // cl
  unsigned __int8 *v10; // rax
  __int64 v11; // r9
  int v12; // ecx
  int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  if ( (*(_DWORD *)(a1 + 4344) & 8) != 0 )
  {
    result = StorPortExtendedFunction(143LL, a1, a2, 2LL);
    if ( (_DWORD)result )
      return result;
    v6 = (unsigned __int8)*a3;
    if ( v6 == 2 || v6 == 1 )
    {
      v7 = *(_QWORD *)(a1 + 4352);
      v8 = *(unsigned __int8 *)(v7 + 12);
      if ( (_BYTE)v8 != 0xFF )
      {
        v9 = *(_BYTE *)(v7 + 13);
        if ( v9 != -1 )
          a3[v8] |= 1 << v9;
      }
      v10 = *(unsigned __int8 **)(a1 + 4352);
      v11 = v10[14];
      if ( (_BYTE)v11 == 0xFF )
        goto LABEL_13;
      v12 = v10[16];
      if ( (_BYTE)v12 )
      {
        v13 = v10[15];
        if ( (unsigned int)(v13 + v12) < 0x21 )
        {
          if ( 1 << v12 )
          {
            a3[v11] = a3[v11];
LABEL_13:
            v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4352) + 17LL);
            if ( (_BYTE)v14 != 0xFF )
              a3[v14] = 0;
            v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4352) + 18LL);
            if ( (_BYTE)v15 != 0xFF )
              a3[v15] = 0;
            v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4352) + 19LL);
            if ( (_BYTE)v16 != 0xFF )
              a3[v16] = 0;
            v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4352) + 20LL);
            if ( (_BYTE)v17 != 0xFF )
              a3[v17] = 0;
            return 0LL;
          }
        }
      }
    }
    return 3238002694LL;
  }
  return 0LL;
}
