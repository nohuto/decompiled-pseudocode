/*
 * XREFs of LocalGetAceCondition @ 0x140A6E49C
 * Callers:
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A6CA38 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 */

__int64 __fastcall LocalGetAceCondition(
        unsigned __int8 *a1,
        char *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v9; // esi
  unsigned int v14; // ebp
  int v15; // ecx
  unsigned int v16; // edi
  unsigned int *v17; // rcx
  int v18; // r9d
  unsigned int StringForRelativeAttribute; // eax
  __int64 v20; // rax
  int v22; // ebx

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( (_BYTE)v9 == 9 || (unsigned __int8)v9 <= 0x12u && (v15 = 271360, _bittest(&v15, v9)) )
  {
LABEL_6:
    v16 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
    goto LABEL_7;
  }
  if ( (_BYTE)v9 != 11 )
  {
    if ( (_BYTE)v9 != 21 )
      return v14;
    goto LABEL_6;
  }
  v22 = *((_DWORD *)a1 + 2);
  v16 = *((unsigned __int16 *)a1 + 1) - 16 * (v22 & 1) - 8 * (v22 & 2) - RtlLengthSid(a2) - 12;
LABEL_7:
  *a4 = v16;
  if ( v16 )
  {
    v17 = (unsigned int *)&a2[RtlLengthSid(a2)];
    if ( (_BYTE)v9 == 18 )
      StringForRelativeAttribute = LocalGetStringForRelativeAttribute(v17, v16, a6, a7, a8, a9, (__int64)a3);
    else
      StringForRelativeAttribute = LocalpGetStringForCondition((_DWORD)v17, v16, (_DWORD)a3, v18, a6, a7, a8, a9);
    v14 = StringForRelativeAttribute;
    if ( !StringForRelativeAttribute )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_WORD *)(*a3 + 2 * v20) );
      *a5 += 2 * (v20 + 1);
    }
  }
  return v14;
}
