/*
 * XREFs of GreSetBrushOrg @ 0x140055A78
 * Callers:
 *     xxxPaintRect @ 0x14005426C (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x140055A10 (NtGdiSetBrushOrg.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1402EAB2C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402EAC74 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  _QWORD v15[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  v7 = v15[0];
  if ( v15[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v15[0] + 124LL);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 348LL) = a3;
    v9 = (_DWORD *)v15[0];
    v10 = *(_DWORD *)(v15[0] + 40LL);
    *(_DWORD *)(v15[0] + 124LL) = a2;
    v9[32] = a3;
    v11 = v10 & 1;
    if ( v11 )
      v12 = v9[256];
    else
      v12 = v9[254];
    v9[298] = a2 + v12;
    if ( v11 )
      v13 = v9[257];
    else
      v13 = v9[255];
    v9[299] = a3 + v13;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  return v8;
}
