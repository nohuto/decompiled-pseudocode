/*
 * XREFs of ?pwszFamilyNameAlias@PFEOBJ@@QEAAPEAGPEAH@Z @ 0x1401A5878
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x140201E80 (vLinkEudcPFEsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall PFEOBJ::pwszFamilyNameAlias(PFEOBJ *this, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  *a2 = 0;
  v3 = *(_QWORD *)(v2 + 32);
  if ( (*(_DWORD *)(v3 + 48) & 0x8000000) != 0 )
    *a2 = 1;
  return (unsigned __int16 *)(v3 + *(int *)(v3 + 8));
}
