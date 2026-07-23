/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x1403C3170
 * Callers:
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x1403C15DC (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  int v4; // r9d
  _QWORD *v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  _DWORD *result; // rax
  int v10; // r9d
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx

  v2 = 0;
  v4 = 0;
  v6 = (_QWORD *)a2;
  v7 = 128LL;
  do
  {
    v8 = v4 + 1;
    v12 = *v6++ == 0LL;
    if ( v12 )
      v8 = v4;
    v4 = v8;
    --v7;
  }
  while ( v7 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v11 = v6[1] - 16LL;
    do
    {
      v12 = *(_WORD *)v11 == 765;
      v13 = v4 + 1;
      v14 = *(_QWORD *)(v11 + 24);
      if ( !v12 )
        v13 = v4;
      v4 = v13;
      if ( !v12 )
        ++v2;
      v11 = v14 - 16;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0);
  *result = v10;
  return result;
}
