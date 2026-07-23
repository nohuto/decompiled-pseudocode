/*
 * XREFs of RtlFindUnicodePrefix @ 0x140A210D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x140A21570 (CompareUnicodeStrings.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlFindUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PCUNICODE_STRING FullName,
        ULONG CaseInsensitiveIndex)
{
  int v3; // eax
  int v4; // r9d
  PUNICODE_PREFIX_TABLE_ENTRY i; // r12
  PCUNICODE_STRING v6; // r8
  _RTL_SPLAY_LINKS *p_Links; // r14
  wchar_t **p_Buffer; // r15
  _UNICODE_PREFIX_TABLE_ENTRY *v9; // r13
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v11; // dx
  PCUNICODE_STRING v12; // r8
  unsigned __int16 *v13; // r11
  __int64 v14; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned __int16 *v18; // r11
  int v19; // r10d
  wchar_t *v20; // rbx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  _RTL_SPLAY_LINKS *NextPrefixTree; // rbx
  PRTL_SPLAY_LINKS v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *v28; // rbx
  __int64 v29; // r9
  wchar_t *Buffer; // r8
  bool v31; // zf
  int v32; // edx
  PUNICODE_PREFIX_TABLE v33; // [rsp+70h] [rbp+8h]
  struct _LIST_ENTRY *v36; // [rsp+88h] [rbp+20h]

  v33 = PrefixTable;
  v3 = 1;
  v4 = FullName->Length >> 1;
  if ( v4 )
  {
    v29 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v29 )
    {
      Buffer = FullName->Buffer;
      do
      {
        v31 = *Buffer == 92;
        v32 = v3 + 1;
        ++Buffer;
        if ( !v31 )
          v32 = v3;
        v3 = v32;
        --v29;
      }
      while ( v29 );
    }
  }
  for ( i = PrefixTable->NextPrefixTree; i->NameLength > (__int16)v3; i = i->NextPrefixTree )
    v33 = (PUNICODE_PREFIX_TABLE)i;
  v6 = FullName;
  while ( 2 )
  {
    if ( i->NameLength <= 0 )
      return 0LL;
    p_Links = &i->Links;
    p_Buffer = &v6->Buffer;
LABEL_7:
    if ( !p_Links )
      goto LABEL_43;
    v9 = (_UNICODE_PREFIX_TABLE_ENTRY *)&p_Links[-1];
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v14 = *v13 >> 1;
    Flink = CurrentServerSiloGlobals[75].Flink;
    v16 = v12->Length >> 1;
    v36 = Flink;
    if ( (_DWORD)v14 != 1 || **((_WORD **)v13 + 1) != 92 )
    {
LABEL_9:
      v17 = *v13 >> 1;
      if ( (unsigned int)v14 < v16 )
        goto LABEL_10;
      goto LABEL_35;
    }
    if ( v16 > 1 )
    {
      if ( **p_Buffer == 92 )
        goto LABEL_16;
      goto LABEL_9;
    }
LABEL_35:
    v17 = v12->Length >> 1;
LABEL_10:
    v18 = (unsigned __int16 *)*((_QWORD *)v13 + 1);
    v19 = 0;
    v20 = *p_Buffer;
    if ( v17 )
    {
      while ( 1 )
      {
        v21 = *v18++;
        v22 = *v20++;
        if ( (_WORD)v21 != (_WORD)v22 )
        {
          if ( (unsigned int)v21 >= 0x61 )
          {
            if ( (unsigned int)v21 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v21 >= v11 )
              {
                v26 = *((unsigned __int16 *)&Flink->Flink + (v21 >> 8)) + (unsigned int)((unsigned __int8)v21 >> 4);
                Flink = v36;
                v11 = 192;
                LOWORD(v21) = *((_WORD *)&v36->Flink + (v21 & 0xF) + *((unsigned __int16 *)&v36->Flink + v26)) + v21;
              }
            }
            else
            {
              LOWORD(v21) = v21 - 32;
            }
          }
          if ( (unsigned int)v22 >= 0x61 )
          {
            if ( (unsigned int)v22 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v22 >= v11 )
              {
                v27 = *((unsigned __int16 *)&Flink->Flink + (v22 >> 8)) + (unsigned int)((unsigned __int8)v22 >> 4);
                Flink = v36;
                LOWORD(v22) = *((_WORD *)&v36->Flink + (v22 & 0xF) + *((unsigned __int16 *)&v36->Flink + v27)) + v22;
              }
            }
            else
            {
              LOWORD(v22) = v22 - 32;
            }
          }
          if ( (_WORD)v21 != (_WORD)v22 )
          {
            if ( (_WORD)v21 == 92 )
              goto LABEL_33;
            if ( (_WORD)v22 == 92 )
              goto LABEL_31;
            if ( (unsigned __int16)v21 < (unsigned __int16)v22 )
              goto LABEL_33;
            if ( (unsigned __int16)v21 <= (unsigned __int16)v22 )
            {
LABEL_13:
              v12 = FullName;
              break;
            }
LABEL_31:
            p_Links = p_Links->LeftChild;
LABEL_34:
            v6 = FullName;
            goto LABEL_7;
          }
          v11 = 192;
        }
        if ( ++v19 >= v17 )
          goto LABEL_13;
      }
    }
    if ( (unsigned int)v14 < v16 )
    {
      if ( v12->Buffer[v14] != 92 )
      {
LABEL_33:
        p_Links = p_Links->RightChild;
        goto LABEL_34;
      }
    }
    else if ( (unsigned int)v14 > v16 )
    {
      goto LABEL_31;
    }
LABEL_16:
    if ( CaseInsensitiveIndex )
    {
      v28 = (_UNICODE_PREFIX_TABLE_ENTRY *)&p_Links[-1];
      do
      {
        if ( (unsigned int)CompareUnicodeStrings(v28->Prefix, FullName, CaseInsensitiveIndex) - 1 <= 1 )
          return v28;
        v28 = v28->CaseMatch;
      }
      while ( v28 != v9 );
      v6 = FullName;
LABEL_43:
      v33 = (PUNICODE_PREFIX_TABLE)i;
      i = i->NextPrefixTree;
      continue;
    }
    break;
  }
  if ( v9->NodeTypeCode == 2050 )
  {
    NextPrefixTree = (_RTL_SPLAY_LINKS *)i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 2050;
    v24 = RtlSplay(p_Links);
    LOWORD(v24[-1].Parent) = 2049;
    v9 = (_UNICODE_PREFIX_TABLE_ENTRY *)&v24[-1];
    v33->NextPrefixTree = (PUNICODE_PREFIX_TABLE_ENTRY)&v24[-1];
    v24[-1].LeftChild = NextPrefixTree;
  }
  return v9;
}
