/*
 * XREFs of PfpMemoryListQuery @ 0x140348568
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 ULong64FromUser; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v17[10]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+90h] [rbp-88h]
  __int64 v19; // [rsp+98h] [rbp-80h]
  __int64 v20; // [rsp+A0h] [rbp-78h]

  memset_0(v17, 0, 0xB0uLL);
  v6 = 0;
  LODWORD(v16) = 0;
  if ( *(_DWORD *)(a1 + 24) >= 0x40u )
  {
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v17, (__int64)&v16);
    v8 = *(_QWORD *)(a1 + 16);
    if ( a2 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
      RtlWriteULongToUser(v8, 1LL);
    }
    else
    {
      *(_DWORD *)v8 = 1;
    }
    if ( a2 )
      RtlWriteULongToUser(v8 + 4, 64LL);
    else
      *(_DWORD *)(v8 + 4) = 64;
    if ( a2 )
      RtlWriteULongToUser(v8 + 8, 1LL);
    else
      *(_DWORD *)(v8 + 8) = 1;
    if ( a2 )
      ULong64FromUser = RtlReadULong64FromUser(v8 + 16);
    else
      ULong64FromUser = *(_QWORD *)(v8 + 16);
    v10 = ULong64FromUser & 0xFFFFFFFFFFFFFF00uLL;
    if ( a2 )
      RtlWriteULong64ToUser(v8 + 16, v10);
    else
      *(_QWORD *)(v8 + 16) = v10;
    v11 = v17[9] + v17[8] + v17[7] + v17[6] + v17[5];
    if ( a2 )
      RtlWriteULong64ToUser(v8 + 24, v11);
    else
      *(_QWORD *)(v8 + 24) = v11;
    v12 = (_QWORD *)(v8 + 32);
    if ( a2 )
      RtlWriteULong64ToUser(v12, v18);
    else
      *v12 = v18;
    v13 = v20 + v19;
    if ( a2 )
      RtlWriteULong64ToUser(v8 + 40, v13);
    else
      *(_QWORD *)(v8 + 40) = v13;
    v14 = v17[1] + v17[0];
    if ( a2 )
      RtlWriteULong64ToUser(v8 + 48, v14);
    else
      *(_QWORD *)(v8 + 48) = v14;
    v15 = v17[2] + v17[3];
    if ( a2 )
      RtlWriteULong64ToUser(v8 + 56, v15);
    else
      *(_QWORD *)(v8 + 56) = v15;
  }
  else
  {
    v6 = -1073741789;
  }
  *a3 = 64;
  return v6;
}
