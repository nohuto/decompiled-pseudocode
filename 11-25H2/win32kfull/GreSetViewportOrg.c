/*
 * XREFs of GreSetViewportOrg @ 0x14003F55C
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 GreSetViewportOrg(HDC a1, int a2, int a3, ...)
{
  DC *v5; // rcx
  __int64 v6; // r9
  int v7; // edi
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+28h] [rbp-39h] BYREF
  DC *v11[14]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+E0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+7Fh]
  va_list va1; // [rsp+E8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  v5 = v11[0];
  if ( !v11[0] )
    goto LABEL_8;
  v6 = *((_QWORD *)v11[0] + 122);
  v7 = -a2;
  v8 = 1;
  if ( (*(_BYTE *)(v6 + 108) & 1) == 0 )
    v7 = a2;
  if ( (unsigned int)(v7 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x100) != 0 )
    {
      DC::QuickInitXform(v11[0], (__int64 *)va, 1026LL);
      if ( v12 )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)va,
          (const struct _POINTFIX *)(*((_QWORD *)v11[0] + 122) + 8LL),
          (struct _POINTL *)(*((_QWORD *)v11[0] + 122) + 216LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 152LL) &= ~0x100u;
      v5 = v11[0];
    }
    *(_DWORD *)(*((_QWORD *)v5 + 122) + 152LL) |= 0x200u;
    DC::QuickInitXform(v11[0], v10, 2147484164LL);
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 340LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 324LL) = v7;
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 328LL) = a3;
    DC::InitXform(v11[0], 0x402u);
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v8;
}
