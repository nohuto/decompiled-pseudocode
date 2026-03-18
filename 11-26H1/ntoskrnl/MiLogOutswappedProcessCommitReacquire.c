/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x1406E4514
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  char *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r11
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-41h]
  int v15; // [rsp+28h] [rbp-39h]
  int v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp+Fh] BYREF
  int *v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]
  __int64 *v22; // [rsp+90h] [rbp+2Fh]
  __int64 v23; // [rsp+98h] [rbp+37h]

  if ( a4 )
  {
    if ( a5 )
    {
      if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
      {
        tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v11 + 824));
        v10 = byte_140057705;
        goto LABEL_12;
      }
    }
    else if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v12 + 824));
      v10 = (char *)&byte_1400576B1;
      goto LABEL_12;
    }
  }
  else if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
  {
    tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v6 + 824));
    v10 = byte_140057759;
LABEL_12:
    v13 = *(_DWORD *)(v9 + 464);
    v20 = &v16;
    v16 = v13;
    v22 = &v17;
    v21 = v7;
    v17 = a3;
    v23 = 8LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)v10, v7, 1u, v14, v15, 5u, &v18);
  }
}
