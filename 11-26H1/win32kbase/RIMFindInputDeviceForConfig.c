/*
 * XREFs of RIMFindInputDeviceForConfig @ 0x14017EAAC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1400F0828 (RIMIsParentCommon.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

__int64 __fastcall RIMFindInputDeviceForConfig(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, __int64 *a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 424);
  *a4 = 0;
  *a5 = 0;
  while ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 168) & 0x400) == 0 && (*(_DWORD *)(v7 + 184) & 0x80u) != 0 )
    {
      v11 = *(_QWORD *)(v7 + 456);
      if ( *(_DWORD *)(v11 + 24) == 7 || (unsigned int)RIMIsTouchPointerDevice(v11) )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a3,
                             v7,
                             a1,
                             *(_WORD *)(*(_QWORD *)(v7 + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v7 + 440) + 112LL)) )
        {
          v12 = *(_QWORD *)(v7 + 456);
          v6 = 1;
          *a4 = -__CFSHR__(*(_DWORD *)(v12 + 368), 13);
          if ( a6 )
            *a6 = v7;
          if ( (*(_DWORD *)(v7 + 184) & 0x80u) != 0 && (unsigned int)RIMIsTouchPointerDevice(v12) )
            *a5 = 1;
          return v6;
        }
      }
    }
    v7 = *(_QWORD *)(v7 + 40);
  }
  return v6;
}
