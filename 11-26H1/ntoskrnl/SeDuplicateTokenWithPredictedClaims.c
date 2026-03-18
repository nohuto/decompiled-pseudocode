/*
 * XREFs of SeDuplicateTokenWithPredictedClaims @ 0x1408149DC
 * Callers:
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenWithPredictedClaims(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        PVOID *a6)
{
  int v9; // r15d
  NTSTATUS v10; // eax
  int v11; // ebx
  bool v12; // di
  __int64 v13; // r9
  PVOID v14; // rcx
  char v16; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v17[7]; // [rsp+49h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-21h] BYREF
  __int64 v19; // [rsp+58h] [rbp-19h] BYREF
  __int128 v20; // [rsp+60h] [rbp-11h] BYREF
  __int128 v21; // [rsp+70h] [rbp-1h]
  __int128 v22; // [rsp+80h] [rbp+Fh]

  *(_QWORD *)&v22 = 0LL;
  DWORD2(v22) = 0;
  *a6 = 0LL;
  v19 = 0LL;
  v17[0] = 0;
  v16 = 0;
  Object = 0LL;
  v9 = a1;
  v20 = 0LL;
  v21 = 0LL;
  v10 = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, &v19, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741275 )
      goto LABEL_14;
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v12 = (v19 & 0x200000) != 0;
  }
  if ( !a4 && !v12 )
    return (unsigned int)v11;
  *((_QWORD *)&v20 + 1) = 0LL;
  DWORD2(v21) = 0;
  *(_QWORD *)&v21 = 0LL;
  LODWORD(v20) = 48;
  v22 = 0LL;
  v11 = SepDuplicateToken(v9, (unsigned int)&v20, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( v11 < 0 )
  {
    v14 = 0LL;
    Object = 0LL;
    goto LABEL_15;
  }
  if ( !v12 || (v11 = SepDesktopAppxSubProcessToken((__int64)Object, 0LL, a2, a3, v17, &v16), v11 >= 0) )
  {
    if ( !a4 || (LOBYTE(v13) = 1, v11 = SepAddTokenOriginClaim(a4, a5, Object, v13), v11 >= 0) )
    {
      *a6 = Object;
      return (unsigned int)v11;
    }
  }
LABEL_14:
  v14 = Object;
LABEL_15:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)v11;
}
