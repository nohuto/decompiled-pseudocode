/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800C0490
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x180079550 (RtlCaptureImageExceptionValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // r10
  _DWORD *v7; // rax
  char v8; // bl
  unsigned int v9; // r11d
  unsigned int i; // r8d
  unsigned int v11; // edx
  __int64 v12; // r8

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v6 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v6 )
    return 3221225474LL;
  *a4 = *(_DWORD *)(a5 + 8LL * a3 + 124);
  if ( a2 || (unsigned int)v6 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v6;
    return 0LL;
  }
  v7 = (_DWORD *)(a5 + *(unsigned __int16 *)(a5 + 20) + 24LL);
  v8 = 0;
  v9 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a5 + 6); ++i )
  {
    v11 = v7[3];
    if ( (unsigned int)v6 >= v11 && (unsigned int)v6 < v7[4] + v11 )
    {
      v8 = 1;
      break;
    }
    v7 += 10;
  }
  if ( !v8 )
    v7 = 0LL;
  if ( !v7 )
  {
    *a6 = 0LL;
    return 3221225485LL;
  }
  v12 = a1 + (unsigned int)v7[5] - (unsigned __int64)(unsigned int)v7[3];
  *a6 = v6 + v12;
  if ( !(v6 + v12) )
    return (unsigned int)-1073741811;
  return v9;
}
