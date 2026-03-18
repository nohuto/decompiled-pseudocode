/*
 * XREFs of ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x140173F20
 * Callers:
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x140173DE0 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     vLinkEudcPFEsWorker @ 0x140324FF4 (vLinkEudcPFEsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::bCheckFamilyName(PFEOBJ *this, const unsigned __int16 *a2, int a3, int *a4)
{
  const wchar_t *v8; // rbx
  BOOL v9; // edx
  __int64 v10; // rax
  bool v11; // zf
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax

  if ( a4 )
    *a4 = 0;
  v8 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL));
  if ( a3 && *v8 == 64 )
    ++v8;
  if ( !_wcsicmp(a2, v8) )
    return 1LL;
  v9 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL) & 0x8000000) == 0 )
    return 0LL;
  v10 = -1LL;
  do
    v11 = v8[++v10] == 0;
  while ( !v11 );
  v12 = &v8[v10 + 1];
  do
  {
    if ( !*v12 )
      break;
    if ( a3 && *v12 == 64 )
      ++v12;
    v13 = _wcsicmp(a2, v12);
    v14 = -1LL;
    v9 = v13 == 0;
    do
      v11 = v12[++v14] == 0;
    while ( !v11 );
    v12 += v14 + 1;
  }
  while ( v13 );
  result = v9;
  if ( a4 )
    *a4 = v9;
  return result;
}
