/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1800A4000
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyStringWorker(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    v8 = a1 - (_QWORD)a4;
    while ( a5 && *a4 )
    {
      *(_WORD *)((char *)a4 + v8) = *a4;
      --a5;
      ++a4;
      ++v7;
      if ( !--a2 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( a5 && *a4 )
      v6 = -2147483643;
  }
  result = v6;
  *a3 = v7;
  return result;
}
