/*
 * XREFs of LdrpInsertDataTableEntry @ 0x180117D60
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180079960 (LdrpHashUnicodeString.c)
 */

__int64 __fastcall LdrpInsertDataTableEntry(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  char *v4; // rcx
  char *v5; // rdx
  char **v6; // rax
  bool v7; // zf
  __int64 *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  result = *(unsigned int *)(a1 + 104);
  if ( (result & 0x40) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 264);
    if ( !v3 )
    {
      v3 = LdrpHashUnicodeString((unsigned __int16 *)(a1 + 88));
      *(_DWORD *)(a1 + 264) = v3;
    }
    v4 = (char *)(a1 + 112);
    v5 = (char *)&LdrpHashTable + 16 * (v3 & 0x1F);
    v6 = (char **)*((_QWORD *)v5 + 1);
    if ( *v6 != v5 )
      goto LABEL_13;
    v7 = a1 == LdrpImageEntry;
    *(_QWORD *)(a1 + 120) = v6;
    *(_QWORD *)v4 = v5;
    *v6 = v4;
    *((_QWORD *)v5 + 1) = v4;
    if ( !v7 )
    {
      v8 = (__int64 *)qword_1801CA8D8;
      if ( *(__int64 **)qword_1801CA8D8 == &qword_1801CA8D0 )
      {
        *(_QWORD *)a1 = &qword_1801CA8D0;
        v9 = (_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v8;
        *v8 = a1;
        v10 = (_QWORD *)qword_1801CA8E8;
        qword_1801CA8D8 = a1;
        if ( *(__int64 **)qword_1801CA8E8 == &qword_1801CA8E0 )
        {
          *v9 = &qword_1801CA8E0;
          *(_QWORD *)(a1 + 24) = v10;
          *v10 = v9;
          qword_1801CA8E8 = a1 + 16;
          result = *(_DWORD *)(a1 + 104) | 0x40u;
          *(_DWORD *)(a1 + 104) = result;
          return result;
        }
      }
LABEL_13:
      __fastfail(3u);
    }
    v11 = qword_1801CA8D0;
    if ( *(__int64 **)(qword_1801CA8D0 + 8) != &qword_1801CA8D0 )
      goto LABEL_13;
    *(_QWORD *)a1 = qword_1801CA8D0;
    *(_QWORD *)(a1 + 8) = &qword_1801CA8D0;
    v12 = (_QWORD *)(a1 + 16);
    *(_QWORD *)(v11 + 8) = a1;
    v13 = qword_1801CA8E0;
    qword_1801CA8D0 = a1;
    if ( *(__int64 **)(qword_1801CA8E0 + 8) != &qword_1801CA8E0 )
      goto LABEL_13;
    *v12 = qword_1801CA8E0;
    *(_QWORD *)(a1 + 24) = &qword_1801CA8E0;
    *(_QWORD *)(v13 + 8) = v12;
    qword_1801CA8E0 = a1 + 16;
    result = *(_DWORD *)(a1 + 104) | 0x40u;
    *(_DWORD *)(a1 + 104) = result;
  }
  return result;
}
