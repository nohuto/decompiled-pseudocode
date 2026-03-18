/*
 * XREFs of NtGdiPtVisible @ 0x1401F0880
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  struct REGION *v10; // [rsp+28h] [rbp-D8h] BYREF
  DC *v11[14]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v13; // [rsp+168h] [rbp+68h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  v5 = 0;
  if ( !v11[0] )
  {
    EngSetLastError(6u);
    v6 = -1;
LABEL_7:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return v6;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12);
  v6 = 1;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v11, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
    goto LABEL_7;
  }
  v10 = XDCOBJ::prgnEffRao(v11);
  v13.x = a2;
  v13.y = a3;
  DC::QuickInitXform(v11[0], &v9, 2147484164LL);
  if ( (*(_BYTE *)(v9 + 32) & 0x43) != 0x43 )
    bCvtPts1(v9, (__int64)&v13, 1LL);
  v7 = *((_DWORD *)v11[0] + 10) & 1;
  v13.x += *((_DWORD *)v11[0] + 2 * v7 + 254);
  v13.y += *((_DWORD *)v11[0] + 2 * v7 + 255);
  LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v10, &v13) == 2;
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v5;
}
