/*
 * XREFs of MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140876E0C
 * Callers:
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall MiInsertPreviouslyRegisteredHotPatchRecord(__int64 a1)
{
  _QWORD *v1; // rsi
  BOOL v2; // ebx
  unsigned __int64 v3; // rdi
  int v5; // eax
  _QWORD **v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *i; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v1 = (_QWORD *)*((_QWORD *)&xmmword_140E366C0 + 1);
  v2 = 0;
  v3 = 0LL;
  while ( v1 )
  {
    v5 = MiCompareHotPatchNodes(a1, (__int64)v1);
    if ( v5 < 0 )
      goto LABEL_6;
    if ( v5 <= 0 )
    {
      v3 = (unsigned __int64)v1;
LABEL_6:
      v1 = (_QWORD *)*v1;
    }
    else
    {
      v1 = (_QWORD *)v1[1];
    }
  }
  while ( v3 && !(unsigned int)MiCompareHotPatchNodes(a1, v3) )
  {
    if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(v3 + 32)
      && RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(v3 + 40), 0) )
    {
      return v2;
    }
    v6 = *(_QWORD ***)(v3 + 8);
    v7 = v3;
    if ( v6 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      for ( i = *v6; i; i = (_QWORD *)*i )
        v3 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v3 || *(_QWORD *)v3 == v7 )
          break;
        v7 = v3;
      }
    }
  }
  v9 = (_QWORD *)*((_QWORD *)&xmmword_140E366C0 + 1);
  if ( !*((_QWORD *)&xmmword_140E366C0 + 1) )
    goto LABEL_24;
  while ( 2 )
  {
    if ( (int)MiCompareHotPatchNodes(a1, (__int64)v9) < 0 )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_24;
      goto LABEL_27;
    }
    v10 = (_QWORD *)v9[1];
    if ( v10 )
    {
LABEL_27:
      v9 = v10;
      continue;
    }
    break;
  }
  LOBYTE(v2) = 1;
LABEL_24:
  RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E366C0 + 1, (unsigned __int64)v9, v2, (_QWORD *)a1);
  return 1;
}
