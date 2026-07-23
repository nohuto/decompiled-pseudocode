/*
 * XREFs of FsRtlDedupChangeInit @ 0x1407923F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpDedupChangeQueryValueKey @ 0x140792694 (FsRtlpDedupChangeQueryValueKey.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x1407927D0 (FsRtlpDedupChangeRegisterVolume.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlDedupChangeInit(_QWORD *a1, int a2, int a3, char a4, __int64 a5)
{
  int v9; // eax
  int v10; // r8d
  PVOID v11; // rdi
  unsigned int v12; // ebx
  _BYTE v14[4]; // [rsp+30h] [rbp-81h] BYREF
  int v15; // [rsp+34h] [rbp-7Dh] BYREF
  PVOID P; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-61h] BYREF
  char v19; // [rsp+60h] [rbp-51h] BYREF

  *a1 = 0LL;
  v18[0] = 8257660LL;
  P = &v19;
  v17[0] = 1048590LL;
  v18[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DedupChange";
  v14[0] = 0;
  v17[1] = L"Enabled";
  v15 = 92;
  v9 = FsRtlpDedupChangeQueryValueKey(v18, v17, &v15, &P, v14);
  v11 = P;
  if ( v9 < 0 || *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
  {
    LOBYTE(v10) = a4;
    v12 = FsRtlpDedupChangeRegisterVolume(a2, a3, v10, a5, (__int64)a1);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v14[0] )
    ExFreePoolWithTag(v11, 0);
  return v12;
}
