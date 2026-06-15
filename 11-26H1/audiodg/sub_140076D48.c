/*
 * XREFs of sub_140076D48 @ 0x140076D48
 * Callers:
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_140078260 @ 0x140078260 (sub_140078260.c)
 *     sub_14007D9A8 @ 0x14007D9A8 (sub_14007D9A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140076D48(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // r14
  int v9; // eax
  int MatchingRestrictedErrorInfo; // eax
  bool v11; // sf
  _QWORD *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v13 = 0LL;
  sub_140078260(&v13);
  v6 = (__int64)v13;
  v7 = v13[4];
  v8 = (_QWORD *)v13[2];
  if ( v8 == (_QWORD *)v13[3] )
    goto LABEL_19;
  while ( 1 )
  {
    v9 = sub_1400B6010(*v8);
    v5 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError((unsigned int)v9, 0LL, 0LL);
      sub_14007D9A8(a3);
      goto LABEL_11;
    }
    if ( v9 < 0 )
      break;
LABEL_12:
    v7 += 8LL;
    if ( ++v8 == *(_QWORD **)(v6 + 24) )
      goto LABEL_19;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  v13 = 0LL;
  sub_1400125D4((__int64 *)&v13);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v13);
  v11 = MatchingRestrictedErrorInfo < 0;
  if ( MatchingRestrictedErrorInfo >= 0 )
    v11 = (int)RoReportFailedDelegate(*v8, v13) < 0;
  if ( v11 )
    v4 = v5;
  v5 = v4;
  sub_1400125D4((__int64 *)&v13);
LABEL_19:
  sub_140017850(v6);
  return v5;
}
