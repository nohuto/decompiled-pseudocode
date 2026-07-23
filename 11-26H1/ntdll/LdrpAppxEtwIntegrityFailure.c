/*
 * XREFs of LdrpAppxEtwIntegrityFailure @ 0x1801378B0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwEventUnregister @ 0x18008DC70 (EtwEventUnregister.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxEtwIntegrityFailure(int a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+58h] [rbp+17h] BYREF
  __int64 v8; // [rsp+60h] [rbp+1Fh] BYREF
  int v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+6Ch] [rbp+2Bh]
  int *v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+88h] [rbp+47h]
  int v15; // [rsp+8Ch] [rbp+4Bh]
  int v16; // [rsp+A8h] [rbp+67h] BYREF

  v16 = a1;
  RegHandle = 0LL;
  if ( a1 == -1073740673 )
  {
    v3 = (__int128 *)"\v";
  }
  else
  {
    v3 = (__int128 *)&AppModelLibraryLoadFailureSystemBinary;
    if ( a1 != -1073740674 )
      v3 = (__int128 *)&AppModelLibraryLoadFailureApplicationBinary;
  }
  v4 = -1LL;
  v8 = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v10 = 0;
  v9 = 2 * v5 + 2;
  v11 = &v16;
  v12 = 4LL;
  v13 = a3;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v15 = 0;
  v14 = 2 * v4 + 2;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwpEventWriteFull(RegHandle, v3, 0LL, 0, 0, 0LL, 0LL, 3, (__int64)&v8);
    return EtwEventUnregister(RegHandle);
  }
  return result;
}
