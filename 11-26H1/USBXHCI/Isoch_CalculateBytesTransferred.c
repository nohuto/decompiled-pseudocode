/*
 * XREFs of Isoch_CalculateBytesTransferred @ 0x140015A8C
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1400154F0 (Isoch_FindTrbMatch.c)
 * Callees:
 *     Isoch_ProcessSegment @ 0x140015B5C (Isoch_ProcessSegment.c)
 */

__int64 __fastcall Isoch_CalculateBytesTransferred(int a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  int v7; // eax
  _QWORD *v9; // rsi
  int v10; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a2 + 112);
  v10 = 0;
  v11 = 0;
  v7 = *(_DWORD *)(a2 + 120);
  if ( v3 != *(_QWORD **)(a2 + 96) )
  {
    v9 = (_QWORD *)(a2 + 24);
    while ( v3 != v9 )
    {
      if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v3, v7, (__int64)&v10, (__int64)&v11) )
        goto LABEL_3;
      v3 = (_QWORD *)*v3;
      v7 = 0;
    }
  }
  v3 = *(_QWORD **)(a2 + 96);
  if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v3, v7, (__int64)&v10, (__int64)&v11) )
  {
LABEL_3:
    *(_DWORD *)(a2 + 120) = v10;
    *(_QWORD *)(a2 + 112) = v3;
  }
  return v11;
}
