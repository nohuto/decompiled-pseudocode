/*
 * XREFs of RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x1801463D0
 * Callers:
 *     RtlpCopyMappedMemoryEx @ 0x1800F85C0 (RtlpCopyMappedMemoryEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyMappedMemoryEx_ExceptionFilter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int **a7,
        _DWORD *a8)
{
  unsigned int v8; // r10d
  int *v10; // r11
  int v11; // ebx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v8 = 0;
  v10 = *a7;
  v11 = **a7;
  if ( v11 == -1073741818 )
  {
    if ( (unsigned int)v10[6] > 1 )
    {
      v12 = *((_QWORD *)v10 + 5);
      if ( v12 < a3 || v12 >= a3 + a4 )
      {
        if ( v12 >= a2 && v12 < a2 + a4 )
          v8 = 1;
      }
      else
      {
        v8 = 1;
      }
    }
    if ( (unsigned int)v10[6] > 2 )
      v11 = v10[12];
  }
  result = v8;
  *a8 = v11;
  return result;
}
