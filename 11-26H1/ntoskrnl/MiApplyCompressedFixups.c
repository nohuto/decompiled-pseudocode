/*
 * XREFs of MiApplyCompressedFixups @ 0x1409A0100
 * Callers:
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiApplyCompressedFixups(
        ULONG_PTR BugCheckParameter2,
        _QWORD *BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // r9
  unsigned __int16 v7; // si
  char v8; // r10
  unsigned __int8 *BugCheckParameter4; // r8
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 result; // rax

  v6 = BugCheckParameter3;
  v7 = 4;
  v8 = *(_BYTE *)(*(_QWORD *)((*(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32) + 64LL) & 0xF;
  BugCheckParameter4 = (unsigned __int8 *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  while ( 1 )
  {
    v10 = *BugCheckParameter4++;
    if ( (v10 & 0xF0) == 0xF0 )
      break;
    if ( (_BYTE)v10 != 0xEF )
    {
      if ( (unsigned __int8)v10 >= 0xEBu )
      {
        v11 = 239 - v10;
        goto LABEL_7;
      }
      v7 = v10;
      goto LABEL_6;
    }
    v11 = *BugCheckParameter4;
    if ( v11 <= 4 )
      KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    ++BugCheckParameter4;
    do
    {
LABEL_7:
      v6 = (_QWORD *)((char *)v6 + v7);
      if ( v6 >= BugCheckParameter3 + 512 )
        KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      if ( v8 == 10 )
      {
        if ( ((unsigned __int16)v6 & 0xFFFu) <= 0xFF8 )
          *v6 += a4;
      }
      else if ( v8 == 3 && ((unsigned __int16)v6 & 0xFFFu) <= 0xFFC )
      {
        *(_DWORD *)v6 += a4;
      }
      --v11;
    }
    while ( v11 );
  }
  result = *BugCheckParameter4;
  if ( (_BYTE)result )
  {
    v7 = (16 * result) | v10 & 0xFF0F;
    ++BugCheckParameter4;
LABEL_6:
    v11 = 1;
    goto LABEL_7;
  }
  return result;
}
