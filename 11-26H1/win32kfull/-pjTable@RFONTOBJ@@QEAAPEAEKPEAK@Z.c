/*
 * XREFs of ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x140328024
 * Callers:
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x140320770 (FONTOBJ_pjOpenTypeTablePointer.c)
 * Callees:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x140327EBC (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 */

char *__fastcall RFONTOBJ::pjTable(RFONTOBJ *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rax
  __int64 v7; // r8
  char *result; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  char *v13; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)this;
  v13 = 0LL;
  v12 = 0;
  v7 = *(_QWORD *)(v3 + 128);
  result = 0LL;
  if ( !v7 )
    goto LABEL_5;
  v9 = *(_QWORD *)(v7 + 88);
  if ( !v9 )
    goto LABEL_5;
  v11[0] = v7;
  if ( (unsigned int)PFFOBJ::QueryTrueTypeTable((PFFOBJ *)v11, v9, 1u, a2, 0, 0, 0LL, (unsigned __int8 **)&v13, &v12) == -1 )
  {
    result = 0LL;
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  result = RFONTOBJ::pchTranslate(this, v13);
  if ( !result )
    goto LABEL_5;
  v10 = v12;
LABEL_6:
  if ( a3 )
    *a3 = v10;
  return result;
}
