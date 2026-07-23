/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x14044DBF0
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x14044DBC0 (SeComputeAutoInheritByObjectType.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x140A52040 (ObpAssignSecurity.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *Index)
{
  _DWORD *v5; // rdi
  char v7; // r8
  int v8; // ebx
  int v9; // r15d
  int v12; // eax
  __int64 result; // rax
  __int16 v14; // cx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // r9d
  _BYTE *v20; // rcx
  __int16 v21; // ax
  ACL *v22; // rcx
  __int64 v23; // rax
  _BYTE *AceByType; // rax

  v5 = Index;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  v12 = *(_DWORD *)(a1 + 216);
  if ( v12 )
    v8 = ((*(_DWORD *)(a1 + 216) & 6) << 8) | ((*(_DWORD *)(a1 + 216) & 1) << 8);
  if ( (*(_BYTE *)(a1 + 67) & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 220);
    v7 = 1;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v14 = *(_WORD *)(a2 + 2);
      if ( (v14 & 0x10) != 0 )
      {
        if ( v14 >= 0 )
        {
          v16 = *(_QWORD *)(a2 + 24);
LABEL_17:
          if ( v16 )
          {
            v17 = v16 + 8;
            v18 = 0;
            v19 = *(unsigned __int16 *)(v16 + 4);
            while ( v18 < v19 )
            {
              if ( *(_BYTE *)v17 == 17 )
              {
                *(_DWORD *)(v17 + 4) |= v12;
                v8 = 0;
                goto LABEL_10;
              }
              ++v18;
              v17 += *(unsigned __int16 *)(v17 + 2);
            }
          }
          goto LABEL_10;
        }
        v15 = *(unsigned int *)(a2 + 12);
        if ( (_DWORD)v15 )
        {
          v16 = a2 + v15;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_10:
  if ( v7 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v21 = *(_WORD *)(a2 + 2);
        if ( (v21 & 0x10) != 0 )
        {
          if ( v21 >= 0 )
          {
            v22 = *(ACL **)(a2 + 24);
          }
          else
          {
            v23 = *(unsigned int *)(a2 + 12);
            v22 = (_DWORD)v23 ? (ACL *)(a2 + v23) : 0LL;
          }
        }
        else
        {
          v22 = 0LL;
        }
        AceByType = RtlFindAceByType(v22, 0x11u, (PULONG)&Index);
        if ( AceByType )
        {
          if ( (AceByType[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !AceByType )
          goto LABEL_46;
      }
      *((_DWORD *)AceByType + 1) &= v9;
    }
    else
    {
LABEL_46:
      if ( v5 )
      {
        v5[1] = v9;
        v8 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    v20 = (_BYTE *)(a2 + 2);
    if ( (!a2 || (*v20 & 4) == 0) && _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
      v8 |= 1u;
    if ( (!a2 || (*v20 & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v8 |= 2u;
  }
  result = 0LL;
  *a4 = v8;
  return result;
}
