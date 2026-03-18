/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x140337924
 * Callers:
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1400D3F28 (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  UMPDOBJ *v4; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 && *((_BYTE *)v4 + 456) )
  {
    UMPDOBJ::vServer(v2, (_QWORD *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 1LL;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v4);
    return 0LL;
  }
}
