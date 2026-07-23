/*
 * XREFs of ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x140A6AF88
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RtlpFindFunctionOverrideDvrtRecord(unsigned __int64 *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  gsl::details *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rax
  __int128 v10; // xmm0
  gsl::details *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-30h]
  gsl::details *v15[2]; // [rsp+48h] [rbp-20h] BYREF

  if ( *a1 >= 8 )
  {
    v4 = a1[1];
    v11 = (gsl::details *)(*a1 - 8);
    v15[0] = v11;
    if ( v11 == (gsl::details *)-1LL )
      goto LABEL_30;
    v15[1] = (gsl::details *)(v4 + 8);
    *(_OWORD *)a1 = *(_OWORD *)v15;
  }
  else
  {
    v4 = 0LL;
  }
  v12 = 0LL;
  if ( !v4 )
    return 3221225595LL;
  RtlCopyVolatileMemory(&v12, (const void *)v4, 8uLL);
  if ( (_DWORD)v12 != 1 )
    return 3221225659LL;
  v5 = *a1;
  if ( HIDWORD(v12) != *a1 )
    return 3221225595LL;
  if ( v5 >= 0xC )
  {
    v4 = a1[1];
    v11 = (gsl::details *)(v5 - 12);
    v15[0] = v11;
    if ( v11 != (gsl::details *)-1LL )
    {
      v15[1] = (gsl::details *)(v4 + 12);
      v10 = *(_OWORD *)v15;
      goto LABEL_27;
    }
LABEL_30:
    gsl::details::terminate(v11, v4);
    JUMPOUT(0x140A6B175LL);
  }
LABEL_7:
  v4 = 0LL;
  while ( v4 )
  {
    v15[0] = 0LL;
    LODWORD(v15[1]) = 0;
    RtlCopyVolatileMemory(v15, (const void *)v4, 0xCuLL);
    v6 = (gsl::details *)LODWORD(v15[1]);
    v4 = *a1;
    if ( LODWORD(v15[1]) > *a1 || ((__int64)v15[1] & 3) != 0 || !LODWORD(v15[1]) )
      return 3221225595LL;
    v7 = a1[1];
    if ( v15[0] == (gsl::details *)7 )
    {
      *(_QWORD *)&v13 = LODWORD(v15[1]);
      *((_QWORD *)&v13 + 1) = v7;
      if ( !v7 )
      {
LABEL_24:
        gsl::details::terminate(v6, v4);
        __debugbreak();
      }
      *a2 = v13;
      return 0LL;
    }
    v9 = LODWORD(v15[1]) + v7;
    v4 -= LODWORD(v15[1]);
    *(_QWORD *)&v13 = v4;
    if ( v4 == -1LL )
      goto LABEL_24;
    *((_QWORD *)&v13 + 1) = v9;
    *(_OWORD *)a1 = v13;
    if ( v4 < 0xC )
      goto LABEL_7;
    v4 = a1[1];
    v6 = (gsl::details *)*a1;
    if ( *a1 < 0xC )
      goto LABEL_24;
    v6 = (gsl::details *)((char *)v6 - 12);
    *(_QWORD *)&v14 = v6;
    if ( v6 == (gsl::details *)-1LL )
      goto LABEL_24;
    *((_QWORD *)&v14 + 1) = v4 + 12;
    v10 = v14;
LABEL_27:
    *(_OWORD *)a1 = v10;
  }
  if ( *a1 )
    return 3221225595LL;
  return 3221226021LL;
}
