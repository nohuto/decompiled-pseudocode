/*
 * XREFs of ExpInitLicensing @ 0x14083EB70
 * Callers:
 *     sub_1406D1320 @ 0x1406D1320 (sub_1406D1320.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitLicensing(char *a1)
{
  __int64 *v1; // rax
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 872);
  if ( a1 == (char *)&PspHostSiloGlobals )
  {
    qword_141049CC0 = 81920LL;
    qword_140FD8E90 = (__int64)ExpHostBootLicensingData;
    *v1 = (__int64)&qword_140FD8E90;
  }
  result = *v1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 46988) = 0;
  *(_DWORD *)(result + 47032) = -1;
  *(_QWORD *)(result + 46840) = 0LL;
  *(_QWORD *)(result + 47024) = 0LL;
  return result;
}
