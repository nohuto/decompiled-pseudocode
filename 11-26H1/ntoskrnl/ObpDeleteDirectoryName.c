/*
 * XREFs of ObpDeleteDirectoryName @ 0x1409DF2E8
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409DEF90 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

POBJECT_TYPE __fastcall ObpDeleteDirectoryName(char *Object, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  POBJECT_TYPE result; // rax
  void *v7; // rcx

  v5 = 0LL;
LABEL_2:
  v5 = ObpMarkDirectoryObjectsTemporary((_QWORD **)Object, v5, a3, a4);
  while ( 1 )
  {
    result = (POBJECT_TYPE)ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
    if ( !v5 )
      return result;
    Object = (char *)v5[1];
    v7 = v5;
    v5 = (_QWORD *)*v5;
    ExFreePoolWithTag(v7, 0);
    result = ObpDirectoryObjectType;
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      if ( Object )
        goto LABEL_2;
      return result;
    }
  }
}
