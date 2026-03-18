/*
 * XREFs of ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x14010FB68
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x14010FA74 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x14010FE5C (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     AddApiSetHostLoadRefCount @ 0x14010FF24 (AddApiSetHostLoadRefCount.c)
 */

__int64 __fastcall LoadApiSetHost(struct _Win32kApiSetHost *a1, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  struct _UNICODE_STRING *v5; // rcx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  PVOID P[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v11.Length = 2883626LL;
  v11.Buffer = (PWSTR)L"\\SystemRoot\\System32\\";
  v2 = 0;
  v12[0] = 3932218LL;
  v12[1] = L"\\SystemRoot\\System32\\Drivers\\";
  v5 = &v11;
  v6 = 0;
  *(_OWORD *)P = 0LL;
  while ( 1 )
  {
    v7 = v6++;
    if ( v7 >= 2 )
      return v2;
    if ( !FormFullImageName(v5, a2, (struct _UNICODE_STRING *)P) )
      return (unsigned int)-1073741801;
    v8 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, __int64, char *, char *))MmLoadSystemImage)(
           P,
           0LL,
           0LL,
           0x80000000LL,
           (char *)a1 + 40,
           (char *)a1 + 32);
    v2 = v8;
    if ( v8 == -1073741554 || v8 == -1073741411 )
    {
      AddApiSetHostLoadRefCount(a1, P);
      v2 = 0;
LABEL_7:
      ExFreePoolWithTag(P[1], 0);
      return v2;
    }
    if ( v8 != -1073741772 )
    {
      if ( v8 >= 0 )
        AddApiSetHostLoadRefCount(a1, P);
      goto LABEL_7;
    }
    ExFreePoolWithTag(P[1], 0);
    P[1] = 0LL;
    v5 = (struct _UNICODE_STRING *)v12;
  }
}
