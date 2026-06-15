/*
 * XREFs of sub_140025810 @ 0x140025810
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_140098810 @ 0x140098810 (sub_140098810.c)
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 *     sub_1400A3F60 @ 0x1400A3F60 (sub_1400A3F60.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140025810(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v9[3]; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+7Ch] [rbp+3h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  _DWORD *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  _BYTE *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  int *v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1400E7428 > 5 && (byte_1400E7438 & 2) != 0 && (qword_1400E7440 & 2) == qword_1400E7440 )
  {
    v9[0] = a2;
    v8 = 1;
    v4 = a1 + 8;
    v22 = &v8;
    v23 = 4LL;
    if ( a3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
      v6 = v5 + 1;
    }
    else
    {
      a3 = &unk_1400C67A8;
      v6 = 1;
    }
    v20 = v6;
    v17 = v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1400E7430;
    v15 = v4;
    v19 = a3;
    v21 = 0;
    v18 = 4LL;
    v16 = 16LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1400E7430;
    v12 = &unk_1400D3C83;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 68;
    v9[1] = (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550;
    EventWriteTransfer(qword_1400E7448, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  sub_1400B6010(a1 + 104);
  return sub_1400B6010(a1 + 104);
}
