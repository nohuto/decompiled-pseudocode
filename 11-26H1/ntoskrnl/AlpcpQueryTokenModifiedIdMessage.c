/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x1407C32F4
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1407C3C50 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeDeleteClientSecurity @ 0x1408EF1A0 (SeDeleteClientSecurity.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     SeGetTokenControlInformation @ 0x140A6C5B0 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  int v9; // ebx
  __int64 result; // rax
  char PreviousMode; // di
  char v12[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v14[12]; // [rsp+40h] [rbp-98h] BYREF
  int v15; // [rsp+4Ch] [rbp-8Ch]
  __int128 v16; // [rsp+90h] [rbp-48h] BYREF
  __int128 Src; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-28h]

  v15 = 0;
  memset_0(v14, 0, 0x44uLL);
  v12[0] = 0;
  v13 = 0LL;
  v16 = 0LL;
  Src = 0LL;
  v18 = 0LL;
  if ( a4 >= 8 )
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v13, v14, v12);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v13, &v16);
    if ( v12[0] )
      SeDeleteClientSecurity(v14);
  }
  else
  {
    v9 = -1073741789;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12[0] = PreviousMode;
  if ( a5 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a5, 8);
    else
      *a5 = 8;
  }
  if ( v9 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a3, Src);
    else
      RtlCopyVolatileMemory(a3, &Src, 8uLL);
  }
  return (unsigned int)v9;
}
