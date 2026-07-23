/*
 * XREFs of CmpAppendSection @ 0x140CBDD20
 * Callers:
 *     CmpParseInfBuffer @ 0x140CBE2F8 (CmpParseInfBuffer.c)
 * Callees:
 *     _stricmp @ 0x1405386E0 (_stricmp.c)
 *     _strnicmp @ 0x140538790 (_strnicmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CmpAppendSection(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  const char *v7; // rcx
  _QWORD *v8; // rax
  ULONG_PTR Pool2; // rax
  char result; // al

  if ( a1 && a2 )
  {
    v6 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = (const char *)v6[1];
        if ( v7 && !stricmp(v7, (const char *)a2) )
          break;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v8 = (_QWORD *)v6[2];
        if ( v8 )
        {
          while ( *v8 )
            v8 = (_QWORD *)*v8;
        }
        *(_QWORD *)(a1 + 16) = v8;
        if ( a3 )
          ExFreePoolWithTag((PVOID)a2, 0);
LABEL_18:
        *(_QWORD *)(a1 + 8) = v6;
        result = 1;
        *(_QWORD *)(a1 + 24) = 0LL;
        return result;
      }
    }
    Pool2 = ExAllocatePool2(256LL, 0x20uLL, 0x69704D43u);
    v6 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 8) = a2;
      *(_BYTE *)(Pool2 + 24) = a3;
      *(_QWORD *)Pool2 = *(_QWORD *)a1;
      *(_QWORD *)a1 = Pool2;
      if ( !strnicmp((const char *)a2, "Strings", 7uLL) && (*(_BYTE *)(a2 + 7) == 0) > *(int *)(a1 + 32) )
        *(_QWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 16) = 0LL;
      goto LABEL_18;
    }
  }
  return 0;
}
