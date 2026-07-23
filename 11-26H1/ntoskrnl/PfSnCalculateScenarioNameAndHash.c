/*
 * XREFs of PfSnCalculateScenarioNameAndHash @ 0x1409D30B0
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PfSnScanCommandLine @ 0x1409D320C (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x1409D33F0 (PfSnIsHostingApplication.c)
 *     PfSnCheckModernApp @ 0x1409D34B4 (PfSnCheckModernApp.c)
 */

__int64 __fastcall PfSnCalculateScenarioNameAndHash(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9,
        _DWORD *a10,
        __int64 a11,
        unsigned __int16 *a12)
{
  unsigned __int16 *v12; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  _WORD *v19; // rax
  const void *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int8 IsHostingApplication; // al
  __int64 result; // rax
  _WORD *v25; // rbx
  __int64 v26; // rsi
  int v27; // [rsp+40h] [rbp+8h] BYREF

  v12 = a12;
  v27 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  v16 = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  v17 = *((_QWORD *)v12 + 1);
  v18 = *v12 >> 1;
  v19 = (_WORD *)(v17 - 2 + 2 * v18);
  if ( (unsigned __int64)v19 < v17 )
    return 3221225485LL;
  do
  {
    if ( *v19 == 92 )
      break;
    v16 = (unsigned int)(v16 + 1);
    --v19;
  }
  while ( (unsigned __int64)v19 >= v17 );
  if ( !(_DWORD)v16 )
    return 3221225485LL;
  v20 = (const void *)(v17 + 2LL * (unsigned int)(v18 - v16));
  if ( !v20 )
    return 3221225485LL;
  if ( (unsigned int)v16 >= 0x1D )
    v16 = 29LL;
  v21 = 2 * v16;
  memmove(a2, v20, 2 * v16);
  v22 = a11;
  *(_WORD *)((char *)a2 + v21) = 0;
  *a4 = *(_DWORD *)(v22 + 900);
  IsHostingApplication = PfSnIsHostingApplication((wchar_t *)a2);
  result = PfSnScanCommandLine(a6, a5, IsHostingApplication);
  if ( (int)result >= 0 )
  {
    v25 = a8;
    v26 = a9;
    result = PfSnCheckModernApp(&v27, a7, a9, a8);
    if ( (int)result >= 0 )
    {
      if ( v27 )
      {
        *a10 |= 8u;
        *(_QWORD *)(a3 + 8) = v26;
        *(_WORD *)a3 = *v25;
        *(_WORD *)(a3 + 2) = *v25;
      }
      else
      {
        *(_OWORD *)a3 = *(_OWORD *)v12;
      }
      return 0LL;
    }
  }
  return result;
}
