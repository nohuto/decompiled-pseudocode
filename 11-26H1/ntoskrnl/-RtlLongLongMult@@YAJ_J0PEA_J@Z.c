/*
 * XREFs of ?RtlLongLongMult@@YAJ_J0PEA_J@Z @ 0x140721B4C
 * Callers:
 *     I_MinAsn1MultiplyAndDivide @ 0x1408AA530 (I_MinAsn1MultiplyAndDivide.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLongLongMult(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int128 v5; // rax

  v3 = 0;
  v5 = a1 * (__int128)a2;
  v4 = v5;
  *(_QWORD *)&v5 = -1LL;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)&v5 + 1) )
      goto LABEL_3;
LABEL_6:
    v3 = -1073741675;
    goto LABEL_4;
  }
  if ( *((_QWORD *)&v5 + 1) != -1LL )
    goto LABEL_6;
LABEL_3:
  *(_QWORD *)&v5 = v4;
LABEL_4:
  *a3 = v5;
  return v3;
}
