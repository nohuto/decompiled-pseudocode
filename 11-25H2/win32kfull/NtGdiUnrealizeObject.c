/*
 * XREFs of NtGdiUnrealizeObject @ 0x14033A980
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401C612C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  unsigned int v1; // edi
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v9; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a1);
  v3 = v8;
  if ( v8 )
  {
    v4 = Gre::Base::Globals(v2);
    SEMOBJ<13>::SEMOBJ<13>(&v9, v4);
    v5 = *(_DWORD **)(v3 + 72);
    if ( v5 )
      *v5 = 0;
    v6 = *(_DWORD **)(v3 + 80);
    if ( v6 )
      *v6 = 0;
    v1 = 1;
    SEMOBJ<13>::vUnlock(&v9);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v1;
}
