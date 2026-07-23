/*
 * XREFs of MiIoSpaceGetBounds @ 0x140315778
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiSetIoPfnNodeCellsActive @ 0x140314080 (MiSetIoPfnNodeCellsActive.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     MiIoRangeIsConstant @ 0x1404C2394 (MiIoRangeIsConstant.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceGetBounds(__int64 a1, unsigned __int64 a2)
{
  __int64 *v3; // rcx
  unsigned __int64 v4; // rcx
  _QWORD *result; // rax
  unsigned __int64 v6; // rcx
  int v7; // r9d
  unsigned __int64 v8; // rax

  if ( *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags
    && a2 >> 18 < 0x400000
    && _bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, (a2 >> 18) & 0x3FFFFF) )
  {
    v7 = 1;
    *(_QWORD *)a1 = a2 & 0xFFFFFFFFFFFC0000uLL;
    v8 = a2 + 0x40000;
    if ( a2 != ((a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
      v8 = (a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    result = (_QWORD *)(v8 - 1);
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    v3 = (__int64 *)xmmword_140E36040;
    while ( v3 )
    {
      if ( a2 < v3[3] )
      {
        v3 = (__int64 *)*v3;
      }
      else
      {
        if ( a2 <= v3[4] )
          break;
        v3 = (__int64 *)v3[1];
      }
    }
    if ( v3 )
    {
      *(_QWORD *)a1 = v3[3];
      result = (_QWORD *)v3[4];
      *(_QWORD *)(a1 + 8) = result;
      v7 = *((_DWORD *)v3 + 10);
      *(_DWORD *)(a1 + 20) = 2;
      goto LABEL_19;
    }
    v4 = a2 + 0x40000;
    if ( a2 != ((a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
      v4 = (a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    result = (_QWORD *)xmmword_140E36040;
    v6 = v4 - 1;
    while ( result )
    {
      if ( v6 < result[3] )
      {
        result = (_QWORD *)*result;
      }
      else
      {
        if ( a2 <= result[4] )
          break;
        result = (_QWORD *)result[1];
      }
    }
    if ( result )
      v6 = result[3] - 1LL;
    *(_QWORD *)(a1 + 8) = v6;
    v7 = 3;
    *(_QWORD *)a1 = a2;
  }
  *(_DWORD *)(a1 + 20) = v7;
LABEL_19:
  *(_DWORD *)(a1 + 16) = v7;
  return result;
}
