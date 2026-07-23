/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x14046F5C0
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     AdtpEtwBuildDashString @ 0x140B32F30 (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v6; // r14d
  int v7; // r12d
  __int64 v8; // r9
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  unsigned int i; // edx
  unsigned __int64 v13; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int16 v18; // r10
  int v19; // ecx
  int v20; // eax

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      AdtpEtwBuildDashString(a2);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  for ( i = 0; i < v9; ++i )
  {
    if ( v10 + (*(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4) < v10 )
      return 3221225621LL;
    v10 += *(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4;
  }
  if ( v10 - 1 > v9 )
  {
    if ( v10 + 4 < v10 )
      return 3221225621LL;
    v10 += 4;
    v7 = 1;
  }
  v13 = 2LL * v10;
  if ( v13 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( (unsigned int)v13 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v15 = Pool2;
  if ( Pool2 )
  {
    *a3 = 1;
    if ( v7 )
    {
      *Pool2 = 0x90009000A000DLL;
      v6 = 4;
    }
    v16 = 0;
    v17 = v6 + 4;
    while ( v16 < v9 )
    {
      v18 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v16);
      if ( v18 )
      {
        v19 = 1;
        *((_WORD *)v15 + v6) = v18;
        v20 = 1;
      }
      else
      {
        *(_QWORD *)((char *)v15 + 2 * v6) = 0x90009000A000DLL;
        if ( v17 < v6 )
          return 3221225621LL;
        v20 = 4;
        v19 = 4;
      }
      ++v16;
      v17 += v20;
      v6 += v19;
    }
    *((_WORD *)v15 + v10 - 1) = 0;
    *a2 = v15;
    a2[1] = (unsigned int)v13;
    return 0LL;
  }
  return 3221225495LL;
}
