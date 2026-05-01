/*
 * XREFs of ?GetFindData@CFileSysBindData@@UEAAJPEAU_WIN32_FIND_DATAW@@@Z @ 0x180669860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::GetFindData(CFileSysBindData *this, struct _WIN32_FIND_DATAW *a2)
{
  __int64 result; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm1

  result = 4LL;
  v3 = (_OWORD *)((char *)this + 40);
  do
  {
    *(_OWORD *)&a2->dwFileAttributes = *v3;
    *(_OWORD *)&a2->ftLastAccessTime.dwHighDateTime = v3[1];
    *(_OWORD *)&a2->nFileSizeLow = v3[2];
    *(_OWORD *)&a2->cFileName[2] = v3[3];
    *(_OWORD *)&a2->cFileName[10] = v3[4];
    *(_OWORD *)&a2->cFileName[18] = v3[5];
    *(_OWORD *)&a2->cFileName[26] = v3[6];
    a2 = (struct _WIN32_FIND_DATAW *)((char *)a2 + 128);
    v4 = v3[7];
    v3 += 8;
    *(_OWORD *)&a2[-1].cAlternateFileName[6] = v4;
    --result;
  }
  while ( result );
  *(_OWORD *)&a2->dwFileAttributes = *v3;
  *(_OWORD *)&a2->ftLastAccessTime.dwHighDateTime = v3[1];
  *(_OWORD *)&a2->nFileSizeLow = v3[2];
  *(_OWORD *)&a2->cFileName[2] = v3[3];
  *(_OWORD *)&a2->cFileName[10] = v3[4];
  return result;
}
