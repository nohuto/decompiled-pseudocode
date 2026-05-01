/*
 * XREFs of ?SetFindData@CFileSysBindData@@UEAAJPEBU_WIN32_FIND_DATAW@@@Z @ 0x18066FE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::SetFindData(CFileSysBindData *this, const struct _WIN32_FIND_DATAW *a2)
{
  __int64 result; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm1

  result = 4LL;
  v3 = (_OWORD *)((char *)this + 40);
  do
  {
    *v3 = *(_OWORD *)&a2->dwFileAttributes;
    v3[1] = *(_OWORD *)&a2->ftLastAccessTime.dwHighDateTime;
    v3[2] = *(_OWORD *)&a2->nFileSizeLow;
    v3[3] = *(_OWORD *)&a2->cFileName[2];
    v3[4] = *(_OWORD *)&a2->cFileName[10];
    v3[5] = *(_OWORD *)&a2->cFileName[18];
    v3[6] = *(_OWORD *)&a2->cFileName[26];
    v3 += 8;
    v4 = *(_OWORD *)&a2->cFileName[34];
    a2 = (const struct _WIN32_FIND_DATAW *)((char *)a2 + 128);
    *(v3 - 1) = v4;
    --result;
  }
  while ( result );
  *v3 = *(_OWORD *)&a2->dwFileAttributes;
  v3[1] = *(_OWORD *)&a2->ftLastAccessTime.dwHighDateTime;
  v3[2] = *(_OWORD *)&a2->nFileSizeLow;
  v3[3] = *(_OWORD *)&a2->cFileName[2];
  v3[4] = *(_OWORD *)&a2->cFileName[10];
  return result;
}
