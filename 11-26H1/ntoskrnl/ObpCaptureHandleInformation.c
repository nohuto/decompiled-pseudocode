/*
 * XREFs of ObpCaptureHandleInformation @ 0x140A51C80
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 */

__int64 __fastcall ObpCaptureHandleInformation(
        int a1,
        __int64 a2,
        __int16 a3,
        __int64 *a4,
        __int16 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v11; // eax
  unsigned __int64 HandlePointer; // r8
  __int64 result; // rax
  unsigned __int64 v14; // rdx

  v11 = *a7 + 24;
  *a7 = v11;
  if ( v11 < 0x18 )
    return 3221225621LL;
  if ( a6 < v11 )
    return 3221225476LL;
  HandlePointer = ExGetHandlePointer(a4);
  **(_WORD **)a2 = a3;
  *(_BYTE *)(*(_QWORD *)a2 + 5LL) = ((__int64)*(unsigned int *)a4 >> 17) & 7;
  *(_BYTE *)(*(_QWORD *)a2 + 4LL) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                             + 40);
  *(_WORD *)(*(_QWORD *)a2 + 6LL) = a5;
  result = 0LL;
  v14 = 0LL;
  if ( !a1 )
    v14 = HandlePointer + 48;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v14;
  *(_WORD *)(*(_QWORD *)a2 + 2LL) = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 16LL) = a4[1] & 0x1FFFFFF;
  *(_QWORD *)a2 += 24LL;
  return result;
}
