/*
 * XREFs of ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x14030F980
 * Callers:
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x140309E40 (FONTOBJ_pjOpenTypeTablePointer.c)
 * Callees:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B10A0 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x14030F828 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 */

char *__fastcall RFONTOBJ::pjTable(RFONTOBJ *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v8; // r8
  char *result; // rax
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  char *v13; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v13 = 0LL;
  v12 = 0;
  v8 = *(_QWORD *)(v3 + 128);
  result = 0LL;
  if ( !v8 || (v10 = *(_QWORD *)(v8 + 88)) == 0 )
  {
LABEL_6:
    if ( result )
      goto LABEL_8;
    goto LABEL_7;
  }
  v11[0] = v8;
  if ( (unsigned int)PFFOBJ::QueryTrueTypeTable((PFFOBJ *)v11, v10, 1u, a2, 0, 0, 0LL, (unsigned __int8 **)&v13, &v12) != -1 )
  {
    result = RFONTOBJ::pchTranslate(this, v13);
    v4 = v12;
    goto LABEL_6;
  }
  result = 0LL;
LABEL_7:
  v4 = 0;
LABEL_8:
  if ( a3 )
    *a3 = v4;
  return result;
}
